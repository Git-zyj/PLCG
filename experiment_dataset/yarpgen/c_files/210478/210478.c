/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210478
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210478 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210478
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        var_17 = (((((((1966 <= (-32767 - 1))) ? 62978 : var_1))) ? (((!(((arr_1 [i_0]) || var_6))))) : ((((((var_5 <= (arr_1 [i_0])))) >= (arr_1 [i_0]))))));
        var_18 = (max(var_18, ((((((((arr_0 [i_0] [i_0]) && (arr_1 [1]))))) ? (((arr_0 [i_0] [i_0]) / (arr_0 [i_0] [i_0]))) : (((((var_2 | (arr_0 [i_0] [i_0])))) ? (((((arr_0 [i_0] [i_0]) + 2147483647)) << (((((arr_1 [i_0]) + 18998)) - 19)))) : (arr_0 [i_0] [i_0]))))))));
        var_19 ^= (arr_1 [i_0]);
    }
    for (int i_1 = 0; i_1 < 15;i_1 += 1)
    {
        var_20 ^= ((15360 ^ ((6042722070282782087 ? 50171 : (((-2147483647 - 1) ? 973370317 : 12))))));
        var_21 += ((((((((~(arr_3 [i_1]))) + 2147483647)) >> ((((~(arr_2 [i_1] [14]))) + 194))))) & ((((((arr_2 [i_1] [6]) ? -22902674 : 1))) ? (arr_2 [i_1] [4]) : (((arr_2 [i_1] [2]) ? 147294835603462705 : -2)))));
    }
    for (int i_2 = 0; i_2 < 22;i_2 += 1)
    {
        var_22 *= (~4068);
        var_23 = var_9;
    }
    for (int i_3 = 0; i_3 < 12;i_3 += 1)
    {
        var_24 += (((((arr_1 [i_3]) ? (arr_1 [i_3]) : (arr_1 [i_3])))) ? ((((((arr_8 [i_3]) ? (arr_3 [i_3]) : (arr_7 [i_3])))) ? (((arr_8 [2]) >> (((arr_4 [i_3] [i_3]) + 88)))) : (arr_3 [i_3]))) : ((((arr_3 [i_3]) ? var_0 : (((arr_8 [i_3]) ? (arr_3 [i_3]) : var_2))))));
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 8;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 12;i_5 += 1)
            {
                for (int i_6 = 2; i_6 < 9;i_6 += 1)
                {
                    {
                        var_25 = ((+((((((arr_11 [i_4] [i_4]) ? (arr_8 [i_3]) : var_15))) ? ((((arr_13 [i_4] [i_5] [i_5]) ? (arr_13 [i_4] [i_5] [i_6 - 2]) : (arr_5 [i_4])))) : ((6042722070282782087 ? 63 : 18186159496196924117))))));
                        var_26 = (arr_2 [i_4] [i_4]);
                        var_27 = (max(var_27, (arr_13 [i_3] [i_4] [i_3])));
                    }
                }
            }
        }
    }
    var_28 = var_11;
    #pragma endscop
}
