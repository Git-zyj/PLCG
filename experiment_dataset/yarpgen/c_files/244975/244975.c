/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244975
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244975 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244975
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((((min(((var_16 ? 5601756471697802299 : var_12)), var_4))) ? var_1 : (((~(min(1023372495, 6749)))))));
    var_20 += var_14;

    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        var_21 = (arr_0 [i_0 - 1]);

        for (int i_1 = 0; i_1 < 1;i_1 += 1) /* same iter space */
        {
            var_22 = (arr_0 [i_1]);
            arr_5 [i_0] [i_0] [i_1] = ((((((max(var_14, 1))) ? 3630007570 : var_18)) >> ((((64 ^ ((max(var_16, (arr_3 [i_0])))))) - 45146))));
            var_23 = (-127 - 1);
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
        {
            arr_10 [i_0] = ((-var_18 || ((max(-727925646, 87)))));
            arr_11 [i_0] = ((-(((arr_6 [i_0]) ? (max(var_4, -4)) : ((var_0 + (arr_1 [i_0] [i_0])))))));
            arr_12 [i_0] = (min(19904, (min((((45623 ? (-127 - 1) : 337308652))), ((var_12 ? (arr_2 [i_0] [1]) : (-127 - 1)))))));
        }
        for (int i_3 = 3; i_3 < 12;i_3 += 1)
        {
            arr_17 [i_0] [i_0] = (((!((min(17126199176134134652, 1))))));
            arr_18 [i_0] = ((((min(((6725 ? 28866 : var_1)), (arr_15 [i_0] [i_0] [i_3 + 2])))) * 14318405269696695173));
            arr_19 [i_0] [i_3] [i_0] = ((31 > ((((((arr_16 [i_0] [i_3] [i_3]) | 0))) ? var_3 : (arr_16 [i_0 - 3] [i_0 - 3] [i_0 - 3])))));
        }

        for (int i_4 = 0; i_4 < 14;i_4 += 1)
        {
            var_24 = ((((max((arr_6 [i_0]), (1 < -19)))) ? (60 + 6749) : (max(2579156567238648421, 3310594650))));
            arr_23 [i_0] = (218 | 2048);
            arr_24 [i_0] = ((+(((arr_15 [i_0] [i_4] [0]) ? var_12 : var_0))));
            var_25 = ((~(((((((7 && (arr_0 [i_4]))))) > (((arr_4 [0]) ? 14318405269696695173 : 105)))))));
        }
    }
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        arr_29 [i_5] = (((-(arr_20 [0] [i_5] [0]))));
        var_26 = (min(var_26, ((((((var_11 ? (arr_7 [i_5] [6] [i_5]) : 1)) < ((max(var_14, 0)))))))));
    }
    /* vectorizable */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        var_27 = (1 >= 1);
        var_28 = ((16462387760248597972 - ((((arr_4 [11]) ? (arr_2 [1] [i_6]) : 1031)))));
    }
    #pragma endscop
}
