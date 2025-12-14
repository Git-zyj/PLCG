/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231257
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231257 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231257
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((((max(var_4, var_7))) ? var_3 : -29040)) >= var_3));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_13 = (max(var_13, var_10));
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_14 = (max(var_14, ((max((((arr_4 [i_1] [i_0 - 1] [i_2 - 1]) ? (arr_4 [i_1] [i_0 + 1] [i_2 - 1]) : var_3)), (((arr_4 [i_1] [i_0 - 1] [i_2 - 1]) ? var_6 : (arr_4 [i_1] [i_0 - 1] [i_2 - 1]))))))));
                            arr_14 [i_0] [i_0] = var_9;
                        }
                    }
                }
                arr_15 [i_1] [i_1] |= var_0;
            }
        }
    }
    var_15 = var_10;

    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_16 = ((+(((var_8 / var_10) ? (!var_10) : var_1))));

        /* vectorizable */
        for (int i_5 = 2; i_5 < 8;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 10;i_6 += 1)
            {
                var_17 = (((((var_6 - (arr_18 [i_4])))) ? var_4 : var_5));
                arr_25 [i_4] = (((((-29044 ? 29039 : -26055))) ? var_3 : (!var_10)));
            }
            for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
            {
                var_18 *= (!var_3);
                arr_28 [i_4] = (((var_5 / var_11) && (-29044 || 1)));
            }
            for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
            {
                var_19 += ((6 ? 1 : -1));
                arr_32 [i_4] [i_5] [i_5] [i_4] = (-(var_7 >= var_5));
                /* LoopNest 2 */
                for (int i_9 = 1; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 10;i_10 += 1)
                    {
                        {
                            var_20 = (((arr_10 [24] [i_5 - 1] [i_5] [24] [i_9 - 1] [6]) | ((var_3 >> (var_8 - 41537)))));
                            arr_37 [i_4] [1] [i_9] [i_9 - 1] [i_4] [i_8] = (~var_0);
                            var_21 = (((arr_12 [i_9 - 1] [i_5] [i_4] [i_5 - 1]) ? (arr_7 [i_5 + 1] [i_5] [16]) : (arr_26 [i_5] [i_5] [5] [i_5 - 1])));
                        }
                    }
                }
            }
            for (int i_11 = 0; i_11 < 10;i_11 += 1)
            {
                arr_42 [i_11] [i_4] [i_4] = ((-(arr_41 [i_5 - 2] [i_11])));
                var_22 = (min(var_22, (((-29045 && (arr_6 [10] [10]))))));
            }
            var_23 = var_9;
        }
    }
    /* vectorizable */
    for (int i_12 = 0; i_12 < 20;i_12 += 1)
    {
        arr_45 [i_12] [i_12] = ((1 ? 0 : 0));
        arr_46 [i_12] = ((((((arr_7 [i_12] [23] [i_12]) ? var_9 : var_7))) ? (arr_7 [i_12] [i_12] [i_12]) : (var_8 / var_1)));
    }
    var_24 = var_2;
    #pragma endscop
}
