/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240612
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240612 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240612
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
        for (unsigned long long int i_1 = 2; i_1 < 18; i_1 += 2) 
        {
            for (unsigned int i_2 = 3; i_2 < 21; i_2 += 1) 
            {
                {
                    var_19 ^= ((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (+(((/* implicit */int) ((_Bool) 70368744177663LL)))))), (((arr_5 [i_2 + 1]) << (((/* implicit */int) arr_7 [i_0] [i_0] [i_0]))))));
                    /* LoopNest 2 */
                    for (short i_3 = 1; i_3 < 20; i_3 += 3) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 18; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */long long int) ((unsigned long long int) 5177014102607600970ULL));
                                arr_14 [i_1 - 2] [i_3] [i_3] = arr_6 [i_1 + 3] [i_3] [i_3 + 1] [i_3];
                                arr_15 [i_0] [i_3] [i_2] [i_3 + 1] [i_4] = ((/* implicit */unsigned long long int) max((max((min((var_4), (((/* implicit */long long int) arr_6 [i_0] [i_0] [i_0] [i_0])))), (((/* implicit */long long int) (-(((/* implicit */int) var_0))))))), (-70368744177664LL)));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned int) var_3);
    var_22 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) -70368744177661LL))));
}
