/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225998
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225998 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225998
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                arr_6 [1] = (max((((24847 != ((4294967295 >> (54481 - 54455)))))), ((8191 >> (var_5 - 1595944419)))));

                for (int i_2 = 2; i_2 < 8;i_2 += 1)
                {
                    arr_10 [i_0] [i_1] [i_2] = ((((195 ? 38 : (47427 - 21873))) + var_13));
                    arr_11 [i_0] [3] = (((~47427) != 93));
                    arr_12 [i_0] [i_2 + 3] = (~29836);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 12;i_3 += 1)
                {
                    arr_15 [i_1 + 2] [i_3] = 18108;
                    arr_16 [i_0] [i_0] [i_3] [i_0] = (!18109);
                    arr_17 [i_0] [i_0] = (((var_6 == 65535) == 63));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 12;i_4 += 1)
                    {
                        for (int i_5 = 3; i_5 < 11;i_5 += 1)
                        {
                            {
                                arr_22 [i_0] = ((18108 != (4095 && var_12)));
                                arr_23 [i_0] [i_3] [i_0] [i_5 - 2] = 65535;
                                arr_24 [i_4] [i_3] [4] = (4294963201 - 4294967295);
                                arr_25 [i_0] [i_1] [i_1] [i_4] [i_1 - 1] &= (31761 ^ var_9);
                                arr_26 [i_0] [i_1] [i_3] [i_4] [7] = (255 & 1048575);
                            }
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 18;i_6 += 1)
    {
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {
            {

                for (int i_8 = 0; i_8 < 18;i_8 += 1)
                {
                    arr_35 [i_6] [0] = (((var_9 ? var_7 : ((var_14 ? 18108 : var_3)))));
                    arr_36 [i_6] [i_7] [i_8] = 2736398900;
                }
                for (int i_9 = 0; i_9 < 18;i_9 += 1)
                {
                    arr_39 [i_6] [13] [i_9] = (min((max((!13368637793266608793), 4294967295)), 33554431));
                    arr_40 [i_6] [i_9] [i_9] = var_0;
                    arr_41 [i_6] = -108;
                    arr_42 [i_6] [i_7] [i_6] = (22063 * var_8);
                }
                arr_43 [i_6] [i_6] = (max((min(15, 40534)), 255));
                arr_44 [1] [i_7] = 61973;
                arr_45 [2] &= ((4294967295 ? (min(4398046511103, var_10)) : (127 ^ 52693)));
                arr_46 [i_6] [10] = (3502613726 || 5499311204895021027);
            }
        }
    }
    #pragma endscop
}
