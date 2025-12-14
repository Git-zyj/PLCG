/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        arr_4 [i_0] = (arr_2 [i_0]);
        var_15 += (((arr_3 [8]) <= (arr_3 [14])));
        var_16 = 17514304910410508642;
        var_17 = (max(var_17, var_7));
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        arr_8 [i_1] [17] = var_2;
        var_18 = (min((arr_6 [15]), (max(38, (min((arr_5 [i_1] [i_1]), 30))))));
    }
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        var_19 |= ((-((-(((arr_6 [i_2]) % var_2))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 15;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 14;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 15;i_5 += 1)
                {
                    {
                        arr_18 [i_2] [i_3] [i_3] [i_2] [i_4] [i_5] = (!-2439114905265588027);
                        arr_19 [i_2] [i_3] [i_4] [i_4] [i_4] [i_2] = arr_9 [i_4 + 1];
                        arr_20 [i_2] [i_3] [i_3] [i_5] [i_2] [i_5] = max(932439163299042973, (((((var_8 ? (arr_14 [i_2] [i_3] [i_4]) : var_3))) - (max(3927204199627857143, 6395299257727650901)))));
                    }
                }
            }
        }
        arr_21 [i_2] [i_2] = (arr_9 [i_2]);
        var_20 += 704252398;
    }
    for (int i_6 = 0; i_6 < 20;i_6 += 1)
    {
        arr_24 [i_6] = (min(((~(arr_23 [i_6]))), (((((!(arr_23 [i_6]))) && (arr_23 [i_6]))))));
        arr_25 [i_6] [i_6] = arr_23 [i_6];
    }
    var_21 = var_12;
    #pragma endscop
}
