/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222435
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222435 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222435
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
    var_11 = ((/* implicit */short) var_9);
    /* LoopNest 2 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        for (unsigned char i_1 = 0; i_1 < 22; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_4 [21] [i_1] [i_1]))));
                /* LoopSeq 2 */
                /* vectorizable */
                for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
                {
                    var_13 |= ((/* implicit */short) (-((+(((/* implicit */int) arr_6 [i_0]))))));
                    var_14 = ((/* implicit */int) max((var_14), (((/* implicit */int) arr_5 [i_0] [(unsigned char)2] [i_2] [(unsigned char)2]))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (signed char i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                var_15 = ((/* implicit */short) (-(((/* implicit */int) arr_9 [i_0] [(short)18] [(short)18] [i_3] [(unsigned short)9] [i_4]))));
                                var_16 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_6 [i_3]))));
                            }
                        } 
                    } 
                    var_17 = ((/* implicit */signed char) arr_4 [i_0] [i_1] [i_2]);
                    var_18 = ((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_0] [i_0]);
                }
                /* vectorizable */
                for (signed char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    var_19 ^= ((/* implicit */short) (~(arr_3 [i_0] [i_1] [i_5])));
                    /* LoopNest 2 */
                    for (unsigned long long int i_6 = 0; i_6 < 22; i_6 += 1) 
                    {
                        for (unsigned int i_7 = 1; i_7 < 18; i_7 += 3) 
                        {
                            {
                                var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) (~(((/* implicit */int) arr_7 [i_7 + 1] [i_1] [i_5] [i_1])))))));
                                var_21 ^= ((/* implicit */signed char) (-((+(((/* implicit */int) (signed char)-117))))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_22 = ((/* implicit */signed char) (+((+(((/* implicit */int) var_10))))));
    var_23 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))));
    var_24 = ((/* implicit */short) (~(((/* implicit */int) var_10))));
}
