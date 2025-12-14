/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 |= (((max((((var_7 ? var_4 : var_7))), (min(var_7, var_1))))) ? (((-111 ? 11415503610099302226 : 11415503610099302230))) : ((-22452 / ((var_10 ? var_4 : var_1)))));

    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {

        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            var_13 = (((((((~(arr_2 [i_1]))) ^ -2))) ? (((((min((arr_0 [i_0]), (arr_2 [7])))) ? 1479576545 : (var_9 ^ var_6)))) : ((((min(0, 3386626844))) ? (arr_2 [i_1]) : ((((arr_0 [i_1]) | 8821)))))));
            var_14 = var_5;
            arr_4 [i_0] = (61 && 19750);
        }
        for (int i_2 = 0; i_2 < 18;i_2 += 1) /* same iter space */
        {
            arr_7 [i_2] [i_0] [i_0] = (min(8821, -5848070456242690252));
            var_15 = (min(((var_4 ? var_0 : (arr_0 [8]))), (arr_1 [10])));
            var_16 = ((var_10 ? (((((var_11 ? var_5 : 2644))) / ((var_0 ? var_1 : (arr_1 [i_0]))))) : (((arr_2 [1]) << (195 - 135)))));
            var_17 = (max(var_17, (arr_3 [i_2])));
            var_18 = (max(var_18, (arr_0 [i_2])));
        }
        for (int i_3 = 0; i_3 < 18;i_3 += 1) /* same iter space */
        {
            /* LoopNest 3 */
            for (int i_4 = 3; i_4 < 15;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        {
                            var_19 = 5;
                            var_20 = (min(var_20, ((((((min(var_5, (arr_18 [i_0])))))) ? (~1) : (min(3386626844, 4294967295))))));
                            var_21 = var_4;
                        }
                    }
                }
            }
            arr_19 [i_0] |= (21144 * 0);
            arr_20 [i_0] = (arr_10 [i_3] [i_3] [i_0]);
        }
        var_22 = (max(var_22, ((min((!18122518578819265994), 9223372036854775807)))));
        var_23 = ((~(min((arr_18 [i_0]), (((arr_8 [i_0] [i_0] [2]) ? var_3 : (arr_9 [i_0] [i_0])))))));
    }
    #pragma endscop
}
