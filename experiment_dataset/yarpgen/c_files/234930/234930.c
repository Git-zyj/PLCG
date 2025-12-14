/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234930
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234930 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234930
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 18;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_1] = ((-((min((arr_0 [i_0]), (max((arr_1 [i_0] [i_0]), (arr_0 [i_0]))))))));
                arr_6 [i_0] = 15217;
                arr_7 [i_1 - 2] = (((arr_4 [i_0]) <= ((((arr_4 [i_0]) != (arr_1 [i_0] [i_1]))))));
                var_13 = (max(var_13, (arr_3 [i_1 - 2] [i_1 - 2] [i_1 + 1])));
                var_14 = (max((arr_3 [i_0] [i_0] [i_1 - 1]), (arr_1 [i_1 + 1] [i_1 - 2])));
            }
        }
    }
    var_15 -= (var_11 + var_6);

    for (int i_2 = 0; i_2 < 11;i_2 += 1)
    {
        arr_10 [i_2] [i_2] = arr_2 [i_2];

        for (int i_3 = 3; i_3 < 10;i_3 += 1)
        {

            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                var_16 *= ((24338 > (arr_3 [i_2] [i_3] [i_4])));
                arr_17 [i_2] [i_3] [i_3] [i_4] = arr_0 [i_2];
                var_17 = (min(((min((arr_1 [i_3 - 1] [i_3 - 2]), (arr_1 [i_3 - 1] [i_3 + 1])))), -6045));
                var_18 ^= (((arr_0 [i_2]) > (((arr_1 [i_2] [i_4]) - ((min(15218, 15216)))))));
                var_19 *= ((((~(arr_9 [i_4]))) == (arr_13 [i_2] [i_3 - 1])));
            }
            var_20 = (min(var_20, (max((max((arr_12 [i_2] [i_2]), 50311)), (6808 > 64270)))));
            var_21 = (min(var_21, ((((arr_1 [i_3 - 2] [i_3 - 3]) >> (((arr_3 [i_3 + 1] [i_3 + 1] [i_2]) - 11949)))))));
            arr_18 [i_3] = (((arr_8 [i_2]) <= ((max((arr_12 [i_3] [i_3]), (arr_2 [i_3]))))));
        }
        for (int i_5 = 2; i_5 < 9;i_5 += 1)
        {
            /* LoopNest 2 */
            for (int i_6 = 0; i_6 < 11;i_6 += 1)
            {
                for (int i_7 = 3; i_7 < 8;i_7 += 1)
                {
                    {
                        var_22 = 50320;
                        var_23 = ((-(arr_23 [i_2])));
                        arr_26 [i_2] = arr_20 [i_2];
                        arr_27 [i_2] [i_2] [i_2] [i_5 - 1] = (((arr_4 [i_2]) < (arr_3 [i_5] [i_6] [i_7 + 2])));
                        arr_28 [i_2] [i_2] [i_5] [i_2] = (31792 + 50318);
                    }
                }
            }

            /* vectorizable */
            for (int i_8 = 4; i_8 < 10;i_8 += 1)
            {
                var_24 = arr_15 [i_2] [i_5 - 1] [i_8 - 2] [i_8];
                var_25 = arr_22 [i_2];
            }
            arr_31 [i_5 + 2] = (((arr_4 [i_5 + 2]) > (arr_9 [i_2])));
        }
    }
    #pragma endscop
}
