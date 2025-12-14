/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207434
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207434 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207434
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
    var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (~(((((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))))) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_6))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
                {
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */long long int) min((var_15), (((((/* implicit */_Bool) ((((((/* implicit */int) (short)-19281)) >= (((/* implicit */int) (_Bool)1)))) ? (535822336U) : (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) -5804206633336401705LL))))))))) ? (((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_3])) ? (var_12) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((535822336LL) ^ (((/* implicit */long long int) ((/* implicit */int) var_3)))))))));
                            arr_10 [i_0] [i_1] [i_2] [i_3] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_3]))));
                            arr_11 [i_0] = ((/* implicit */int) max((0ULL), (((/* implicit */unsigned long long int) 6782491437842953064LL))));
                        }
                    } 
                } 
                var_16 = ((min((((/* implicit */unsigned int) ((((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) > (((/* implicit */int) (_Bool)1))))), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-94))) : (130023424U))))) == (((/* implicit */unsigned int) min(((((_Bool)1) ? (((/* implicit */int) arr_4 [i_0] [i_0] [i_0])) : (((/* implicit */int) var_6)))), (((/* implicit */int) var_5))))));
                var_17 = ((/* implicit */short) (+((+(((/* implicit */int) (_Bool)1))))));
                var_18 = ((/* implicit */_Bool) (+((~(min((13806562961380472685ULL), (((/* implicit */unsigned long long int) var_7))))))));
                var_19 = ((/* implicit */long long int) min((((((/* implicit */int) (unsigned char)107)) - (((/* implicit */int) (unsigned short)54246)))), (((/* implicit */int) ((((/* implicit */_Bool) var_1)) && ((!((_Bool)1))))))));
            }
        } 
    } 
    var_20 = ((/* implicit */long long int) var_11);
}
