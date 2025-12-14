/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 &= ((7224 ^ ((-(min(8641684845251064822, -6752240941720058054))))));
    var_18 = ((106 > (-7895437221260960081 | var_1)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_7 [i_0] &= 8641684845251064822;
                arr_8 [i_0] [i_1] &= ((((-(227 - 63602)))) ? (min(var_6, (((var_9 ? var_4 : (arr_5 [i_0])))))) : 9223372036854775807);
                var_19 = (min(var_19, (((-(arr_0 [i_0]))))));
                var_20 = (max(((min(159, 48))), (((var_4 ^ 11591487033471708086) ? (var_0 && var_9) : (min(8906563391288723271, 58657))))));
            }
        }
    }
    var_21 = ((((((!(((8906563391288723271 ? var_1 : 852521707))))))) | var_9));
    #pragma endscop
}
