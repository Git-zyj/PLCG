/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= ((((max(((255 ? 99 : var_5)), 18446744073709551597))) ? (var_1 <= var_5) : (max(((var_13 ? var_8 : var_19)), ((max(var_15, var_12)))))));
    var_21 = ((((max(var_11, var_12))) ? var_7 : var_18));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [2] [5] = (((max((arr_3 [i_0] [i_1]), (max((arr_1 [4]), (arr_2 [i_1]))))) <= (((arr_4 [i_0]) ? (arr_5 [i_1]) : (arr_2 [i_0])))));
                arr_7 [i_0] [i_0] [1] = (max(((min((arr_3 [i_1] [i_0]), (arr_3 [i_0] [i_1])))), (max((min((arr_3 [i_0] [i_1]), (arr_2 [i_1]))), ((max(3, 65533)))))));
                arr_8 [i_0] = (max((arr_1 [i_0]), ((max((arr_1 [i_1]), (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_22 = (((((min(var_19, var_13)))) ? var_12 : var_19));
    #pragma endscop
}
