/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((var_5 ? (min(1065856700334444692, ((var_6 ? var_7 : 86)))) : (((var_9 ? var_3 : ((-80 ? 127 : 4294967295)))))));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            var_11 = (arr_1 [3]);
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    for (int i_4 = 0; i_4 < 20;i_4 += 1)
                    {
                        {
                            var_12 += (arr_1 [1]);
                            arr_15 [i_1] [15] = ((!(arr_10 [i_1] [i_1 - 2])));
                            var_13 = var_0;
                            arr_16 [19] [i_1] [i_1] [19] [i_1 - 2] [i_1] = (var_6 ? (arr_8 [i_1] [i_1 + 1] [i_1 + 1]) : ((var_9 ? 36 : (arr_14 [i_3]))));
                            var_14 = (min(var_14, ((((((~(arr_10 [i_3] [i_3])))) ? 1795094060 : (arr_5 [i_2]))))));
                        }
                    }
                }
            }
            arr_17 [i_1] [i_1 - 2] = ((var_8 ? (arr_13 [i_1 - 1] [i_1] [i_1 - 1] [i_1] [i_1 - 1]) : 260046848));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
        {
            var_15 ^= (arr_4 [i_0] [i_0] [i_0]);
            arr_21 [i_0] = -38;
        }
        for (int i_6 = 0; i_6 < 20;i_6 += 1) /* same iter space */
        {

            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                arr_28 [10] = (arr_2 [i_6]);
                var_16 += (arr_27 [i_0] [i_0] [i_0]);
                arr_29 [i_0] [i_0] [i_0] = (arr_5 [13]);
            }
            var_17 ^= (max(var_2, (arr_5 [i_0])));
            var_18 = ((!((((arr_1 [i_0]) ? 9754135952326666541 : (arr_18 [i_0]))))));
            var_19 = max(2380493476, (((!(arr_14 [13])))));
        }
        for (int i_8 = 1; i_8 < 1;i_8 += 1)
        {
            var_20 = (min(var_20, 1));
            arr_32 [i_0] [3] = 31;
        }
        /* LoopNest 2 */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            for (int i_10 = 3; i_10 < 17;i_10 += 1)
            {
                {

                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        arr_40 [i_0] [i_0] = var_6;
                        var_21 = 8754183143786639131;
                    }
                    arr_41 [i_9] [i_0] = ((((!((max(var_3, (arr_23 [i_0] [i_0] [i_10])))))) && ((!(arr_4 [i_0] [i_10 + 2] [i_10])))));
                }
            }
        }
    }
    #pragma endscop
}
