/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211366
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211366 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211366
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_3 [i_0] = (((~3205367911) | (arr_1 [i_0])));
        arr_4 [6] = ((((((~(arr_0 [i_0]))) + 2147483647)) >> ((((arr_1 [i_0]) < (arr_1 [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 18;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 1; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 2; i_3 < 17;i_3 += 1)
            {
                {
                    arr_13 [i_1] [i_1] [i_2 - 1] [i_3 - 1] = var_7;
                    arr_14 [1] [i_1] [i_1] [i_3 - 1] = ((19099 ? (((-(((arr_9 [i_1] [i_1]) ? (arr_5 [i_1]) : (arr_7 [i_1])))))) : (max(-288296595, ((288296582 ? var_9 : var_5))))));
                    var_10 = var_2;
                    arr_15 [i_3] |= (((arr_8 [i_1] [i_1]) == (((!((((((arr_11 [i_1] [i_2] [i_2]) + 9223372036854775807)) << (var_0 - 1396475443730540489)))))))));
                }
            }
        }
        arr_16 [i_1] = 32743;
        var_11 = ((-var_5 ? var_2 : -32763));
        var_12 = (((arr_10 [i_1] [i_1] [i_1] [i_1]) || (5470689805727230807 || var_4)));
    }
    for (int i_4 = 3; i_4 < 16;i_4 += 1)
    {
        var_13 *= (-2147483647 - 1);
        var_14 = (max(288296594, (((-817446871 % var_0) / var_0))));
        arr_19 [i_4] [0] = ((~((5090312813547465751 ? (~var_9) : (!2710)))));
        var_15 = (((((((arr_17 [i_4] [i_4 - 2]) < (arr_18 [i_4 - 3] [i_4 - 3]))))) >= (((var_9 ? var_0 : -1495691043)))));
    }
    var_16 = (-var_1 / 2001557183);
    #pragma endscop
}
