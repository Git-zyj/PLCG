/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 1;i_0 += 1) /* same iter space */
    {
        var_13 = var_10;
        arr_4 [i_0] [i_0] = 4009751425;
        var_14 = 14538;

        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            var_15 = 4009751409;
            arr_9 [6] [i_1] = (2147483647 <= 285215870);
        }
        for (int i_2 = 3; i_2 < 9;i_2 += 1)
        {
            var_16 = ((~(~2147483647)));
            var_17 = (-9223372036854775805 < 1204350184808873369);
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 11;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 11;i_4 += 1)
                {
                    {
                        var_18 = (min(var_18, (((1 ? 131 : 169)))));
                        var_19 = (~var_4);
                    }
                }
            }
        }
        for (int i_5 = 0; i_5 < 11;i_5 += 1)
        {
            arr_21 [i_0] [i_0] [i_5] = 285215871;
            var_20 = (-2214466578258552218 || 1480963998);
        }
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_21 = (!20);
            var_22 = 1;
            var_23 = 17242393888900678224;
        }
        var_24 = (min(var_24, 255));
    }
    /* vectorizable */
    for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
    {
        var_25 = 1;
        var_26 = (max(var_26, var_5));

        for (int i_8 = 2; i_8 < 10;i_8 += 1)
        {
            var_27 &= (arr_1 [i_8 - 1] [i_8]);
            var_28 = (max(var_28, (arr_8 [6] [i_8] [6])));
            var_29 = 13297599972379494835;
            var_30 = 169;
        }
        var_31 = var_12;
    }
    for (int i_9 = 1; i_9 < 15;i_9 += 1)
    {
        var_32 = 1480963988;
        var_33 = (min(var_33, 12948));
    }
    /* vectorizable */
    for (int i_10 = 0; i_10 < 11;i_10 += 1)
    {

        for (int i_11 = 0; i_11 < 11;i_11 += 1)
        {
            /* LoopNest 3 */
            for (int i_12 = 0; i_12 < 11;i_12 += 1)
            {
                for (int i_13 = 0; i_13 < 11;i_13 += 1)
                {
                    for (int i_14 = 0; i_14 < 1;i_14 += 1)
                    {
                        {
                            var_34 = (87 > 32750);
                            var_35 = (-2147483647 - 1);
                        }
                    }
                }
            }
            var_36 = 11743;
            var_37 = (~1844192646);
            arr_44 [i_10] = (~-22685);
            var_38 = (((((2450774649 ? 8468951242560085099 : 157))) ? 2450774649 : (arr_0 [i_10] [i_10])));
        }
        var_39 = -1788070341;
        arr_45 [0] = (~-1480963989);

        for (int i_15 = 0; i_15 < 11;i_15 += 1)
        {
            var_40 = (~-3277686782334460903);
            var_41 = (10359771928151999381 + 12359);
        }
        for (int i_16 = 1; i_16 < 8;i_16 += 1) /* same iter space */
        {
            arr_52 [i_10] = (326867558 | 17725);
            var_42 = (-1297450681 ^ 1844192632);
            var_43 += 1;
        }
        for (int i_17 = 1; i_17 < 8;i_17 += 1) /* same iter space */
        {
            var_44 = 16128;
            var_45 &= ((~(~var_1)));
        }
    }
    var_46 = (((((0 | (14337 && -22685)))) ? 157 : -1));
    var_47 = (min(-22685, -18183));

    for (int i_18 = 3; i_18 < 22;i_18 += 1)
    {
        var_48 = (arr_56 [i_18]);
        var_49 = (min(41374, 1));
    }
    for (int i_19 = 0; i_19 < 24;i_19 += 1)
    {
        arr_62 [i_19] = ((98 ? 190350961 : 98));
        var_50 = (max(1, 51199));
    }
    #pragma endscop
}
