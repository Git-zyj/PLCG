/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200633
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200633 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200633
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
    var_16 = ((/* implicit */long long int) min((3786662517U), (((/* implicit */unsigned int) (short)-12383))));
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                /* LoopNest 3 */
                for (long long int i_2 = 0; i_2 < 21; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 21; i_3 += 2) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                arr_15 [i_1] [i_1] &= ((/* implicit */_Bool) arr_11 [5] [i_1] [i_1] [i_1] [i_1] [i_1]);
                                var_17 |= ((/* implicit */long long int) var_4);
                                arr_16 [i_4] [i_3] [i_0] |= ((/* implicit */unsigned long long int) arr_8 [i_2] [i_2] [i_2] [i_3]);
                            }
                        } 
                    } 
                } 
                var_18 = ((((max((((/* implicit */long long int) arr_4 [i_1])), (arr_8 [i_0] [i_0] [i_0] [i_0]))) ^ (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-28994)) && (((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1])))))))) % (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) arr_6 [i_1] [i_0])), ((short)29007))))));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) min((var_15), ((~(var_10)))));
    var_20 |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((var_1) ^ (((/* implicit */int) (short)-12385)))), (((/* implicit */int) var_0))))) && (var_11)));
}
