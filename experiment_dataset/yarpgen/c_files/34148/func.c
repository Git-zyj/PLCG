/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34148
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34148 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34148
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_14 = ((/* implicit */unsigned int) max((var_14), (max(((-(3640099990U))), (((/* implicit */unsigned int) var_12))))));
                var_15 = ((/* implicit */unsigned long long int) min((var_15), (var_8)));
                /* LoopNest 3 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        for (short i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [5U] [i_3] [(short)21] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(max((((/* implicit */long long int) -812686895)), (-6603166589594015863LL)))))) ? (((((/* implicit */_Bool) 8888367338948153918LL)) ? (15676312475336452343ULL) : (var_6))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-29)), ((unsigned char)8)))))));
                                var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_9))) : (max((8888367338948153902LL), (((/* implicit */long long int) var_13))))))) ? (((/* implicit */long long int) 3640099987U)) : (((((/* implicit */_Bool) (signed char)(-127 - 1))) ? (max((-6603166589594015870LL), (((/* implicit */long long int) 1383401879)))) : (max((((/* implicit */long long int) (unsigned short)65521)), (-8888367338948153876LL)))))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    var_17 |= ((/* implicit */_Bool) 1674140846U);
    var_18 = ((/* implicit */_Bool) var_6);
}
