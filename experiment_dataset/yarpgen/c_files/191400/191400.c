/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191400
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191400 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191400
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (14174110872335580218 != 12622782);

    /* vectorizable */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        arr_3 [i_0] = var_1;

        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            var_11 = (9539718783488648624 | 12268338511776994109);
            arr_7 [i_0] [7] [i_1] = ((var_5 - (!var_9)));
            var_12 ^= var_6;
        }
        var_13 = var_0;

        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            arr_10 [i_2] = 9539718783488648626;
            var_14 = (!9539718783488648613);
            var_15 = -8907025290220903012;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 1;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 19;i_4 += 1)
                {
                    {
                        arr_17 [i_2] = (~var_7);
                        var_16 += 10604959347972720505;
                    }
                }
            }
            arr_18 [i_0] [i_0] [i_0] |= (var_5 && var_6);
        }
        for (int i_5 = 0; i_5 < 19;i_5 += 1)
        {
            arr_23 [i_5] = 13634782501323072030;

            for (int i_6 = 0; i_6 < 1;i_6 += 1)
            {

                for (int i_7 = 0; i_7 < 19;i_7 += 1) /* same iter space */
                {
                    arr_29 [i_6] [i_5] [i_0] = (!var_0);
                    arr_30 [i_7] [11] [i_5] [i_5] [i_0] = (((!var_0) > var_4));
                }
                for (int i_8 = 0; i_8 < 19;i_8 += 1) /* same iter space */
                {

                    for (int i_9 = 2; i_9 < 16;i_9 += 1)
                    {
                        var_17 = (min(var_17, (!var_3)));
                        var_18 = (max(var_18, (!7841784725736831110)));
                        var_19 = (((!6996141188910234351) << 15401044659362510012));
                    }
                    for (int i_10 = 0; i_10 < 19;i_10 += 1) /* same iter space */
                    {
                        arr_40 [i_0] [i_0] [i_0] [i_0] [i_10] [i_10] [i_0] |= 1885747168250678636;
                        var_20 ^= (15401044659362510019 & 18431158249248590347);
                    }
                    for (int i_11 = 0; i_11 < 19;i_11 += 1) /* same iter space */
                    {
                        var_21 = (max(var_21, (~8907025290220902980)));
                        var_22 += (var_5 || var_9);
                    }
                    for (int i_12 = 0; i_12 < 19;i_12 += 1) /* same iter space */
                    {
                        var_23 &= ((~(~var_0)));
                        arr_46 [i_0] [i_0] [1] [i_5] [i_0] = (--10986448230831868966);
                    }
                    arr_47 [i_5] [i_5] [i_5] [i_5] [i_5] [0] = (-3662922153 - 4811961572386479587);

                    for (int i_13 = 0; i_13 < 19;i_13 += 1)
                    {
                        arr_50 [i_8] [i_5] = ((var_5 && (3045699414347041608 || 4811961572386479608)));
                        var_24 = (max(var_24, 13634782501323072007));
                        arr_51 [i_0] [i_8] |= ((var_3 ? var_9 : var_3));
                    }
                    var_25 = (1 != 3662922163);
                }
                var_26 ^= (var_3 < var_6);
            }
            var_27 ^= -3955529036759635907;
            arr_52 [i_5] [i_5] = (((4191936580 ^ 16271190798130161170) ? 17916450897072608325 : (!var_4)));
        }
        arr_53 [i_0] = ((!(!54)));
    }
    for (int i_14 = 2; i_14 < 14;i_14 += 1)
    {
        var_28 += var_0;
        var_29 = (min(var_29, 42410));
    }
    var_30 = (max((((var_8 << (var_3 - 789875556)))), (((var_3 ? 3955529036759635911 : 100)))));

    for (int i_15 = 0; i_15 < 19;i_15 += 1)
    {
        var_31 = (min(var_31, ((-(~4302034555882447732)))));
        var_32 = ((-var_0 ? ((var_0 << (var_1 + 31))) : var_0));
        arr_59 [i_15] = (min(-var_9, var_6));
        var_33 *= (((var_6 && var_9) ? (!var_5) : 6363383674289289834));
    }
    for (int i_16 = 1; i_16 < 15;i_16 += 1) /* same iter space */
    {
        var_34 = ((((!((min(var_1, var_3))))) ? (max((6363383674289289834 * var_5), (min(13982298055003018639, -29)))) : var_9));
        var_35 = (min(var_35, (~-29)));
    }
    for (int i_17 = 1; i_17 < 15;i_17 += 1) /* same iter space */
    {
        arr_67 [i_17] = ((-(123 / -var_8)));
        var_36 = (max(var_36, ((max(14491215036949915701, (min((!37), (max(7841784725736831110, 14238397494655436643)))))))));
    }
    for (int i_18 = 1; i_18 < 15;i_18 += 1) /* same iter space */
    {
        var_37 = 13634782501323072010;
        arr_70 [i_18] = ((var_5 & (max((~var_4), (~var_2)))));
    }
    #pragma endscop
}
