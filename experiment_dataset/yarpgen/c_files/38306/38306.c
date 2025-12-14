/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38306
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38306 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38306
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 &= var_4;

    /* vectorizable */
    for (int i_0 = 4; i_0 < 23;i_0 += 1)
    {
        var_21 = 0;

        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {

            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {

                for (int i_3 = 3; i_3 < 23;i_3 += 1)
                {
                    arr_10 [i_3] [i_0 - 3] [i_1] [13] [i_3] [13] = (((arr_6 [i_2] [1]) ? (((var_13 ? -1840270222 : var_19))) : 3201262056280086027));
                    arr_11 [i_3] [i_0 + 1] [i_0] [i_0 - 4] = (var_12 << 17);
                }
                for (int i_4 = 0; i_4 < 25;i_4 += 1)
                {
                    arr_15 [i_1 - 1] [i_1 + 1] [i_1 - 1] [i_1] [i_1] [i_4] = (((arr_3 [7] [i_1]) ? 3809029661 : 1));
                    var_22 *= -183033800;
                    var_23 = ((var_4 ? (arr_14 [i_0 - 2] [i_1 + 2]) : 0));
                    var_24 &= (1 && var_7);
                }
                var_25 = (((arr_8 [i_0 - 4] [i_0 - 4] [i_0]) ? (arr_12 [10] [i_2 - 1] [i_0 - 3] [i_0] [10]) : (arr_8 [i_0 - 2] [i_0] [i_0 - 1])));

                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    var_26 = var_12;
                    arr_18 [i_1] [i_2 - 1] = var_3;
                    var_27 = (arr_14 [i_0] [i_0]);
                    arr_19 [i_0 - 2] [i_1] [i_1 + 1] [i_2 - 1] [i_5] [19] = (((arr_2 [i_0] [i_0 - 3] [6]) ? ((var_14 ? var_12 : (arr_17 [24] [24] [i_2] [24] [i_5]))) : 36));
                }
                var_28 = 1;
                /* LoopNest 2 */
                for (int i_6 = 1; i_6 < 22;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 25;i_7 += 1)
                    {
                        {
                            arr_26 [i_0] [i_1] [i_2] [22] = ((1 ? (arr_16 [i_0] [i_1 - 1] [i_2 - 1] [i_6 - 1]) : (arr_4 [i_6 + 3] [i_2 - 1] [i_0 - 3] [i_0])));
                            arr_27 [i_2] [i_1] [i_2 - 1] = (1 == ((1 ? (arr_22 [i_7] [i_0] [i_2] [i_0]) : 3919528107)));
                            var_29 = ((((((arr_22 [13] [13] [i_2] [13]) ? 1 : 8440434657456052518))) ? (arr_3 [i_1 - 1] [i_6 + 3]) : (arr_12 [i_0 - 3] [i_0 - 3] [i_0] [i_0 - 3] [i_7])));
                        }
                    }
                }
            }
            for (int i_8 = 2; i_8 < 22;i_8 += 1)
            {
                arr_30 [i_0 - 4] [i_0 - 4] [i_8] [i_0 - 2] = ((arr_28 [i_1 - 1]) ^ (!3450220390064606818));
                /* LoopNest 2 */
                for (int i_9 = 2; i_9 < 23;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 1;i_10 += 1)
                    {
                        {
                            var_30 -= ((var_19 ? (arr_22 [i_9 - 1] [i_1] [i_8 - 2] [24]) : (arr_22 [i_9 + 1] [i_1] [i_8 + 3] [i_9])));
                            var_31 ^= var_5;
                            arr_38 [i_10] [i_9] [i_1] [i_1] [i_0 - 2] = (((arr_25 [i_1] [2] [i_1 - 1] [i_1] [i_1 - 1]) ? (arr_36 [i_9 - 1] [i_9 + 1] [i_8] [i_9 + 2] [i_8 + 3]) : (arr_22 [i_1 + 1] [i_9 - 2] [i_9 + 1] [i_9 + 1])));
                        }
                    }
                }
            }
            var_32 = 261605076;
        }
        for (int i_11 = 0; i_11 < 25;i_11 += 1)
        {
            var_33 = (max(var_33, (1 % -26232)));
            var_34 = var_1;
            var_35 = ((arr_25 [i_0 - 3] [i_0 - 2] [i_0 + 1] [i_0 + 1] [i_0 - 2]) | ((3450220390064606818 ? 14996523683644944799 : 1843172414)));
            arr_42 [i_0] [i_11] = ((-(arr_28 [i_0 + 2])));
        }
    }
    #pragma endscop
}
