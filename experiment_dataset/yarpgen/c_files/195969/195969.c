/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195969
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 += var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 4; i_3 < 13;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [1] [i_2] [i_2 + 2] [1] [i_0] = (min((min(((var_5 ? -15229 : var_3)), (((var_0 ? var_0 : (arr_9 [i_2 - 1] [i_2 - 1] [i_0] [i_1] [i_0])))))), ((min((arr_4 [i_2 + 2] [i_1 - 1]), (arr_4 [i_2 + 2] [i_1 - 2]))))));
                            var_12 = 27792;
                            var_13 -= -24340;
                            arr_11 [i_0] [i_0] [i_1 + 2] [i_1 + 2] [i_2 + 1] [i_3] = (max(((((var_2 ? var_3 : var_7)) | ((((-15229 && (arr_4 [i_0] [i_0]))))))), (min(15229, 8222863618660842656))));
                        }
                    }
                }

                for (int i_4 = 4; i_4 < 13;i_4 += 1)
                {
                    var_14 = (max(var_14, (((!((min(var_6, 1))))))));
                    arr_15 [i_0] [i_1 + 2] [i_4] = ((((min(15229, 3361987712573481127))) || (((0 >> (var_10 - 3557))))));
                }
                for (int i_5 = 0; i_5 < 14;i_5 += 1)
                {
                    var_15 += ((var_5 / (var_7 || 8222863618660842661)));
                    arr_19 [5] [i_5] [2] [2] = (max((((!(var_7 - 3361987712573481134)))), ((((min(var_0, var_3))) ? var_7 : (var_8 * var_10)))));
                    arr_20 [i_5] [i_5] [i_0] [i_0] = min((arr_4 [i_5] [i_1]), (var_1 <= var_7));
                }
            }
        }
    }
    var_16 = var_3;
    #pragma endscop
}
