/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218099
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
    var_20 *= ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_5))))), ((-(var_6))))), (((/* implicit */unsigned long long int) var_9))));
    var_21 = ((/* implicit */unsigned long long int) min(((-(((/* implicit */int) max((((/* implicit */unsigned short) var_18)), (var_2)))))), ((~((~(((/* implicit */int) var_13))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 4; i_0 < 21; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) (~(6933919430704214493ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned short) (-(((/* implicit */int) var_17))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)24320)))))));
        arr_4 [i_0] [i_0] &= ((/* implicit */short) (~(((/* implicit */int) var_9))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 22; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (short i_3 = 0; i_3 < 22; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 22; i_4 += 1) 
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] [i_2] [i_1] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_7 [i_0] [i_0] [i_0 - 4] [i_0]))));
                                arr_15 [i_0] [i_1] [i_1] [i_1] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_12 [i_0] [i_1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) (~(arr_0 [i_0 - 4] [i_2])));
                    var_24 = ((/* implicit */short) (!(((/* implicit */_Bool) var_10))));
                }
            } 
        } 
    }
    var_25 += ((/* implicit */unsigned short) var_6);
}
