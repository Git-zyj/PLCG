/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231845
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231845 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231845
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 1; i_0 < 16;i_0 += 1) /* same iter space */
    {
        var_18 &= var_16;
        var_19 = ((var_10 << (41974 - 41944)));
    }
    for (int i_1 = 1; i_1 < 16;i_1 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 20;i_3 += 1)
            {
                {
                    var_20 = (((var_2 || var_12) == (max(var_13, var_1))));
                    var_21 = (((max(var_8, (var_16 << var_5))) | 130944));
                    var_22 = (max((var_8 - var_10), ((((41974 << (var_17 - 3445375325041929641))) | 41974))));
                }
            }
        }
        var_23 = (min((max(var_11, var_17)), 41974));
        var_24 ^= ((((max(var_9, -1))) / -2027963740));
    }
    for (int i_4 = 1; i_4 < 16;i_4 += 1) /* same iter space */
    {

        for (int i_5 = 2; i_5 < 19;i_5 += 1)
        {
            var_25 = -1937109848510028967;

            for (int i_6 = 3; i_6 < 18;i_6 += 1)
            {
                var_26 = 22346;
                var_27 ^= (min(4526, (min(2147483647, (~10)))));
            }
            /* vectorizable */
            for (int i_7 = 0; i_7 < 20;i_7 += 1)
            {
                /* LoopNest 2 */
                for (int i_8 = 0; i_8 < 20;i_8 += 1)
                {
                    for (int i_9 = 0; i_9 < 20;i_9 += 1)
                    {
                        {
                            var_28 = (~40);
                            var_29 = -var_4;
                        }
                    }
                }
                var_30 &= (var_16 + var_17);
                var_31 &= ((!(1 && -20)));

                for (int i_10 = 0; i_10 < 20;i_10 += 1)
                {
                    var_32 = 0;
                    var_33 = var_5;
                    var_34 = -6;

                    for (int i_11 = 1; i_11 < 1;i_11 += 1)
                    {
                        var_35 ^= var_12;
                        var_36 &= (!var_11);
                        var_37 = ((var_17 < (var_13 % 906)));
                        var_38 = (((var_9 + 2147483647) << (62879 - 62879)));
                    }
                }
            }
            var_39 *= var_13;
        }
        /* vectorizable */
        for (int i_12 = 0; i_12 < 1;i_12 += 1)
        {
            var_40 -= (((var_15 == 1) || 60));
            var_41 = -var_14;
            var_42 &= (var_9 - var_5);
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_43 += (((!14) == (((!((max(var_16, 31))))))));
            var_44 = ((((min(var_2, var_15))) << ((((max(2656, var_9))) - 53438))));

            for (int i_14 = 0; i_14 < 20;i_14 += 1)
            {
                var_45 = (min((max(39808, 1073733632)), (var_5 / var_4)));

                for (int i_15 = 0; i_15 < 20;i_15 += 1)
                {
                    var_46 = (min((min(var_11, var_2)), var_8));
                    var_47 = (var_8 >> var_10);
                    var_48 = -1073733648;
                    var_49 = ((((((22346 + var_12) > var_17))) != (min(-1073733633, -1073733658))));
                    var_50 = var_2;
                }
                var_51 = var_0;
                var_52 = ((14 + (max(var_5, 15857316091418445615))));
            }
            for (int i_16 = 2; i_16 < 19;i_16 += 1)
            {
                var_53 = (min((var_14 && var_5), (~var_6)));
                var_54 = (max((var_10 > 242), var_10));

                for (int i_17 = 0; i_17 < 20;i_17 += 1)
                {
                    var_55 -= (242 <= 0);
                    var_56 = (-var_4 < var_16);
                    var_57 = (min(((max(var_1, var_16))), (max(19330, 3314249440))));
                    var_58 = (max((min(var_15, 4)), (16384 && 10793320010500837053)));
                }
                /* vectorizable */
                for (int i_18 = 0; i_18 < 20;i_18 += 1)
                {
                    var_59 += (var_0 || var_2);
                    var_60 += 1;
                }
            }
        }

        for (int i_19 = 0; i_19 < 20;i_19 += 1)
        {
            /* LoopNest 3 */
            for (int i_20 = 0; i_20 < 20;i_20 += 1)
            {
                for (int i_21 = 4; i_21 < 16;i_21 += 1)
                {
                    for (int i_22 = 0; i_22 < 20;i_22 += 1)
                    {
                        {
                            var_61 *= var_16;
                            var_62 = var_8;
                            var_63 = (1073733650 > var_15);
                            var_64 = var_8;
                        }
                    }
                }
            }
            var_65 = -1882581690107919616;
        }
        for (int i_23 = 0; i_23 < 20;i_23 += 1)
        {
            var_66 *= var_10;
            var_67 = var_4;
        }
        var_68 = var_13;
        var_69 = var_4;
        var_70 = ((max(var_4, var_17)));
    }
    var_71 += var_5;
    var_72 = var_7;
    #pragma endscop
}
