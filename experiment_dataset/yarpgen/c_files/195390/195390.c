/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195390
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 22;i_1 += 1) /* same iter space */
        {
            arr_6 [i_0] [i_1] = 95;
            arr_7 [i_0] [i_1] [i_0] = ((!(((~((-60 ? 95 : 59)))))));
        }
        for (int i_2 = 0; i_2 < 22;i_2 += 1) /* same iter space */
        {
            arr_12 [i_2] [i_2] = (-9103 > 103);
            arr_13 [i_2] [i_2] = ((arr_3 [i_0] [i_2] [i_2]) + ((-(arr_5 [i_2]))));
            arr_14 [i_0] = (arr_2 [i_0]);
        }
        arr_15 [i_0] = (arr_1 [i_0]);
        arr_16 [i_0] = (!(3191294006026696800 ^ 200));
        arr_17 [i_0] = (!9102);
    }
    for (int i_3 = 2; i_3 < 13;i_3 += 1)
    {
        arr_21 [i_3] = ((((59 ? (arr_11 [i_3 + 1] [i_3]) : 93)) << (-22830 + 22854)));
        arr_22 [i_3] [i_3] = var_0;
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 14;i_5 += 1)
            {
                {
                    arr_27 [i_3] [i_4] [i_3] [i_4] = -22832;
                    arr_28 [i_3] [i_3] = ((-82 ? 1 : 9102));
                }
            }
        }
        arr_29 [i_3] = (min((arr_24 [i_3 + 1] [i_3 - 2] [i_3 - 2]), ((1 >> (arr_24 [i_3 - 2] [i_3 + 1] [i_3 - 2])))));
    }
    for (int i_6 = 0; i_6 < 1;i_6 += 1)
    {
        arr_34 [i_6] = ((-8531 ? ((~(!1382))) : (((((var_2 ? -22830 : 238))) ? (arr_9 [i_6] [i_6] [i_6]) : (arr_3 [i_6] [i_6] [12])))));

        for (int i_7 = 3; i_7 < 20;i_7 += 1)
        {
            arr_38 [i_7] [i_6] [i_6] = (((arr_33 [i_7 + 1] [i_7 - 1]) ? ((-95 ? (arr_33 [i_7 - 3] [i_7 - 2]) : var_13)) : -1));
            arr_39 [i_6] [i_7] = (((2 >= 73) ? (~3345) : (min(var_4, (((arr_1 [i_7 - 2]) ? (arr_2 [6]) : 1))))));
        }
        /* vectorizable */
        for (int i_8 = 2; i_8 < 19;i_8 += 1)
        {
            arr_42 [i_8 + 1] = (1 * 10963);
            /* LoopNest 2 */
            for (int i_9 = 1; i_9 < 18;i_9 += 1)
            {
                for (int i_10 = 1; i_10 < 20;i_10 += 1)
                {
                    {
                        arr_47 [i_9] = ((!((((-32767 - 1) + -24614)))));
                        arr_48 [i_6] [i_8] [i_9] [i_10] = 18060;
                    }
                }
            }
        }
        for (int i_11 = 0; i_11 < 21;i_11 += 1)
        {
            arr_52 [i_11] = ((-(~10963)));
            arr_53 [i_11] [i_6] |= 33955;
            arr_54 [i_11] = (((arr_43 [i_6] [i_6] [i_6]) ? var_4 : (!var_7)));
        }
        arr_55 [i_6] = (min(((~((1 * (arr_37 [i_6] [i_6] [i_6]))))), (((!(arr_35 [i_6] [i_6] [i_6]))))));
        arr_56 [i_6] [i_6] |= ((43205 ? 31562 : 47495));
        arr_57 [i_6] = 1;
    }
    var_19 = 0;
    var_20 = (max(var_17, (22330 >= -var_5)));
    #pragma endscop
}
