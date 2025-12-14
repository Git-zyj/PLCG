/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229873
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229873 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229873
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= 32812;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_12 = var_9;
                    var_13 = (~1084428866);
                    var_14 = (min(var_14, (!43240)));
                }
                var_15 = 2763850359;
            }
            var_16 = 1137707451;
            var_17 = 3157259837;
            var_18 = ((!(!3157259834)));
            var_19 = (max(var_19, 3157259845));
        }
        var_20 = 10705038391256438640;
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_13 [1] = var_6;

        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {

            for (int i_6 = 0; i_6 < 21;i_6 += 1)
            {
                var_21 += (~var_10);
                var_22 = 3157259834;
                var_23 = 1161105140;
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 1;i_7 += 1) /* same iter space */
            {
                var_24 = 2852317929;
                arr_23 [i_5] = var_0;
            }
            for (int i_8 = 0; i_8 < 1;i_8 += 1) /* same iter space */
            {
                arr_26 [i_4] [i_5] [i_8] = var_9;

                for (int i_9 = 1; i_9 < 20;i_9 += 1)
                {
                    var_25 = -3157259856;
                    var_26 = 3815800101854476270;
                    var_27 = (min(var_27, 3815800101854476270));

                    for (int i_10 = 0; i_10 < 21;i_10 += 1)
                    {
                        var_28 = (!var_2);
                        arr_34 [i_4] [i_5] [1] [i_9 - 1] [i_5] [i_4] [i_9 - 1] = (~var_1);
                        arr_35 [0] [i_5] [i_5] [i_4] = (~var_4);
                    }
                }
            }
            var_29 = (min(var_29, (((-(!238))))));
            var_30 = 1137707439;
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            var_31 = -722822081;
            var_32 *= (~var_1);
            arr_38 [i_11] [i_4] [i_4] = 292258330;
        }
        for (int i_12 = 0; i_12 < 21;i_12 += 1)
        {

            /* vectorizable */
            for (int i_13 = 0; i_13 < 21;i_13 += 1) /* same iter space */
            {
                var_33 = -var_6;
                var_34 = var_1;
                arr_43 [i_4] = var_2;
                var_35 = var_7;
                arr_44 [i_12] [i_12] [i_12] [13] = 2637129795;
            }
            for (int i_14 = 0; i_14 < 21;i_14 += 1) /* same iter space */
            {
                var_36 = 1;
                var_37 = var_1;
                arr_49 [i_4] [12] = (!var_6);
                var_38 = var_10;
            }
            for (int i_15 = 0; i_15 < 21;i_15 += 1) /* same iter space */
            {
                var_39 |= ((!(!var_5)));
                var_40 = (~var_1);
                var_41 = var_9;
                var_42 = (min(var_42, 17449));
            }
            for (int i_16 = 0; i_16 < 21;i_16 += 1) /* same iter space */
            {
                var_43 = var_0;
                var_44 = (!-var_10);

                for (int i_17 = 0; i_17 < 21;i_17 += 1)
                {
                    var_45 = 2530893849;
                    arr_58 [i_4] [i_16] = var_6;
                }
                /* vectorizable */
                for (int i_18 = 2; i_18 < 19;i_18 += 1)
                {
                    var_46 = (~var_10);
                    var_47 = (min(var_47, var_10));

                    for (int i_19 = 0; i_19 < 21;i_19 += 1)
                    {
                        var_48 = -8982651938123998308;
                        var_49 = 8253804743423138040;
                        arr_63 [i_4] [i_4] [i_16] [i_4] [i_19] [i_19] = (!var_5);
                        var_50 = var_2;
                    }
                    var_51 = (max(var_51, (!1306945540)));
                }
                arr_64 [3] = 3157259856;
            }

            for (int i_20 = 0; i_20 < 1;i_20 += 1)
            {

                for (int i_21 = 2; i_21 < 19;i_21 += 1) /* same iter space */
                {
                    var_52 = var_3;
                    var_53 ^= (!var_2);
                    var_54 = ((-(~var_9)));
                }
                for (int i_22 = 2; i_22 < 19;i_22 += 1) /* same iter space */
                {
                    var_55 = (max(var_55, 1));
                    arr_73 [i_4] [i_12] [i_20] [i_22] [i_22] [i_22] = var_10;
                    var_56 = 10898762238652097436;
                }
                /* vectorizable */
                for (int i_23 = 2; i_23 < 19;i_23 += 1) /* same iter space */
                {
                    var_57 = 17437;
                    var_58 = var_3;
                    var_59 = (max(var_59, (!var_3)));
                    var_60 = -88;
                    var_61 = 2151217387;
                }
                var_62 = var_4;
            }
            var_63 = -var_3;
        }
        arr_77 [i_4] = -var_0;
        var_64 = (~7547981835057454179);
    }
    for (int i_24 = 1; i_24 < 20;i_24 += 1)
    {

        for (int i_25 = 0; i_25 < 1;i_25 += 1) /* same iter space */
        {
            var_65 |= -var_2;

            for (int i_26 = 0; i_26 < 22;i_26 += 1) /* same iter space */
            {
                arr_85 [i_25] = 3998620087195559169;
                arr_86 [i_24 + 2] [i_24] [i_25] = -3157259856;
            }
            for (int i_27 = 0; i_27 < 22;i_27 += 1) /* same iter space */
            {
                var_66 = var_3;
                var_67 = (!1425919884);
            }
            for (int i_28 = 0; i_28 < 22;i_28 += 1) /* same iter space */
            {
                var_68 = (~(~var_8));
                var_69 = var_5;
                var_70 = (min(var_70, (!var_5)));
            }
            arr_92 [i_24 + 1] [i_25] = 1;

            for (int i_29 = 2; i_29 < 20;i_29 += 1)
            {
                arr_96 [i_24 + 1] [i_24 + 1] [i_25] [i_24] = -643552515;
                arr_97 [i_24 + 1] [i_24] [i_25] = 26;
                var_71 = (min(var_71, var_2));
            }
            for (int i_30 = 0; i_30 < 22;i_30 += 1)
            {

                for (int i_31 = 1; i_31 < 18;i_31 += 1)
                {
                    var_72 = ((!(!var_1)));

                    /* vectorizable */
                    for (int i_32 = 0; i_32 < 22;i_32 += 1) /* same iter space */
                    {
                        arr_106 [i_25] = (!2084584987);
                        var_73 ^= -1137707425;
                    }
                    for (int i_33 = 0; i_33 < 22;i_33 += 1) /* same iter space */
                    {
                        var_74 = var_10;
                        var_75 *= 52902;
                        var_76 -= 3883483516;
                        var_77 = var_10;
                    }
                }
                /* vectorizable */
                for (int i_34 = 2; i_34 < 20;i_34 += 1)
                {
                    var_78 = 125;
                    var_79 = (!var_7);

                    for (int i_35 = 0; i_35 < 22;i_35 += 1)
                    {
                        var_80 = var_1;
                        var_81 = (max(var_81, 218));
                        var_82 = (max(var_82, (!var_8)));
                    }
                    var_83 = var_4;
                }
                /* vectorizable */
                for (int i_36 = 2; i_36 < 20;i_36 += 1)
                {
                    var_84 = (!2349909629);
                    var_85 = (max(var_85, 64));
                    var_86 = (!245);
                    arr_119 [i_36] [i_25] = 1137707431;
                }
                var_87 += ((-(!52)));
            }

            for (int i_37 = 0; i_37 < 22;i_37 += 1)
            {
                var_88 = (~3883483520);

                for (int i_38 = 2; i_38 < 20;i_38 += 1)
                {
                    arr_126 [i_24] [i_24] [i_37] [i_38] [i_25] [i_24] = var_3;
                    var_89 = -5396481181081252807;
                }
                arr_127 [i_24] [i_24] [i_25] = (!var_9);
            }
        }
        for (int i_39 = 0; i_39 < 1;i_39 += 1) /* same iter space */
        {
            var_90 = var_3;
            arr_130 [i_39] = 1137707461;
        }
        var_91 = -1494250651;
        arr_131 [i_24] [i_24] = var_5;
    }
    var_92 = var_8;
    #pragma endscop
}
