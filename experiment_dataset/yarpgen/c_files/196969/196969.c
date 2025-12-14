/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((((var_1 && var_5) ^ ((1799792284 ? var_3 : var_6)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_5 [i_0] [5] = var_7;
                arr_6 [i_0] = (arr_4 [i_1]);
                var_15 += (arr_2 [i_0] [i_0]);
            }
        }
    }
    var_16 = ((~(((var_12 ? var_6 : var_1)))));

    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        var_17 = ((-((((((arr_8 [i_2] [i_2]) ? var_7 : (arr_7 [i_2])))) ? (arr_7 [i_2]) : (arr_7 [i_2])))));

        for (int i_3 = 0; i_3 < 23;i_3 += 1)
        {
            var_18 = (max(var_18, var_10));
            var_19 = ((!(arr_11 [i_2])));
        }
    }
    for (int i_4 = 0; i_4 < 23;i_4 += 1)
    {
        arr_15 [i_4] = (((1799792262 ^ -1799792285) % -1627031075));
        arr_16 [i_4] = ((~(max(248, 815249416))));
        var_20 = ((-(arr_14 [i_4] [0])));
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        arr_21 [i_5] [i_5] = arr_17 [i_5] [i_5];
        var_21 = var_11;
        arr_22 [i_5] = ((min((((1 ? var_6 : var_2)), (max(1, (arr_4 [9])))))));
        arr_23 [i_5] [i_5] = (max(((((((arr_20 [i_5]) ? -554102563 : var_10)) ^ var_10))), (((arr_4 [i_5]) ? ((1799792285 ? (arr_4 [i_5]) : var_12)) : 1))));
        var_22 = ((((-1799792297 < (arr_4 [i_5]))) ? (arr_4 [i_5]) : (arr_4 [i_5])));
    }
    #pragma endscop
}
