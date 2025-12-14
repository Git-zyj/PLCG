/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210918
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210918 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210918
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = max(((var_15 ? 6080249707345178278 : (arr_1 [i_0 - 1] [1]))), (((!(arr_1 [i_0 + 2] [i_1 - 2])))));
                arr_5 [i_0] [i_0] = ((((-(((arr_4 [i_0] [i_1]) ? 137438953471 : 9223372036854775807))))) ? (min((arr_0 [i_0]), (arr_0 [i_0]))) : (arr_2 [i_0]));
                arr_6 [12] [i_0] = ((((var_9 ? (arr_0 [i_0]) : (arr_0 [i_0])))) ? (var_9 == 0) : ((-4554144727842723461 ? (arr_0 [i_0]) : (arr_1 [i_0 + 2] [i_1 + 2]))));
                arr_7 [i_0] [i_0] [i_1] = (var_2 - (max(var_13, ((var_12 ? var_9 : (arr_1 [i_0 - 1] [i_0 - 1]))))));
                arr_8 [i_0] [i_1 + 2] [i_0] = (3019031691191376890 ? (((0 ^ var_3) ^ 0)) : ((6 >> (var_3 - 4658345514107022475))));
            }
        }
    }
    var_17 = var_1;
    var_18 = var_5;
    #pragma endscop
}
