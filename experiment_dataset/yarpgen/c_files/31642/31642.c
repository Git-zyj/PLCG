/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 *= ((-(((!(-9223372036854775807 - 1))))));
    var_21 = (var_4 >= var_4);
    var_22 &= var_3;
    var_23 = (-39 < 40617);

    for (int i_0 = 1; i_0 < 19;i_0 += 1) /* same iter space */
    {
        var_24 += -1324342221;
        var_25 = (arr_1 [i_0 + 2]);
        arr_2 [i_0] |= (arr_0 [i_0 + 2] [i_0 + 1]);
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_26 *= ((((((((min(var_3, var_4)))) ^ (min(64, (arr_8 [i_0] [i_1])))))) ? 53 : var_1));
                    arr_9 [i_2] [i_2] = 37;
                }
            }
        }
    }
    for (int i_3 = 1; i_3 < 19;i_3 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 22;i_5 += 1)
            {
                {
                    arr_17 [1] [1] [i_5] |= var_15;

                    for (int i_6 = 0; i_6 < 22;i_6 += 1)
                    {
                        arr_20 [i_3] [i_3] [i_3] = (max(var_0, ((((max(var_9, -1324342211))) ? var_5 : 2970599037))));

                        for (int i_7 = 0; i_7 < 22;i_7 += 1)
                        {
                            arr_24 [i_3] [i_3] [i_3] [i_5] [i_3] [i_3] = (((min((8960121721220214482 + -84), (((-(arr_12 [i_7])))))) / ((min((var_18 ^ var_0), 47)))));
                            var_27 -= (var_15 > var_0);
                            arr_25 [i_4] [i_4] [i_4] [i_3] [i_3] = ((-((((max((arr_12 [i_5]), var_16))) + (1355073221798113717 + -28699)))));
                            var_28 &= 1601672269885163559;
                            arr_26 [i_7] [i_3] [i_3] [i_3] [i_3] = (((!var_4) || ((((max((arr_12 [i_5]), (arr_19 [i_3] [i_6] [i_5] [i_4] [i_3])))) || (arr_12 [i_5])))));
                        }
                        for (int i_8 = 0; i_8 < 22;i_8 += 1)
                        {
                            arr_30 [i_3] [i_3] [i_3] [i_6] [i_8] = ((((var_16 / (arr_5 [i_3 + 1]))) / ((var_6 ? (arr_5 [i_3 + 1]) : 65535))));
                            arr_31 [i_3] [i_3] [i_3] = (~0);
                            var_29 = (min(var_29, (((min(-1, ((76 ? var_17 : 39)))) != (arr_13 [i_4] [i_8])))));
                            var_30 = (max(var_30, ((max(-1, ((((max(var_15, 50208))) ? (arr_29 [i_6] [i_6] [i_3] [i_3] [i_6]) : (arr_1 [i_5]))))))));
                        }
                        arr_32 [i_3] [i_3] [i_4] [i_4] [i_4] [i_3] = 55;
                    }
                    for (int i_9 = 0; i_9 < 22;i_9 += 1)
                    {
                        arr_37 [i_3] [i_3] [i_5] [i_3] = (max((min((((arr_0 [i_3] [i_9]) ? var_18 : var_8)), 60670)), ((-(arr_7 [i_3])))));
                        arr_38 [i_3] [i_4] [i_3] [i_3] [i_9] = 49845;
                    }
                    var_31 *= -var_10;
                }
            }
        }
        arr_39 [i_3] = var_15;
    }
    for (int i_10 = 0; i_10 < 16;i_10 += 1)
    {
        var_32 -= 31015;
        var_33 &= (-((var_19 / (arr_4 [i_10] [i_10]))));
    }
    for (int i_11 = 0; i_11 < 20;i_11 += 1)
    {
        var_34 -= ((-(((((-(arr_46 [i_11]))) < (!13055880668597778687))))));
        arr_47 [i_11] = -var_10;
        arr_48 [i_11] = (min((min((6764 & var_13), 255)), (((~((-65 ? var_13 : 684311128)))))));
    }
    #pragma endscop
}
