/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225125
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225125 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225125
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (((!var_7) <= var_2));
    var_12 = (max(65534, var_0));

    for (int i_0 = 0; i_0 < 11;i_0 += 1) /* same iter space */
    {
        var_13 = (min(((var_3 ? ((max(4294967276, var_2))) : (max(var_4, -17654)))), ((((arr_0 [i_0] [i_0]) == (!var_3))))));
        arr_2 [i_0] [i_0] = (((arr_1 [i_0]) && (((16554 ? (arr_1 [i_0]) : (arr_0 [i_0] [3]))))));
    }
    for (int i_1 = 0; i_1 < 11;i_1 += 1) /* same iter space */
    {
        var_14 = var_0;
        var_15 = (((var_6 - ((var_3 ? var_7 : (arr_6 [i_1]))))));

        for (int i_2 = 0; i_2 < 11;i_2 += 1)
        {
            var_16 = (((-(arr_7 [i_1] [i_1] [i_2]))));
            var_17 = (min(var_17, 12));
        }
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            var_18 = 1329262461;
            var_19 = (((arr_1 [i_1]) ? (arr_9 [i_1] [i_3]) : -232));
        }
        /* LoopNest 3 */
        for (int i_4 = 2; i_4 < 9;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 10;i_5 += 1)
            {
                for (int i_6 = 3; i_6 < 9;i_6 += 1)
                {
                    {
                        var_20 = (~20);
                        var_21 -= ((131 + ((44 ? 4294967295 : 1544788944658732144))));
                    }
                }
            }
        }
        var_22 = ((~60) ? (arr_4 [i_1]) : ((min(-64, 0))));
    }
    #pragma endscop
}
