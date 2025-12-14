/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4261
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4261 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4261
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 19;i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = var_15;
        arr_3 [i_0] = 1;
        var_17 = (((((9645304314897561675 ? var_1 : (arr_0 [i_0])))) ? (((arr_0 [i_0]) ? 3 : 3225)) : (((var_4 ? ((~(arr_0 [i_0]))) : ((var_16 ? (arr_0 [i_0]) : var_11)))))));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1) /* same iter space */
    {
        arr_7 [i_1] = (arr_0 [i_1]);
        var_18 = ((((((var_15 && var_11) ? ((6630748807846221889 ? 8801439758811989944 : 10)) : (((max((arr_1 [i_1] [i_1]), (arr_4 [i_1])))))))) && (arr_4 [i_1])));
    }
    for (int i_2 = 0; i_2 < 19;i_2 += 1) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 19;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 19;i_4 += 1)
            {
                {
                    var_19 = ((((((-(min(var_6, 76130032)))) + 2147483647)) >> (var_9 - 39)));

                    for (int i_5 = 0; i_5 < 19;i_5 += 1)
                    {

                        for (int i_6 = 0; i_6 < 19;i_6 += 1)
                        {
                            var_20 = (arr_5 [i_2] [i_2]);
                            var_21 = (((((((max(17499350652809703376, (arr_22 [i_2] [i_3] [i_4] [i_2] [i_6] [i_6] [i_3])))) ? -17726268060891436633 : 0))) ? 252 : (-44 != 128)));
                        }
                        var_22 = 1;
                    }
                }
            }
        }
        arr_24 [i_2] = 210;
    }
    var_23 = (min(-22945, (((var_3 ? ((65535 ? -76130022 : 76130039)) : var_12)))));
    var_24 = (max(((((max(var_14, 1))) ? ((min(var_4, var_12))) : var_9)), (max(var_5, (max(var_16, 0))))));
    #pragma endscop
}
