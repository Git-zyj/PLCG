/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31204
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        var_14 = (min((((-24931 <= (arr_0 [i_0])))), (arr_0 [i_0])));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] = ((19416 ? (arr_0 [4]) : (arr_0 [i_0])));
                    var_15 = ((arr_5 [i_2 + 1] [i_2 + 3] [i_2 - 1] [i_2 - 2]) ? var_0 : (min(3794530752, 3794530752)));
                    var_16 ^= (min(((((arr_4 [i_2] [i_2 + 3] [i_2 - 1]) == (arr_7 [i_1] [i_2 - 1] [i_2 - 1] [i_2 + 2])))), ((((min(var_6, (arr_2 [i_2 + 2])))) ? ((var_13 ? (arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2 + 3]) : var_5)) : (arr_7 [i_0] [1] [i_1] [i_2 + 3])))));
                    var_17 = (((arr_7 [10] [i_0] [i_2 - 1] [i_2]) % (arr_5 [i_0] [3] [i_0] [3])));
                }
            }
        }
        var_18 = (((arr_4 [i_0] [i_0] [i_0]) ? (arr_0 [i_0]) : (arr_4 [i_0] [i_0] [i_0])));
        arr_9 [i_0] [i_0] = ((-(min((((0 ? 50 : 67))), var_8))));
        var_19 = ((((min(var_4, (arr_4 [i_0] [i_0] [0])))) ? ((((((-24923 && (arr_0 [i_0])))) == var_10))) : ((2087691836 ? 24931 : -2087691814))));
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 23;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 23;i_4 += 1)
        {
            {

                for (int i_5 = 0; i_5 < 23;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 21;i_7 += 1)
                        {
                            {
                                var_20 = (max(var_20, ((((arr_18 [i_3] [12] [i_5] [i_6] [i_5]) ? (arr_11 [i_3]) : ((((arr_15 [5] [i_6] [i_5]) == (arr_11 [i_7 - 1])))))))));
                                var_21 = (((((min(4213848869062219326, 3794530752))) ? var_9 : 69)) >> (((arr_16 [i_7 + 1] [i_6] [21] [i_3]) - 48)));
                                var_22 = (min((((max(var_8, (arr_22 [i_3] [i_3] [i_5] [i_3] [i_5]))) ^ ((var_4 ? -24931 : (arr_19 [i_3]))))), (((2087691832 == (var_4 + var_7))))));
                                var_23 ^= (arr_12 [i_7] [i_3]);
                            }
                        }
                    }
                    arr_23 [i_5] [i_5] [i_4] [i_3] = ((~((min((((!(arr_11 [i_3])))), var_12)))));
                    var_24 = (((arr_15 [i_3] [i_4] [i_5]) ? (arr_15 [i_5] [i_4] [i_3]) : (!-302144481)));
                }
                for (int i_8 = 0; i_8 < 23;i_8 += 1) /* same iter space */
                {
                    var_25 &= ((((min((((arr_25 [4] [i_4] [i_8]) ? (arr_21 [i_8]) : 14232895204647332290)), var_10))) ? (((var_5 ? -24921 : (arr_20 [i_3] [i_3])))) : var_9));
                    var_26 = ((((((arr_25 [i_3] [i_3] [i_3]) ? ((3530 ? (arr_20 [i_3] [i_4]) : var_0)) : ((~(arr_19 [i_3])))))) / (max((-7869853366021953063 * 0), 138))));
                    arr_27 [i_3] [i_4] [3] [i_8] = (arr_10 [i_3]);
                }
                for (int i_9 = 0; i_9 < 23;i_9 += 1)
                {
                    arr_30 [i_9] = (min(14232895204647332290, -4134563896055729135));
                    arr_31 [i_3] [i_3] = (arr_11 [i_9]);
                    arr_32 [i_3] [i_4] [i_9] = ((((((((var_12 ? var_5 : 2087691812))) ? (((arr_20 [0] [0]) | var_5)) : ((~(arr_16 [i_3] [i_4] [i_9] [i_9])))))) ? (max((arr_29 [i_3] [i_4] [i_9]), (min(var_10, 3683462051)))) : var_7));
                    var_27 = (arr_14 [i_3] [i_4] [i_4]);
                    var_28 = ((((var_11 && ((min(var_0, var_8))))) ? (((((2204563802 ? (arr_26 [i_3] [i_4] [i_3]) : (arr_29 [i_3] [i_3] [i_9])))) ? (min(var_6, var_7)) : ((min(-19416, 81))))) : ((min((arr_12 [i_3] [i_9]), (arr_11 [i_3]))))));
                }
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 23;i_10 += 1)
                {
                    for (int i_11 = 4; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 4; i_12 < 21;i_12 += 1)
                        {
                            {
                                var_29 = (((((((min(-4134563896055729144, (arr_11 [i_11 - 4])))) ? var_0 : (max(var_6, (arr_28 [i_3] [i_10] [i_3] [i_12 - 4])))))) ? var_4 : var_10));
                                arr_40 [i_3] [i_3] [i_3] [11] [i_11] [i_12 - 2] = var_3;
                                var_30 *= (min(var_5, (((arr_24 [i_12 - 2] [i_12] [i_12 - 2] [i_11 + 3]) ? (arr_24 [i_12 - 2] [i_12 - 2] [i_12 - 2] [i_11 - 3]) : (arr_24 [i_12 - 1] [i_12] [i_12 + 2] [i_11 - 3])))));
                            }
                        }
                    }
                }
                arr_41 [i_3] = (max(((min(var_2, var_13))), ((-4134563896055729147 / (arr_26 [i_4] [i_3] [i_3])))));
            }
        }
    }
    #pragma endscop
}
