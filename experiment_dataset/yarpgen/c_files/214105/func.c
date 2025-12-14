/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214105
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214105 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214105
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
    var_20 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (_Bool)1)), (var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_17)))) : (var_2))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((-8135868854741074829LL) == (((/* implicit */long long int) -1976405966))))), (6823828465272037814LL))))));
    /* LoopNest 2 */
    for (long long int i_0 = 3; i_0 < 17; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_8 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((long long int) var_0))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) : (min((((/* implicit */unsigned long long int) var_14)), (2875749125749070819ULL)))));
                arr_9 [i_0] = ((/* implicit */_Bool) min((((((/* implicit */_Bool) min((var_13), (((/* implicit */long long int) var_19))))) ? (((/* implicit */unsigned long long int) var_3)) : (min((13795745157334367502ULL), (((/* implicit */unsigned long long int) var_19)))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (min((((/* implicit */unsigned int) var_19)), (265825972U))) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))))));
                /* LoopNest 3 */
                for (unsigned int i_2 = 0; i_2 < 18; i_2 += 3) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((_Bool) 1)) ? (((/* implicit */int) (_Bool)1)) : (((var_9) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_17))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) 0U)) ? (2633546105126907335LL) : (((/* implicit */long long int) var_6))))));
                                var_22 = ((/* implicit */unsigned int) var_7);
                            }
                        } 
                    } 
                } 
                arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) 5102380858486952539LL);
            }
        } 
    } 
}
