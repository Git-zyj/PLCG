/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206622
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
    var_13 -= ((/* implicit */long long int) (-(((((((/* implicit */_Bool) var_7)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))) - (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) var_6)))))))));
    var_14 = (_Bool)0;
    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) var_1))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */_Bool) (-(((/* implicit */int) (short)13033))));
                    var_17 = ((/* implicit */unsigned int) max((var_17), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) (~(((/* implicit */int) var_0))))) ^ (((((/* implicit */_Bool) var_11)) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) 2029835688U)))) : (18023975920726053219ULL))))));
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_18 = (i_2 % 2 == zero) ? (((/* implicit */unsigned int) (((-(var_2))) << (((((/* implicit */int) arr_8 [i_0] [i_2] [1ULL] [1ULL])) - (65)))))) : (((/* implicit */unsigned int) (((-(var_2))) << (((((((/* implicit */int) arr_8 [i_0] [i_2] [1ULL] [1ULL])) - (65))) - (53))))));
                                var_19 = var_6;
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
}
