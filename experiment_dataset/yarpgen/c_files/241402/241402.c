/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241402
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241402 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241402
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_16 = (min(var_16, ((((6671191839985693260 & 18446744073709551615) ? (min(((6671191839985693262 ? var_15 : (arr_1 [i_2 - 1]))), var_10)) : 255)))));

                    for (int i_3 = 0; i_3 < 19;i_3 += 1)
                    {
                        arr_13 [i_0] [i_1] [i_2] [11] = max(((-27 ? 11775552233723858355 : (((min((arr_0 [i_2]), 62768)))))), var_6);
                        var_17 = ((((19 ? (arr_6 [i_2 + 1] [i_2 + 1]) : (arr_6 [i_2 - 1] [i_2 - 1]))) ^ ((16383 | (arr_6 [i_2 + 1] [i_2 + 1])))));
                        var_18 = ((((min(255, var_7))) ? 1 : (arr_3 [i_2 + 2] [i_2 - 1])));
                        var_19 = ((1 <= (((3 && var_14) / (arr_4 [i_2] [i_2 - 1] [i_2 + 2])))));
                        arr_14 [1] [i_1] [1] = ((((min((arr_10 [i_0] [i_1] [i_2] [i_3]), ((((arr_10 [i_0] [i_0] [i_0] [3]) && var_10)))))) ? ((var_15 ? 1073217536 : (arr_1 [i_2 - 1]))) : ((((!(arr_0 [i_2 + 1])))))));
                    }
                    for (int i_4 = 0; i_4 < 19;i_4 += 1)
                    {
                        var_20 = ((~(arr_7 [i_0] [i_0] [i_0] [i_0])));
                        arr_17 [i_4] [i_4] [i_0] [4] [i_0] = (arr_16 [i_2 - 1]);
                        var_21 = (((((((max(1405225932, 25195))) ? (arr_11 [i_0] [i_1] [i_2] [i_2 + 2]) : ((var_5 ? 1 : var_7))))) && ((((arr_12 [i_2 + 2] [i_2 - 1] [i_2 + 2]) % ((min(var_1, 11803))))))));
                    }
                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 2; i_6 < 18;i_6 += 1)
                        {
                            var_22 = (((((arr_22 [i_0] [i_6] [i_2 - 1] [i_2 - 1] [i_2 + 2] [i_2 + 2]) ? (arr_10 [i_0] [i_0] [i_0] [i_5]) : 58569)) | (arr_2 [i_0])));
                            var_23 -= var_1;
                        }
                        var_24 = (min(var_24, ((min((arr_19 [i_2 - 1] [i_2 + 2] [i_2 - 1] [i_2 - 1] [i_2]), ((25577 ? 32760 : 1)))))));
                        var_25 = 1;
                    }
                    for (int i_7 = 0; i_7 < 1;i_7 += 1)
                    {
                        arr_27 [i_7] [i_7] [i_7] [i_7] [1] = (0 || 0);
                        arr_28 [i_0] [i_1] [i_2] [14] [i_0] = ((((28980 && ((max(1, 529887915))))) ? (arr_23 [i_7] [8] [3] [1] [i_0]) : -var_3));
                    }
                }
            }
        }
    }
    var_26 = (((min(((28970 ? var_13 : var_12)), var_3)) <= var_3));
    #pragma endscop
}
