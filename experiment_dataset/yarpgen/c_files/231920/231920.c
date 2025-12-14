/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231920
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_10 = (arr_0 [i_0] [12]);

                /* vectorizable */
                for (int i_2 = 3; i_2 < 19;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 19;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                arr_13 [i_3] [10] [i_2] [i_0] [i_4] = var_6;
                                var_11 = (min(var_11, 42));
                                var_12 = (max(var_12, (arr_2 [2] [i_3 - 3])));
                                arr_14 [i_0] [i_1] [i_0] = (((arr_5 [i_2 - 2] [i_0] [i_2 + 2] [i_2 + 4]) & (arr_9 [i_0 + 1] [i_0] [i_1] [i_2 - 3] [i_3] [i_3])));
                            }
                        }
                    }
                    arr_15 [2] [2] |= (!41);
                }
                for (int i_5 = 1; i_5 < 20;i_5 += 1)
                {
                    var_13 = (min(var_13, (((+(max((arr_3 [i_0] [i_1] [14]), (arr_3 [6] [i_1] [6]))))))));
                    var_14 = (max(var_14, (((+(((arr_5 [i_0] [14] [i_5] [i_5]) / -2921807423433154809)))))));
                    arr_18 [i_0] [i_0 + 2] [i_0] = (max((max(((min(var_2, 118657218))), ((var_8 ? -3189440545557655240 : (arr_6 [i_5 - 1] [i_5]))))), ((min(var_5, 148)))));
                }
                var_15 = 13032;
                var_16 = (((2462807593 * (((min((arr_10 [i_1] [i_1] [i_1] [i_1] [i_1]), 29374)))))));
                arr_19 [i_1] [i_1] [i_0] = (((2973163002 & (arr_8 [i_0]))) == (max(var_0, (arr_0 [i_0 - 1] [i_1]))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_6 = 3; i_6 < 9;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 11;i_7 += 1)
        {
            for (int i_8 = 1; i_8 < 9;i_8 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 11;i_9 += 1)
                    {
                        var_17 ^= arr_12 [i_6] [i_6] [i_6];
                        var_18 = (~77);
                        var_19 = 20;
                        var_20 = (min(var_20, var_4));
                    }
                    var_21 = (min((min(4176310078, (((8077 || (arr_7 [i_6] [i_7] [i_8 + 1])))))), 4176310095));
                    var_22 ^= (min(((max(255, (arr_11 [6] [i_8 - 1] [i_6 + 1] [0] [1] [i_6] [i_8])))), (((-1558 + 2147483647) >> (var_9 - 52411)))));
                    var_23 = ((((min(((((arr_24 [i_6] [i_7] [i_8]) && 118657218))), (~2654893845)))) || (1 == var_9)));
                    arr_32 [i_7] [i_7] [i_6] = ((min(57459, 40)));
                }
            }
        }
    }
    #pragma endscop
}
