/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240647
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240647 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240647
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    /* LoopNest 3 */
    for (unsigned char i_0 = 2; i_0 < 14; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 15; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 15; i_3 += 2) 
                    {
                        for (signed char i_4 = 0; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_18 = ((/* implicit */_Bool) max((var_18), (((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (_Bool)1)), (((((/* implicit */_Bool) arr_4 [i_3] [(unsigned short)6] [i_3])) ? (arr_4 [i_3] [i_0] [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))))));
                                var_19 &= ((/* implicit */short) min((((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) (short)12422)) ? (((/* implicit */int) arr_10 [i_0 - 2] [i_3] [i_2] [i_2] [i_0 - 2] [i_0 - 2])) : (((/* implicit */int) var_11)))))), (min((((arr_2 [(_Bool)0] [i_2] [i_2]) & (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)100))))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)60837)))))))));
                                var_20 += ((/* implicit */signed char) (~(min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_5))))), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_0 - 2] [i_4] [i_3] [i_3] [i_3] [i_3]))) : (-1LL)))))));
                            }
                        } 
                    } 
                    arr_11 [i_2] [i_1] |= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(var_16)))) ? (((((/* implicit */int) arr_7 [i_2] [i_2])) / (-1499763433))) : (((/* implicit */int) arr_10 [i_0] [(unsigned char)2] [i_2] [i_1] [i_2] [i_2]))))));
                    var_21 ^= ((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [i_0 - 1] [i_1] [(unsigned short)9])), (min((arr_0 [i_1]), (((/* implicit */long long int) arr_5 [i_2] [i_1] [i_2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 1) 
                    {
                        arr_16 [(signed char)5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((signed char) arr_1 [i_0]));
                        var_22 += ((/* implicit */int) arr_15 [(_Bool)1] [i_1] [i_1]);
                    }
                }
            } 
        } 
    } 
    var_23 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((/* implicit */long long int) (short)32413)), (33285996544LL))))));
    var_24 -= ((/* implicit */unsigned int) var_6);
}
