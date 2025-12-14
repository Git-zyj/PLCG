/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51387
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51387 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51387
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max((((-32767 - 1) ? var_1 : var_7)), (min(11512, 2080768))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                var_13 -= (arr_0 [i_1]);
                var_14 = (max(-2531, ((((min((arr_1 [18] [18]), 41))) ? ((var_8 ? (arr_2 [i_0]) : 112)) : ((max(32767, (arr_1 [i_0] [i_0]))))))));
            }
        }
    }
    var_15 = ((((((8918006163399312956 ? 0 : 1)) << ((((-7630 ? var_5 : 56256)) + 17063)))) * (((((min(var_6, var_3))) && (((-11512 ? var_1 : var_0))))))));

    for (int i_2 = 4; i_2 < 24;i_2 += 1)
    {
        var_16 = ((((min(1, (~-11512)))) ? 255 : 59));

        for (int i_3 = 4; i_3 < 24;i_3 += 1) /* same iter space */
        {
            var_17 ^= (arr_8 [i_2]);
            arr_10 [i_3] [18] = ((((max((((arr_8 [i_3 - 3]) ? var_8 : (arr_9 [i_2]))), -50))) || ((((arr_5 [i_3 - 1] [i_3]) ? ((min(47495, (arr_4 [i_2 - 1])))) : (arr_9 [i_2]))))));
        }
        for (int i_4 = 4; i_4 < 24;i_4 += 1) /* same iter space */
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 22;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 23;i_6 += 1)
                {
                    {
                        arr_17 [i_5] [i_4] [i_4] [i_4] [i_6 + 1] = ((2712665873933698082 ? 1 : ((((((arr_12 [i_4]) ? 12981090912071171382 : 10647196261246552521))) ? (max(var_3, (arr_8 [i_4]))) : (((21 ? (-127 - 1) : 247)))))));

                        for (int i_7 = 2; i_7 < 23;i_7 += 1) /* same iter space */
                        {
                            var_18 &= 4809542252284200294;
                            var_19 += (((arr_15 [i_7 - 1] [i_7] [i_7]) ? (arr_9 [i_5]) : ((((9 & (arr_5 [i_6 - 1] [i_5])))))));
                        }
                        for (int i_8 = 2; i_8 < 23;i_8 += 1) /* same iter space */
                        {
                            arr_23 [i_2 - 2] [i_5] [i_5] [i_5] [i_8] [i_8] = 11512;
                            var_20 = (arr_15 [i_6] [i_4] [1]);
                        }
                    }
                }
            }
            var_21 = ((-(((((arr_9 [i_4]) ? 10922034049551073217 : (arr_22 [20] [i_4] [20] [7] [i_4 - 2] [8] [i_4]))) - (arr_11 [i_4 - 2] [i_4 - 2] [i_4 - 2])))));
            var_22 = (!11511);
            var_23 = (min(((((var_4 ? var_6 : (arr_6 [i_2 - 3]))) + (arr_7 [i_2]))), 0));
        }
        var_24 = ((((max((arr_22 [i_2] [i_2] [i_2 - 1] [1] [1] [i_2] [23]), (!var_3)))) ? (arr_4 [i_2 + 1]) : -11512));
    }
    for (int i_9 = 1; i_9 < 18;i_9 += 1)
    {
        var_25 = (max(((0 ? (arr_16 [i_9 + 2]) : (arr_13 [i_9 + 1] [i_9 - 1] [i_9]))), (arr_18 [i_9] [i_9])));
        var_26 = (!88);
        var_27 = (((arr_2 [i_9]) ? (((arr_22 [i_9] [i_9] [i_9] [i_9] [i_9 + 1] [i_9 - 1] [i_9]) % var_5)) : (((max((165 <= var_9), (max(-11513, 91))))))));
    }
    for (int i_10 = 4; i_10 < 9;i_10 += 1)
    {
        var_28 = (arr_2 [i_10]);
        arr_29 [i_10] = (((((11491 * ((0 ? 134 : 255))))) ? (241 * 91) : -6252906585249086505));
    }
    for (int i_11 = 0; i_11 < 1;i_11 += 1)
    {
        arr_34 [i_11] = (((((-(arr_8 [i_11])))) ? (((max(var_5, 40)))) : (((max(74, var_11))))));
        /* LoopNest 2 */
        for (int i_12 = 3; i_12 < 19;i_12 += 1)
        {
            for (int i_13 = 0; i_13 < 1;i_13 += 1)
            {
                {
                    var_29 = (((arr_19 [9] [i_11] [i_12] [i_12] [i_13] [i_13]) ? var_11 : (((((18446744073709551615 ? 15 : (arr_32 [i_11] [i_12 + 2])))) - ((var_0 + (arr_5 [i_13] [i_13])))))));
                    var_30 ^= ((1 ? 255 : 5));
                    var_31 ^= 4294967295;
                    arr_41 [i_13] = (arr_0 [i_12 - 1]);
                }
            }
        }
    }
    var_32 = (!(!var_8));
    #pragma endscop
}
