/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221518
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((~(max(var_8, 237))));

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 25;i_2 += 1)
            {

                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    var_15 = (((max(var_6, (max(3644863739, var_3)))) % (var_12 & 18446744073709551615)));
                    arr_10 [i_2] [i_1] [i_1] [i_2] [i_2] [i_3] = var_8;
                }
                for (int i_4 = 3; i_4 < 23;i_4 += 1)
                {

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        var_16 += var_7;
                        var_17 = (!var_12);
                        arr_16 [i_2] = -22574;
                        var_18 = ((var_0 >= 3613721225) % var_11);
                        var_19 = var_5;
                    }

                    for (int i_6 = 4; i_6 < 24;i_6 += 1)
                    {
                        var_20 *= (((max(1678604683, -2054704295095873525)) < var_7));
                        var_21 = var_0;
                        var_22 = (max(var_22, var_3));
                    }
                    for (int i_7 = 2; i_7 < 22;i_7 += 1)
                    {
                        var_23 = ((var_11 | (min(-1212602546, (var_9 | 3259942372235360309)))));
                        var_24 = (((var_12 - (var_13 || var_2))) != ((((2275338440208858972 == (((((-32767 - 1) > var_9)))))))));
                    }
                    for (int i_8 = 0; i_8 < 25;i_8 += 1)
                    {
                        arr_26 [i_0] [i_0] [i_0] [i_0] |= (((var_2 % var_13) / -125));
                        var_25 -= (max(1821327977, (max(-293835070305823013, -2470163055620776225))));
                        var_26 = var_1;
                        arr_27 [10] [10] [i_1] [i_2] [10] [i_2] [i_2] = var_4;
                    }
                    for (int i_9 = 2; i_9 < 24;i_9 += 1)
                    {
                        var_27 = (((max(-3589647459912390549, 76)) % (((var_0 >> (var_4 + 6975448292335340849))))));
                        var_28 = (max(((-(7755829720480106608 + 8541674453142171575))), ((((9223372036854775807 > var_11) * var_2)))));
                    }
                    var_29 = min((918779243 >= var_8), 2984528627053341955);
                }
                var_30 = (max(var_30, ((min(26388279066624, (min((var_11 | var_8), -1)))))));
                var_31 = (max(var_31, -4843925151249512706));
            }
            arr_30 [i_0] = 11;
        }
        for (int i_10 = 0; i_10 < 25;i_10 += 1)
        {
            var_32 = 2638952312;
            arr_33 [i_0] [i_0] = (((~1035207991) >= (max((-1 >= 13424607700637506374), var_7))));
        }
        /* vectorizable */
        for (int i_11 = 1; i_11 < 23;i_11 += 1)
        {
            var_33 = var_8;
            var_34 = (((!0) * (var_7 - var_12)));
        }

        for (int i_12 = 0; i_12 < 25;i_12 += 1)
        {
            arr_42 [i_12] [i_12] [i_0] = ((-(min((max(var_12, 77)), -585267916))));
            arr_43 [i_0] = 715772397;
            var_35 = (((691409361 | var_10) <= (max((((var_13 + 9223372036854775807) << (var_0 - 1629326536))), 1))));
            var_36 = (max(var_36, (((((max((var_1 - var_6), (18593 / var_10)))) > (max((max(var_12, var_5)), 128)))))));
        }
        arr_44 [i_0] [12] = ((~((((max(var_5, 208995227)) != var_4)))));
    }
    var_37 = (var_5 >= var_4);
    #pragma endscop
}
