/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198800
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198800 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198800
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
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned int i_2 = 2; i_2 < 9; i_2 += 2) 
            {
                {
                    arr_8 [i_0] [i_1] [i_1] = var_5;
                    /* LoopNest 2 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 = ((/* implicit */short) 1941923948U);
                                var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_2] [i_2 - 1] [i_2 - 1] [i_2 - 1] [i_2])) ? (((/* implicit */unsigned long long int) (-(2147483647)))) : (arr_9 [i_0] [9] [(short)2] [i_4])))) ? (min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0])), (arr_9 [i_0] [i_0] [i_2 - 2] [i_3]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) var_16)) ? (14208470599880581406ULL) : (((/* implicit */unsigned long long int) var_12))))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (max((((((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) & (4238273473828970209ULL))), (((/* implicit */unsigned long long int) ((int) var_8)))))));
    var_20 = ((/* implicit */short) max((max(((+(2147483647))), ((~(((/* implicit */int) var_13)))))), (((/* implicit */int) var_8))));
}
