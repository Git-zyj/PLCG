/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209175
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209175 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209175
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 ^= (min((((var_10 != var_2) ? (((4249128935502449646 ? 1 : var_10))) : (26 | var_12))), var_0));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                var_14 ^= ((-(((arr_4 [i_1] [i_1]) ? (arr_4 [i_0] [i_1]) : (arr_4 [i_0] [i_0 + 1])))));
                var_15 = (((var_10 <= 4249128935502449646) ? (((arr_3 [i_1]) ? (((arr_0 [i_0]) - 11267421377487894555)) : (((min(var_11, var_10)))))) : ((((!(arr_1 [i_0 + 1])))))));
            }
        }
    }
    var_16 = var_3;
    var_17 += (max(((var_9 - (127 >> var_5))), ((max((max(var_4, var_11)), var_10)))));
    var_18 |= var_8;
    #pragma endscop
}
