/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209818
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209818 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209818
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = ((var_5 / ((-((105 ? 38718 : var_11))))));
    var_16 = var_4;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = ((~(arr_1 [i_0])));
        arr_3 [i_0] = (((arr_0 [i_0]) - (arr_0 [i_0])));
    }
    for (int i_1 = 1; i_1 < 12;i_1 += 1)
    {

        /* vectorizable */
        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = (max(var_17, (((18446744073709551615 < (1 * -1897821465))))));
            arr_9 [i_2] &= (arr_8 [i_1 + 2]);
            var_18 = -var_10;
        }
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    {
                        var_19 *= var_4;
                        arr_17 [i_1] [i_3] [i_4] [i_5] = ((arr_4 [i_1] [i_1 + 2]) - (max(1511032138192835219, (arr_13 [i_3 + 2] [i_3]))));
                        arr_18 [i_1 + 1] [i_3] = 1;
                    }
                }
            }
        }

        for (int i_6 = 4; i_6 < 11;i_6 += 1)
        {
            arr_22 [i_6] = (((((1 - (arr_6 [i_1 + 1])))) % -44));

            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                arr_25 [i_1] [i_6] [i_7] [i_7] = (!1);
                arr_26 [i_1] [i_6 + 3] [i_7] [i_6] = 0;
                var_20 = (min(var_20, (((+(((~43) & (((arr_20 [12] [i_6 - 1] [i_7]) ? (arr_15 [i_1] [i_6 + 3]) : var_14)))))))));
                /* LoopNest 2 */
                for (int i_8 = 1; i_8 < 13;i_8 += 1)
                {
                    for (int i_9 = 3; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_33 [i_1] [i_6 - 1] [i_7] [i_8] [i_9 - 2] [i_7] [i_6] = ((-((3459634878 ? -19853 : 102))));
                            var_21 = (arr_16 [i_1 + 2]);
                        }
                    }
                }
            }
            var_22 ^= (((((((min(1, -1))) || (~-55)))) + (arr_31 [8] [i_6 - 2] [i_1] [i_6 + 1] [i_6 - 2])));
        }
    }
    #pragma endscop
}
