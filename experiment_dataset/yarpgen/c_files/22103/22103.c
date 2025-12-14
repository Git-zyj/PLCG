/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((var_2 ? ((-16492 ? 136266294 : 51)) : (var_7 <= var_3)))) ? var_7 : var_6));
    var_16 += ((((((var_10 >> (var_6 + 12213))) - (1271463149 && 207435463)))) * ((var_14 ? (var_13 != var_5) : -1935197924)));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] [i_0] = (((((((arr_2 [i_0] [i_1]) % (arr_0 [8]))) - (arr_1 [i_1]))) % (((-(arr_3 [i_1]))))));
                var_17 = (min(var_17, (((((((((arr_0 [i_0 - 3]) ? (arr_2 [i_1] [i_0]) : (arr_3 [21])))) ? (arr_3 [i_1]) : ((~(arr_2 [i_0] [i_0]))))) ^ (arr_3 [i_1]))))));
                arr_7 [i_0] = (arr_2 [i_0 - 3] [i_0]);
            }
        }
    }
    #pragma endscop
}
