/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21058
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21058 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21058
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= (!var_0);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_15 = (arr_0 [i_0]);
                arr_5 [i_0] [i_0] = ((~(((max(953861579, (arr_0 [i_1]))) << (((arr_2 [i_0] [i_1]) - 39))))));
            }
        }
    }

    for (int i_2 = 0; i_2 < 1;i_2 += 1)
    {
        var_16 = ((((((var_13 ? var_10 : var_11)) >> (arr_1 [i_2]))) % -var_13));
        /* LoopNest 2 */
        for (int i_3 = 0; i_3 < 10;i_3 += 1)
        {
            for (int i_4 = 2; i_4 < 7;i_4 += 1)
            {
                {
                    var_17 = ((((max((arr_12 [i_3] [i_4]), (arr_2 [i_3] [i_4])))) / (arr_7 [i_2])));
                    var_18 = max(((((arr_9 [i_2] [i_4 + 1]) || (-1 ^ var_1)))), 18446744073709551615);
                }
            }
        }
    }
    for (int i_5 = 0; i_5 < 22;i_5 += 1)
    {
        var_19 = 27;
        arr_17 [i_5] = (min((min(var_4, (arr_16 [i_5]))), (((!(arr_16 [i_5]))))));
        arr_18 [20] = (max(1, ((((arr_15 [i_5]) & 1)))));
    }
    #pragma endscop
}
