/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213327
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
    var_16 = max((((/* implicit */unsigned long long int) max((var_4), (((var_6) ? (var_15) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))))), (min((((/* implicit */unsigned long long int) (_Bool)1)), (var_12))));
    var_17 = ((((/* implicit */_Bool) var_14)) || (((/* implicit */_Bool) min(((((_Bool)1) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))), (min((((/* implicit */unsigned long long int) 1073928128U)), (140737421246464ULL)))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 0; i_0 < 15; i_0 += 1) 
    {
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 15; i_3 += 4) 
                    {
                        for (unsigned long long int i_4 = 2; i_4 < 12; i_4 += 2) 
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [(_Bool)0] [i_3] [i_0] = ((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) max((arr_9 [i_0] [(_Bool)0] [i_0] [i_0] [i_0] [i_0]), (var_9)))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((unsigned int) ((((/* implicit */int) var_6)) >> (((unsigned int) arr_0 [i_0]))));
                                arr_13 [0U] [0U] [i_2] [i_2] [i_0] = ((/* implicit */unsigned int) (-(max((((((/* implicit */_Bool) 0U)) ? (6593464057995105278ULL) : (((/* implicit */unsigned long long int) 1844491410U)))), (((/* implicit */unsigned long long int) min((var_2), (var_3))))))));
                            }
                        } 
                    } 
                    var_18 = ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (_Bool)1)));
                    var_19 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_2] [i_2] [i_2] [i_1] [i_1] [(_Bool)1])) ? (((/* implicit */unsigned long long int) var_7)) : (0ULL)))) ? (min((var_7), (var_1))) : (4294967278U))));
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0])) / (((((/* implicit */int) ((3528975377U) == (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))) + (((/* implicit */int) min((arr_4 [i_0]), (arr_2 [i_1] [i_0]))))))));
                    var_21 = ((/* implicit */_Bool) min((var_21), (arr_4 [i_0])));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_10)))))));
}
