/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217593
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217593 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217593
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
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 18; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
        {
            {
                var_20 = ((/* implicit */unsigned char) var_4);
                /* LoopSeq 3 */
                for (unsigned short i_2 = 2; i_2 < 16; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 19; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 1; i_4 < 17; i_4 += 2) 
                        {
                            {
                                arr_13 [i_2] = ((/* implicit */signed char) var_13);
                                arr_14 [i_0] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */int) var_9);
                            }
                        } 
                    } 
                    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_11))));
                    var_22 = ((/* implicit */unsigned char) max((((/* implicit */long long int) var_4)), (min((max((((/* implicit */long long int) var_8)), (var_0))), (min((-1LL), (-8LL)))))));
                    var_23 ^= ((/* implicit */unsigned long long int) min((var_5), (((/* implicit */unsigned int) var_19))));
                    var_24 ^= ((/* implicit */short) max((max((((/* implicit */long long int) var_12)), (min((var_9), (((/* implicit */long long int) var_12)))))), (var_3)));
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 19; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (unsigned int i_6 = 0; i_6 < 19; i_6 += 3) 
                    {
                        for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                        {
                            {
                                arr_23 [i_0 + 1] [(unsigned char)2] [i_0] [i_0] [i_7] = ((/* implicit */_Bool) var_5);
                                var_25 += ((/* implicit */unsigned char) var_11);
                            }
                        } 
                    } 
                    var_26 = ((/* implicit */signed char) var_11);
                    var_27 = ((/* implicit */unsigned int) max((var_27), (((/* implicit */unsigned int) var_14))));
                }
                for (unsigned long long int i_8 = 0; i_8 < 19; i_8 += 2) 
                {
                    var_28 = ((/* implicit */unsigned int) min((var_9), (((/* implicit */long long int) var_4))));
                    var_29 |= ((/* implicit */long long int) min(((unsigned char)255), ((unsigned char)20)));
                    var_30 = ((/* implicit */int) max((var_30), (((/* implicit */int) var_11))));
                    arr_26 [i_8] = ((/* implicit */unsigned long long int) var_2);
                }
            }
        } 
    } 
    var_31 += ((/* implicit */short) max((var_13), (min((var_7), (((/* implicit */int) max((var_4), (var_4))))))));
}
