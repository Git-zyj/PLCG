/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248408
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248408 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248408
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    var_10 = (((((~(arr_6 [i_1] [i_0 + 3] [i_0] [i_1])))) ? (min(((((arr_4 [12] [i_1] [i_2]) ? (arr_5 [i_2] [i_1] [i_0]) : (arr_1 [i_2] [i_1])))), (min(21, 13973915353210825347)))) : ((((arr_6 [i_1] [i_0 + 1] [i_0 + 2] [i_1]) ? ((13973915353210825321 ? (arr_5 [i_0] [i_1] [i_0]) : (arr_5 [i_0] [i_1] [i_1]))) : (max((arr_3 [i_0]), var_3)))))));
                    var_11 = (((!var_2) > (!-var_5)));
                }
                var_12 = ((~((~((var_3 ? var_3 : 4472828720498726269))))));

                for (int i_3 = 0; i_3 < 16;i_3 += 1)
                {
                    var_13 = ((807948672 ? 8160 : 33212));
                    var_14 -= min((max((-2147483647 - 1), 13973915353210825347)), ((max((arr_4 [i_0 + 3] [i_0 + 1] [i_0 + 2]), (-2147483647 - 1)))));
                    var_15 = ((((max((((var_0 ? (arr_8 [i_0] [i_1]) : var_1))), ((1 ? (arr_0 [i_1] [0]) : var_4))))) ? (((17643011589077468905 ? (min(var_3, (arr_0 [i_0] [i_0]))) : ((var_4 ? var_5 : 48543))))) : ((((max(24753, 130))) ? (arr_2 [i_0 + 3]) : (min(var_1, -8044688002644735644))))));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_4 = 2; i_4 < 12;i_4 += 1)
    {
        var_16 = ((arr_11 [i_4 - 2]) ? (((!(arr_1 [i_4 + 1] [i_4 + 1])))) : -var_7);
        var_17 = var_7;
    }
    var_18 = var_1;
    #pragma endscop
}
