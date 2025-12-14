/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30625
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30625 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30625
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_11 = (max(-64, 900426877));
        var_12 &= ((~((((((min(var_7, var_4)))) != (min(var_8, var_0)))))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 18;i_1 += 1) /* same iter space */
        {
            var_13 ^= (64630 << 0);
            var_14 = (((4210012728992549923 >= var_7) << (-6011 + 6030)));
            var_15 |= ((4064 >= (var_0 >= 3394540421)));
            var_16 |= 29;
            var_17 = (max(var_17, var_0));
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {

            for (int i_3 = 4; i_3 < 16;i_3 += 1) /* same iter space */
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1) /* same iter space */
                {
                    var_18 = ((!(!3405280528)));
                    var_19 = (!var_8);
                    var_20 = (((max((-32767 - 1), 0)) != (32752 != 20)));
                    var_21 = ((~(min(var_5, -7616))));
                }
                for (int i_5 = 1; i_5 < 1;i_5 += 1) /* same iter space */
                {
                    var_22 = 255;
                    var_23 = var_2;
                    var_24 = min(((min(var_2, ((2305 ? var_3 : 2305))))), (1589617451 ^ var_5));
                    var_25 = ((((((26 >= 7862952100654312399) ? -var_9 : (220 << 0)))) ? (min(9136934297177473105, (0 >= var_5))) : (((~((1 ? 52590 : 8586532644969408648)))))));
                    var_26 = ((-(~var_8)));
                }
                for (int i_6 = 1; i_6 < 1;i_6 += 1) /* same iter space */
                {

                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        var_27 += (!20389);
                        var_28 = var_9;
                    }
                    var_29 = ((~(min(((min(var_9, -22434))), ((121 ? -22955 : 1))))));
                }
                for (int i_8 = 1; i_8 < 1;i_8 += 1) /* same iter space */
                {
                    var_30 += ((0 ? -32761 : 12092));
                    var_31 = (min(var_31, (((!(((~(1 >= var_8)))))))));
                }
                var_32 = 23031;
                var_33 = (max(var_33, (((((min(var_3, 0))) >= ((var_7 ? var_9 : 1687)))))));
            }
            /* vectorizable */
            for (int i_9 = 4; i_9 < 16;i_9 += 1) /* same iter space */
            {
                var_34 -= (!var_8);
                var_35 = ((((0 ? 1 : 110)) >= -1));
                var_36 = (!-14980);
                var_37 = (~(var_10 ^ var_0));

                for (int i_10 = 0; i_10 < 1;i_10 += 1)
                {
                    var_38 = ((~(~32767)));
                    var_39 ^= var_2;
                    var_40 = (min(var_40, 27));
                    var_41 = (((((var_1 ? 28945 : 1))) ? 65535 : ((0 ? 1879048192 : -32089))));
                }
                for (int i_11 = 2; i_11 < 17;i_11 += 1)
                {
                    var_42 = ((521756514 ? (((var_8 ? 66 : var_1))) : ((65 ? 160 : 16936249639985846507))));
                    var_43 = (1 != var_1);
                }
            }
            for (int i_12 = 4; i_12 < 16;i_12 += 1) /* same iter space */
            {
                var_44 = var_2;
                var_45 = (min(var_45, ((min(7607, 213)))));
                var_46 = 2315123697;
                var_47 = (max(-15575, (2033761601946794248 || 5281)));
                var_48 = ((max((max(var_0, 7168), -var_7))));
            }
            var_49 = ((!-23021) >= (((!2) << (65529 != 4))));
        }
    }
    var_50 = -26245;
    #pragma endscop
}
