/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237021
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237021 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237021
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = var_7;
        arr_3 [14] = var_10;
        arr_4 [i_0] = (((((var_0 >= (min(var_0, var_5))))) * -0));
        var_14 = (-24017 != (!var_12));
        var_15 = (((((var_10 ? 1 : var_5))) % (max(var_3, (arr_1 [i_0] [i_0])))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {
        var_16 = ((var_3 * (!1)));
        var_17 = var_1;
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_18 = ((~(min(24028, (arr_11 [i_2] [i_2])))));

        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            arr_15 [i_2] [i_3] = (((arr_10 [i_2]) << (((max(-2090155510345858135, var_1)) - 19317))));
            var_19 ^= var_7;
        }
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {

            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                arr_20 [i_2] [13] [i_5] = (((+((min((arr_0 [i_2] [15]), 7))))));
                var_20 ^= max(2841254156, (((max(1, 0)) ? var_10 : 1)));
                var_21 ^= ((((-(arr_14 [i_2] [i_5]))) + (arr_14 [i_2] [i_4])));
                var_22 = var_3;
                var_23 = ((-3557238220522434565 / (((max((arr_0 [i_5] [i_2]), var_0))))));
            }
            for (int i_6 = 0; i_6 < 15;i_6 += 1)
            {
                var_24 = ((!(!var_7)));
                var_25 = (min(((2090155510345858134 ? 41218 : 125)), ((-(arr_14 [i_2] [i_4])))));
                /* LoopNest 2 */
                for (int i_7 = 0; i_7 < 15;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 15;i_8 += 1)
                    {
                        {
                            var_26 = ((~(max(var_8, ((2090155510345858135 & (arr_0 [17] [8])))))));
                            arr_27 [i_2] [6] [i_6] = (min((arr_10 [i_7]), ((((arr_9 [i_4]) >= (arr_23 [i_2] [i_8] [i_6] [i_7]))))));
                        }
                    }
                }
            }
            var_27 ^= var_1;
            arr_28 [i_2] = var_0;
            var_28 = (((min((arr_23 [i_2] [i_4] [i_4] [i_4]), (max(var_11, var_7)))) - (((((((arr_11 [i_2] [i_4]) > var_9))) + (max(var_2, var_4)))))));
        }
        for (int i_9 = 1; i_9 < 13;i_9 += 1)
        {
            var_29 = (((~(arr_22 [i_9 - 1] [i_9 - 1] [i_9 - 1] [i_9 - 1]))) << (((var_7 + 4869379811596981756) - 14)));
            var_30 |= ((!(arr_26 [6] [10] [i_2] [10] [i_9 + 1])));
            arr_31 [i_9] [5] = ((((!(arr_9 [i_9 + 1])))));
        }
        var_31 = (max((arr_25 [i_2] [13] [i_2] [i_2]), (((-(arr_14 [i_2] [i_2]))))));
    }
    /* LoopNest 3 */
    for (int i_10 = 2; i_10 < 20;i_10 += 1)
    {
        for (int i_11 = 0; i_11 < 22;i_11 += 1)
        {
            for (int i_12 = 0; i_12 < 22;i_12 += 1)
            {
                {
                    var_32 = (arr_32 [i_10 + 1]);
                    arr_38 [0] [i_11] [i_10] |= (((24331 != 11346) ? (max(1, (min(var_7, 54322)))) : 2841254174));
                }
            }
        }
    }
    var_33 = 1;
    var_34 = (max(var_34, var_3));
    #pragma endscop
}
