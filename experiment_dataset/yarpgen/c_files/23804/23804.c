/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 18;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] = (max(var_2, (((((0 << (((arr_3 [i_0] [i_0 - 1]) - 8893382797013516828)))) * (arr_6 [i_0] [i_1] [i_2] [i_1]))))));

                    /* vectorizable */
                    for (int i_3 = 3; i_3 < 15;i_3 += 1)
                    {
                        var_12 = ((var_2 - (!801554633774803332)));
                        arr_12 [i_0 - 2] [1] [3] [i_1] [i_3] [i_3] = ((-(arr_5 [i_2 - 1])));
                        var_13 = ((((var_4 ? (arr_4 [i_1] [i_1]) : var_8)) / -1));
                    }
                    arr_13 [i_0] [i_0] [i_1 + 1] [i_1] = ((-(arr_3 [i_0] [i_0])));
                }
            }
        }
        var_14 = (((((((((arr_4 [i_0 + 1] [i_0 + 1]) >> (-2446594270451295417 + 2446594270451295437)))) ? -var_6 : (((-2147483647 - 1) ? 0 : 801554633774803332))))) || (((((max(2323767663, 44))) ? -1971199632 : (((min(91, 0)))))))));
    }
    var_15 = ((((((~0) >= var_4))) >> (!var_6)));
    var_16 = (max(var_11, 1916229575));
    var_17 ^= ((2147483647 ? (max((211 / 12608), 2147483625)) : ((var_10 - (1 + 0)))));
    #pragma endscop
}
