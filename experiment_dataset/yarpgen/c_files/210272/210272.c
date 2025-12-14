/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_10 -= (1 > 2434);
        arr_2 [i_0] = ((((((((1261508702 ? (arr_0 [6]) : var_0))) ? (((arr_1 [i_0]) ? var_1 : -955615536)) : 0))) ? (((arr_1 [9]) ? (127 & 15) : ((-955615526 ? -9251 : 1)))) : 127));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        arr_5 [19] [i_1] = (max(var_9, var_3));
        var_11 *= (max(var_9, (min(((min(65401, 1))), (155 | -2270813199835390768)))));
        arr_6 [i_1] = (arr_1 [i_1]);
        var_12 = (max(var_12, ((min(((min((arr_1 [i_1]), 3245843361))), -955615536)))));
    }
    for (int i_2 = 2; i_2 < 10;i_2 += 1)
    {
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 9;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    {
                        var_13 = (-10 ^ 167);
                        var_14 = (min(var_14, -7052409459295195235));
                        var_15 = (max(var_15, (((1533853820 ? 8201 : 1049123934)))));
                        var_16 &= (~46661);
                    }
                }
            }
        }
        arr_18 [i_2] [i_2 - 1] = (max(((min(3210411947, var_4))), 255));
    }
    /* LoopNest 2 */
    for (int i_6 = 2; i_6 < 8;i_6 += 1)
    {
        for (int i_7 = 2; i_7 < 9;i_7 += 1)
        {
            {
                arr_24 [6] [0] = (max(((var_1 ? var_8 : (~var_3))), ((var_9 ? 25408 : (1042980712 | 1042980726)))));
                /* LoopNest 2 */
                for (int i_8 = 2; i_8 < 10;i_8 += 1)
                {
                    for (int i_9 = 1; i_9 < 10;i_9 += 1)
                    {
                        {
                            arr_33 [4] [4] [6] [i_7 + 2] [4] [4] = 436866424153630740;
                            arr_34 [i_6] [i_7] [i_8] [i_9] = ((~(~1)));
                            arr_35 [i_6] [i_6] [i_7] [i_6] [7] = (((((min(var_5, 1084555350)))) ? ((min((arr_26 [i_8 - 2]), ((max(var_3, (arr_7 [i_6] [i_8 + 1]))))))) : (arr_27 [1])));
                            arr_36 [i_6 - 2] [i_7 - 1] [i_6 - 2] [i_6] [i_8] = ((104 || ((!(((1431923931098450430 ? (arr_14 [i_9] [9] [9] [i_6]) : 3210411947)))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
