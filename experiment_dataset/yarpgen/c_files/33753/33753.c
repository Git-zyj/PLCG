/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33753
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33753 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33753
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 *= var_5;
    var_14 = var_3;
    var_15 = ((!(((var_3 ? var_1 : (max(-8702156517251018986, -24)))))));

    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        arr_4 [i_0] = ((!((((((24 + (arr_3 [8])))) / -2518173926349981140)))));
        /* LoopNest 3 */
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        var_16 = 16;
                        var_17 = ((!(((32 ? (arr_2 [i_0] [6]) : (0 | var_0))))));
                        var_18 = (((((-(-2 * var_11)))) ? (arr_8 [i_1] [i_1] [i_2] [i_3]) : (arr_6 [7] [i_1] [i_2])));
                        arr_12 [i_1] [i_1] = (max(var_3, ((var_0 ? ((((arr_6 [i_1] [i_2] [i_2]) >= var_8))) : ((2518173926349981139 ? (arr_3 [i_0]) : var_6))))));
                    }
                }
            }
        }
    }
    for (int i_4 = 2; i_4 < 14;i_4 += 1)
    {
        /* LoopNest 3 */
        for (int i_5 = 0; i_5 < 0;i_5 += 1)
        {
            for (int i_6 = 2; i_6 < 14;i_6 += 1)
            {
                for (int i_7 = 2; i_7 < 11;i_7 += 1)
                {
                    {
                        var_19 ^= (!((min(var_6, (min((arr_14 [i_6] [i_5 + 1]), var_0))))));
                        var_20 = (max(var_20, (((((max(((var_11 ? 4294967280 : var_8)), var_12))) ? var_9 : (arr_14 [i_7] [i_7 + 4]))))));
                    }
                }
            }
        }
        arr_22 [i_4] = ((!((!((min(var_10, var_0)))))));
        var_21 = ((!(arr_19 [i_4] [i_4 - 1] [i_4])));
    }
    #pragma endscop
}
