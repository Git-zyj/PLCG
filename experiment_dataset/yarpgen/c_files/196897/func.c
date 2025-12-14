/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196897
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196897 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196897
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
    var_11 = ((/* implicit */_Bool) (short)32767);
    /* LoopNest 2 */
    for (short i_0 = 2; i_0 < 23; i_0 += 4) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            {
                arr_6 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (short)-24271))) * (1652658835U)));
                var_12 = ((/* implicit */unsigned int) max((var_12), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_8))) | (var_7)))))))) + (((((/* implicit */unsigned long long int) var_10)) / (var_1))))))));
                var_13 = ((/* implicit */long long int) arr_0 [i_1]);
                arr_7 [i_1] = (i_1 % 2 == 0) ? (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_1 [i_1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) >> (((min((((/* implicit */long long int) var_8)), (arr_3 [i_1] [i_1] [i_1]))) + (159LL)))))) : (((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_1])) - (((/* implicit */int) arr_1 [i_1]))))) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1]))))) >> (((((min((((/* implicit */long long int) var_8)), (arr_3 [i_1] [i_1] [i_1]))) + (159LL))) + (4758315791886192450LL))))));
            }
        } 
    } 
    var_14 -= ((/* implicit */signed char) ((max(((-(var_3))), (var_3))) * (((/* implicit */unsigned int) ((/* implicit */int) var_8)))));
    var_15 = ((/* implicit */unsigned int) ((int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */signed char) var_4))))) && (((/* implicit */_Bool) max((var_5), (((/* implicit */signed char) (_Bool)0))))))));
}
