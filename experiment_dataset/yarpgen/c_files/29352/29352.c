/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29352
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29352 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29352
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        var_16 -= ((((max((arr_1 [i_0]), (arr_0 [i_0])))) ? (~771291278) : (((!(arr_1 [i_0]))))));
        var_17 ^= (((max((arr_1 [i_0]), (arr_0 [i_0])))) || (((-(arr_1 [i_0])))));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_18 = 0;
        var_19 = (((arr_2 [i_1]) ? (arr_3 [i_1]) : (max(2315453429419948031, 16))));
        arr_4 [i_1] [i_1] = (((((2315453429419948014 < (arr_2 [i_1 - 1])))) == (((!(arr_2 [i_1 - 1]))))));
    }
    for (int i_2 = 0; i_2 < 10;i_2 += 1) /* same iter space */
    {
        var_20 ^= (max(((((max(1, (arr_1 [2])))))), (min(330906870, 10984363485778216297))));
        var_21 = ((((((min((arr_5 [7]), (arr_7 [9])))) || ((((arr_6 [i_2]) << (((arr_6 [i_2]) - 696248224))))))) ? (max(1101364677159804243, 16131290644289603599)) : (((~(arr_6 [i_2]))))));
        arr_9 [i_2] = (((max((min(11476990602846457079, 2315453429419948044)), (min(10, (arr_1 [i_2]))))) << (((max(330906870, (((arr_3 [i_2]) + (arr_3 [i_2]))))) - 330906821))));
    }
    /* vectorizable */
    for (int i_3 = 0; i_3 < 10;i_3 += 1) /* same iter space */
    {

        for (int i_4 = 0; i_4 < 10;i_4 += 1)
        {
            var_22 = ((-(arr_12 [i_4] [i_4] [i_3])));

            for (int i_5 = 0; i_5 < 10;i_5 += 1)
            {

                for (int i_6 = 0; i_6 < 10;i_6 += 1)
                {
                    var_23 = (min(var_23, (!-330906855)));
                    arr_21 [i_3] [i_3] [i_3] [i_3] [i_6] = (~-1466241227);

                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        var_24 = (11476990602846457083 - 56);
                        var_25 += ((~(arr_12 [i_4] [i_6] [i_7])));
                        var_26 = (max(var_26, ((((arr_12 [i_4] [0] [i_4]) >= -1466241234)))));
                        var_27 = ((!(arr_5 [i_7])));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        arr_28 [i_6] [i_6] = ((!(arr_11 [i_4])));
                        arr_29 [i_4] [i_6] [i_4] = (arr_14 [i_3] [i_4] [i_5]);
                        arr_30 [i_8] [i_6] [i_5] [i_6] [i_3] = (arr_14 [i_8] [i_5] [i_3]);
                    }
                    for (int i_9 = 0; i_9 < 10;i_9 += 1) /* same iter space */
                    {
                        arr_35 [i_6] = ((!((((arr_3 [i_6]) % (arr_22 [i_3] [i_4] [i_5] [i_6] [i_3]))))));
                        var_28 = ((!(!0)));
                        var_29 ^= (~-32748);
                        var_30 = (90 < (arr_5 [i_4]));
                    }
                }
                var_31 = (min(var_31, ((-(arr_17 [i_3])))));
                var_32 = (min(var_32, (((~(arr_26 [i_3] [i_4] [i_5] [i_5] [i_3] [i_3] [i_3]))))));
            }
        }
        var_33 = (~1);
    }
    var_34 = (~var_7);
    var_35 = (max(var_9, (((~-90) ^ (min(var_0, 12609501838071525038))))));
    var_36 = var_2;
    #pragma endscop
}
