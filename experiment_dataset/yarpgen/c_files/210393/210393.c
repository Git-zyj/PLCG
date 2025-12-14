/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            {
                var_16 = (max(((max((max(var_4, (arr_2 [i_0] [i_0] [i_0]))), ((max((arr_2 [i_0] [i_1] [i_0]), (arr_0 [i_0] [i_1]))))))), (max((max(var_4, var_8)), ((max(var_0, var_13)))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                var_17 = (max((min(1023, 14)), ((min((max((arr_3 [i_2]), var_3)), ((max(var_12, 65533))))))));
                                var_18 = min(((max((max(var_5, var_9)), ((min((arr_0 [i_0] [i_1]), (arr_9 [i_2] [3] [i_2] [i_3] [i_0]))))))), (min((max(1288374051, 13)), ((min((arr_8 [i_0] [0] [i_2 + 1] [0] [0]), (arr_0 [3] [i_3])))))));
                            }
                        }
                    }
                }
                var_19 = (max((min((min(4537904098722158448, -6092132769370335361)), ((max((arr_9 [i_0] [i_0] [8] [i_0] [i_0]), (arr_7 [i_0] [i_0] [i_0])))))), ((max(((max(32767, -1391295035))), 4101038077)))));
                /* LoopNest 2 */
                for (int i_5 = 1; i_5 < 10;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        {
                            arr_18 [i_0] = (max((max((max((arr_2 [i_6] [i_1] [i_1]), (arr_1 [i_0] [i_0]))), ((max(55, 7846))))), ((max(((min((arr_0 [i_6] [3]), var_4))), (max(var_15, -1524137074)))))));
                            arr_19 [i_0] [i_0] = (max(((max((max(126, (arr_13 [i_0] [i_0]))), ((min(32, (arr_14 [i_0]))))))), (min(((max(1391295034, (arr_2 [i_0] [i_6] [7])))), (max(0, 59798))))));
                            arr_20 [i_0] = (max((max(((min((arr_2 [i_6] [i_1] [i_0]), 14755))), (min((arr_6 [i_6] [i_0] [i_0] [i_0]), -1391295035)))), ((max((min(65533, var_6)), (min(var_9, 31729)))))));
                            var_20 = (min(var_20, ((max(-55, (max((max(975740299, 17581829344888135548)), -8761719478398132809)))))));
                            arr_21 [i_0] [i_1] [i_1] [i_5] [i_6] = (max(((max((max((arr_4 [i_0] [i_0] [i_0]), 57988)), ((max(var_13, var_12)))))), (max(((max(255, 1364672286))), (min(7823, var_2))))));
                        }
                    }
                }
                var_21 = (max((min((max((arr_2 [i_0] [i_0] [i_0]), var_11)), ((max(var_9, var_10))))), (max(((max((arr_16 [i_0] [i_0] [i_0] [i_1]), (arr_7 [i_0] [i_0] [i_0])))), (max(16892, var_3))))));
            }
        }
    }

    for (int i_7 = 0; i_7 < 11;i_7 += 1)
    {
        /* LoopNest 2 */
        for (int i_8 = 3; i_8 < 10;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 11;i_9 += 1)
            {
                {
                    var_22 = (max(-6092132769370335361, 0));
                    var_23 = (max(var_23, (max((max(-1391295035, -5271)), ((min((min((arr_16 [i_7] [i_7] [i_8] [i_9]), (arr_15 [i_7] [i_8] [i_9] [i_7] [i_8]))), (max((arr_9 [i_9] [i_9] [i_8] [6] [i_9]), 12280)))))))));
                }
            }
        }
        var_24 = (max((max((min(2097151, 4)), ((max((arr_14 [i_7]), (arr_24 [i_7] [i_7])))))), ((min(((max(var_6, (arr_22 [i_7])))), (max((arr_24 [i_7] [i_7]), var_15)))))));
    }
    for (int i_10 = 0; i_10 < 14;i_10 += 1)
    {
        var_25 -= (min((max((min((arr_31 [i_10]), 2147483647)), (max((arr_31 [8]), (arr_30 [i_10] [i_10]))))), (max((min((-2147483647 - 1), var_14)), (max(7, (arr_31 [8])))))));
        arr_32 [i_10] = (max((max(((max((arr_31 [i_10]), var_13))), (max(3074644468848639815, (arr_30 [i_10] [i_10]))))), (max((max(1, var_0)), (min(-552969397, (-9223372036854775807 - 1)))))));
    }
    #pragma endscop
}
