/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 1; i_0 < 6;i_0 += 1) /* same iter space */
    {
        var_20 = -17748407150175618838;
        var_21 ^= ((!((!(arr_0 [0] [i_0 + 3])))));
    }
    for (int i_1 = 1; i_1 < 6;i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = (((arr_2 [i_1 + 1]) >> (((max((arr_0 [0] [0]), 1460700102)) - 1460700078))));
        var_22 = 9071639874509133741;
        var_23 = (max((max(1087527905, 5267925853831641135)), ((((119 ? var_19 : 1)) ^ (((max(155, var_1))))))));
    }
    /* vectorizable */
    for (int i_2 = 1; i_2 < 6;i_2 += 1) /* same iter space */
    {
        arr_8 [i_2] [i_2] |= var_13;
        var_24 = (arr_0 [0] [i_2]);
    }

    for (int i_3 = 2; i_3 < 19;i_3 += 1)
    {
        arr_12 [i_3] [i_3 - 2] = 749314635;
        var_25 = ((51 * (((~var_10) ? (arr_9 [i_3]) : 5267925853831641135))));
        arr_13 [i_3] = arr_9 [i_3 - 1];
    }
    for (int i_4 = 0; i_4 < 1;i_4 += 1)
    {
        arr_16 [i_4] = (max(((((-(arr_15 [i_4]))) * -9071639874509133739)), 13178818219877910471));
        var_26 = ((!((((9375104199200417875 ^ (arr_14 [i_4])))))));
    }
    for (int i_5 = 1; i_5 < 8;i_5 += 1)
    {
        arr_20 [i_5] = ((((-(arr_14 [i_5]))) > 77));
        arr_21 [i_5] = ((!((min(179, (arr_10 [i_5] [i_5 + 3]))))));
        arr_22 [i_5] = (((14891354934442442416 + 1460700102) & (((((arr_11 [i_5 - 1]) < ((min(88, 32256)))))))));
    }
    #pragma endscop
}
