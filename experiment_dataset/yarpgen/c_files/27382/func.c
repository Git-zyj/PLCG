/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27382
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27382 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27382
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
    var_14 = (!(((/* implicit */_Bool) ((((3781769683U) << (((((/* implicit */int) (signed char)88)) - (72))))) << (((((/* implicit */int) max((var_7), (var_7)))) + (121)))))));
    /* LoopNest 2 */
    for (signed char i_0 = 3; i_0 < 12; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            {
                arr_5 [i_1] &= ((/* implicit */unsigned short) (!((((!(((/* implicit */_Bool) 1ULL)))) && (((/* implicit */_Bool) 17821959017903450929ULL))))));
                arr_6 [i_0 - 3] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_4)))))));
                arr_7 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) var_0))))) ? (arr_1 [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((_Bool) var_6)))))), (((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) var_13)), (9103400466805421151ULL)))) ? (((624785055806100687ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_2)) && (((/* implicit */_Bool) (-9223372036854775807LL - 1LL)))))))))));
                arr_8 [i_0] [i_0] [i_1] = var_2;
            }
        } 
    } 
    var_15 = (!((!((_Bool)1))));
}
