/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222697
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222697 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222697
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (!var_11);
    var_13 = (((min(var_6, 1))) > ((1 ? (~var_2) : (-81 % 36923))));

    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_14 = ((!(((arr_1 [i_0] [i_0]) > (arr_1 [i_0] [i_0])))));
        var_15 = (10 && 63);
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1)
    {

        for (int i_2 = 1; i_2 < 8;i_2 += 1)
        {
            var_16 = 1;
            var_17 = (arr_1 [i_1] [i_1]);
        }
        for (int i_3 = 1; i_3 < 10;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 2; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 9;i_5 += 1)
                {
                    {
                        arr_17 [7] [1] [i_3 - 1] [6] [i_3 + 1] [7] &= (((((((-61 ? 136 : 67))) ? ((1 ? 44 : 52)) : (((!(arr_3 [i_1]))))))) ? (((var_7 + 2147483647) >> (((min(77778589, (arr_3 [i_5]))) - 77778569)))) : (((!(~1)))));
                        var_18 = 15;
                        arr_18 [i_5] [i_5] [i_5] [i_5 + 1] = -77778589;
                        var_19 = (max(var_19, (((91 ? ((25592 ? (0 >= 248136412) : (arr_16 [i_1] [i_1] [5] [i_1] [i_1] [i_1]))) : (((((var_5 ? 1 : var_5))) ? (((31 % (arr_13 [i_1] [i_1] [i_1])))) : ((0 & (arr_13 [i_1] [i_1] [i_1]))))))))));
                    }
                }
            }
            var_20 = -1253699091;
            arr_19 [3] [i_1] [i_1] = (min(((((arr_11 [i_3 + 1]) > (arr_14 [i_3 + 1])))), (((arr_12 [i_3 - 1]) ? (arr_14 [1]) : (arr_14 [i_1])))));
            var_21 = (max((arr_15 [i_3 + 1]), (((!(var_4 <= 1))))));
        }
        /* vectorizable */
        for (int i_6 = 0; i_6 < 11;i_6 += 1)
        {
            var_22 = var_6;
            var_23 += (arr_21 [i_1] [i_1] [i_1]);
        }
        var_24 = (max(var_24, 4268158450));
    }

    for (int i_7 = 0; i_7 < 18;i_7 += 1)
    {
        var_25 *= (((119434176 % 58993) ? (max((arr_23 [i_7] [i_7]), -77778608)) : (((arr_23 [i_7] [i_7]) | 199))));
        var_26 = (max(var_26, (65528 || 0)));
        arr_24 [i_7] [i_7] = ((~(((((min((arr_23 [5] [i_7]), -17841))) && (!-840029551))))));
    }
    for (int i_8 = 2; i_8 < 17;i_8 += 1) /* same iter space */
    {

        /* vectorizable */
        for (int i_9 = 0; i_9 < 20;i_9 += 1)
        {
            var_27 = 15362;
            var_28 = ((-(arr_29 [i_8 - 1])));
        }
        for (int i_10 = 0; i_10 < 20;i_10 += 1)
        {
            var_29 = ((~(((((663 ? 0 : 255))) * (~1013482889)))));
            /* LoopNest 2 */
            for (int i_11 = 0; i_11 < 20;i_11 += 1)
            {
                for (int i_12 = 0; i_12 < 20;i_12 += 1)
                {
                    {
                        arr_40 [i_8] [i_10] [i_10] [1] [i_10] [i_8] = 1;
                        var_30 = (min(((var_7 ? -1281487667 : (arr_37 [3] [i_8 - 1] [i_8 - 1] [i_8]))), ((1 ? (arr_28 [i_8] [i_8 + 2]) : (arr_34 [1] [18] [i_12])))));
                    }
                }
            }
            var_31 += ((((27713 ^ var_9) <= ((-746461778 ? 1363631677 : 43464342)))));
        }
        for (int i_13 = 0; i_13 < 20;i_13 += 1)
        {
            var_32 ^= 3;
            var_33 = var_5;
        }

        /* vectorizable */
        for (int i_14 = 0; i_14 < 20;i_14 += 1) /* same iter space */
        {
            var_34 += ((((!(arr_44 [i_8] [i_8] [i_8]))) ? (-95 > var_4) : (arr_29 [i_8])));
            var_35 = ((-((3 ? (arr_36 [i_8] [i_8] [i_8] [i_8]) : (arr_30 [i_8])))));
            var_36 = ((!(((1 ? 2090830896 : 5951)))));
        }
        for (int i_15 = 0; i_15 < 20;i_15 += 1) /* same iter space */
        {
            var_37 = ((3629463399 ? (arr_41 [i_8] [i_8 + 2] [i_8]) : ((4 ? -1 : (arr_47 [i_15])))));
            var_38 -= ((-10032 ? 22 : (arr_34 [i_8 + 2] [i_8 - 2] [i_8 + 2])));
        }
    }
    for (int i_16 = 2; i_16 < 17;i_16 += 1) /* same iter space */
    {
        var_39 += (-67 && -22438);
        var_40 = (arr_45 [i_16]);
    }
    #pragma endscop
}
