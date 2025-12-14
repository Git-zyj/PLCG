/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243928
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
    var_15 = ((/* implicit */short) (((~(((/* implicit */int) min(((short)15), (((/* implicit */short) (unsigned char)165))))))) < (((/* implicit */int) var_9))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 1; i_0 < 12; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 12; i_1 += 1) 
        {
            {
                var_16 = ((/* implicit */signed char) ((unsigned char) ((((/* implicit */_Bool) (short)26374)) || (((/* implicit */_Bool) (signed char)108)))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 14; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        for (short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [i_0] [i_0] [i_2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */signed char) arr_13 [i_0] [i_0] [i_3]);
                                var_17 += ((/* implicit */short) min((((((/* implicit */int) (short)31998)) >> (((((/* implicit */int) (unsigned char)128)) - (121))))), (((((/* implicit */int) var_5)) - (((/* implicit */int) var_9))))));
                            }
                        } 
                    } 
                } 
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_9))));
                arr_15 [i_0] [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */int) var_13)) & (((/* implicit */int) arr_12 [i_0] [i_0] [i_0 + 2] [i_1 + 2] [i_1 + 2] [i_1 - 1])))) < (((/* implicit */int) max((var_14), (arr_12 [i_0 - 1] [i_0] [i_0 + 1] [i_1] [i_1] [i_1 + 2]))))));
                var_19 = ((/* implicit */long long int) min((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 + 2]))) < (var_12)))), ((+(((/* implicit */int) var_6))))));
            }
        } 
    } 
}
