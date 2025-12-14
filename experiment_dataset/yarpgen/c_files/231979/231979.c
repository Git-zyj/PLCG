/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231979
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231979 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231979
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 ^= (((((~((var_10 ? var_0 : var_17))))) && (((((max(-8376, var_2))) << (var_15 - 2592692062))))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (max(var_21, ((max((((+((((arr_3 [i_1]) >= var_5)))))), (arr_0 [i_0 + 3]))))));
                var_22 = (((((-var_9 ? var_4 : 57055))) ? -32754 : (((arr_2 [5]) ? (!var_10) : (max(var_2, (arr_3 [0])))))));
                /* LoopNest 3 */
                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 17;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_1] [i_2] = 15327;
                                arr_14 [i_0 - 1] [i_1] [i_2] [i_1] [i_4] = (max(((((((~(-127 - 1)))) ? (arr_9 [i_0] [i_1] [6] [i_2] [i_3] [i_4]) : var_11))), ((57828 ? (arr_8 [i_0] [i_0 + 1] [i_0 + 3] [i_2 - 1] [i_3 - 1]) : 768))));
                                var_23 = (--24508);
                            }
                        }
                    }
                }
                /* LoopNest 3 */
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    for (int i_6 = 1; i_6 < 16;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_24 ^= (((((-((max((arr_5 [10] [i_6]), -64)))))) ? ((((!(~0))))) : ((-(arr_22 [i_0] [i_0 - 1] [i_0 + 3] [i_0] [i_0 - 1] [i_0 + 3] [i_5])))));
                                var_25 = (~(((~-15323) ? var_15 : (((min(var_0, var_14)))))));
                            }
                        }
                    }
                }
                var_26 = (max(var_19, (((var_15 >= 8481) ? (((min((arr_17 [i_0 + 1]), 1)))) : (min(3706859936, 18008))))));
            }
        }
    }
    #pragma endscop
}
