/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34344
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
    var_18 = ((/* implicit */unsigned int) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)36253)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_15))))) ? (var_14) : (((/* implicit */long long int) var_1))))), (max((var_8), (((/* implicit */unsigned long long int) var_1))))));
    var_19 = ((unsigned long long int) var_12);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            {
                var_20 = ((((/* implicit */_Bool) arr_0 [i_0])) ? (((((/* implicit */_Bool) arr_4 [i_0] [i_1] [i_0])) ? (((/* implicit */unsigned long long int) arr_4 [6LL] [i_1] [i_0])) : (arr_2 [i_1] [i_0] [i_0]))) : ((~(max((arr_2 [i_0] [i_0] [i_1]), (((/* implicit */unsigned long long int) var_11)))))));
                arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */long long int) (~(arr_0 [i_1])))), (((((/* implicit */_Bool) ((short) var_11))) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))))));
            }
        } 
    } 
}
