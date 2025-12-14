/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231035
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231035 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231035
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        var_14 = (max(var_14, -var_4));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_15 = ((~(arr_2 [i_0] [i_0])));
                    arr_7 [i_0] [i_1] [i_0] = (arr_4 [i_1] [i_0]);
                    arr_8 [i_0] [1] [i_2] [i_2] = 2933977230;
                }
            }
        }
    }
    for (int i_3 = 2; i_3 < 10;i_3 += 1)
    {
        var_16 = (max(-var_4, ((min(var_4, (arr_10 [i_3]))))));
        arr_11 [i_3] = ((~((min((arr_10 [i_3]), (arr_10 [i_3]))))));
        var_17 = ((((((min((arr_9 [i_3]), (arr_9 [i_3])))) / (arr_10 [i_3]))) % -1251962979));
    }
    for (int i_4 = 2; i_4 < 11;i_4 += 1)
    {
        var_18 = (!(((~(arr_13 [i_4] [i_4 + 3])))));
        /* LoopNest 2 */
        for (int i_5 = 0; i_5 < 14;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 14;i_6 += 1)
            {
                {
                    arr_22 [i_4] [i_4] = (((2933977230 != 25165824) && (((((min(var_3, var_10))) ? (~4) : (max(4294967292, 6)))))));
                    arr_23 [i_4] [1] [i_4] = (arr_21 [i_4] [i_4] [i_6]);
                }
            }
        }
    }
    var_19 = var_12;
    var_20 = var_12;
    /* LoopNest 2 */
    for (int i_7 = 3; i_7 < 22;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_9 = 3; i_9 < 22;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 24;i_10 += 1)
                    {
                        {
                            arr_36 [i_7] [i_7] [i_7] [i_7] = max(((1 / ((159 ? (arr_27 [i_8] [i_10]) : 4294967295)))), ((((arr_34 [i_7] [i_8]) != -1251962998))));

                            for (int i_11 = 0; i_11 < 0;i_11 += 1)
                            {
                                var_21 = (max(((-(min(1965163751, -1251963001)))), ((((arr_37 [i_7] [i_11] [i_11] [i_11] [i_7]) % (arr_38 [i_11 + 1] [i_11] [i_10] [i_11] [i_10] [i_7] [i_7]))))));
                                var_22 = ((((min((1251962995 != 1), ((255 ? (arr_38 [i_8] [i_11 + 1] [i_11 + 1] [i_8] [1] [9] [i_9]) : 1))))) + 3202704829));
                            }
                        }
                    }
                }
                var_23 -= 1219885220;
            }
        }
    }
    var_24 = ((1 ? ((var_4 % (~4294967292))) : (var_0 || var_10)));
    #pragma endscop
}
