/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212032
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212032 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212032
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((max(0, (min(var_15, var_5))))) ? (max((min(var_4, var_9)), ((min(var_15, var_15))))) : var_11));
    /* LoopNest 3 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 10;i_2 += 1)
            {
                {
                    var_18 += 0;
                    /* LoopNest 2 */
                    for (int i_3 = 4; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_17 [i_0] [i_0] [i_0] [i_0 + 3] [i_0] &= var_12;
                                var_19 = (((((-(min((arr_5 [i_0 + 4]), (arr_0 [i_4])))))) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : 32768));
                            }
                        }
                    }
                    var_20 = ((min((var_15 & var_13), (arr_1 [i_0 - 4]))));
                }
            }
        }
    }
    var_21 &= 30301877222296456;
    var_22 = (min(1, 32747));
    #pragma endscop
}
