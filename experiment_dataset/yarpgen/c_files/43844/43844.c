/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43844
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43844 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43844
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (min(((var_10 >> (((var_17 ^ var_1) + 990894861)))), ((var_11 << (var_3 != 3951253593)))));

    for (int i_0 = 0; i_0 < 13;i_0 += 1) /* same iter space */
    {
        arr_4 [i_0] [i_0] = (min((min(343713703, (((3 << (var_4 + 1037765289)))))), (arr_0 [i_0])));
        arr_5 [i_0] = (((((min((arr_3 [i_0]), var_5)))) + (29880 ^ var_14)));
        var_19 = (((((arr_0 [i_0]) * 0)) != var_11));
        arr_6 [i_0] [i_0] = ((-(((var_4 < var_2) >> (var_6 - 30836)))));
    }
    for (int i_1 = 0; i_1 < 13;i_1 += 1) /* same iter space */
    {
        var_20 += ((((35655 << (29880 - 29867))) >> (var_10 - 50148)));
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 12;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 13;i_3 += 1)
            {
                {
                    var_21 = ((((min((arr_11 [i_3] [i_2] [i_2 + 1]), (arr_13 [i_2] [i_2 - 1])))) * (arr_11 [i_3] [i_3] [i_2 - 1])));
                    var_22 = (max(var_22, -var_6));
                    arr_15 [i_2] [i_2] [i_2] [i_2] = var_3;
                    arr_16 [i_1] [i_2] [i_3] = (min(3633695401184406813, 617));
                }
            }
        }
    }
    for (int i_4 = 0; i_4 < 13;i_4 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_5 = 0; i_5 < 13;i_5 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_6 = 2; i_6 < 10;i_6 += 1)
            {
                for (int i_7 = 0; i_7 < 13;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 13;i_8 += 1)
                    {
                        {
                            arr_29 [i_5] [i_5] &= var_14;
                            var_23 = var_3;
                            arr_30 [i_6] [i_5] [i_6] [i_7] [i_8] = (3633695401184406812 ^ var_3);
                        }
                    }
                }
            }
            arr_31 [i_4] [i_5] [i_5] = ((!(((14813048672525144804 | (arr_21 [i_4] [i_5]))))));
            arr_32 [i_4] = (arr_23 [i_4] [i_4] [i_4]);
            var_24 += (((arr_21 [i_5] [i_4]) ^ var_2));
        }
        /* vectorizable */
        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_10 = 0; i_10 < 13;i_10 += 1)
            {
                for (int i_11 = 1; i_11 < 12;i_11 += 1)
                {
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        {
                            arr_44 [i_10] [i_9] [i_10] [i_11] [i_12] = ((var_13 << (var_0 - 3933768283)));
                            arr_45 [i_10] [i_10] [i_12] = 254;
                            var_25 ^= ((var_1 - (14813048672525144802 - var_14)));
                        }
                    }
                }
            }
            /* LoopNest 2 */
            for (int i_13 = 0; i_13 < 13;i_13 += 1)
            {
                for (int i_14 = 0; i_14 < 13;i_14 += 1)
                {
                    {
                        var_26 = (max(var_26, (((4094912906 << (var_3 - 52))))));
                        arr_52 [i_4] [i_4] [i_9] [i_13] [i_14] [i_14] |= (var_3 <= var_9);
                        var_27 = -226;
                        var_28 = (((((var_9 + 2147483647) >> (var_4 + 1037765309))) % var_1));
                    }
                }
            }
            arr_53 [i_4] [i_4] = (var_10 ^ 1);
            arr_54 [i_9] [i_4] [i_4] = 1;
        }
        arr_55 [i_4] = var_6;
        var_29 = ((var_5 != (((var_8 && -1) | (var_10 ^ 9)))));
    }
    #pragma endscop
}
