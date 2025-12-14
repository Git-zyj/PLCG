/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241299
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241299 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241299
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (-16341 && 30938);

    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {

        /* vectorizable */
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {
                        arr_12 [i_0] [i_0] [i_2] [i_0] [i_3] = var_4;
                        arr_13 [18] [i_0] [0] [i_2] [i_3] |= (var_12 % -1);

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            arr_18 [i_4 - 1] [i_4] [i_4 - 1] [i_4 - 1] [i_4] [i_4 - 1] [i_3] = (68 / var_6);
                            var_16 = (min(var_16, 1));
                        }
                    }
                }
            }
            var_17 = 5;
            var_18 = -1;
        }
        for (int i_5 = 3; i_5 < 19;i_5 += 1)
        {
            var_19 = (28 ^ 62);
            var_20 = ((188 <= 10) * 3194935064);
        }
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {

            for (int i_7 = 1; i_7 < 21;i_7 += 1)
            {
                var_21 = ((var_12 != (var_7 % var_1)));
                var_22 = (min(var_22, (((((min(30938, 15))) + ((max(var_4, 1))))))));
            }
            for (int i_8 = 0; i_8 < 22;i_8 += 1)
            {

                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {

                    /* vectorizable */
                    for (int i_10 = 1; i_10 < 21;i_10 += 1)
                    {
                        arr_35 [i_6] = 3286211081;
                        var_23 = 79;
                    }
                    var_24 = (min(var_24, (-15568 <= 21457)));
                    var_25 = (max(var_25, ((max(18765, (min(var_5, ((var_4 >> (var_6 - 4286919478))))))))));
                }
                for (int i_11 = 1; i_11 < 20;i_11 += 1)
                {
                    var_26 ^= (88 - 28014);
                    arr_40 [0] [i_6] [i_6] [i_6] [i_11] = (min(2852568015, 480));
                }

                for (int i_12 = 0; i_12 < 1;i_12 += 1)
                {
                    arr_44 [i_6] = 79;
                    var_27 = (min(var_27, var_5));
                    arr_45 [i_6] [i_6] [i_6] [i_6] = (((((-43 & ((min(188, -23)))))) <= -30));
                    arr_46 [i_0 - 1] [i_0 - 1] [i_6] [i_0 - 1] = var_8;
                    var_28 = var_2;
                }
                for (int i_13 = 1; i_13 < 20;i_13 += 1)
                {
                    var_29 = max((max((var_1 & var_5), (var_8 | 10))), ((((102 >> (14312 - 14301))) | var_5)));
                    var_30 += var_12;
                    var_31 += (min((var_5 + -32764), var_12));
                    var_32 = 1;
                    arr_50 [i_0] [i_6] [i_8] [i_13] = 255;
                }
                arr_51 [i_8] [i_6] [i_0] [i_0] = (max(((min(102, var_3))), 208));
            }
            var_33 = (max(var_33, 188));
        }
        for (int i_14 = 0; i_14 < 22;i_14 += 1)
        {
            var_34 = (32767 & 0);
            arr_54 [i_0] [i_14] = ((17 != (((((min(-11, 1)))) * (0 - 0)))));
            var_35 = (max(var_35, var_3));
            arr_55 [i_14] = var_6;
            var_36 = (min(((min(var_10, -11))), (min(-41, 8518958035001965786))));
        }
        var_37 = max(2491971148073414902, 1491453220);
        var_38 = 28672;
        var_39 = (max(var_39, 48931));
    }
    #pragma endscop
}
