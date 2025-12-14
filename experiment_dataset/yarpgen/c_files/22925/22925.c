/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22925
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22925 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22925
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        arr_3 [i_0] = (arr_1 [i_0]);

        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_13 = (((arr_4 [i_0]) - (arr_4 [i_0])));
            arr_6 [i_0] = var_3;
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_14 = (max(var_14, -var_3));
            var_15 ^= (((arr_2 [16]) <= (arr_8 [i_0 + 2])));
        }
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 0; i_4 < 23;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 22;i_5 += 1)
                {
                    {
                        var_16 = (((!16380) ? 122 : (arr_9 [10] [i_0] [10])));
                        arr_18 [19] [i_0] [i_3] [i_3] [i_0] [19] = 1;
                        var_17 = (arr_12 [2] [2] [i_0]);
                    }
                }
            }
            arr_19 [i_0] = (arr_13 [i_0] [i_3] [i_0]);
        }
        var_18 *= 1;
    }
    for (int i_6 = 0; i_6 < 17;i_6 += 1)
    {
        arr_23 [i_6] [i_6] = (arr_14 [12] [i_6]);
        var_19 = (max(var_19, ((((((arr_13 [i_6] [i_6] [12]) - 192)) >= var_3)))));
        var_20 = max(((((arr_21 [i_6]) || (arr_4 [4])))), 192);
        var_21 += 380362848;
    }
    for (int i_7 = 1; i_7 < 8;i_7 += 1)
    {
        var_22 -= ((((max((arr_22 [i_7 + 1] [i_7 + 1]), -8424))) ? ((-(arr_1 [14]))) : (max((arr_5 [i_7 + 2] [i_7 + 2] [17]), -var_10))));
        arr_27 [i_7] = ((-(arr_7 [i_7 + 2])));
        var_23 = 26613;
        var_24 ^= (max((arr_8 [i_7]), (~-26618)));
    }
    var_25 = ((-26603 * (((!var_9) * (255 >= 90)))));
    var_26 = (var_2 || 738817854);
    var_27 = (max(var_8, var_9));
    #pragma endscop
}
