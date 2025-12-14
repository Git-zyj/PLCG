/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23730
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
    var_19 += ((/* implicit */signed char) ((short) max((((-2093420217) | (((/* implicit */int) var_0)))), (((/* implicit */int) ((var_10) <= (((/* implicit */long long int) ((/* implicit */int) var_4)))))))));
    /* LoopNest 3 */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 19; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (signed char i_3 = 1; i_3 < 16; i_3 += 2) 
                    {
                        for (long long int i_4 = 1; i_4 < 18; i_4 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */short) ((((/* implicit */_Bool) ((long long int) (unsigned short)25826))) ? (((((/* implicit */_Bool) (unsigned char)141)) ? (arr_6 [i_3 + 1] [i_0]) : (arr_6 [i_3 + 3] [i_0]))) : (((((/* implicit */_Bool) arr_6 [i_3 + 1] [i_0])) ? (arr_6 [i_3 - 1] [i_0]) : (arr_9 [i_4 - 1] [i_4 - 1])))));
                                var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) arr_6 [i_0] [(signed char)6]))));
                                arr_15 [i_4] [i_3 + 3] [i_0] [i_0] [i_0] = (((+(((/* implicit */int) max(((_Bool)0), (arr_13 [i_0] [18LL] [i_0] [i_3] [i_3])))))) * (((((/* implicit */_Bool) -2093420242)) ? (((/* implicit */int) (short)-15105)) : (((/* implicit */int) (short)9691)))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_1] [i_0]);
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (short i_5 = 2; i_5 < 21; i_5 += 1) 
    {
        var_23 = ((/* implicit */long long int) ((short) arr_16 [i_5] [i_5 + 3]));
        var_24 = ((/* implicit */signed char) arr_17 [i_5] [i_5]);
        var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) 402653184)) ? (((var_3) % (((/* implicit */unsigned long long int) arr_16 [i_5 + 2] [i_5 - 1])))) : (((/* implicit */unsigned long long int) (-((-(((/* implicit */int) arr_17 [i_5] [i_5])))))))));
    }
    var_26 = ((/* implicit */unsigned short) var_7);
}
