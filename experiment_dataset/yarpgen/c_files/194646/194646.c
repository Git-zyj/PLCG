/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 |= (!5089012709942304472);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = ((((arr_1 [i_0] [i_0]) & (max(2361207933, 8917508779431994209)))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 12;i_3 += 1)
                {
                    {
                        arr_13 [i_1] [i_2] = min(((((arr_11 [i_3] [i_3] [i_3] [i_3 - 1] [i_3]) == (arr_8 [i_3 - 2] [i_3 - 2] [i_1 + 2])))), var_18);
                        arr_14 [i_0] [i_0] [i_0] [i_0] = (!-7824);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_19 [i_4] [i_4] = (arr_15 [i_4]);
        arr_20 [i_4] = (((arr_18 [i_4] [i_4]) >= (arr_18 [i_4] [i_4])));
        arr_21 [i_4] = (!var_10);
    }
    var_20 = (((((-(!3603261455)))) >= (min(var_3, var_2))));

    for (int i_5 = 0; i_5 < 17;i_5 += 1)
    {
        arr_25 [i_5] = (max((((~(arr_15 [i_5])))), (arr_17 [i_5] [i_5])));

        for (int i_6 = 0; i_6 < 17;i_6 += 1)
        {
            /* LoopNest 3 */
            for (int i_7 = 2; i_7 < 16;i_7 += 1)
            {
                for (int i_8 = 0; i_8 < 17;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 17;i_9 += 1)
                    {
                        {
                            arr_37 [i_9] [i_9] = (max((arr_33 [i_6]), (arr_17 [i_5] [i_5])));
                            arr_38 [i_6] |= ((-(((5033609043957053163 % 1) ? var_14 : (min(var_2, (arr_17 [i_5] [i_5])))))));
                        }
                    }
                }
            }
            arr_39 [1] [i_6] [i_6] = ((((((arr_27 [i_5] [i_6] [i_6]) * (arr_27 [i_5] [10] [i_5])))) ? ((((var_9 ? (arr_24 [i_5] [i_5]) : (arr_26 [i_5] [0] [i_6]))))) : (arr_15 [i_6])));
            arr_40 [i_5] = ((~(~53)));
        }
        arr_41 [i_5] = 3603261463;
        arr_42 [i_5] = (!-101);
    }
    #pragma endscop
}
