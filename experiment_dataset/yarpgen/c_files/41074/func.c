/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41074
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41074 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41074
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
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        for (signed char i_1 = 2; i_1 < 14; i_1 += 3) 
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
                /* LoopNest 2 */
                for (long long int i_2 = 2; i_2 < 15; i_2 += 3) 
                {
                    for (int i_3 = 0; i_3 < 16; i_3 += 2) 
                    {
                        {
                            var_14 = (!(((/* implicit */_Bool) var_13)));
                            arr_15 [i_2] = ((/* implicit */unsigned int) var_11);
                            arr_16 [i_0] [i_1 - 2] [i_2] [i_3] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2 + 1] [i_2 - 1] [i_2 - 2])) ? (((/* implicit */int) arr_10 [i_2 + 1])) : (((/* implicit */int) arr_10 [i_2 + 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) : (min((((/* implicit */unsigned long long int) (unsigned short)58587)), (11853051533532990665ULL)))));
                            var_15 ^= ((/* implicit */unsigned long long int) ((unsigned int) var_7));
                            var_16 = ((/* implicit */long long int) max((var_16), (((/* implicit */long long int) arr_6 [i_0] [i_0]))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_17 = ((/* implicit */unsigned short) ((short) max((((/* implicit */unsigned long long int) ((var_12) != (((/* implicit */long long int) ((/* implicit */int) var_8)))))), (var_1))));
}
