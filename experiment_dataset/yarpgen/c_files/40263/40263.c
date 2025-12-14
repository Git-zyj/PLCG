/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40263
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40263 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40263
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = ((var_8 ? (var_6 & var_5) : (min(((33718 ? var_9 : var_6)), (8310839772570798 % 31806)))));
    var_13 = var_5;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {

                    for (int i_3 = 1; i_3 < 10;i_3 += 1) /* same iter space */
                    {
                        var_14 = (max(var_1, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])));
                        var_15 = ((~(((arr_2 [i_1 - 1]) ? (arr_2 [i_1 + 1]) : (arr_2 [i_1 - 1])))));
                    }
                    for (int i_4 = 1; i_4 < 10;i_4 += 1) /* same iter space */
                    {
                        var_16 -= (min(((31787 % (arr_6 [i_0]))), ((-(arr_6 [i_2])))));
                        var_17 ^= (~(((((4294967295 ? (arr_3 [i_0] [i_0] [i_0]) : (arr_0 [i_0] [i_1])))) ? (arr_8 [i_0] [i_1 - 1] [i_2] [i_4 + 2]) : (arr_1 [i_2]))));
                    }
                    for (int i_5 = 1; i_5 < 10;i_5 += 1) /* same iter space */
                    {
                        var_18 = (min(((var_2 ? ((min((arr_6 [i_5]), (arr_2 [i_0])))) : (arr_7 [i_1 + 2] [i_0] [i_2] [i_2] [i_5 + 3] [i_5]))), (min(-31817, var_1))));
                        var_19 = ((419278245 ? ((+(((arr_4 [i_0] [i_0] [0] [i_5]) ? 2238041853 : var_8)))) : (arr_11 [i_0] [i_0] [i_1] [i_0] [i_0] [i_5])));
                    }
                    var_20 = (arr_0 [i_0] [i_1]);
                    var_21 = min((min(0, 12)), (arr_9 [i_1 + 3] [i_1 - 1] [i_1 + 3] [1]));
                    arr_13 [i_0] [i_1 - 1] [i_2] [i_0] = 56;
                    var_22 -= 1661993312866522761;
                }
            }
        }
    }
    var_23 = var_6;
    #pragma endscop
}
