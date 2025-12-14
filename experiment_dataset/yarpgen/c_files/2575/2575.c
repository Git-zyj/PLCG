/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2575
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (((((0 / -67) ? (((var_5 ? var_2 : -5))) : ((0 ? var_7 : 0)))) + (((((((var_6 ? var_14 : var_0))) == ((32243 ? var_2 : var_14))))))));
    var_16 = ((((((1890262444 >= var_7) % ((2700250533 << (var_11 - 5694509991305328490)))))) ? ((((var_8 / 1797514992014468381) < (4028718607 <= -3628040824850126449)))) : (((((3273730960 ? var_8 : var_12)) == (var_4 ^ var_11))))));
    var_17 = (max(var_17, ((((((((var_2 ? 0 : var_11))) ? ((var_5 ? var_14 : var_13)) : (((9223372036854775807 ? var_5 : 0)))))) ? (((((65535 * 0) != (26198 >= 0))))) : (((((var_8 ? var_2 : var_4))) ? (((65509 ? var_14 : var_1))) : (3273730957 / var_4)))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_18 = (((((((arr_2 [i_2]) / 2121654532))) & (((arr_0 [i_0]) ? var_13 : (arr_4 [i_0] [i_0]))))) != ((((((arr_1 [i_2] [i_2]) - (arr_2 [i_0])))) + (((arr_5 [i_0] [i_0] [i_0] [i_0]) - var_9)))));
                    var_19 = (((((((var_1 ? 7250 : (arr_1 [i_1] [i_2])))) ? (1 > 14651) : (1021236339 >> 1)))) + (((((2700250523 ? 2700250524 : (arr_6 [i_2] [i_1] [i_0])))) ? ((((var_1 + 2147483647) << (var_9 - 5481059272332559925)))) : (((arr_2 [i_0]) - var_7)))));
                }
            }
        }
    }
    #pragma endscop
}
