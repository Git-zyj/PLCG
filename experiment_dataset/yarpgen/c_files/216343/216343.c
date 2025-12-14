/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216343
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_4;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 17;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_1] [i_4] [i_3] [i_4] = 1;
                                var_13 = ((-((((-9223372036854775787 % (arr_11 [i_0] [i_0] [9] [i_3])))))));
                                arr_15 [i_0] [i_0] [i_0] [i_0] [i_1] = (arr_3 [i_4]);
                            }
                        }
                    }
                }
                var_14 = 6149;
                var_15 = (((((35091 ? (arr_6 [i_1]) : (((arr_6 [i_1]) ? -23 : (arr_8 [i_0] [1] [i_1])))))) ? (min((min(var_3, var_10)), ((min(1, var_6))))) : (arr_8 [i_1] [i_1] [i_1])));
                var_16 = (~var_4);
            }
        }
    }
    #pragma endscop
}
