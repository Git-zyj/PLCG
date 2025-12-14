/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221291
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221291 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221291
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_5;
    var_13 = var_2;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            {
                var_14 = ((((((arr_5 [i_1 - 3] [i_1 - 3]) == (arr_0 [i_0] [i_1])))) <= (arr_4 [i_1 + 2])));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    arr_9 [i_0] [21] = 233;
                    var_15 = ((((max((arr_5 [i_1 - 4] [i_1 - 4]), (arr_5 [i_1 + 1] [i_1 + 1])))) && (arr_0 [i_1 + 2] [i_1])));
                    var_16 = (max((min(((max(var_0, 33))), (arr_1 [i_1 - 3] [i_1 + 1]))), ((((arr_2 [i_0]) * ((min(198, var_4))))))));
                }
                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {

                    /* vectorizable */
                    for (int i_4 = 1; i_4 < 20;i_4 += 1)
                    {
                        var_17 = (((arr_1 [i_3 - 2] [i_1 - 1]) == (arr_1 [i_3 - 1] [i_1 + 1])));

                        for (int i_5 = 0; i_5 < 23;i_5 += 1)
                        {
                            arr_18 [i_3] [i_1] [5] [22] [i_1] = (3495043873 && 92);
                            var_18 = ((220 % 236) >> (37324 - 37316));
                            arr_19 [i_0] [i_3] [i_3] [i_3] [i_0] = (i_3 % 2 == zero) ? (((!((((((arr_13 [i_3] [9]) + 9223372036854775807)) << (37314 - 37314))))))) : (((!((((((((arr_13 [i_3] [9]) - 9223372036854775807)) + 9223372036854775807)) << (37314 - 37314)))))));
                        }
                        for (int i_6 = 0; i_6 < 1;i_6 += 1)
                        {
                            var_19 = (arr_12 [i_3] [i_6]);
                            var_20 = (((arr_13 [i_3] [i_3 - 2]) ? (arr_13 [i_3] [i_3 - 2]) : (arr_13 [i_3] [i_3 - 1])));
                            var_21 = ((150 || (arr_10 [i_3 - 2] [21] [i_3] [i_6])));
                        }
                    }
                    /* vectorizable */
                    for (int i_7 = 0; i_7 < 23;i_7 += 1)
                    {
                        var_22 = (((((arr_12 [i_3] [i_1]) ? (arr_12 [i_3] [i_3]) : (arr_15 [9] [i_1] [i_3] [1] [i_0] [i_0] [i_1])))) ? (arr_6 [i_7]) : ((-(arr_20 [i_0] [i_7]))));
                        var_23 = (arr_17 [i_3] [i_3]);
                    }
                    var_24 -= ((!((max((arr_21 [i_1] [i_1 - 2] [i_3 - 2] [i_3] [i_3]), (arr_5 [i_1 - 4] [i_3 - 2]))))));
                }
                var_25 |= ((-16 ? (((var_5 ? 2468816437 : (~-75749646)))) : (min((max(8423940227346144603, 233)), ((((arr_17 [i_1] [i_1 - 1]) || 75)))))));
                var_26 = (122 > 1);
            }
        }
    }
    var_27 = (min(var_27, (((~(max(((var_5 ? var_7 : var_4)), (var_11 + var_0))))))));
    #pragma endscop
}
