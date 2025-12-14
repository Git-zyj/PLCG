/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34138
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34138 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34138
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((var_6 >> (var_16 - 6242895140068246336)));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 19;i_3 += 1)
                    {
                        {
                            var_18 = (((((var_11 ? (max((arr_1 [i_0]), var_15)) : (((var_12 ? (arr_4 [i_1]) : (arr_0 [i_3]))))))) * (((arr_1 [i_0]) ? (arr_3 [i_1] [i_1] [i_3]) : (((-2147483647 - 1) ? 3664146175 : 5324235464889018247))))));
                            var_19 = (((~0) == var_13));
                            var_20 = (min(var_20, (((var_5 ? (((var_1 < (((arr_3 [i_0] [i_0] [i_2]) ? (arr_0 [i_0]) : var_10))))) : ((((min(2147483647, var_3))) ? 1 : (max((arr_8 [i_3] [i_2] [i_1] [i_0]), (arr_0 [i_0]))))))))));
                            var_21 = (min(var_21, (arr_9 [i_2])));
                        }
                    }
                }
                var_22 += 5324235464889018247;
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 22;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 22;i_5 += 1)
                    {
                        {
                            var_23 = 673593563;
                            var_24 = (min((((~3664146175) & (((1867858228 ^ (arr_8 [i_5] [i_4] [i_1] [1])))))), (arr_12 [i_0])));
                            var_25 = 7478;
                            var_26 &= (((((var_16 ? 3664146175 : (arr_15 [i_0] [i_4] [i_4] [i_1] [i_0]))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
