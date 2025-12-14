/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3812
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((((min(var_8, ((min(var_0, var_7)))))) ? ((0 ? var_10 : var_4)) : var_8));
    var_13 = var_11;

    for (int i_0 = 2; i_0 < 17;i_0 += 1)
    {
        arr_2 [i_0] = ((((max(((min(var_0, var_10))), ((var_1 ? var_5 : var_10))))) && var_8));
        arr_3 [i_0 - 1] = ((min(var_3, (((var_3 ? var_5 : 104))))));
        var_14 += (min((((0 << (var_3 - 1195333564382196284)))), ((min((!var_1), var_0)))));

        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    for (int i_4 = 1; i_4 < 18;i_4 += 1)
                    {
                        {
                            var_15 = (arr_4 [i_0 + 2]);
                            var_16 *= var_0;
                            arr_14 [i_0 + 1] [i_0 + 1] [i_1 - 2] [i_0 + 1] [i_0 + 1] [i_1 - 2] &= (min(var_8, (arr_1 [i_1 - 2])));
                        }
                    }
                }
            }
            var_17 -= ((+(min((!var_0), var_2))));
        }
        for (int i_5 = 0; i_5 < 20;i_5 += 1)
        {
            arr_17 [i_0] [i_0] = ((((((min(var_9, (arr_6 [i_0] [i_5] [0])))) ? (arr_9 [i_0] [i_0] [18]) : var_7)) == (max(7090, (((arr_12 [i_0 + 1]) & var_6))))));
            arr_18 [i_0] [i_5] = (max(((((((max(1, 1)))) != var_11))), var_2));
            var_18 = min(var_2, (max(var_4, -var_1)));
        }
    }
    #pragma endscop
}
