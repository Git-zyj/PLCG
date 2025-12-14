/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243494
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243494 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243494
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
    for (unsigned int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
        {
            for (long long int i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_6 [i_2] [i_0] [i_1] [i_0] = ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)3072)) ? (min((5733944282038156570ULL), (12712799791671395045ULL))) : (((/* implicit */unsigned long long int) ((unsigned int) 134217727)))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
                    {
                        for (int i_4 = 0; i_4 < 24; i_4 += 3) 
                        {
                            {
                                arr_12 [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3581030956944922284ULL)) ? (2055100632U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                                var_12 = arr_5 [i_1 - 1] [i_3 + 1];
                            }
                        } 
                    } 
                    var_13 = ((/* implicit */unsigned int) max((var_13), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((unsigned long long int) -1105758232))) ? (((/* implicit */long long int) ((/* implicit */int) (!(var_5))))) : (var_9)))) || (var_6))))));
                }
            } 
        } 
    } 
    var_14 = ((/* implicit */int) max((var_1), (min(((((_Bool)0) ? (12393890691965405590ULL) : (34359738367ULL))), (((/* implicit */unsigned long long int) max(((_Bool)1), (var_6))))))));
}
