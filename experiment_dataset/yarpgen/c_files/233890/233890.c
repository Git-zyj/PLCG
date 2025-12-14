/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233890
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233890 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233890
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_18 |= 517850582;
        arr_2 [8] &= (min((min((max(var_4, var_15)), var_1)), (min(1, var_3))));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        arr_5 [3] = (!1);
        arr_6 [4] [10] = (49160 <= 0);
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_19 *= 17;
        arr_9 [0] |= 3777116713;
        var_20 = ((-((((arr_7 [2]) <= (((2786872439 ? (arr_7 [1]) : (arr_8 [10])))))))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 25;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 25;i_4 += 1)
        {
            var_21 = (((((arr_10 [14]) == (arr_10 [5]))) ? var_15 : (arr_12 [22] [18])));

            for (int i_5 = 1; i_5 < 23;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 25;i_6 += 1)
                {
                    var_22 += -var_12;
                    var_23 = 6978905631686830399;

                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        var_24 = (max(var_24, (arr_18 [12] [20] [22] [10] [11] [1] [i_5 + 2])));
                        arr_20 [0] [11] [1] = (((var_15 && var_6) ? (!var_7) : 517850583));
                        var_25 = var_8;
                        arr_21 [16] [4] [24] [13] [7] [7] [7] = (arr_14 [3] [22]);
                    }
                }

                for (int i_8 = 0; i_8 < 25;i_8 += 1)
                {
                    var_26 = (max(var_26, 13972021276495601075));
                    var_27 = (arr_19 [10] [13] [i_5 - 1]);
                    var_28 &= 1;
                }
                for (int i_9 = 0; i_9 < 25;i_9 += 1)
                {
                    arr_26 [20] [18] [1] [13] = -var_4;
                    var_29 = (min(var_29, (((var_6 != -2714557370205459792) && (((~(arr_25 [21] [10] [20] [8] [8]))))))));
                    var_30 &= ((!(((9223372036854775807 ? var_15 : (arr_15 [3]))))));
                }
                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_31 = -1;
                    arr_30 [18] [1] [9] [3] &= (((!-69) || (!1)));
                    var_32 = (((arr_22 [1] [24]) * ((((arr_27 [4] [18]) == (arr_12 [1] [16]))))));
                    var_33 = ((4294967291 <= 1) ^ 67);
                }
            }
        }
        var_34 = var_14;
        arr_31 [16] [12] = ((var_9 || (arr_28 [i_3] [4] [1] [i_3] [3] [5])));
    }
    var_35 &= ((~(max(50053, ((var_5 ? 6738772720544375301 : 4063393312))))));
    #pragma endscop
}
