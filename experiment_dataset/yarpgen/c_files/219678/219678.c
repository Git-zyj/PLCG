/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219678
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219678 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219678
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (8191 ? var_10 : ((8186 ? -54 : -var_7)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 22;i_2 += 1)
                {
                    var_14 += (arr_5 [i_2] [i_2 - 1] [i_2 + 1] [i_2 - 1]);

                    for (int i_3 = 1; i_3 < 23;i_3 += 1)
                    {
                        arr_10 [i_2] [i_2] [i_2] [i_2] [i_2 + 3] = (((arr_0 [i_2 + 2]) ? var_3 : (((var_2 || (arr_9 [i_3] [i_2 + 1] [i_0]))))));

                        for (int i_4 = 2; i_4 < 23;i_4 += 1)
                        {
                            var_15 = -8216;
                            var_16 = (arr_6 [9] [i_3] [i_2 + 3] [9]);
                            arr_13 [4] [4] [3] [i_3 - 1] [i_4] = ((var_1 < (((arr_11 [i_3] [i_0]) ? (arr_0 [i_0]) : var_1))));
                        }
                        for (int i_5 = 0; i_5 < 25;i_5 += 1)
                        {
                            var_17 = (min(var_17, var_0));
                            arr_16 [i_1] [i_1] [i_0] [16] = ((659017279 ? var_6 : var_0));
                            arr_17 [i_0] [i_0] [10] [i_0] = (((2161727821137838080 ? 30 : (arr_8 [i_0] [i_1] [i_2 + 2] [i_3] [i_5]))));
                            var_18 += (var_12 & 8388607);
                        }
                        arr_18 [i_1] [i_2 + 2] [i_1] = (((arr_2 [i_2 + 1]) ? (arr_2 [i_2 - 1]) : (arr_2 [i_2 + 1])));
                    }
                }
                var_19 = (((max(3592761289890737044, (arr_6 [i_0] [i_0] [i_1] [21]))) < (((arr_6 [14] [16] [16] [i_1]) ? (arr_0 [i_0]) : (arr_15 [i_0] [i_0] [i_0] [i_1])))));
                /* LoopNest 2 */
                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 24;i_7 += 1)
                    {
                        {
                            arr_25 [i_0] [i_6] = 8239;
                            arr_26 [i_1] = ((-((((max((arr_3 [i_0] [i_7 - 1]), var_9)) > var_2)))));
                        }
                    }
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_8 = 1; i_8 < 7;i_8 += 1)
    {
        for (int i_9 = 1; i_9 < 8;i_9 += 1)
        {
            {
                var_20 = (((((((arr_28 [7]) ? var_7 : 14853982783818814551))) ? (((max(var_10, 12264)))) : (max(14853982783818814577, var_1)))) * (arr_32 [i_8] [i_8 + 4] [i_8]));

                for (int i_10 = 1; i_10 < 7;i_10 += 1)
                {
                    var_21 ^= max(((((min(var_11, var_3))) ? (659017282 ^ var_8) : 14853982783818814579)), (arr_0 [i_8]));
                    var_22 = max((((((20 ? var_6 : (arr_9 [i_8] [i_8] [22])))) ^ (max(3592761289890737041, 11374843070914048360)))), 617449639);
                }
                /* vectorizable */
                for (int i_11 = 0; i_11 < 11;i_11 += 1)
                {
                    var_23 = (min(var_23, (arr_9 [i_9 + 1] [i_8] [i_11])));
                    arr_37 [i_8] [9] [i_9 + 3] [i_8] = (arr_24 [i_8] [12] [12] [i_11] [i_11]);
                    /* LoopNest 2 */
                    for (int i_12 = 1; i_12 < 10;i_12 += 1)
                    {
                        for (int i_13 = 2; i_13 < 8;i_13 += 1)
                        {
                            {
                                var_24 = 2209785197;
                                arr_44 [i_8] [i_12] [i_12] [i_8 - 1] [i_8 + 1] = ((~((var_9 ? var_8 : var_9))));
                                var_25 += (((arr_35 [i_8 + 1] [i_8 + 1] [i_11]) ? 575633006 : (arr_11 [i_8 + 3] [i_13 + 3])));
                                arr_45 [i_8] [i_9 - 1] [i_12] [i_11] [i_9 - 1] [i_13] = 10808003896563981660;
                            }
                        }
                    }
                    var_26 += var_7;
                }
                /* vectorizable */
                for (int i_14 = 0; i_14 < 11;i_14 += 1)
                {
                    var_27 = ((((((arr_4 [i_8]) ? (arr_19 [13] [i_9] [i_9] [13]) : (-9223372036854775807 - 1)))) ? (((var_10 ? 8191 : var_9))) : (arr_7 [i_9] [21] [i_9 + 3] [1])));
                    var_28 = (((arr_3 [i_8] [i_9 + 3]) ? 9 : (!3592761289890737031)));
                }
                arr_49 [i_8] [i_9] [i_9 + 2] = (max((max(((((arr_20 [i_9] [i_8 + 3] [i_8] [i_8 + 2]) + var_8))), (arr_0 [i_8]))), ((((arr_14 [i_9 + 3] [i_9] [2] [i_9 + 1] [i_9] [i_9] [i_8 + 3]) > (arr_14 [6] [i_9] [i_9] [i_9] [i_8 + 2] [i_9 - 1] [i_8 + 2]))))));
            }
        }
    }
    #pragma endscop
}
