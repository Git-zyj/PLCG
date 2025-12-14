/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189914
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189914 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189914
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~var_8) ? 1 : (max(((9769 ? 1 : 34452)), -1024)));
    var_13 = var_9;
    var_14 = ((~(max(((2010471172 ? 40321 : -1024)), (!var_9)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = -6218;

        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            arr_7 [i_0] [i_1] [i_1] = ((((-6208 ? 1 : (arr_2 [i_0]))) == (arr_2 [i_0])));

            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                arr_10 [i_2] [i_1] [i_2] &= (((arr_0 [i_0] [i_1]) >> (16383 - 16371)));
                var_15 &= 9655889793803700330;
            }
            var_16 = (max(var_16, ((((arr_1 [i_0]) ? (arr_5 [20] [i_1]) : -1024)))));

            for (int i_3 = 0; i_3 < 22;i_3 += 1) /* same iter space */
            {
                var_17 = (0 >> -6236);
                arr_13 [i_0] [i_1] [i_3] [i_3] = ((-119 ? -2147483643 : (((34452 ? 6223 : (arr_3 [i_0]))))));
            }
            for (int i_4 = 0; i_4 < 22;i_4 += 1) /* same iter space */
            {
                arr_17 [i_1] [i_4] = ((34446 ? 34466 : ((0 ? (arr_3 [i_0]) : -6205))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 21;i_5 += 1)
                {
                    for (int i_6 = 3; i_6 < 20;i_6 += 1)
                    {
                        {
                            arr_26 [i_1] [i_4] [i_5] [i_6] = 65535;
                            var_18 = -var_4;
                            arr_27 [i_0] [i_0] [i_0] [18] [i_0] |= ((((((-2147483647 - 1) ? (arr_5 [12] [i_1]) : 31065))) ? ((((arr_8 [i_1] [i_1] [i_0]) ? 31077 : var_2))) : -1246961251594386559));
                            var_19 = (min(var_19, ((!(-8 && 241)))));
                            var_20 = (arr_25 [i_0] [i_1] [i_5 + 1] [i_6 + 2] [i_6] [i_0] [i_6]);
                        }
                    }
                }
                var_21 = (((((arr_2 [i_4]) && (arr_8 [i_4] [i_1] [i_0]))) ? (arr_1 [i_0]) : (arr_25 [i_4] [i_1] [1] [i_1] [i_1] [i_1] [i_0])));
            }
        }

        for (int i_7 = 1; i_7 < 21;i_7 += 1)
        {
            var_22 = (max(var_22, ((((((40232 >> (532676608 - 532676581)))) ? 10 : 1056964608)))));
            var_23 = (max(var_23, 34487));
            var_24 = 9970875496076456673;
        }
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 21;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 0;i_9 += 1)
            {
                {
                    arr_35 [i_0] [i_8 - 2] = 4294967279;
                    var_25 = ((8052 ? 63 : 1));
                }
            }
        }
        var_26 = (((((var_5 ? var_1 : -1785334467))) ? (arr_20 [i_0] [i_0] [i_0]) : -6209));
    }
    #pragma endscop
}
