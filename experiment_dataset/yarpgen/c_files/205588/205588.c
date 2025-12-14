/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205588
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = ((var_17 << (var_11 - 9)));
    var_21 = var_3;

    for (int i_0 = 3; i_0 < 19;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            var_22 = ((var_5 << (var_3 - 49210)));

            for (int i_2 = 4; i_2 < 21;i_2 += 1)
            {
                arr_10 [i_0] [i_1] [i_2] = (-(arr_8 [i_2 - 4] [i_2 - 4] [i_2] [i_2 - 4]));
                var_23 = ((((1 ? 15872 : 5680989006146391668)) / ((((arr_7 [i_2] [i_0] [i_2]) << (var_4 - 7011260518102391487))))));
            }
        }
        var_24 = (arr_0 [i_0 + 2]);
        var_25 = var_19;
        var_26 = (max(1, 12));
    }
    for (int i_3 = 0; i_3 < 15;i_3 += 1)
    {
        var_27 = 1;
        var_28 = (((-4959 & 1409443292) ? 1 : (var_5 <= var_3)));
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 15;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_29 = -24331;

                    for (int i_6 = 0; i_6 < 15;i_6 += 1)
                    {

                        for (int i_7 = 0; i_7 < 15;i_7 += 1)
                        {
                            var_30 &= 0;
                            var_31 *= ((1 ? (((((((5680989006146391668 == (arr_20 [i_7])))) <= 1)))) : ((-15873 ? 1 : -2255692872))));
                            var_32 &= ((~(((((1 || (arr_22 [i_3] [i_3] [1] [i_3] [i_3] [i_3] [i_3])))) << 1))));
                            var_33 &= 2913238738;
                        }
                        for (int i_8 = 0; i_8 < 15;i_8 += 1)
                        {
                            var_34 = ((-5680989006146391669 ? (((1 && (var_2 <= 22469)))) : ((((arr_7 [i_3] [i_4] [i_8]) || -15873)))));
                            var_35 = ((((2585992239 ? (arr_15 [i_3]) : 4503599627370495))));
                            var_36 = (min((((((12664921080246386230 ? 15856 : 208))) ? 0 : (1284672659 + 2255692872))), ((((arr_17 [i_3] [i_3] [i_8]) == -4503599627370495)))));
                        }
                        var_37 = (0 - -237013509);
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {
                        var_38 = 237013509;

                        for (int i_10 = 4; i_10 < 11;i_10 += 1)
                        {
                            var_39 = ((1 ? 1 : 15872));
                            var_40 = 208;
                        }
                        for (int i_11 = 4; i_11 < 12;i_11 += 1)
                        {
                            var_41 = ((((((arr_34 [i_11 + 2] [i_11] [i_11 - 2] [i_11] [i_11]) == 4503599627370509))) <= (((arr_27 [i_11 + 2] [i_11] [i_11] [i_11] [i_11]) << 1))));
                            var_42 = -237013509;
                            var_43 &= (max((~1284672659), 1));
                        }
                    }
                    /* vectorizable */
                    for (int i_12 = 0; i_12 < 15;i_12 += 1)
                    {
                        var_44 = 1;
                        var_45 = 28;
                    }
                }
            }
        }
    }
    var_46 = (3278 >> var_12);
    #pragma endscop
}
