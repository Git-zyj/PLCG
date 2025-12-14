/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~((-((min(var_8, var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_14 = var_7;
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 11;i_4 += 1)
                        {
                            {
                                arr_10 [1] [1] [i_2] [2] [i_0] [i_0] [i_0] = (((arr_0 [i_0]) ? (((((((arr_0 [3]) ? 0 : var_5))) || ((max((arr_8 [i_0] [i_0] [i_0] [i_0] [4]), 7932)))))) : ((min(var_8, 65514)))));
                                var_15 = max((~-0), (min(-32408, (arr_7 [i_0] [i_0] [i_0] [i_0] [i_0] [i_3]))));
                                var_16 = (((arr_6 [5] [1] [i_3 - 1] [1]) ? -var_12 : (~var_12)));
                            }
                        }
                    }
                }
                var_17 = ((((((arr_6 [i_0] [i_0] [i_0] [i_0 - 1]) ? (arr_9 [1] [5] [5] [8] [i_0 - 2] [i_1] [i_1]) : 4994803619102520362))) ? (((((min((arr_1 [i_0]), -4)))) - (var_10 * var_5))) : (((((var_4 ? (arr_5 [i_0] [i_0] [i_0]) : 34344)) - ((-(arr_6 [10] [i_1] [i_1] [i_1]))))))));
            }
        }
    }
    var_18 -= ((4162597591339130494 - (((((max(2412777408175043084, var_2))) ? -var_7 : var_8)))));
    #pragma endscop
}
