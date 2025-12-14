/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43693
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43693 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43693
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
    var_16 |= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_14))));
    var_17 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)10805)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_7)))) : (((((/* implicit */_Bool) var_5)) ? (var_6) : (var_8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((short) var_0)))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        for (int i_1 = 1; i_1 < 15; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
            {
                {
                    arr_6 [12ULL] [i_1 + 1] [(unsigned short)4] &= ((/* implicit */int) (-(arr_4 [i_0] [(signed char)14] [(signed char)9] [i_1])));
                    var_18 = ((/* implicit */unsigned short) ((unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) arr_1 [i_0] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_3)))) : (((/* implicit */int) var_1)))));
                }
            } 
        } 
    } 
}
