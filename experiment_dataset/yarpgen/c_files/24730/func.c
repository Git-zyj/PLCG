/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24730
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24730 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24730
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
    var_17 ^= ((/* implicit */unsigned char) min((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 1638944368U)) ? (2656022928U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)17881))))))));
    var_18 = ((/* implicit */long long int) var_7);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (var_0) : ((((!(((/* implicit */_Bool) var_10)))) ? (var_16) : (((((/* implicit */_Bool) 1638944367U)) ? (var_14) : (1638944367U)))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */unsigned int) ((unsigned short) ((arr_5 [i_0]) < (((/* implicit */unsigned long long int) ((16352U) << (((var_10) - (3217311639414909332LL)))))))));
                var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((/* implicit */long long int) arr_6 [(_Bool)1] [i_1])), (var_13)))) ? (((/* implicit */int) arr_6 [i_1] [i_1])) : (((((/* implicit */int) arr_6 [i_0 + 1] [(_Bool)1])) - (((/* implicit */int) arr_6 [i_0 - 1] [i_1]))))));
                var_22 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [13LL]))));
                var_23 = ((/* implicit */unsigned int) ((short) min((((/* implicit */unsigned int) ((arr_3 [i_1]) == (((/* implicit */int) arr_6 [i_1] [i_0 + 1]))))), (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0 - 1] [i_1]))) : (var_14))))));
            }
        } 
    } 
}
