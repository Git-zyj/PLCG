/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5210
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (long long int i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) (-(((arr_5 [i_1 - 2] [i_1 - 1] [(_Bool)1] [i_1 - 2]) & (arr_0 [i_1 - 2] [i_1 + 1])))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 13; i_3 += 4) 
                    {
                        for (long long int i_4 = 4; i_4 < 12; i_4 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) arr_1 [4U]);
                                arr_13 [i_0] [i_2] [i_3 - 1] = ((/* implicit */long long int) (-(((/* implicit */int) (!(arr_7 [i_3 - 1] [i_3 + 1] [(unsigned short)13] [i_3 - 1]))))));
                            }
                        } 
                    } 
                    arr_14 [i_0] [6] [i_0] |= ((/* implicit */unsigned short) arr_7 [i_0] [(short)10] [(short)10] [i_2]);
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (unsigned short)1860)), (var_5)))) ? (((/* implicit */long long int) (+(((/* implicit */int) var_15))))) : (((((/* implicit */_Bool) var_1)) ? (((/* implicit */long long int) 4179378125U)) : (var_2))))))));
}
