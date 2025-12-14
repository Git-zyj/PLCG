/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 2;

    for (int i_0 = 2; i_0 < 13;i_0 += 1)
    {
        var_21 = max((min(41, 17)), -42);

        /* vectorizable */
        for (int i_1 = 4; i_1 < 14;i_1 += 1)
        {
            var_22 -= (arr_1 [i_0] [i_0 - 2]);
            var_23 = (((arr_3 [i_0] [i_1]) - (arr_1 [8] [i_1])));
        }
        for (int i_2 = 1; i_2 < 14;i_2 += 1)
        {
            var_24 = (((arr_5 [i_2 - 1] [i_2]) ? var_17 : var_2));

            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_25 = var_13;
                var_26 ^= ((~(~var_13)));
                var_27 = (((57 || var_13) ? 10 : (((((-(arr_3 [i_0 - 2] [i_2]))) >= -var_9)))));
                var_28 = ((((max(var_14, (min(var_15, var_3))))) * (84 & -83)));
            }
            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {
                var_29 = ((7 ? ((-84 ? (!var_6) : ((((arr_8 [i_0] [i_2 - 1]) >= var_9))))) : (((arr_1 [i_4] [i_2]) ? var_12 : (((var_3 == (arr_2 [i_2]))))))));
                var_30 = min((((((min(var_4, (arr_7 [6] [i_0] [3] [i_2])))) < ((-(arr_1 [i_4] [i_2])))))), var_18);
                var_31 = (min(var_14, ((~((max(122, -125)))))));
            }
        }
        var_32 &= (max(((((var_4 ? (arr_2 [0]) : var_6)) ^ -3)), var_14));
        var_33 = 84;
    }
    for (int i_5 = 0; i_5 < 12;i_5 += 1)
    {
        var_34 = (min(var_34, -41));

        for (int i_6 = 0; i_6 < 12;i_6 += 1)
        {
            var_35 = (max(var_35, (!83)));
            var_36 = ((!((min((max((arr_6 [i_6] [i_6] [i_5]), var_17)), var_0)))));
        }
    }
    /* vectorizable */
    for (int i_7 = 3; i_7 < 18;i_7 += 1)
    {
        var_37 = (i_7 % 2 == zero) ? (((((((54 - (arr_14 [i_7]))) + 2147483647)) >> ((((var_16 ? 32 : var_16)) - 22))))) : (((((((((54 - (arr_14 [i_7]))) - 2147483647)) + 2147483647)) >> ((((var_16 ? 32 : var_16)) - 22)))));
        /* LoopNest 3 */
        for (int i_8 = 1; i_8 < 17;i_8 += 1)
        {
            for (int i_9 = 0; i_9 < 19;i_9 += 1)
            {
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    {
                        var_38 = (((!112) && 75));
                        var_39 = (~var_7);
                        var_40 ^= var_19;
                    }
                }
            }
        }
    }
    var_41 = (min(var_41, (((~(~119))))));
    #pragma endscop
}
