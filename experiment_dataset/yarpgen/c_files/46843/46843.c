/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46843
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46843 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46843
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~-20709);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] [i_0] = ((var_5 + (arr_1 [i_0])));
        var_19 = var_2;
        var_20 = (!var_10);
        arr_4 [18] = var_16;
    }
    for (int i_1 = 0; i_1 < 23;i_1 += 1) /* same iter space */
    {

        for (int i_2 = 0; i_2 < 23;i_2 += 1) /* same iter space */
        {
            arr_12 [6] [i_2] [i_2] = 123;
            /* LoopNest 3 */
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 23;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        {
                            var_21 = (min(var_21, -21248));
                            var_22 = 7838097436148425137;
                        }
                    }
                }
            }
            var_23 = ((~(arr_5 [i_1])));
            /* LoopNest 3 */
            for (int i_6 = 4; i_6 < 22;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 23;i_7 += 1)
                {
                    for (int i_8 = 4; i_8 < 21;i_8 += 1)
                    {
                        {
                            var_24 = (((20709 * var_6) || var_7));
                            arr_28 [19] [14] [10] [i_7] [14] [i_8] [i_8 + 2] = (((((!(arr_21 [i_6 + 1] [i_6 - 4] [i_6 - 3] [i_8 + 2])))) & (arr_26 [i_1] [i_2] [i_6] [i_8 - 4] [i_6 - 3])));
                            var_25 = (min(var_25, 237));
                        }
                    }
                }
            }
        }
        for (int i_9 = 0; i_9 < 23;i_9 += 1) /* same iter space */
        {
            var_26 = var_17;
            var_27 = ((~((-(arr_23 [i_1] [i_1] [i_9] [i_9] [i_9])))));
        }
        var_28 = (min(var_28, var_1));
        var_29 = (min(var_29, ((min(((-(arr_11 [i_1] [i_1]))), ((min((!var_11), var_16))))))));
        var_30 = (var_15 >= -var_15);
    }
    #pragma endscop
}
