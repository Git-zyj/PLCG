/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217456
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217456 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217456
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 22;i_0 += 1) /* same iter space */
    {
        var_20 += (var_7 % -95);
        var_21 = (min(var_21, var_2));
    }
    /* vectorizable */
    for (int i_1 = 2; i_1 < 22;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 25;i_3 += 1)
            {
                {
                    var_22 = ((((var_9 ? (arr_1 [11] [11]) : (arr_9 [i_1] [i_2] [i_2]))) - -95));

                    for (int i_4 = 3; i_4 < 23;i_4 += 1)
                    {
                        var_23 = 94;
                        var_24 = -95;
                    }
                }
            }
        }
        var_25 = (63 * var_10);
    }
    var_26 -= 110;

    /* vectorizable */
    for (int i_5 = 1; i_5 < 23;i_5 += 1)
    {
        arr_17 [i_5] = (arr_10 [i_5 + 1] [i_5 + 1] [i_5 - 1]);
        arr_18 [i_5] = (((arr_14 [i_5]) ? var_18 : (arr_16 [13])));
    }
    /* vectorizable */
    for (int i_6 = 4; i_6 < 15;i_6 += 1) /* same iter space */
    {
        arr_22 [i_6] = 85;
        var_27 = (min(var_27, ((((arr_9 [i_6] [i_6] [i_6]) ? (arr_13 [i_6] [i_6 + 2]) : ((12004153842144972344 ? 4294967295 : -1816779031)))))));
        var_28 ^= var_5;
    }
    /* vectorizable */
    for (int i_7 = 4; i_7 < 15;i_7 += 1) /* same iter space */
    {
        arr_27 [i_7] = ((~(arr_19 [i_7])));
        arr_28 [i_7] [i_7] = (((((6442590231564579264 ? (arr_19 [i_7]) : 16458344433435991990))) && (arr_11 [19] [6] [19] [i_7 - 3])));
        var_29 += (((-(arr_8 [i_7]))));
    }
    #pragma endscop
}
