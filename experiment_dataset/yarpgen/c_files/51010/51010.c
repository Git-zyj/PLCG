/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51010
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51010 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51010
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = max(((((((23990 ? 18446744073709551615 : 18446744073709551612))) && (2240594166372523077 && var_8)))), var_6);

    /* vectorizable */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = 18446744073709551615;
        var_12 = ((~((var_6 ? (arr_0 [i_0 - 3] [i_0]) : 1))));
        var_13 = (((((-11 ? var_1 : (arr_2 [1])))) ? (arr_2 [i_0 - 2]) : 93));
    }

    /* vectorizable */
    for (int i_1 = 0; i_1 < 24;i_1 += 1)
    {
        var_14 = (min(var_14, (arr_4 [i_1])));
        /* LoopNest 3 */
        for (int i_2 = 2; i_2 < 22;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 24;i_3 += 1)
            {
                for (int i_4 = 1; i_4 < 20;i_4 += 1)
                {
                    {

                        for (int i_5 = 0; i_5 < 24;i_5 += 1)
                        {
                            arr_20 [i_4 + 3] [2] [i_1] &= (((~18446744073709551612) >> (((4347 >> 1) - 2126))));
                            var_15 = ((-18 == (((arr_19 [i_1] [i_2] [i_2] [i_3] [i_2] [i_5]) & (arr_4 [i_3])))));
                        }
                        var_16 = (1 > 15093176764164389369);
                    }
                }
            }
        }
        var_17 = (var_2 % 2147483647);
    }
    #pragma endscop
}
