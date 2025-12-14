/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = var_3;
    var_18 = ((((1470249670 || -2886206833356173012) || 32758)) ? (max(((max(-2886206833356173012, var_11))), ((var_8 ? var_15 : var_3)))) : (((var_1 ? var_9 : var_10))));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_6 [i_2] [i_1] [i_0] = (((((+((((arr_2 [i_0]) || -2886206833356173012)))))) || (arr_5 [i_0] [i_0] [i_0])));
                    var_19 ^= max(30185, ((((((var_15 ? (arr_2 [i_0]) : var_16))) ? (var_14 || var_13) : (var_16 || 32766)))));
                }
            }
        }

        for (int i_3 = 0; i_3 < 17;i_3 += 1)
        {
            var_20 = 6723334901904503140;
            var_21 |= (((((65535 ? var_3 : (arr_2 [i_0 + 1])))) ? 9532 : (max(var_5, (arr_1 [i_0])))));
            var_22 ^= ((((-121 || 44) || (-20832 || 65535))) || (!4));
            var_23 = (max(var_23, (((((max(15, (!15393162788864)))) || ((max((4294967295 || var_11), var_12))))))));
        }
        for (int i_4 = 3; i_4 < 16;i_4 += 1)
        {
            var_24 = 0;
            arr_12 [i_0] = 56;
            arr_13 [i_0] [i_0] [i_4] = (~-1);
        }
        var_25 = var_15;
    }
    for (int i_5 = 4; i_5 < 14;i_5 += 1)
    {
        /* LoopNest 2 */
        for (int i_6 = 1; i_6 < 11;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 15;i_7 += 1)
            {
                {

                    /* vectorizable */
                    for (int i_8 = 1; i_8 < 14;i_8 += 1)
                    {
                        var_26 = (((arr_0 [i_5 + 1]) || (arr_0 [i_5 + 1])));
                        var_27 = ((!(((var_4 ? var_11 : 7)))));
                    }
                    for (int i_9 = 0; i_9 < 15;i_9 += 1)
                    {

                        for (int i_10 = 0; i_10 < 15;i_10 += 1) /* same iter space */
                        {
                            var_28 = -66;
                            var_29 = (arr_16 [i_5]);
                            var_30 = ((((max(112, 34))) ? (((var_15 || -20832) ? (max(3600782166051499042, 20832)) : var_6)) : (((((224 || 4294967292) || 32760))))));
                            var_31 |= var_11;
                        }
                        for (int i_11 = 0; i_11 < 15;i_11 += 1) /* same iter space */
                        {
                            var_32 = (((-66 || 65) || (arr_19 [i_5] [i_5])));
                            var_33 = 9315;
                            var_34 = (!(var_13 || 2824717617));
                        }
                        var_35 -= (((arr_16 [2]) || (((arr_27 [4] [i_9]) || ((!(arr_24 [10] [i_9] [i_7] [i_6] [i_6] [10])))))));
                        var_36 = ((((!(!var_12))) ? ((212 ? 8487206178069984615 : 44)) : (((-(arr_14 [10] [10]))))));
                    }
                    var_37 ^= 31;
                }
            }
        }
        var_38 = ((((max(8487206178069984615, var_7))) ? ((((arr_18 [i_5 - 4] [i_5 - 1] [i_5]) || var_14))) : ((3 ? 20807 : 1))));
    }
    #pragma endscop
}
