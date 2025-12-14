/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241904
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241904 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241904
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
    var_20 &= ((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (min((-15LL), (((/* implicit */long long int) -589665435))))));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 9; i_0 += 4) 
    {
        for (unsigned short i_1 = 4; i_1 < 8; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 2; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_7 [i_1] [i_1 - 3] [i_2 + 1] [i_2 + 1] &= ((/* implicit */unsigned short) ((((arr_2 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) arr_4 [i_2 + 1] [i_2 - 2] [i_2 - 2]))))) - (1)))));
                    var_21 = ((/* implicit */int) min((var_21), ((((!(((/* implicit */_Bool) (+(var_19)))))) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_3 [i_1 - 2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_16)))))) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */int) (signed char)105)) ^ (((/* implicit */int) var_0)))))) : (((-589665426) % (((/* implicit */int) (unsigned char)183))))))));
                }
            } 
        } 
    } 
}
