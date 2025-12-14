/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31236
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31236 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31236
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_5, ((-(var_10 || 7800)))));
    var_12 = -16363881115568165029;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 25;i_0 += 1) /* same iter space */
    {
        var_13 = (0 && -var_7);
        var_14 = 0;

        for (int i_1 = 0; i_1 < 25;i_1 += 1) /* same iter space */
        {
            var_15 = (17773 << 1);
            var_16 = (((((1 << (var_1 + 3712102668702624100)))) ? (!0) : (arr_2 [i_0])));
        }
        for (int i_2 = 0; i_2 < 25;i_2 += 1) /* same iter space */
        {
            var_17 = (((arr_3 [i_0] [i_2] [i_2]) ? var_4 : 3709995609));
            arr_6 [i_0] = (arr_1 [i_2] [i_2]);
        }
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                arr_11 [i_0] [i_0] [10] [i_0] = ((-(arr_8 [i_3] [i_0] [i_3])));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 25;i_5 += 1)
                {
                    for (int i_6 = 2; i_6 < 24;i_6 += 1)
                    {
                        {
                            var_18 = ((1 ? var_10 : (arr_12 [i_6 + 1] [2] [2] [0] [i_6] [2])));
                            arr_19 [i_0] [i_5] [i_0] [11] [i_3] [i_0] = (((arr_9 [i_6 - 1]) ? (arr_9 [i_6 - 2]) : (arr_9 [i_6 - 2])));
                            arr_20 [12] [i_0] [i_4] [6] [21] = (arr_13 [i_0]);
                        }
                    }
                }
            }
            var_19 = (min(var_19, ((((arr_10 [0] [i_3] [0]) - (arr_10 [i_0] [i_0] [1]))))));
            var_20 = (arr_10 [i_0] [i_0] [i_0]);
        }
        var_21 = (((((1 | (arr_3 [i_0] [i_0] [i_0])))) ? (arr_15 [i_0] [i_0] [i_0] [i_0] [i_0]) : -1));

        for (int i_7 = 1; i_7 < 24;i_7 += 1)
        {
            var_22 ^= -6331068963263923159;
            var_23 = ((~(arr_4 [i_0] [i_7 + 1] [i_7])));
        }
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            var_24 ^= ((-(arr_10 [i_0] [i_8] [22])));
            var_25 = (((arr_16 [i_0] [i_8]) ? var_7 : 27219));

            for (int i_9 = 1; i_9 < 1;i_9 += 1)
            {
                var_26 ^= var_0;
                var_27 = (min(var_27, (~1076432172)));
                /* LoopNest 2 */
                for (int i_10 = 1; i_10 < 24;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 25;i_11 += 1)
                    {
                        {
                            var_28 = var_5;
                            var_29 = (!-2118716727939213273);
                        }
                    }
                }
                var_30 = ((arr_29 [i_0] [i_0] [i_9 - 1]) & var_2);
            }
            for (int i_12 = 0; i_12 < 25;i_12 += 1)
            {
                arr_40 [i_0] [i_0] [i_0] [i_0] = ((!(arr_31 [i_12] [i_12] [2] [i_12] [i_0] [i_8])));
                var_31 = (arr_1 [i_0] [i_8]);
                var_32 += (1 | (arr_9 [i_12]));
            }
        }
    }
    /* vectorizable */
    for (int i_13 = 0; i_13 < 25;i_13 += 1) /* same iter space */
    {
        var_33 = (((arr_32 [i_13] [i_13] [1] [1]) ? 71 : var_0));
        var_34 = (max(var_34, 345396515));
    }
    #pragma endscop
}
