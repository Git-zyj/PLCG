/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235932
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235932 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235932
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (min(var_19, (((((min((8212 / var_6), var_10))) ? (((((min(1835008, 1))) ? 3840 : (-127 - 1)))) : (~var_10))))));
    var_20 ^= (((((-127 - 1) + 2147483647)) << (((((min(1317414500, var_14)))) - 100))));
    var_21 = 1;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 14;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_22 = (min(var_22, ((((((((arr_5 [3]) ? var_17 : 805306368)))) ? (!var_15) : (((arr_1 [i_1 - 1] [i_3 + 2]) & 1)))))));
                            arr_12 [1] [i_1] [1] [10] [i_1] = (((((((min((-127 - 1), 1399))) ? var_6 : ((var_18 ? 255 : var_6))))) ? var_10 : 1));
                        }
                    }
                }
                arr_13 [i_1] [i_1] = ((((((arr_11 [i_1] [i_1 - 1] [3] [i_1 - 1] [i_1]) ? (arr_11 [i_1 + 1] [i_1 + 1] [i_1] [i_1] [1]) : var_5))) ? (((arr_11 [i_1 - 1] [i_1 - 1] [12] [i_1 - 1] [i_1 + 1]) | (arr_11 [i_1] [i_1 - 1] [2] [i_1] [i_1 - 1]))) : var_12));
            }
        }
    }
    #pragma endscop
}
