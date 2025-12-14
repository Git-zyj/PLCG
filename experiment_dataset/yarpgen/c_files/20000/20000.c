/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20000
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20000 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20000
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_14;

    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = max(var_13, 247);
        var_16 = ((~((var_11 ? (!var_7) : (arr_1 [i_0])))));
        arr_3 [i_0] = ((((((arr_0 [i_0]) || (arr_0 [i_0])))) + ((~(((arr_0 [i_0]) & -27))))));
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_2 = 1; i_2 < 18;i_2 += 1)
        {

            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                arr_13 [i_1] [i_2] [i_3] = ((((239 != (arr_4 [i_1]))) && (~1)));
                arr_14 [i_1] = (arr_12 [i_3 + 1]);
            }
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {

                for (int i_5 = 2; i_5 < 18;i_5 += 1)
                {
                    var_17 = 1;
                    var_18 = (-818 * var_11);
                }
                for (int i_6 = 0; i_6 < 19;i_6 += 1)
                {
                    arr_22 [i_1] [i_2] [i_2] [i_2] [i_4] [i_6] = (arr_5 [i_2 + 1]);
                    arr_23 [i_6] [i_2] [i_2] = -1;
                }
                arr_24 [i_1] [8] = (arr_7 [i_1] [i_1]);
            }
            var_19 = ((250 ? var_7 : (((arr_16 [i_1] [i_1] [i_1] [i_2]) ? var_9 : (arr_21 [i_1] [i_2])))));
        }
        var_20 = 0;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 19;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 1;i_8 += 1)
            {
                {
                    arr_32 [i_8] [i_7] = arr_18 [i_1] [i_7] [i_8] [i_8];
                    var_21 = (max(((((max(var_7, (arr_27 [i_1])))) ? 1 : var_5)), ((max(24788, ((max((arr_12 [6]), 247))))))));
                    var_22 = (min((((((-24803 ? (arr_11 [i_1] [i_1] [i_8]) : var_13))) ? (((arr_5 [i_1]) ? (arr_29 [i_1]) : 18446744073709551615)) : -24803)), (max((max((arr_28 [i_1] [i_1] [i_1]), var_12)), (-24775 != -5)))));
                }
            }
        }
        var_23 = arr_15 [i_1] [i_1] [i_1] [i_1];
    }
    /* vectorizable */
    for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
    {
        arr_36 [i_9] = (7113879985394050541 ? 6 : 16145);
        /* LoopNest 2 */
        for (int i_10 = 3; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 19;i_11 += 1)
            {
                {
                    var_24 = (~24775);
                    var_25 = 0;
                }
            }
        }
    }
    #pragma endscop
}
