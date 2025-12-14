/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206365
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206365 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206365
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        var_11 = (min(var_11, -2921399823));
        arr_3 [i_0] [i_0] = ((!((((arr_1 [i_0]) ? (arr_1 [i_0]) : (~22897))))));
        var_12 = (((!var_0) || (((max(1846750286, var_10))))));
    }
    for (int i_1 = 0; i_1 < 17;i_1 += 1)
    {
        arr_6 [i_1] [i_1] = var_8;
        arr_7 [i_1] [i_1] = (((arr_5 [i_1]) ? (arr_0 [i_1]) : (var_9 == 1373567499)));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        var_13 = (~7680);

        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            arr_15 [i_2] [i_3] [i_3] = ((!((min(-117, (arr_1 [i_2]))))));

            /* vectorizable */
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                arr_20 [i_4] [i_3] [i_2] = (((1073610752 ? var_2 : var_0)));
                var_14 = ((121 % (~1103612545)));
            }
            arr_21 [i_3] = (arr_14 [i_2] [i_3] [i_3]);
        }
        /* vectorizable */
        for (int i_5 = 1; i_5 < 23;i_5 += 1)
        {
            var_15 = (~var_6);
            arr_26 [i_2] = (!var_6);
        }
        for (int i_6 = 1; i_6 < 22;i_6 += 1)
        {
            var_16 ^= ((-4547 != ((0 ? (var_0 - 2617126302) : (arr_16 [i_2] [i_2] [i_2])))));
            arr_31 [i_6] [i_2] [i_6] = ((var_2 ? ((((max(1, 1))) % (var_5 >= 0))) : var_3));
        }
        /* vectorizable */
        for (int i_7 = 0; i_7 < 24;i_7 += 1)
        {
            var_17 *= -var_9;

            for (int i_8 = 0; i_8 < 24;i_8 += 1)
            {
                var_18 -= 2921399820;
                arr_36 [i_7] [i_8] [i_7] = (var_5 * 49563);
                var_19 = ((arr_24 [i_7]) ? 3794 : ((52 ? -13610 : 0)));
            }
            for (int i_9 = 0; i_9 < 24;i_9 += 1)
            {
                var_20 = (max(var_20, 26028));
                arr_40 [i_2] [i_7] [i_7] = (var_10 - -1027137178);
            }
            var_21 = (min(var_21, (((arr_18 [i_2]) - var_8))));
        }
        var_22 = (((((arr_12 [i_2] [i_2]) ? var_2 : 23))) & 0);
        var_23 = (max(((((1 ? var_8 : var_7)))), (min(255, 1073610752))));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 12;i_10 += 1)
    {
        var_24 = (max(var_24, ((((((~(arr_13 [i_10] [i_10])))) ? 1 : (arr_14 [i_10] [i_10] [i_10]))))));
        arr_43 [i_10] = (((((var_6 ? var_10 : 126))) ? 219 : ((-16467 ? -8 : var_7))));
        var_25 ^= (32767 * ((var_6 ? -10057 : var_10)));
    }
    var_26 = var_0;
    #pragma endscop
}
