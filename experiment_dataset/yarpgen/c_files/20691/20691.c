/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20691
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20691 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20691
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 ^= (((-(min(var_9, 94567685)))));
    var_18 = ((-var_9 ? -11439569928297852168 : (((var_2 ? (var_1 / var_2) : var_6)))));
    var_19 = var_8;
    var_20 = (max((max(0, ((var_7 ? var_12 : 11702189274635959786)))), var_6));

    for (int i_0 = 1; i_0 < 15;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 15;i_3 += 1)
                {
                    {
                        var_21 = ((((min((arr_10 [i_0 + 3] [i_3 + 2] [0] [i_3]), 13558366101917833968))) ? var_3 : (((-((max(var_5, 1))))))));
                        arr_11 [i_3] [i_2] [i_0] [i_0] [i_0] = (-((max(0, 0))));
                        var_22 = (var_3 / 4841);
                        var_23 = ((((max(var_9, 255))) > var_0));
                    }
                }
            }
        }
        var_24 = (min(var_24, (((((((arr_2 [i_0 + 1] [i_0 + 3]) ? (max(193, (arr_9 [i_0 + 3] [i_0] [i_0] [i_0]))) : -21592))) ? (max(var_6, -var_4)) : (arr_8 [i_0] [i_0] [11] [i_0]))))));
        /* LoopNest 2 */
        for (int i_4 = 2; i_4 < 14;i_4 += 1)
        {
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                {
                    var_25 = (((((-(arr_6 [i_5] [i_5] [i_5 - 1] [i_5])))) ? (arr_10 [i_4 - 1] [i_0 + 1] [i_0] [8]) : ((-21592 ? var_12 : (arr_8 [i_0] [i_0 + 2] [3] [i_4 + 1])))));
                    arr_17 [i_0 + 3] [i_0 + 3] [11] [i_5 - 1] = (arr_3 [15]);
                }
            }
        }
    }
    #pragma endscop
}
