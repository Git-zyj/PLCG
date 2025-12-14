/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234766
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234766 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234766
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = (min((min((arr_0 [i_0]), -743232607)), 0));
        arr_3 [i_0] = (~(((-1426852423 + 2147483647) >> (5996151798104693453 - 5996151798104693429))));
        arr_4 [i_0] = 6230419524236795930;
        arr_5 [i_0] [i_0] = 743232607;
        arr_6 [i_0] [i_0] = (((var_13 * 9) ? (arr_1 [i_0]) : (((arr_1 [i_0]) >> (((arr_0 [i_0]) - 22792))))));
    }
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        arr_9 [16] &= (arr_1 [i_1]);
        arr_10 [1] [i_1] |= 1;
        arr_11 [i_1] [i_1] = (arr_1 [i_1]);
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 23;i_2 += 1)
    {
        arr_16 [16] = (9478653637065861518 ? 1 : 226);
        arr_17 [i_2] = 226;
        arr_18 [i_2] = (((arr_14 [i_2] [i_2]) ? 21 : -1144275920));
    }

    for (int i_3 = 2; i_3 < 8;i_3 += 1)
    {
        arr_22 [i_3] [i_3] = (((arr_0 [i_3]) != 33919));
        arr_23 [i_3] = 2735555847;
    }
    for (int i_4 = 0; i_4 < 22;i_4 += 1)
    {
        arr_27 [i_4] = (-743232614 & -1);
        arr_28 [i_4] = (((!11023485686791078204) ? ((((arr_0 [i_4]) ? (1 ^ 2092) : (arr_26 [i_4])))) : (((17 << (((arr_24 [i_4] [i_4]) - 218122856)))))));
        arr_29 [i_4] [i_4] = (max(39, (arr_24 [i_4] [i_4])));
    }
    /* vectorizable */
    for (int i_5 = 2; i_5 < 20;i_5 += 1)
    {

        for (int i_6 = 0; i_6 < 21;i_6 += 1)
        {
            arr_35 [16] [i_6] = ((((arr_0 [i_5]) ? -743232607 : -25441)));
            arr_36 [i_6] [18] [i_5] = -743232607;
            arr_37 [i_6] [i_5] [i_5] = arr_24 [i_5] [i_5 - 2];
        }
        for (int i_7 = 2; i_7 < 17;i_7 += 1)
        {
            arr_42 [i_5] [i_7] = (-58 >= 1);
            arr_43 [i_5] = ((131 < (arr_1 [i_5 - 2])));
            arr_44 [1] [i_7] [i_7] = ((+((2060047461 ? (arr_30 [20]) : 22452))));
        }

        for (int i_8 = 0; i_8 < 21;i_8 += 1)
        {
            arr_48 [i_5] [i_5] [i_8] = (((-1 + 2147483647) >> 1));
            arr_49 [i_5] = -743232613;
        }
        for (int i_9 = 0; i_9 < 21;i_9 += 1)
        {
            arr_52 [i_5] = 1144275920;
            arr_53 [i_9] [i_5] [i_9] = -743232617;
            arr_54 [i_5] [i_9] [i_9] = var_10;
        }
    }
    #pragma endscop
}
