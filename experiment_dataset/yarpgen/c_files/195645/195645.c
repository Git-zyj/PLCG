/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195645
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195645 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195645
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_0] = ((~(min(((var_4 ? var_8 : (arr_7 [i_0] [i_0] [i_0]))), (arr_2 [i_1 + 2])))));
                    var_14 = (((max(-2016018667, 2016018659)) != (arr_3 [i_0] [i_1 + 1] [i_1 + 1])));
                }
            }
        }
    }
    var_15 = (var_1 >= -3174827074752465572);
    var_16 = (min(var_16, ((min(((var_9 ? (min(2016018655, 2791044596234497853)) : (var_8 - 7233570802461821442))), ((min(var_2, var_11))))))));

    /* vectorizable */
    for (int i_3 = 0; i_3 < 16;i_3 += 1)
    {
        var_17 &= var_5;
        var_18 = (((((2016018662 > (arr_3 [10] [i_3] [i_3])))) | (((!(arr_5 [16]))))));
        var_19 = (min(var_19, ((((arr_12 [i_3]) / (((arr_7 [i_3] [i_3] [14]) ? (arr_4 [2]) : (arr_3 [10] [i_3] [i_3]))))))));
    }
    var_20 = var_9;
    #pragma endscop
}
