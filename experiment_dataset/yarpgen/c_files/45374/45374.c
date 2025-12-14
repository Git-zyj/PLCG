/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45374
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45374 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45374
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_4 [i_0] [i_0] = ((((min(var_12, -var_3))) ? ((var_2 ? 406248426 : ((var_5 ? var_3 : var_12)))) : ((12105319057934128662 ? 6341425015775422953 : (arr_2 [i_0] [i_0])))));

        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            arr_7 [i_0] [13] [i_1] = (arr_3 [i_0]);
            arr_8 [6] = ((((min(var_9, (arr_1 [i_0] [i_0])))) ? (((arr_1 [i_0] [i_0]) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_1]))) : (~var_10)));
        }
        for (int i_2 = 2; i_2 < 19;i_2 += 1)
        {
            var_15 = (min(((0 ? -13023 : 6341425015775422953)), (((arr_2 [i_2 - 2] [i_2 - 2]) ? 6341425015775422954 : (arr_2 [i_0] [i_2 + 1])))));
            var_16 += ((!((((12105319057934128662 || var_10) | (6341425015775422953 & -1))))));
            var_17 = -6341425015775422953;
            arr_11 [i_2] = ((6341425015775422953 ? 80 : (-127 - 1)));
        }
        /* vectorizable */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            var_18 -= ((var_3 >= (((var_5 ? var_5 : var_11)))));
            arr_14 [1] [i_3] [1] = (var_8 >= var_8);

            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 20;i_5 += 1)
                {

                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        arr_22 [i_4] [i_4] [i_4] [i_5] [i_5] = (((arr_15 [11] [i_3] [1]) / 1));
                        arr_23 [i_0] [i_0] [i_0] [i_5] [i_6] = var_4;
                        var_19 = ((-((var_10 ? (arr_19 [i_4] [i_4] [i_4] [i_4]) : 0))));
                        var_20 = (!var_7);
                    }
                    var_21 = ((-(var_9 && var_1)));
                    arr_24 [i_3] = ((!(arr_18 [i_5] [i_0] [i_0] [i_0] [i_0] [i_0])));
                    arr_25 [i_0] [i_0] [i_3] [i_0] [i_5] = 134217696;
                }
                /* LoopNest 2 */
                for (int i_7 = 1; i_7 < 17;i_7 += 1)
                {
                    for (int i_8 = 3; i_8 < 17;i_8 += 1)
                    {
                        {
                            arr_30 [i_0] [i_3] [i_7] [15] [i_8 - 2] [i_3] = -12105319057934128663;
                            arr_31 [i_7 + 1] = (~134217696);
                        }
                    }
                }
                var_22 += (((!var_9) & ((8 >> (var_8 - 14704125417180415837)))));
            }
            var_23 += (arr_17 [i_0]);
        }
    }
    /* LoopNest 2 */
    for (int i_9 = 0; i_9 < 24;i_9 += 1)
    {
        for (int i_10 = 0; i_10 < 24;i_10 += 1)
        {
            {
                arr_39 [i_10] [i_10] = (min(((((max(38762, 6341425015775422954))) ? 4822200350272733506 : 1)), (arr_34 [i_9])));
                /* LoopNest 2 */
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 24;i_12 += 1)
                    {
                        {
                            arr_46 [i_9] [i_9] [i_11] [i_12] [i_11] [i_12] = var_5;
                            var_24 = (min(1, 12105319057934128662));
                        }
                    }
                }
                var_25 ^= ((~(max(65535, 4822200350272733506))));
            }
        }
    }
    var_26 = (((((var_9 ? (~-97) : (var_12 == var_9)))) ? (!34766) : 65535));
    var_27 = var_12;
    #pragma endscop
}
