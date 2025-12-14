/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43001
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43001 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43001
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
    var_16 = ((/* implicit */unsigned long long int) ((short) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_10))))))));
    /* LoopNest 2 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            {
                var_17 = ((/* implicit */unsigned int) (((~(((/* implicit */int) ((((/* implicit */int) arr_5 [i_0] [i_0 - 1] [i_0])) > (((/* implicit */int) arr_5 [i_1] [i_1] [i_1]))))))) <= ((-(((/* implicit */int) ((((/* implicit */int) var_8)) == (((/* implicit */int) var_12)))))))));
                /* LoopNest 3 */
                for (short i_2 = 0; i_2 < 25; i_2 += 2) 
                {
                    for (unsigned short i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 1; i_4 < 24; i_4 += 1) 
                        {
                            {
                                var_18 = ((/* implicit */short) ((((/* implicit */_Bool) arr_0 [i_4 + 1] [i_4])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (arr_9 [i_4 - 1] [i_4 + 1] [i_4 - 1] [i_4 + 1]) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [i_0 - 1] [16])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_10)))))))) : (var_14)));
                                arr_15 [i_2] [i_2] [i_2] [i_2] [i_2] [i_4] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1])) : (((/* implicit */int) arr_12 [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
                                arr_16 [24U] [24U] [i_2] [i_4] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((int) arr_8 [i_0] [i_4 + 1])) * (((/* implicit */int) ((((/* implicit */unsigned long long int) var_4)) > (var_0))))))) ? (((/* implicit */int) arr_11 [i_0])) : (((/* implicit */int) min((var_12), (arr_13 [i_4 - 1] [i_4] [i_4 + 1] [i_4 + 1] [i_4] [i_4 + 1] [i_4]))))));
                            }
                        } 
                    } 
                } 
                arr_17 [i_0 - 1] [i_0 - 1] [i_0] = ((/* implicit */long long int) (((~(arr_9 [11ULL] [(unsigned char)20] [i_0 - 1] [i_0 - 1]))) >> (((arr_9 [i_1] [(_Bool)1] [i_0] [i_0]) - (1225456347U)))));
            }
        } 
    } 
}
