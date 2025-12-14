/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201769
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201769 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201769
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 2597668972;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_19 = (max(var_19, (((((arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2]) ? (arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2]) : (arr_5 [i_0 - 2] [i_0 + 2] [i_0 + 2]))) % (2597668972 + 2597668972)))));
                            var_20 = min(((-var_14 ? ((2597668972 ? (arr_1 [i_0 + 2] [i_0 + 2]) : 2733118108)) : (max(var_10, 1697298324)))), (arr_8 [i_0] [i_1] [i_2]));
                            arr_11 [i_2] [i_2] [i_2] = ((((min((((var_5 < (arr_5 [i_0] [i_0] [8])))), (((-32767 - 1) ? (arr_5 [i_3] [i_3] [i_3]) : 32767))))) ? ((~(((arr_0 [i_0]) ^ var_12)))) : (arr_9 [i_2] [i_2] [3] [i_3] [i_3 - 2])));
                        }
                    }
                }
                var_21 = (max(var_21, (((((((arr_7 [i_0 - 2] [i_0 - 2] [i_0 - 2]) ? ((-1 ? (arr_1 [i_0] [i_1]) : var_1)) : ((-19 * (arr_4 [i_0] [i_1])))))) ? ((((((var_16 ? (arr_8 [i_0] [i_0] [i_1]) : (arr_0 [i_1])))) ? -20736 : (-32767 - 1)))) : (min(var_11, (arr_3 [i_0 - 1]))))))));
            }
        }
    }
    var_22 = var_1;
    #pragma endscop
}
