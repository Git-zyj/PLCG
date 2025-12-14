/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215209
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215209 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215209
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = -1;
    var_11 = (max(var_11, (((var_9 ? var_2 : var_7)))));

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_12 += (min(((137 ? (arr_1 [i_0]) : var_4)), (((!((min(var_6, 1))))))));

        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            var_13 &= (min((arr_3 [i_0] [i_0]), ((((max(var_1, (arr_3 [i_0] [i_0]))) < 1)))));

            for (int i_2 = 1; i_2 < 13;i_2 += 1)
            {
                arr_6 [i_2] [i_2 - 1] [i_2] [i_1] = (arr_2 [i_0] [i_1] [i_1]);
                var_14 = (max(((var_0 ? var_9 : (((arr_1 [i_2]) ? (arr_4 [i_0] [i_0] [i_1]) : (arr_3 [i_1] [i_1]))))), ((max(var_0, (-9019241570267525374 ^ -68))))));
            }

            /* vectorizable */
            for (int i_3 = 1; i_3 < 13;i_3 += 1)
            {
                arr_11 [i_0] [i_0] [i_1] = var_8;
                var_15 = (((((var_8 ? -32762 : var_1))) ? 18446744073709551605 : var_7));
            }
            for (int i_4 = 3; i_4 < 12;i_4 += 1) /* same iter space */
            {
                var_16 &= (arr_10 [i_0] [i_1] [i_4] [i_4]);
                var_17 = (max(var_17, (((((~(arr_14 [2]))) % (((((arr_1 [i_4 - 1]) >= (arr_1 [i_4 - 3]))))))))));
            }
            for (int i_5 = 3; i_5 < 12;i_5 += 1) /* same iter space */
            {
                arr_17 [i_0] [i_1] [i_5 - 2] = (((var_3 ? ((((arr_1 [i_0]) ? var_7 : var_1))) : (max(2312014654, var_5)))));
                arr_18 [i_1] [i_1] [i_1] = 4294967273;
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 14;i_7 += 1)
                    {
                        {
                            var_18 = 1;
                            arr_25 [i_1] [i_1] [i_5] [i_1] [i_1] [1] [i_7] = ((var_3 >> (((arr_5 [i_5] [i_5 - 1] [i_5]) + 87))));
                            var_19 -= ((-var_2 ? (max((min((arr_7 [i_0] [i_0] [i_0]), var_8)), (var_1 && var_5))) : (((max((!119), (max(118, 142))))))));
                            var_20 = (~-32762);
                        }
                    }
                }
            }
            for (int i_8 = 3; i_8 < 12;i_8 += 1) /* same iter space */
            {
                arr_28 [i_0] [i_1] [i_8] = ((((((-9223372036854775807 - 1) ? 8167092992804428429 : 118))) > (max((7170906113190025338 + 214), (min(10547217073633496082, 126))))));
                arr_29 [i_0] [i_1] [i_1] [i_1] = (arr_2 [i_8 + 1] [i_1] [i_1]);
                arr_30 [i_1] [i_1] [i_1] = ((((((((var_6 ? (arr_23 [i_0] [i_0] [i_0] [i_0] [i_1] [i_8 - 3] [i_8 - 3]) : 2487820202))) ? (arr_16 [i_0] [i_0] [i_1]) : var_5))) + (((arr_12 [i_0] [i_0] [i_0] [i_8 - 1]) + var_4))));
            }
            var_21 = var_2;
        }
        for (int i_9 = 0; i_9 < 14;i_9 += 1)
        {
            arr_33 [i_9] = (((var_1 ? (arr_27 [i_0] [i_0] [i_9] [i_0]) : (arr_3 [i_0] [i_0]))) >= (((((arr_3 [i_0] [i_0]) > (arr_27 [i_0] [i_0] [i_0] [i_0]))))));
            arr_34 [i_0] [i_0] [i_0] = (~var_8);
            var_22 += ((1 ? -32745 : 137));
            var_23 = (((((((((arr_1 [i_0]) >> (var_7 + 72))) != (var_9 >= 33554431))))) - var_4));
        }
        var_24 = (min(var_24, (arr_32 [i_0] [i_0] [i_0])));
        var_25 += (((((~(min(12871421396107161690, 0))))) ? -32762 : (((1 | -25162) ? 191 : -3559819620991688948))));
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 14;i_10 += 1)
        {
            for (int i_11 = 0; i_11 < 14;i_11 += 1)
            {
                {
                    var_26 = ((!(((~(max(46727, var_2)))))));
                    arr_39 [i_11] [i_10] [i_0] = (((((((var_7 + (arr_3 [i_0] [i_0]))) / 42))) ? (arr_13 [i_0] [i_10] [i_11] [i_0]) : (1 >= 59787)));
                    var_27 += (max(((1 ? 12871421396107161690 : -20853)), (((((-3910062831794221073 ? (arr_19 [i_0] [i_0]) : var_6)) >= (max((arr_23 [i_0] [i_10] [i_10] [i_10] [i_10] [i_10] [i_11]), var_2)))))));
                }
            }
        }
    }

    for (int i_12 = 0; i_12 < 13;i_12 += 1)
    {
        var_28 = (arr_7 [i_12] [i_12] [i_12]);
        arr_42 [i_12] = ((-14919449513206171511 ? ((((min(var_2, (arr_9 [i_12]))) <= (arr_1 [8])))) : (arr_12 [i_12] [i_12] [i_12] [i_12])));
    }
    #pragma endscop
}
