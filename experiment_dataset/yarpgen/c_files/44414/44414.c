/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((125 ? 96 : -1181999552));

    for (int i_0 = 0; i_0 < 15;i_0 += 1) /* same iter space */
    {
        arr_3 [i_0] = (106 || 103);
        var_11 -= ((((((arr_0 [i_0]) ? (arr_0 [0]) : (arr_2 [i_0])))) ? var_2 : -1692825844226870256));
    }
    /* vectorizable */
    for (int i_1 = 0; i_1 < 15;i_1 += 1) /* same iter space */
    {
        var_12 = (((((var_5 ? -79 : (arr_0 [0])))) ? 174 : (arr_0 [i_1])));
        arr_6 [i_1] = (((arr_5 [i_1]) ? ((var_9 ? (arr_2 [i_1]) : var_1)) : (arr_5 [i_1])));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 15;i_2 += 1) /* same iter space */
    {
        var_13 = var_4;
        var_14 -= var_8;

        for (int i_3 = 3; i_3 < 11;i_3 += 1)
        {
            var_15 = (arr_1 [i_2] [i_2]);
            var_16 -= ((((1692825844226870231 ? (arr_8 [0]) : (arr_10 [i_2] [i_2] [i_3]))) & -1952084182));

            for (int i_4 = 0; i_4 < 15;i_4 += 1)
            {

                for (int i_5 = 1; i_5 < 13;i_5 += 1)
                {
                    var_17 &= ((-(((!(arr_13 [4] [i_4] [i_4] [i_4]))))));

                    for (int i_6 = 2; i_6 < 14;i_6 += 1)
                    {
                        var_18 = (!var_3);
                        var_19 = (min(var_19, (arr_5 [i_2])));
                    }
                    for (int i_7 = 0; i_7 < 15;i_7 += 1)
                    {
                        arr_22 [i_2] [i_3 - 2] [i_4] [i_2] [i_3 - 2] = 115;
                        var_20 = ((5750254718462005625 < (((7688356489555928951 ? 73 : 65535)))));
                    }
                }
                var_21 = ((1181999550 ? ((16620 ? (arr_0 [i_2]) : var_7)) : ((((202 <= (arr_1 [i_2] [i_2])))))));
            }
            for (int i_8 = 0; i_8 < 15;i_8 += 1)
            {
                var_22 = (((12972364301907843929 || 4106342676) ? (arr_8 [i_2]) : 3290263918));
                var_23 = var_5;
                var_24 = ((~((61 ? 1 : 79))));
            }
            var_25 = (min(var_25, var_1));
            var_26 = (max(var_26, -1891489018));
        }
        for (int i_9 = 0; i_9 < 15;i_9 += 1)
        {
            var_27 = ((var_9 - (arr_8 [i_2])));
            arr_28 [i_2] [i_2] [i_2] = (arr_14 [i_9] [i_2] [i_2]);
            var_28 = ((var_6 ? (((arr_21 [i_2] [i_2] [8] [i_2] [5] [i_2]) ? (arr_16 [10] [4]) : (arr_2 [13]))) : ((2147483647 ? -22 : -1028539511928717923))));
        }
        /* LoopNest 2 */
        for (int i_10 = 0; i_10 < 15;i_10 += 1)
        {
            for (int i_11 = 1; i_11 < 11;i_11 += 1)
            {
                {
                    var_29 = ((230 ? var_0 : ((14 ? var_8 : (arr_8 [i_2])))));
                    var_30 = var_9;
                    var_31 ^= var_7;
                }
            }
        }
    }
    /* vectorizable */
    for (int i_12 = 2; i_12 < 16;i_12 += 1)
    {
        arr_38 [i_12] = (arr_36 [1] [i_12]);
        var_32 = (3853888206 ? 7710333760917936054 : -125);
        var_33 &= 188624630;
    }
    var_34 = (max(var_4, var_2));
    #pragma endscop
}
