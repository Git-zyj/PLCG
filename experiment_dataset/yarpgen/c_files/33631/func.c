/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33631
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33631 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33631
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
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_0] [i_1] = ((/* implicit */signed char) ((unsigned long long int) arr_1 [i_0 - 2]));
                arr_6 [i_0] [1U] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) 234881024U)) && (((/* implicit */_Bool) -1067465157)))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_2 = 3; i_2 < 13; i_2 += 1) 
                {
                    var_11 = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((int) (unsigned char)92))) | (arr_9 [i_0 - 2] [i_0 - 1] [i_2 + 1])));
                    /* LoopNest 2 */
                    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 16; i_4 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((long long int) 4060086266U)) <= (var_9))))));
                                arr_15 [i_0] [i_0] [i_2] [i_3] [i_2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_8 [i_0] [i_2]))) ? (((/* implicit */int) (unsigned short)23756)) : (((/* implicit */int) ((((/* implicit */_Bool) (short)32766)) && (((/* implicit */_Bool) (short)32751)))))));
                                arr_16 [i_0 - 1] [i_2] [i_2] = ((/* implicit */_Bool) ((var_5) * (((/* implicit */unsigned long long int) 2182353095U))));
                            }
                        } 
                    } 
                }
            }
        } 
    } 
    var_13 = (+(((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (var_3)))) ? (var_6) : (var_7))));
}
