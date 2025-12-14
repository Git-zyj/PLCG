/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235385
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235385 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235385
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_10, ((max((((var_1 & -1453186987) ? -67 : var_7)), var_2)))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1] [i_1] = 58006;
                    var_11 -= ((var_8 ? var_7 : ((var_7 ? (1275715703413775562 & var_7) : ((8366270191590908030 * (-9223372036854775807 - 1)))))));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 23;i_4 += 1)
                        {
                            {
                                var_12 = (-7054460065246402242 != 0);
                                var_13 = (!((min((arr_14 [i_4] [i_3] [i_2] [i_1] [3]), ((-4289055583524185449 - (arr_5 [i_3])))))));
                                arr_15 [i_1] [i_3] [2] [i_1] [i_1] = (min(755543466, var_0));
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 23;i_5 += 1)
                    {
                        for (int i_6 = 2; i_6 < 22;i_6 += 1)
                        {
                            {
                                var_14 -= ((((min(28762, -6418091633867829531))) ? (((((arr_17 [i_2] [i_5] [i_2] [i_2]) | (arr_10 [18] [i_1] [i_0] [i_0]))) * (((var_1 ? var_9 : (arr_22 [i_0] [20] [i_2] [i_5] [i_6 - 1] [i_6])))))) : var_7));
                                var_15 = (max(var_15, ((min(0, 7482353240382752118)))));
                                var_16 |= (((min((arr_19 [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 + 1]), (max(var_4, var_5)))) >= -1855066099));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
