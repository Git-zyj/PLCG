/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51199
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51199 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51199
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 ^= (min(var_2, var_12));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        var_20 = (min(var_20, (arr_2 [i_0] [i_0])));
        var_21 -= (65531 == 65522);
        var_22 = (max(var_22, (arr_2 [i_0] [i_0])));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((max((arr_0 [i_1] [i_1]), var_10)) != ((min((-2147483647 - 1), 2147483647)))));
        arr_6 [i_1] = 1;
        var_23 = (max(var_23, var_7));
        var_24 = (((arr_3 [0]) != -106));
    }
    for (int i_2 = 0; i_2 < 17;i_2 += 1) /* same iter space */
    {
        var_25 = (max((106 && var_6), ((max(111, var_15)))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 17;i_4 += 1)
            {
                {
                    var_26 -= (~var_5);
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 17;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                var_27 ^= ((~(((!(arr_15 [i_6 + 1] [i_6 - 3]))))));
                                var_28 = (max(var_28, ((max(((~(arr_11 [i_2] [i_3] [i_4]))), ((min((arr_9 [i_2] [i_3] [i_6 - 1]), (arr_0 [i_4] [i_2])))))))));
                                var_29 = (arr_14 [i_6 - 3] [i_6] [9] [i_6 - 3]);
                            }
                        }
                    }
                }
            }
        }
        var_30 += ((((((2147483643 / (-2147483647 - 1))))) != (arr_17 [i_2] [i_2] [i_2] [i_2] [i_2])));
        var_31 = (min(var_31, ((max((arr_13 [9] [i_2] [i_2] [i_2]), (max((arr_2 [i_2] [i_2]), (arr_2 [i_2] [i_2]))))))));
        arr_21 [i_2] = ((!(arr_10 [i_2] [i_2] [i_2])));
    }
    var_32 = var_15;
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 1; i_8 < 12;i_8 += 1)
        {
            {
                var_33 = (min(var_33, (((((max((arr_13 [i_7] [i_7] [i_7] [i_7]), (65515 + -106)))) % (arr_19 [i_8 + 2] [2] [i_8 + 2] [i_8 + 2]))))));
                var_34 += ((-42 ^ (min((1 && var_15), (arr_1 [i_8] [i_7])))));
                var_35 = (max(var_35, (arr_2 [i_8 + 1] [i_8])));
            }
        }
    }
    #pragma endscop
}
