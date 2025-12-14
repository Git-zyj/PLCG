/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240134
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240134 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240134
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (max(((-4294967265 & (!9))), 9));
        arr_3 [i_0] = (~-9);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    var_10 |= ((2082354901 != (((min(3304264146, var_6)) + -0))));
                    arr_10 [i_2] [2] [2] = ((-(min(var_4, -2087841195))));
                    var_11 = 3915012268;
                    var_12 = (min((((((min((arr_0 [i_2]), var_7))) ? var_1 : 990703149))), (var_5 ^ 3641731346629556216)));
                    var_13 |= 95;
                }
            }
        }
        var_14 = 3304264149;
    }
    /* vectorizable */
    for (int i_3 = 4; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            arr_16 [i_3] [i_3] [i_4] = (((arr_13 [i_3 - 1] [i_3 + 1]) <= (arr_13 [i_3 + 1] [i_3 - 4])));
            /* LoopNest 3 */
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 1;i_6 += 1)
                {
                    for (int i_7 = 1; i_7 < 13;i_7 += 1)
                    {
                        {
                            var_15 = -1;
                            var_16 = 2212612395;
                            arr_25 [i_3] [i_5] [i_5] [i_7] = var_9;
                            var_17 = (~-3378123698227579269);
                        }
                    }
                }
            }
        }
        for (int i_8 = 3; i_8 < 12;i_8 += 1)
        {
            var_18 = (((!4546) & (((2944930105406099135 && (arr_20 [i_3] [i_8]))))));
            var_19 += (((arr_4 [i_3 - 1]) == var_0));
        }
        var_20 = -9;
    }
    var_21 += ((~(!0)));
    var_22 = -67;
    var_23 = (!-12666);
    var_24 = (max(var_24, ((min(-79, var_8)))));
    #pragma endscop
}
