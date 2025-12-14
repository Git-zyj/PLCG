/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205558
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = 42;

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_15 = ((-var_10 ? ((((1 ? 1337581000969379278 : 50461)) * (50461 * 101))) : (arr_1 [i_0])));
        arr_2 [i_0] [i_0] = (arr_0 [i_0]);
        var_16 ^= (((arr_0 [i_0]) ? (var_6 / -20) : 168));
    }
    for (int i_1 = 1; i_1 < 1;i_1 += 1)
    {
        arr_6 [i_1] = ((((((!var_13) % (arr_0 [i_1])))) ? (((arr_0 [i_1 - 1]) ^ 8714)) : ((((((arr_0 [i_1]) ? (arr_1 [i_1]) : (arr_0 [11])))) ? ((var_8 ? var_8 : var_3)) : ((var_2 ? (arr_0 [i_1]) : var_13))))));
        arr_7 [i_1] = (min((((arr_5 [i_1 - 1] [i_1 - 1]) ? 6382 : var_12)), (min((((arr_1 [i_1 - 1]) ^ var_6)), (100 & 145)))));
    }
    for (int i_2 = 0; i_2 < 20;i_2 += 1)
    {
        var_17 = (((arr_0 [i_2]) && ((((0 + 905823890) / (arr_8 [i_2]))))));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 16;i_4 += 1)
            {
                {
                    arr_16 [i_4] = var_12;
                    var_18 = ((((min(2392585900, var_7))) > (((((95 ? (arr_9 [i_2] [i_2]) : (arr_14 [i_2] [i_3] [16] [i_4]))))))));
                }
            }
        }
        var_19 |= (((min(var_7, (min(167969204, 905823903)))) + (arr_8 [i_2])));
        arr_17 [i_2] = (((((((53225 ? var_7 : -31)) + 2147483647)) >> (var_0 - 157))));
    }
    for (int i_5 = 1; i_5 < 15;i_5 += 1)
    {
        arr_20 [i_5] = (arr_15 [i_5 + 2] [i_5 + 2] [i_5 + 1]);
        var_20 &= (((arr_15 [i_5] [i_5 - 1] [19]) ? (arr_12 [i_5 + 2]) : var_4));
        var_21 *= (((arr_14 [i_5] [i_5] [i_5] [i_5]) ? (((var_4 == 1) * (arr_15 [i_5 - 1] [i_5 - 1] [11]))) : ((min(var_2, (arr_8 [i_5 - 1]))))));
    }
    var_22 = var_3;
    /* LoopNest 2 */
    for (int i_6 = 0; i_6 < 15;i_6 += 1)
    {
        for (int i_7 = 1; i_7 < 14;i_7 += 1)
        {
            {
                var_23 = ((12359825502524667718 ? ((((max(1, 16))) ? (arr_0 [3]) : 225)) : (((+((max((arr_19 [i_6]), var_6))))))));
                arr_26 [i_7] = (((~1) ? (((arr_13 [i_7]) ? 0 : 19)) : ((1 >> ((((var_11 & (arr_10 [i_7]))) - 10381116626698371068))))));

                for (int i_8 = 0; i_8 < 15;i_8 += 1)
                {
                    var_24 = (var_3 & 2392585897);
                    arr_29 [i_6] [i_6] [i_8] |= -26815;
                }
            }
        }
    }
    #pragma endscop
}
