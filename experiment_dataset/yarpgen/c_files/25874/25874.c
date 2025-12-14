/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= ((var_9 ? 5362995503256861897 : var_11));
    var_16 &= (((((var_3 % (((max(var_4, var_9))))))) * ((var_2 * (!1)))));

    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        var_17 = (((max(2147483635, (arr_0 [i_0 + 3]))) ^ ((var_8 / (arr_0 [i_0 + 2])))));

        for (int i_1 = 3; i_1 < 11;i_1 += 1)
        {
            var_18 = ((((((arr_4 [i_0 + 3] [i_1 - 3]) ? var_0 : var_12))) ? (arr_5 [i_1 - 3] [i_0]) : (((arr_1 [12]) | (45 > -27)))));
            arr_7 [i_1] [0] [i_0] = max(var_1, (arr_4 [i_0] [i_1]));
            arr_8 [i_0] = (arr_2 [i_0 + 1]);
            var_19 += ((((((((arr_4 [i_0] [i_1 + 3]) & 14955))))) + ((var_5 ? (((arr_5 [i_1] [i_1]) ? -45 : var_8)) : (((((arr_2 [0]) != 8833938305789502012))))))));
            var_20 = (max(((((arr_2 [i_0]) ? (arr_5 [i_0 + 3] [i_0 + 3]) : -var_3))), 3933787042535532281));
        }
        for (int i_2 = 1; i_2 < 10;i_2 += 1)
        {
            arr_12 [i_0] [i_2] [i_2] = var_13;
            arr_13 [1] = -45;
            /* LoopNest 2 */
            for (int i_3 = 0; i_3 < 14;i_3 += 1)
            {
                for (int i_4 = 0; i_4 < 14;i_4 += 1)
                {
                    {
                        arr_18 [3] [3] [i_3] = (arr_17 [i_2 + 1] [10] [i_2 - 1] [1]);
                        arr_19 [i_0] [i_0] [4] [i_4] = (((arr_15 [i_4] [i_3] [i_2] [i_0]) || var_8));
                        var_21 ^= (((arr_0 [6]) ? ((var_2 ? 22 : ((130 ? (arr_1 [i_2]) : var_3)))) : var_10));
                    }
                }
            }
        }
    }
    #pragma endscop
}
