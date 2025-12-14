/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243067
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243067 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243067
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = 68;
    var_21 = var_4;
    var_22 = var_13;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_23 = (max(var_23, (((((((arr_0 [i_0]) & (arr_1 [i_0] [17])))) ? (arr_1 [19] [i_0]) : ((((arr_1 [7] [20]) < (arr_1 [i_0] [i_0])))))))));

        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            var_24 = (-(((arr_0 [i_0]) ? 68 : (arr_1 [15] [i_1]))));
            var_25 = ((((arr_3 [i_1]) == (arr_0 [17]))) ? (((1 ? 1 : 1))) : ((-1 ? (arr_3 [i_0]) : (arr_0 [19]))));
            var_26 = 3;
            arr_4 [i_1] = (((arr_2 [i_1] [i_1 + 1]) ? 511 : (arr_3 [16])));
        }
        for (int i_2 = 0; i_2 < 1;i_2 += 1)
        {
            var_27 = (((arr_0 [i_2]) ? (arr_8 [i_2] [i_2] [i_0]) : (arr_0 [i_0])));
            var_28 = (min(var_28, ((((arr_2 [i_0] [i_2]) && (arr_6 [i_2] [i_2] [3]))))));
            var_29 = var_13;
        }
        var_30 = (((arr_0 [16]) ? ((var_0 ? (arr_2 [i_0] [20]) : (arr_2 [i_0] [14]))) : (var_0 < var_10)));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 21;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 20;i_4 += 1)
            {
                {
                    arr_16 [16] [1] [i_0] [i_0] = (((arr_6 [i_4 + 1] [14] [17]) ? (22543 > 8641368434639615740) : var_9));
                    var_31 = (max(var_31, 65518));

                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_32 &= (arr_18 [13] [i_4] [i_4 + 1]);
                        arr_21 [i_0] [i_0] [i_3] [i_4] [1] [i_5] = (((arr_7 [i_4 + 1]) ? (((~(arr_11 [i_3])))) : (((arr_3 [i_3]) ? 0 : (arr_5 [i_5])))));
                        var_33 = 1704202886;
                        var_34 = (1447647596 ^ -4990668962498032789);
                    }
                }
            }
        }
        arr_22 [i_0] = ((((((arr_14 [i_0] [15] [i_0]) ? (arr_11 [i_0]) : (arr_15 [i_0] [14] [10])))) < ((22054 ? (arr_12 [1] [i_0] [i_0]) : 255))));
    }
    var_35 = (min(var_35, 9223372036854775807));
    #pragma endscop
}
