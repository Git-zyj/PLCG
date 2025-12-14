/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210924
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210924 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210924
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 -= min(((min(19232, 150))), (((!(arr_4 [i_0] [i_2 + 1] [i_2 - 1])))));
                    var_13 = (min(((((arr_4 [i_2 + 1] [i_2 + 1] [i_2 - 1]) == -19229))), (arr_2 [i_2])));
                }
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 4; i_3 < 16;i_3 += 1)
    {
        var_14 = (((119 | var_10) ? (~0) : (arr_9 [i_3] [i_3])));
        var_15 = (((((var_8 <= (arr_7 [i_3] [i_3] [i_3])))) & (arr_5 [i_3] [i_3])));
    }
    var_16 = var_3;
    var_17 -= ((((5958 <= (var_5 && var_8)))) == ((max(var_6, var_9))));
    /* LoopNest 3 */
    for (int i_4 = 1; i_4 < 20;i_4 += 1)
    {
        for (int i_5 = 2; i_5 < 20;i_5 += 1)
        {
            for (int i_6 = 0; i_6 < 23;i_6 += 1)
            {
                {
                    arr_17 [i_6] [i_6] [i_4 + 1] = var_9;
                    var_18 = ((((62101 ? 9636 : 0)) == (arr_10 [i_4 + 2])));
                    var_19 = 2251799276814336;
                    var_20 = (max(var_2, (arr_13 [17] [i_4 - 1] [i_5 + 2])));
                }
            }
        }
    }
    #pragma endscop
}
