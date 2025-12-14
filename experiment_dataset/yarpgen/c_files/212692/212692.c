/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212692
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212692 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212692
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        var_10 = 154;
        var_11 = 188099434;
        var_12 = (min(var_12, ((min(((var_8 ? 1957 : (arr_0 [6] [i_0 - 1]))), ((1 ? 54159 : 1957)))))));
        var_13 = (max(var_13, ((((!1) & ((min((arr_0 [6] [i_0 - 1]), (arr_2 [10])))))))));
    }
    var_14 = (min(var_14, var_2));

    for (int i_1 = 0; i_1 < 16;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 1;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 16;i_3 += 1)
            {
                {
                    arr_10 [i_2] [i_2] = (min(1, 60039));
                    arr_11 [i_1] [11] [i_2] = (-188099435 && 46597);
                }
            }
        }

        /* vectorizable */
        for (int i_4 = 3; i_4 < 14;i_4 += 1) /* same iter space */
        {
            var_15 = (5983138085908143764 && (62443 || 12463605987801407874));
            var_16 ^= 49;
            var_17 ^= (((arr_12 [i_1] [i_4 + 2] [i_1]) << (((((arr_9 [i_1] [i_4 + 2] [i_4]) - 65520)) - 1854034391))));
            var_18 += (((!2) % 24));
        }
        /* vectorizable */
        for (int i_5 = 3; i_5 < 14;i_5 += 1) /* same iter space */
        {
            var_19 = (216 * 0);
            arr_18 [i_1] [i_5] [i_5] = (44382 * 155);
            var_20 = (min(var_20, ((((arr_9 [i_5 + 1] [i_5 - 3] [i_1]) & 56892)))));
            var_21 = ((var_1 ? (-21490 % 1) : (!686130302771100660)));
        }
        for (int i_6 = 2; i_6 < 15;i_6 += 1)
        {
            var_22 = var_4;
            var_23 = (max(var_23, ((65535 * ((((!22391) || (((var_9 ? var_7 : 65532))))))))));
            arr_22 [i_1] [i_1] = (min(21180, ((56868 ? 12820 : -1957))));
        }
    }
    for (int i_7 = 0; i_7 < 1;i_7 += 1)
    {
        arr_26 [i_7] = (max(var_1, 124));
        arr_27 [0] = 56834;
    }
    for (int i_8 = 0; i_8 < 20;i_8 += 1)
    {
        /* LoopNest 3 */
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 19;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 1;i_11 += 1)
                {
                    {
                        var_24 = (min(var_24, var_7));
                        var_25 = ((((((9 ? 111 : var_0)) % (arr_36 [i_8] [i_9] [i_11]))) >> 1));
                    }
                }
            }
        }
        var_26 = arr_24 [i_8];
    }
    var_27 |= 1;
    #pragma endscop
}
