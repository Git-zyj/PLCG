/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230249
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230249 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230249
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 &= ((((max(-95, var_4))) != var_9));

    for (int i_0 = 0; i_0 < 17;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                for (int i_3 = 4; i_3 < 16;i_3 += 1)
                {
                    {
                        arr_9 [i_2] [i_2] [i_2] [i_3] = (max((((~((min((arr_1 [i_0]), 101)))))), (arr_5 [5] [i_1 + 1] [i_2] [i_2])));
                        arr_10 [i_3] [i_0] [i_2] [i_0] [i_3] [i_0] = (((max((arr_5 [1] [i_2] [i_3 - 3] [i_3 - 2]), 7)) - (max(1, ((1 ? 13291882609555779329 : 1802689112))))));
                    }
                }
            }
        }
        var_17 *= (max(((-(~1926171591))), ((((((!(arr_5 [15] [i_0] [i_0] [i_0])))) % (arr_1 [i_0]))))));
        var_18 = 1610443537;
        var_19 = ((arr_8 [1] [i_0] [i_0] [i_0] [i_0]) % (arr_0 [i_0] [i_0]));
    }
    for (int i_4 = 0; i_4 < 17;i_4 += 1) /* same iter space */
    {
        arr_13 [4] [i_4] = (((arr_8 [16] [16] [i_4] [i_4] [8]) + (arr_8 [12] [i_4] [i_4] [i_4] [16])));
        /* LoopNest 2 */
        for (int i_5 = 2; i_5 < 13;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 17;i_6 += 1)
            {
                {
                    var_20 = (min(var_20, ((~(((arr_0 [i_5 - 2] [i_5 - 1]) % 1))))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 17;i_7 += 1)
                    {
                        for (int i_8 = 0; i_8 < 17;i_8 += 1)
                        {
                            {
                                var_21 = (min(var_21, (((((((arr_6 [i_8] [i_4]) >= (arr_14 [2]))) ? (((((arr_14 [14]) <= 15784)))) : 4598))))));
                                arr_25 [i_5] [i_8] [i_6] [i_5] [i_8] [i_4] [i_6] = 329718479;
                            }
                        }
                    }
                }
            }
        }
        arr_26 [10] = (arr_4 [i_4] [i_4] [i_4]);
        arr_27 [i_4] = (((((min((arr_6 [i_4] [4]), (arr_23 [i_4] [i_4] [i_4] [i_4] [4])))) < (max((arr_0 [i_4] [i_4]), (arr_18 [i_4] [i_4] [i_4] [15]))))));
        /* LoopNest 3 */
        for (int i_9 = 0; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 2; i_10 < 14;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_22 = (-82 >= 15781);
                        arr_36 [i_11] [i_11] = (arr_14 [i_11]);
                    }
                }
            }
        }
    }
    var_23 = var_7;
    #pragma endscop
}
