/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49566
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49566 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49566
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = ((((((((var_5 ? 1 : var_3))) ? ((255 ? (arr_0 [i_0]) : var_2)) : var_6))) ? ((((15 + 254) && 21539))) : (arr_1 [i_0])));
        var_11 = (arr_0 [i_0]);
        arr_3 [i_0] = (((((+(((arr_0 [i_0]) ? 1 : 0))))) ? (43867 * 1) : -10444));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 24;i_2 += 1)
            {
                {
                    var_12 *= (~5);
                    arr_8 [1] [i_0] = ((max(var_9, (max(227, (arr_0 [i_0]))))));
                    arr_9 [i_1] [i_1] [i_1] = (arr_7 [i_2 - 1] [i_2 - 3] [i_2 - 1]);
                }
            }
        }
        arr_10 [i_0] [5] |= (max((!240), (arr_1 [8])));
    }
    for (int i_3 = 0; i_3 < 14;i_3 += 1)
    {
        arr_15 [i_3] = (((arr_4 [i_3] [i_3]) || ((!(arr_4 [23] [i_3])))));
        arr_16 [i_3] = ((65535 ^ 233) || 65074);
        var_13 = ((((min(164, 32744)))));
    }
    for (int i_4 = 0; i_4 < 19;i_4 += 1)
    {
        var_14 *= ((max((arr_4 [i_4] [i_4]), (arr_5 [1] [1]))));
        var_15 &= (((-1 % var_1) ? ((+(((arr_1 [i_4]) * var_2)))) : ((1 ? 10451 : 249))));
        arr_20 [i_4] [i_4] = 141;
        var_16 = (max(var_16, var_9));
        arr_21 [16] [5] = (min((((arr_6 [i_4] [i_4]) ? (arr_6 [8] [8]) : (arr_5 [i_4] [i_4]))), ((13057 ? 21015 : 121))));
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 10;i_5 += 1)
    {
        for (int i_6 = 2; i_6 < 7;i_6 += 1)
        {
            {
                var_17 ^= var_8;
                var_18 = (((var_3 - -1) & ((((233 ? -22124 : 250))))));
                var_19 = (max(-51, (((var_0 ? 48 : var_0)))));
                arr_28 [i_5] [i_6 - 2] = (~-1);
            }
        }
    }
    var_20 = ((min((65516 < var_0), var_1)));
    #pragma endscop
}
