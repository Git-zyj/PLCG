/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236823
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236823 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236823
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, var_4));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 20;i_2 += 1)
            {
                {
                    var_12 += ((((!(arr_3 [i_0])))));
                    arr_11 [i_0] = ((-(min(((max((arr_6 [i_2] [i_1]), 41482))), 67108608))));

                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        var_13 = (min(((1 ? var_5 : (min(var_2, (arr_14 [i_0] [i_0] [i_1] [i_2] [i_3]))))), (max((arr_7 [i_0] [i_1] [i_3]), 36028796985409536))));
                        arr_15 [i_3] [i_0] [i_1] [i_0] [i_0] = (((((+(((-127 - 1) ? 127 : var_7))))) && (((arr_10 [i_0] [i_1] [i_1]) > ((14414030947784557947 ? (arr_0 [i_0] [i_1]) : (arr_4 [i_1] [i_3])))))));
                        arr_16 [i_0] [i_0] [i_0] [i_1] [i_2] = (arr_8 [i_3] [i_0] [i_3] [i_3]);
                    }
                    var_14 = ((((max(var_10, (arr_1 [i_2])))) ? ((var_5 ? 24042 : -8252)) : 30199));
                    var_15 = (((min((arr_1 [i_1]), (arr_1 [i_2]))) * (((((var_9 ? -39 : var_7)) >= 127)))));
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    arr_24 [i_0] [i_5] = ((((arr_13 [i_0] [i_4] [i_5] [i_0]) * 24047)) / ((max(4050, (arr_13 [i_0] [i_4] [i_0] [i_0])))));
                    var_16 ^= (min((min(var_8, (arr_23 [i_0]))), (arr_0 [i_4] [i_5])));
                    var_17 = (max(var_17, (arr_3 [i_0])));
                }
            }
        }
        arr_25 [i_0] [i_0] = 0;
    }
    var_18 = (min(var_18, (~var_5)));
    var_19 = (((((((min(var_5, 0))) ? (((max(10801, 41488)))) : var_4))) ? (~1) : var_4));
    #pragma endscop
}
