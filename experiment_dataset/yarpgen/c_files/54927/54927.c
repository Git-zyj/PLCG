/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54927
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54927 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54927
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    var_11 = 33909;
                    var_12 -= 2147483647;
                    var_13 = -1550312843;

                    for (int i_3 = 0; i_3 < 13;i_3 += 1)
                    {
                        var_14 -= 15;
                        arr_10 [i_1] [i_1] [0] [i_3] = 63946;
                        var_15 = 6779878264225234471;
                        arr_11 [1] [i_0] [i_0] [i_1] = 63946;
                        arr_12 [0] [i_3] [i_2 - 1] [i_2] [i_2] [i_2] |= -1549320077888507730;
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        for (int i_5 = 0; i_5 < 13;i_5 += 1)
                        {
                            var_16 = (max(var_16, 1590));
                            var_17 = 63948;
                            arr_17 [i_2] [0] [i_1] [0] [i_5] = 6779878264225234471;
                            arr_18 [i_0] [0] [i_0] [i_1] = 1;
                        }
                        for (int i_6 = 0; i_6 < 13;i_6 += 1)
                        {
                            arr_21 [i_0] [i_1] [3] [i_0] [10] [i_0] = 2147483647;
                            arr_22 [i_1] [i_4] [i_4] = 1897193785;
                            arr_23 [i_0] [i_1] [i_1] [i_2] [i_4] [i_0] [i_6] = -1;
                            var_18 = -1;
                        }
                        for (int i_7 = 0; i_7 < 1;i_7 += 1)
                        {
                            arr_26 [i_0] [i_0] [12] [i_2] [i_1] [8] = 1589;
                            arr_27 [i_1] = 2397773511;
                            arr_28 [i_0] [i_1] [6] [i_0] [i_7] [i_1] = 1;
                            var_19 = -1457730063;
                            var_20 = 63947;
                        }
                        for (int i_8 = 0; i_8 < 13;i_8 += 1)
                        {
                            arr_31 [i_0] [0] [i_1] [i_4] [i_4] [i_8] = 23661;
                            var_21 ^= 234238778511318110;
                        }

                        for (int i_9 = 0; i_9 < 13;i_9 += 1) /* same iter space */
                        {
                            var_22 ^= 14598244018110618946;
                            var_23 ^= 1589;
                        }
                        for (int i_10 = 0; i_10 < 13;i_10 += 1) /* same iter space */
                        {
                            arr_36 [i_1] [i_1] [i_2] = -60;
                            arr_37 [6] [i_1 - 1] [i_1] [i_4] [i_10] = 6067506739083372528;
                        }
                        for (int i_11 = 0; i_11 < 13;i_11 += 1)
                        {
                            arr_41 [i_0] [i_1 + 3] [i_2] [i_1] = 1179242646;
                            arr_42 [i_0] [1] [i_1] [i_2 + 1] [1] [i_1] = 192;
                        }
                        arr_43 [i_1] [i_1 + 3] [9] [i_1] = 1605;
                        arr_44 [i_1] [i_1] [8] [12] [i_2] [i_2] = 2642793229357902190;
                    }
                    for (int i_12 = 0; i_12 < 1;i_12 += 1)
                    {
                        var_24 = 2147483647;
                        arr_47 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] = 30;
                    }
                    for (int i_13 = 0; i_13 < 13;i_13 += 1)
                    {
                        arr_50 [i_1] = 458752;
                        var_25 = -2147483647;
                    }
                    arr_51 [i_0] [3] [i_0] [i_1] = 63933;
                }
            }
        }
    }
    var_26 = 47969;
    #pragma endscop
}
