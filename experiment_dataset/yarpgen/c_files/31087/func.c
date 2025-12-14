/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31087
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31087 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31087
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
    var_19 = ((/* implicit */signed char) min(((-(3512936174U))), (((/* implicit */unsigned int) 37416853))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] = ((unsigned int) arr_0 [i_0]);
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 22; i_2 += 1) 
            {
                {
                    var_20 -= ((/* implicit */unsigned long long int) arr_8 [i_0 - 1] [i_0 - 1]);
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) arr_6 [0]))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 23; i_4 += 2) 
                        {
                            {
                                var_22 += ((/* implicit */short) var_7);
                                var_23 = ((/* implicit */unsigned long long int) min((var_23), (((/* implicit */unsigned long long int) (unsigned char)173))));
                                var_24 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)64))) != (((((/* implicit */_Bool) (unsigned char)74)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (1864986075U)))));
                                var_25 = ((/* implicit */short) ((signed char) (unsigned short)31387));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
}
