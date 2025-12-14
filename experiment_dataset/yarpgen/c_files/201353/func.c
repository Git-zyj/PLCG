/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201353
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201353 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201353
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
    var_19 |= ((/* implicit */unsigned int) var_18);
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        var_20 ^= (~(((/* implicit */int) arr_1 [i_0] [i_0])));
        var_21 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4265689118U)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) var_10)))))));
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            for (int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 21; i_4 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */short) var_1);
                                arr_13 [i_0] [i_3] [i_4] = ((/* implicit */long long int) ((4265689118U) | (((/* implicit */unsigned int) (~(((/* implicit */int) arr_2 [i_0])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 1; i_5 < 23; i_5 += 4) 
                    {
                        /* LoopSeq 2 */
                        for (short i_6 = 0; i_6 < 24; i_6 += 3) 
                        {
                            var_24 = ((/* implicit */int) (~(var_9)));
                            var_25 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_17))));
                        }
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_26 = ((/* implicit */unsigned short) max((var_26), (((/* implicit */unsigned short) var_12))));
                            var_27 = ((((/* implicit */int) var_8)) >= (((/* implicit */int) var_3)));
                        }
                        var_28 -= ((/* implicit */unsigned int) ((((((/* implicit */int) var_7)) + (((/* implicit */int) arr_3 [i_5])))) + (((/* implicit */int) (unsigned short)3702))));
                    }
                    var_29 |= ((/* implicit */signed char) 4265689124U);
                }
            } 
        } 
    }
}
