/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222576
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 += ((((532540117 ? 19 : 31))) + (min((var_10 % var_12), (max(var_0, var_10)))));
    var_14 -= (var_4 - var_7);
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] = ((((arr_1 [i_0 - 1]) + (max(1454178864, -1210693817)))) % (((35876505 ^ 1454178862) ? (max(var_8, var_3)) : (((arr_3 [i_1]) ? var_11 : -745672505)))));
                var_15 |= (min((arr_0 [i_0 + 1]), -67108848));
                var_16 = (min(var_16, ((((!(arr_1 [i_0 - 1]))) ? -595115965 : ((((arr_1 [i_0 + 1]) <= (arr_1 [i_0 + 1]))))))));
                var_17 = (((((max(-1681968341, 39165742)) | -1454178865))) ? (max(((-21 ? (arr_0 [i_0]) : var_4)), (min(var_11, var_0)))) : ((((arr_0 [i_0]) ? (arr_3 [i_0]) : (arr_2 [i_1])))));
                arr_7 [i_1] = min(808435659, (((var_5 || ((var_5 >= (arr_2 [i_0])))))));
            }
        }
    }
    #pragma endscop
}
