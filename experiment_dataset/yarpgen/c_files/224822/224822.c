/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224822
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((2704730309 ? ((var_6 ? var_15 : (11105919941181948042 * 4282421362749456510))) : var_15));
    var_20 = (var_8 % var_3);

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {

            /* vectorizable */
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                var_21 = (max(var_21, 11105919941181948042));
                var_22 = ((var_11 ? var_6 : (var_18 - var_7)));
                var_23 = ((1 ? var_16 : (arr_4 [i_1] [i_2 + 3] [10])));
            }
            for (int i_3 = 0; i_3 < 15;i_3 += 1)
            {
                var_24 = (((2278416931150935787 == var_9) <= 11252));
                arr_12 [i_1] [i_1] [i_3] [i_1] = ((((arr_7 [i_3] [i_0] [i_3] [i_1]) ? 1450674029 : (arr_0 [i_1] [i_1]))));
            }
            /* vectorizable */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                var_25 = (((arr_11 [i_1] [i_0] [i_0]) ? (arr_5 [0] [i_4]) : ((8352281252588701543 ? var_17 : (arr_7 [i_1] [i_0] [i_1] [i_0])))));
                arr_17 [i_0] [i_0] [i_0] = (arr_15 [i_4 - 1] [i_4 + 1] [i_4 + 1]);
                var_26 &= (((arr_8 [i_0] [i_1] [12]) >= (arr_8 [i_4 + 1] [i_4] [i_4 + 1])));
            }
            var_27 = (((((var_11 / (arr_11 [i_1] [i_1] [i_1])))) ? ((((arr_13 [i_1] [i_1] [i_1] [i_0]) >> var_17))) : ((2775971645 ? 7 : var_13))));
            /* LoopNest 2 */
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 12;i_6 += 1)
                {
                    {
                        var_28 = 106;
                        var_29 = (13733414152181404366 > 13733414152181404348);
                        var_30 &= 1590236986;
                        arr_26 [i_0] [i_1] [i_5] [i_6] = ((~((((min((arr_9 [i_1]), (arr_25 [7] [i_0] [i_0] [i_0])))) ? 1221867734017629584 : 6917))));
                    }
                }
            }

            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                var_31 -= (arr_23 [i_1] [1] [i_1] [2] [9]);
                arr_29 [i_7] [i_7] [i_7] = (max(var_13, 4));
                var_32 += var_17;
                var_33 &= ((((arr_4 [i_0] [i_1] [i_7]) > (arr_4 [i_0] [i_1] [i_7]))));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_34 = (min(var_34, var_12));
                var_35 &= (!(arr_25 [i_8] [1] [7] [8]));
                var_36 |= ((((min(13, 11105919941181948042))) ? ((((min(45075, 124))) ? (arr_24 [i_8] [i_0] [i_0] [i_0]) : (arr_10 [i_0] [i_1] [i_8] [2]))) : (((min((arr_21 [i_8] [i_1] [i_0]), (arr_21 [i_0] [i_1] [i_8])))))));
            }
        }
        var_37 = (max(var_37, (arr_9 [i_0])));
        var_38 = ((~(((arr_32 [i_0] [i_0] [i_0] [i_0]) + ((var_1 ? (arr_8 [i_0] [13] [i_0]) : var_3))))));
    }
    for (int i_9 = 4; i_9 < 12;i_9 += 1) /* same iter space */
    {
        arr_37 [i_9] = var_3;
        var_39 = ((-429463256 >> (((arr_35 [i_9 + 1]) - (arr_35 [i_9 - 2])))));
    }
    for (int i_10 = 4; i_10 < 12;i_10 += 1) /* same iter space */
    {
        var_40 ^= (min(((((arr_36 [i_10 - 1]) ? 0 : -79))), ((2278416931150935791 ? 3914048630661714856 : 2278416931150935787))));
        var_41 = (max(var_41, (arr_40 [i_10])));
        var_42 *= (arr_39 [i_10 - 1]);
        arr_41 [i_10] = (max(((var_5 - (min(1, -4851388683268459668)))), 23599));
        arr_42 [i_10] = var_14;
    }
    for (int i_11 = 4; i_11 < 12;i_11 += 1) /* same iter space */
    {
        var_43 -= (arr_36 [i_11]);
        var_44 = -var_17;
        var_45 = 32176;
        arr_46 [i_11 + 1] = (((arr_36 [i_11]) < var_12));
    }
    var_46 &= var_4;
    #pragma endscop
}
