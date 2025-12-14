/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231447
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231447 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231447
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 -= ((1970897914 ? var_5 : (((var_15 / ((max(1, 155))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 13;i_4 += 1)
                        {
                            {
                                var_18 = (-var_16 ? (min((min(17592186044415, -6024)), (((4032 ? var_6 : var_15))))) : var_7);
                                var_19 = (max(var_19, ((((((((((arr_10 [i_0] [i_1] [5] [i_2] [i_3] [i_4] [i_4]) ? 100 : var_4))) ^ var_1))) ? 41 : 214)))));
                                var_20 += (max(((((((~(arr_2 [i_0] [i_0])))) ? 36870 : ((218 << (((arr_4 [i_2] [i_1] [i_1 + 1] [i_1]) - 16943))))))), (min(var_1, (((var_4 >> (((arr_1 [i_2]) - 919816205)))))))));
                                arr_11 [i_0] [i_2] [i_0] [i_4 + 2] = ((-(min((arr_2 [i_1 + 1] [i_1 + 2]), (max(8367265323734337119, 30107))))));
                            }
                        }
                    }
                    var_21 = var_9;
                }
            }
        }
    }
    var_22 -= var_2;
    var_23 = (min((((max(var_13, 643287426)) * var_14)), (((var_11 << ((((max(var_9, 101))) - 253)))))));
    #pragma endscop
}
