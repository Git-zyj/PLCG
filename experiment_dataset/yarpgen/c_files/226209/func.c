/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226209
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
    var_20 = ((((/* implicit */_Bool) (unsigned short)32485)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-32))) : (-3368661192645575761LL));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 24; i_1 += 4) 
        {
            {
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned short i_2 = 0; i_2 < 24; i_2 += 2) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 21; i_3 += 1) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 24; i_4 += 4) 
                        {
                            {
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) 8335932210316770143LL))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_16))) & (var_3)))) : (arr_9 [i_4] [i_1] [i_3 + 1] [i_0]))))));
                                arr_14 [i_0] [i_0] [i_3] [i_3 - 4] [i_4] = ((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)32479)) + (((/* implicit */int) (signed char)-59))));
                                var_22 = ((/* implicit */long long int) min((var_22), (((((/* implicit */_Bool) 4294967295U)) ? (arr_12 [i_3 + 3] [i_3 + 3] [i_3] [i_3 + 1] [i_3] [i_3 + 3] [i_2]) : (((/* implicit */long long int) 4294967288U))))));
                                arr_15 [i_0] [i_1] [i_3] = ((/* implicit */short) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_4] [i_3 - 2] [i_3] [i_3] [i_3 + 3])) ? (arr_12 [i_4] [i_4] [i_3] [i_3 - 2] [i_3] [i_3] [i_3 + 3]) : (arr_12 [i_4] [i_3] [i_4] [i_3 - 2] [i_3] [i_3] [i_3 + 3])));
                            }
                        } 
                    } 
                    var_23 &= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_8 [i_0] [i_0]))));
                }
                /* vectorizable */
                for (short i_5 = 0; i_5 < 24; i_5 += 2) 
                {
                    var_24 = ((unsigned long long int) arr_1 [i_1]);
                    var_25 = ((/* implicit */int) ((((/* implicit */_Bool) (~(var_5)))) ? (var_5) : (arr_0 [i_0])));
                    var_26 = ((/* implicit */signed char) (-(((/* implicit */int) var_10))));
                }
                arr_18 [i_0] [i_1] [i_1] = arr_9 [i_0] [i_1] [i_1] [i_1];
            }
        } 
    } 
    var_27 = ((/* implicit */unsigned long long int) min((var_27), (((/* implicit */unsigned long long int) var_15))));
}
