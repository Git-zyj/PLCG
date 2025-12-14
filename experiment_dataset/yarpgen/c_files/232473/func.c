/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232473
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232473 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232473
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
    for (unsigned int i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (long long int i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_0] = ((/* implicit */unsigned int) max((((/* implicit */long long int) ((((/* implicit */int) arr_7 [i_0 - 1] [i_1] [(_Bool)1])) << (((((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)32767))) : (2598331945U))) - (32758U)))))), (max((((/* implicit */long long int) arr_0 [i_0 + 1] [i_0 + 1])), (var_6)))));
                    arr_9 [i_0] [(short)0] [i_2] = var_3;
                    arr_10 [i_0] [i_1] [i_1] [(signed char)12] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned int) (-(1696635349U))))) ? (((((/* implicit */_Bool) max((((/* implicit */unsigned int) (short)(-32767 - 1))), (3807413079U)))) ? (arr_6 [i_1] [i_0 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)32767)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((((/* implicit */_Bool) (short)32747)) ? (arr_6 [i_1] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) >= (((((/* implicit */_Bool) arr_2 [i_0])) ? (arr_6 [i_0] [i_1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)31105)))))))))));
                }
            } 
        } 
    } 
    var_13 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (_Bool)1)), ((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)-32748))) : (622218377U)))))) ? (var_4) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) >= (((/* implicit */int) var_1)))))) / (((var_11) ? (var_9) : (var_3))))))));
    var_14 = ((/* implicit */_Bool) var_10);
}
