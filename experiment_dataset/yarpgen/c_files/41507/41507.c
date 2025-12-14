/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41507
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, var_4));
    var_11 = var_5;
    var_12 = (min(var_12, (((var_4 ? 30 : 15193161247098392136)))));

    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        var_13 = (min(var_13, (((((arr_1 [i_0]) && (arr_1 [i_0])))))));
        arr_3 [i_0] [9] = ((((arr_0 [i_0] [i_0]) != (arr_2 [i_0] [i_0]))));
    }
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        var_14 &= (1586128010 > 63);
        var_15 = (min(var_15, ((min(var_8, var_5)))));
    }
    for (int i_2 = 2; i_2 < 19;i_2 += 1)
    {
        var_16 = (min(var_16, ((((((((var_7 / (arr_8 [i_2 + 1] [i_2])))) / (((arr_4 [7]) | 1586128008)))) * ((min(-1586128010, var_1))))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 20;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 20;i_4 += 1)
            {
                for (int i_5 = 1; i_5 < 18;i_5 += 1)
                {
                    {
                        arr_16 [i_2] = ((~(((arr_1 [14]) ? (min(var_8, (arr_11 [3] [3] [i_4]))) : (arr_5 [i_2] [0])))));
                        arr_17 [i_4] [i_4] [i_4] [i_5 - 1] = (min((((arr_14 [i_2] [1] [i_3] [i_3] [i_3]) || (arr_6 [i_3]))), ((!(arr_0 [i_5 - 1] [i_2 - 2])))));
                    }
                }
            }
        }
        var_17 += ((3253582826611159490 - var_1) && (arr_2 [i_2] [i_2 - 1]));
    }
    #pragma endscop
}
