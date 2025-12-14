/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243419
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243419 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243419
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((!(var_11 | var_8)));
        arr_3 [i_0] = var_8;
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        var_15 = var_8;
        var_16 *= ((-((23522 ? 23503 : 23522))));
        arr_7 [i_1 - 1] [i_1 - 1] = (arr_6 [i_1]);
    }
    for (int i_2 = 3; i_2 < 12;i_2 += 1)
    {

        for (int i_3 = 1; i_3 < 13;i_3 += 1)
        {
            /* LoopNest 2 */
            for (int i_4 = 1; i_4 < 13;i_4 += 1)
            {
                for (int i_5 = 3; i_5 < 12;i_5 += 1)
                {
                    {
                        arr_16 [3] [i_4] [i_3] [i_3] [i_2] [i_2] = (((((!(arr_10 [i_4 + 1] [i_3 + 1])))) & ((((arr_10 [i_4 + 1] [i_3 + 1]) > (arr_11 [i_4 + 1] [i_3 + 1] [i_3 + 1]))))));
                        var_17 = (((((var_3 | var_2) && ((max((arr_1 [i_5]), var_5))))) ? (!var_10) : -var_14));
                    }
                }
            }
            var_18 = (((arr_11 [i_3 + 1] [i_2 - 3] [7]) ? -1596466332 : (max(var_6, (arr_15 [1] [i_2 - 1] [i_2 + 1] [1])))));
            arr_17 [3] [i_2] [i_3] = (((!var_2) ? ((((0 || 188) ? 23522 : var_4))) : (min((arr_15 [i_3] [i_2 + 2] [i_3] [i_3 + 1]), (((arr_11 [i_3] [10] [i_3]) ? (arr_10 [i_3] [i_3]) : 39468))))));
            var_19 += var_5;
        }
        for (int i_6 = 1; i_6 < 10;i_6 += 1)
        {
            arr_21 [i_6] = var_14;
            arr_22 [i_6] [i_6 + 4] = ((var_8 ? ((((1596466331 | (arr_15 [i_6] [i_6] [i_6] [i_2]))) % var_0)) : -1596466332));
        }
        arr_23 [12] [i_2] = 2507591508;
        arr_24 [i_2] [3] = (((((((var_4 * (arr_19 [i_2]))) / (arr_15 [0] [i_2 - 3] [i_2 - 2] [0])))) ? ((-(arr_0 [i_2]))) : var_11));
        var_20 = (max(var_20, (12 < 431036883)));
    }
    var_21 = (max(0, -431036884));
    #pragma endscop
}
