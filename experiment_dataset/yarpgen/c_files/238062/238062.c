/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238062
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238062 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238062
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((((((var_9 <= 442252809) ? -6574722592259017029 : var_9))) ? (((var_4 <= -6574722592259017022) ? var_2 : ((281838908 ? var_0 : var_2)))) : ((((564133674 | var_10) ? var_5 : var_3)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 19;i_1 += 1)
        {
            {
                var_12 = (((28859609 >> var_7) >> ((((((var_5 + 2147483647) >> (6574722592259017042 - 6574722592259017014))) <= ((max(var_8, 1))))))));
                var_13 = (((-73 ? (min(1398351827, 28859630) : var_5))));
            }
        }
    }

    for (int i_2 = 2; i_2 < 9;i_2 += 1)
    {
        var_14 = (min((((-13693 <= (arr_5 [i_2] [i_2] [i_2])))), (((((-1398351828 ? 1 : -9192))) ? ((2101987359 ? (arr_1 [i_2 + 2]) : 1)) : ((2101987359 ? var_2 : 23369))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 11;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 11;i_4 += 1)
            {
                for (int i_5 = 2; i_5 < 10;i_5 += 1)
                {
                    {
                        var_15 = ((-6574722592259017022 ? ((((arr_12 [i_5 - 1] [i_2 + 2] [i_4]) >> (arr_4 [i_5 - 1] [i_5])))) : 1));
                        var_16 = (min(var_16, ((min(((((((0 | (arr_15 [i_5 + 1] [i_3] [i_2])))) <= (arr_6 [i_2])))), ((0 | (((1 ? (arr_16 [i_2] [i_3] [i_4]) : (arr_2 [i_2])))))))))));
                    }
                }
            }
        }
    }
    var_17 |= var_2;
    #pragma endscop
}
