/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53895
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53895 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53895
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (~var_3);
    var_11 = ((((63 % 18446744073709551592) <= (var_8 ^ 4294967268))));
    var_12 = var_8;
    var_13 -= 62511;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_14 = (min((arr_1 [i_0]), (((arr_2 [i_0] [i_1]) ? (arr_2 [i_0] [i_1]) : (arr_2 [i_0] [i_1])))));
                var_15 += (max((arr_1 [16]), ((var_0 ? (arr_0 [i_0]) : (arr_3 [i_0] [i_0 - 3] [16])))));
                var_16 = (((((((((arr_0 [i_1]) ? (arr_4 [i_0]) : (arr_2 [i_0] [9])))) ? 6389463714214492444 : ((((arr_3 [i_0] [2] [i_0]) ? (arr_2 [i_0] [i_0]) : var_4)))))) ? (((((arr_3 [7] [7] [i_0]) != (arr_0 [i_1]))))) : ((-(3357724406993638753 & var_0)))));
            }
        }
    }
    #pragma endscop
}
