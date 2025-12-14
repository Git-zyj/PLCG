/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212952
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212952 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212952
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
    var_11 = ((/* implicit */long long int) ((var_8) ? (max((((/* implicit */unsigned long long int) var_10)), (((((/* implicit */_Bool) var_7)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))))))) : (var_3)));
    /* LoopNest 3 */
    for (long long int i_0 = 3; i_0 < 11; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_9 [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((_Bool) arr_7 [i_0] [i_0] [i_2])))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 1; i_3 < 9; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_16 [i_4] [i_0] [i_2] [i_0] [i_0] = ((/* implicit */signed char) max((max((7947450918722594916ULL), (((/* implicit */unsigned long long int) (signed char)114)))), (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_4 [i_2] [i_4])) : (1369614975)))) | ((+(var_3)))))));
                                arr_17 [i_0] [10ULL] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */unsigned int) (-((~(((/* implicit */int) (_Bool)1))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
