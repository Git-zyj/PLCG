/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30229
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30229 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30229
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
    var_18 = var_15;
    var_19 = var_10;
    var_20 -= ((((/* implicit */_Bool) var_8)) ? ((((-(12205260253553376830ULL))) % (min((var_16), (var_9))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_11))))));
    var_21 = min((((/* implicit */unsigned long long int) var_1)), (((((/* implicit */_Bool) 8837055314063014067ULL)) ? (var_7) : (((unsigned long long int) var_8)))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            {
                /* LoopSeq 1 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 4; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 1; i_4 < 11; i_4 += 1) 
                        {
                            {
                                var_22 = ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_0] [i_3 + 2] [i_3 + 2] [i_0] [i_4])))))) : (max((((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))), (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_9 [i_0] [i_4] [i_2] [i_4] [i_4] [i_4] [i_2]))) | (1461677475310811655ULL))))));
                                arr_11 [i_4] [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_4 - 1])) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_10 [i_4 - 1] [i_3] [i_4] [i_1] [i_4] [i_1] [0ULL]))))) : (((((/* implicit */_Bool) arr_8 [i_1 + 3] [i_1 - 1] [i_1 - 1] [i_1])) ? (arr_8 [i_1 + 2] [6ULL] [i_1 + 2] [i_1]) : (arr_8 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 2])))));
                            }
                        } 
                    } 
                    var_23 = ((/* implicit */_Bool) max((var_23), (((/* implicit */_Bool) max((max((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [8ULL] [(_Bool)0] [i_2] [i_2])) <= (((/* implicit */int) (_Bool)1))))), (6606630645591995617ULL))), (((/* implicit */unsigned long long int) ((_Bool) 6393984826983990126ULL))))))));
                }
                var_24 = ((/* implicit */unsigned long long int) ((arr_4 [i_1 + 1] [i_1 + 2] [i_1 - 2]) != (16985066598398739951ULL)));
            }
        } 
    } 
}
