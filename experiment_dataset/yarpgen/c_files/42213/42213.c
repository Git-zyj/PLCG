/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (((arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 2]) ? (arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 4]) : (arr_4 [i_0 + 1] [i_0 + 1] [i_1 + 1])));
            arr_7 [i_0] [i_0] = ((39031 ? 39031 : 139611588448485376));
        }
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_20 = (min((arr_2 [i_0] [i_2]), ((var_8 + (((arr_11 [i_0] [i_2] [i_2]) ? -1162413592 : 4160749568))))));
            var_21 = (((~134217728) ? (((~(((arr_4 [i_0] [i_2] [i_0]) ? (arr_0 [i_0] [i_0]) : (arr_11 [i_0] [i_2] [i_2])))))) : (min((((arr_4 [i_2] [i_0] [i_0]) + 4160749568)), (min(139611588448485376, (arr_10 [i_2])))))));
        }

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            var_22 += -var_0;
            arr_14 [i_0] [i_3] [i_3] = 1;
            arr_15 [i_3] = ((((((arr_3 [i_0 + 1] [i_3 - 1]) ? 139611588448485353 : (arr_3 [i_0 + 1] [i_3 - 1])))) ? (max(17353507040798026796, 10875238391951246991)) : var_19));
        }
        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_18 [i_0] [i_4] = (((0 ? var_12 : 134217728)));
            arr_19 [i_0] [i_4] = (0 && 56479);
        }
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            arr_22 [i_5] = (max(var_1, 1));
            var_23 &= ((!((var_13 && ((((arr_5 [i_0] [i_5]) ? -288747523 : var_11)))))));
            var_24 = (((((arr_2 [i_0] [i_0]) ? 65534 : (((arr_8 [i_5] [i_5] [i_5]) ? 65502 : (arr_5 [i_0] [i_5]))))) >> (((max((arr_11 [i_0] [i_0] [i_0]), ((var_0 ? (arr_16 [i_5] [i_5] [i_0]) : var_3)))) - 18446744073709551514))));
        }
    }
    for (int i_6 = 1; i_6 < 24;i_6 += 1)
    {
        arr_26 [i_6] = (((((64145 ? 39 : 1162413563))) || ((((~var_8) ^ (arr_25 [i_6 + 1] [i_6 + 1]))))));
        /* LoopNest 2 */
        for (int i_7 = 2; i_7 < 24;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 24;i_8 += 1)
            {
                {
                    arr_31 [i_7] [i_7] [i_7] [i_8] = (arr_24 [i_8]);
                    var_25 += ((4 ? (((arr_23 [i_8 + 1]) ^ (arr_23 [i_7 - 1]))) : ((((var_14 || var_3) || ((var_10 == (arr_29 [i_8] [i_7] [i_6]))))))));
                }
            }
        }
        var_26 = (min(var_26, (((-(((arr_29 [i_6] [i_6] [i_6 - 1]) ? (arr_29 [i_6] [i_6] [i_6 - 1]) : (arr_29 [i_6] [i_6] [i_6 - 1]))))))));
    }
    for (int i_9 = 0; i_9 < 14;i_9 += 1)
    {
        var_27 += 1162413592;
        var_28 = (arr_11 [i_9] [i_9] [i_9]);
    }
    var_29 = (min(var_29, (((var_8 + ((-var_11 ? 39031 : (var_6 || 1))))))));
    #pragma endscop
}
