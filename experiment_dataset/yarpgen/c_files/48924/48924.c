/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        var_20 = ((+(((arr_0 [i_0 + 1]) / (arr_1 [i_0 + 1])))));

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            arr_6 [i_0] [i_0] [i_0] = (((((arr_4 [i_0 + 1]) == -29832))) / var_4);

            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    var_21 = (min(var_21, ((((arr_2 [i_0]) || (arr_3 [i_0] [i_0] [i_3]))))));
                    var_22 = ((var_12 <= ((((max((arr_4 [i_2]), var_19)) <= (((max((arr_7 [i_0] [i_0] [i_2] [i_3]), var_0)))))))));
                }
                for (int i_4 = 0; i_4 < 18;i_4 += 1)
                {
                    var_23 = (min(var_23, (((-((((((arr_0 [i_0]) ? 268435455 : var_2))) ? (arr_3 [i_0] [i_2 - 4] [i_4]) : (7642 - var_17))))))));
                    arr_14 [i_4] [i_1] = (((((arr_5 [i_0] [i_0] [i_4]) + (arr_11 [i_0] [i_4] [i_2 + 1] [i_4])))) ? (min((((!(arr_10 [i_0] [i_1] [i_2] [i_0])))), var_5)) : ((max((arr_5 [i_0 + 1] [i_0] [i_2 - 1]), var_11))));
                }

                for (int i_5 = 4; i_5 < 17;i_5 += 1)
                {
                    var_24 = var_9;
                    var_25 = (max(var_25, ((((arr_8 [i_0 - 1] [i_1] [i_1]) >> (((((var_4 + 2147483647) >> ((((-(arr_1 [i_5]))) + 5740)))) - 1013)))))));
                }
                for (int i_6 = 0; i_6 < 18;i_6 += 1)
                {
                    arr_20 [i_0] [i_1] [i_2] [i_1] = (min(4026531841, var_15));
                    var_26 = ((arr_19 [i_0]) - var_5);
                }
                for (int i_7 = 0; i_7 < 18;i_7 += 1)
                {
                    arr_23 [i_0 - 1] [i_1] [i_2] [i_7] = var_6;
                    var_27 = arr_16 [i_0 - 1] [i_0 - 1] [i_2 - 1] [i_7];
                }
            }
        }
    }
    var_28 *= var_10;
    #pragma endscop
}
