/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_11;
    var_13 = var_11;
    var_14 += var_10;

    for (int i_0 = 1; i_0 < 15;i_0 += 1) /* same iter space */
    {
        var_15 = (min(var_15, -1));
        var_16 &= 24547;
    }
    for (int i_1 = 1; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_17 = -725107837;
        var_18 = 4151098999074721292;
    }
    for (int i_2 = 1; i_2 < 15;i_2 += 1) /* same iter space */
    {
        arr_10 [i_2] = -725107837;

        for (int i_3 = 1; i_3 < 1;i_3 += 1)
        {
            var_19 = 792261443;
            var_20 -= 15;
            var_21 = -113;
            arr_13 [i_2] = 63;
        }
        for (int i_4 = 0; i_4 < 18;i_4 += 1)
        {
            arr_18 [i_2] [i_2] [i_2] = 1712864703;
            var_22 = 586049074116570356;
            arr_19 [i_2] [i_2] = 45;
            var_23 = 3;
        }
        for (int i_5 = 0; i_5 < 18;i_5 += 1)
        {

            /* vectorizable */
            for (int i_6 = 1; i_6 < 17;i_6 += 1)
            {
                var_24 *= 725107837;
                var_25 ^= 725107837;
            }
            var_26 = 23791;
        }
        var_27 = -1;
        var_28 = -725107809;
        var_29 = 15268484503777570798;
    }
    for (int i_7 = 2; i_7 < 22;i_7 += 1)
    {
        arr_30 [i_7] [i_7] = 725107837;
        var_30 = 255;
        var_31 ^= 42988;
    }
    var_32 += var_6;
    #pragma endscop
}
