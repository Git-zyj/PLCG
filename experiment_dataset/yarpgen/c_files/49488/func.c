/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49488
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49488 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49488
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 3) 
    {
        for (unsigned char i_1 = 1; i_1 < 23; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */long long int) max((var_10), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_0 [i_0] [i_0])))))));
                var_12 = ((/* implicit */unsigned int) ((arr_4 [i_1] [i_1] [i_1]) <= (((/* implicit */unsigned long long int) min((-1LL), (((/* implicit */long long int) (unsigned char)166)))))));
                arr_6 [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_4 [i_0] [i_0] [i_1]))));
                /* LoopNest 2 */
                for (long long int i_2 = 0; i_2 < 24; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 24; i_3 += 1) 
                    {
                        {
                            var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((max((((/* implicit */unsigned long long int) arr_1 [1U])), (arr_12 [i_3] [i_2] [i_2] [i_1] [i_0]))) + (((((/* implicit */_Bool) arr_0 [i_2] [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_5)))))) ? (((((/* implicit */_Bool) (unsigned char)192)) ? (((((/* implicit */_Bool) -4395442901759877018LL)) ? (7762069392801730129ULL) : (9650071695117004710ULL))) : (((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) 16387095482973833112ULL))))));
                            var_14 = ((/* implicit */long long int) var_1);
                            var_15 = ((/* implicit */unsigned long long int) min((var_15), (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((7407101537031651965ULL) != (((/* implicit */unsigned long long int) (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (unsigned char)156))))))))))))));
                            var_16 = ((/* implicit */long long int) max((((unsigned int) min((((/* implicit */unsigned long long int) (unsigned char)192)), (var_5)))), (((/* implicit */unsigned int) var_2))));
                        }
                    } 
                } 
                var_17 = arr_0 [i_1] [i_1 + 1];
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))) : (max((var_5), (((/* implicit */unsigned long long int) var_6))))))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) min((var_6), (((/* implicit */short) max((((/* implicit */unsigned char) (signed char)-112)), (var_2)))))))));
}
