/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50523
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, var_6));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        arr_3 [i_0] |= (!1);
        arr_4 [i_0] [i_0] = ((((min(var_6, ((51288 ? var_7 : 14247))))) ? (((!(((32767 / (arr_0 [i_0] [i_0]))))))) : (((!(((1 ? var_4 : (arr_2 [i_0])))))))));
        var_14 -= 24234;
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 16;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_4] [i_3] [i_1] = ((((!(arr_8 [i_1] [5]))) ? (arr_6 [i_1] [i_2]) : var_11));
                        arr_17 [4] [i_1] [i_4] [4] [i_2] = (!var_10);
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 16;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 16;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 1;i_7 += 1)
                {
                    {
                        arr_25 [i_1] [i_5] [i_6] [i_5] = (((((36107 ? 1 : 0))) ? 1267655329 : (arr_5 [i_1])));
                        arr_26 [i_1] [i_5] [i_6] [i_7] [3] = (((arr_14 [i_7] [i_6] [i_6] [i_6] [i_5] [i_1]) ? (arr_2 [i_1]) : (var_11 ^ var_4)));

                        for (int i_8 = 0; i_8 < 0;i_8 += 1)
                        {
                            arr_29 [i_8] = ((-(arr_28 [i_8] [i_8 + 1] [i_8] [i_8 + 1] [i_7])));
                            var_15 += (!1);
                        }
                        for (int i_9 = 1; i_9 < 13;i_9 += 1)
                        {
                            arr_32 [i_1] [i_5] [i_6] [i_6] [i_5] = var_9;
                            var_16 += (1023 % 65514);
                        }
                    }
                }
            }
        }
        var_17 *= (((arr_8 [i_1] [i_1]) ? (arr_7 [i_1]) : (((arr_1 [3]) ? (arr_8 [i_1] [14]) : var_1))));
        arr_33 [3] = 1;
    }
    #pragma endscop
}
