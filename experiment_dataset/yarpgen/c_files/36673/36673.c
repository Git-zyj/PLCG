/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 36673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=36673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/36673
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 &= 2147483647;

    for (int i_0 = 1; i_0 < 9;i_0 += 1)
    {
        var_11 = (min(var_11, var_0));
        var_12 = (arr_2 [i_0 + 2]);
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 2; i_3 < 8;i_3 += 1)
                {
                    {
                        arr_11 [i_0] [i_1] [i_1] [i_1] = ((-(arr_8 [i_0 + 2] [i_2 - 1] [i_3 + 2])));
                        var_13 = (((~-1943413746) & (((arr_1 [i_0] [i_0]) ? 1180911689 : 30025))));
                        var_14 -= (((var_6 - (var_6 > var_8))) != ((((arr_8 [i_0 + 1] [i_0 + 2] [i_0]) + (arr_8 [i_3] [i_1] [i_0])))));
                    }
                }
            }
        }
        var_15 = (max(-var_5, ((var_5 ? 127 : (arr_4 [i_0] [i_0 - 1])))));
    }
    for (int i_4 = 2; i_4 < 21;i_4 += 1)
    {
        var_16 = (((((24327 != 208) ? 18446744073709551594 : var_4)) * (9223372036854775807 + -32760)));
        arr_15 [i_4] &= (min(4294967284, ((min(-0, -24327)))));
    }
    var_17 |= var_7;
    var_18 ^= var_4;
    var_19 = var_7;
    #pragma endscop
}
