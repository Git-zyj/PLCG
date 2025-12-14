/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244985
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244985 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244985
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        var_19 = var_8;

        /* vectorizable */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 3; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 17;i_3 += 1)
                {
                    {
                        var_20 = (min(var_20, var_3));
                        var_21 ^= (var_3 * 65535);
                    }
                }
            }
            var_22 ^= (!var_17);
            var_23 &= (((-(arr_8 [i_0] [i_1] [i_1] [i_0]))));
        }
        /* vectorizable */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            var_24 = (4294967295 && 9007199254740991);
            var_25 = var_11;
            var_26 = 18437736874454810625;
        }
        var_27 ^= ((9007199254740991 << (((arr_7 [i_0] [i_0] [i_0] [6] [i_0]) - 12411032276203748081))));
    }
    var_28 = var_12;
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 1;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 22;i_6 += 1)
        {
            {
                arr_17 [i_5] [i_5] = (((--9007199254741016) ? (var_11 || var_18) : (min((((arr_13 [i_6] [i_5]) ? var_14 : (arr_12 [i_5] [i_6]))), 18437736874454810625))));
                var_29 = ((min(var_14, (((var_4 ? (arr_12 [i_5] [i_5]) : (arr_15 [i_6] [i_5] [i_5])))))));
            }
        }
    }
    #pragma endscop
}
