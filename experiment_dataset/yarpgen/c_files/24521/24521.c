/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24521
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = arr_0 [i_0 + 2] [i_0 + 1];
        var_14 = (min(var_14, ((min(((min(26354, -12953))), 9223372036854775807)))));

        for (int i_1 = 2; i_1 < 17;i_1 += 1) /* same iter space */
        {
            arr_5 [i_0] [i_1] = ((-1 < 1) << (((max((((4294967295 ? -933122164 : 255))), -6)) + 24)));
            var_15 = (((!-20) ? (arr_3 [i_1]) : -444353300));
        }
        for (int i_2 = 2; i_2 < 17;i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] = 1;
            arr_9 [i_0] [i_0] = (arr_0 [i_2] [i_2]);
        }
        for (int i_3 = 2; i_3 < 17;i_3 += 1) /* same iter space */
        {
            arr_12 [i_0] [i_3] = (((((min(47644, var_10)) ? (min(2147483647, 2147483647)) : (var_8 == 449729057)))));
            var_16 = (~((~(max((arr_10 [i_0]), (arr_4 [i_0] [i_0]))))));
        }
        var_17 = (min(var_17, ((((((1 / ((47618 ? (arr_6 [i_0]) : var_0))))) ? 6 : (min(-926639387, ((246 ? (arr_7 [i_0]) : 1)))))))));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 19;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 19;i_5 += 1)
            {
                {
                    var_18 = ((((((arr_17 [i_0] [i_0 - 2] [i_0 - 2]) | 316740646))) / (max((min(-8891111671945981567, 253)), ((max(var_5, 2026836529)))))));
                    var_19 = (arr_16 [i_0 + 2] [i_0]);
                    arr_19 [i_0] [i_4] [i_4] = ((((min((min(358936898, 0)), 2026836529))) ? ((9223372036854775807 / (((358936875 >> (64829 - 64825)))))) : 17892));
                    var_20 = ((+((~((65520 ? (arr_1 [i_0 + 2]) : 44013))))));
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        var_21 |= ((((((arr_1 [i_6]) ? (arr_1 [i_6]) : (arr_1 [i_6])))) ? -4107 : ((228 ? (arr_1 [i_6]) : 560372761))));
        arr_23 [i_6] [i_6] = ((((9223372036854775807 ? 130 : -21)) & ((((var_10 * 1) ? (arr_18 [i_6]) : var_7)))));
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 7;i_7 += 1)
    {
        var_22 = (((arr_25 [i_7 + 2] [i_7]) ? -689575879 : (!-24732)));
        var_23 = arr_20 [i_7 + 3];
    }
    var_24 = ((var_2 ? (((var_6 / ((var_13 ? var_6 : var_11))))) : (min(1, ((-2026836530 ? -8860615760246289803 : 2740532353878562041))))));
    #pragma endscop
}
