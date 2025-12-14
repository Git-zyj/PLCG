/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (((((var_6 == var_4) && (var_6 < var_12))) ? (min(var_9, -var_4)) : (((min(var_9, var_13))))));
    var_15 = ((((((min(var_12, var_4)) & (((var_7 ? 0 : 0)))))) ? ((((!(((var_11 ? var_12 : var_3))))))) : ((var_8 ? ((0 ? var_2 : var_2)) : (var_6 >= var_2)))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        arr_2 [i_0] = var_12;
        arr_3 [i_0] [i_0] = (((((1 ? var_8 : var_3))) ? (((arr_0 [i_0] [i_0 - 1]) ? var_12 : (arr_1 [i_0 - 1]))) : 1));
    }
    for (int i_1 = 2; i_1 < 21;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 0;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_4 = 1; i_4 < 1;i_4 += 1)
                    {
                        for (int i_5 = 0; i_5 < 1;i_5 += 1)
                        {
                            {
                                var_16 = ((var_3 >> (((arr_15 [i_2 + 1] [i_2 + 1] [i_1]) * (arr_15 [i_2 + 1] [i_2 + 1] [i_1])))));
                                arr_16 [i_1] [i_1] [i_3] = (-4944621786961183396 != -180112715454007415);
                                var_17 = (min(var_17, var_4));
                            }
                        }
                    }
                    arr_17 [i_1] [i_2] [1] = ((min((var_6 != var_12), (((arr_9 [i_1] [1] [i_3] [i_3]) ? var_1 : (arr_4 [i_1]))))));
                    arr_18 [i_1] [i_1] [i_1] = (((var_4 ? 1 : (arr_14 [i_1] [i_2 + 1]))));
                }
            }
        }
        var_18 &= (arr_5 [i_1] [i_1]);
        arr_19 [i_1] = ((-((((((arr_14 [i_1] [22]) / (arr_6 [i_1] [1] [i_1])))) ? (((arr_10 [i_1] [i_1] [i_1]) ? var_2 : var_1)) : -4539335833183220266))));
    }
    var_19 = (((((!var_10) ? (min(var_8, var_7)) : ((var_11 ? var_5 : 1)))) >> (var_1 - 10868084304417952815)));
    var_20 = var_1;
    #pragma endscop
}
