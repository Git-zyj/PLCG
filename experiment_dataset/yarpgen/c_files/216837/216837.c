/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216837
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216837 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216837
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = (((arr_3 [i_1] [i_1]) ? ((((arr_1 [i_0]) ? (arr_2 [i_0 + 1]) : ((((arr_0 [i_0]) != (arr_0 [i_0]))))))) : (((((arr_0 [i_1]) < (arr_0 [i_1]))) ? (((((arr_0 [i_1]) == (arr_0 [i_1]))))) : (((arr_3 [i_1] [i_1]) ? (arr_2 [i_0]) : (arr_3 [i_0] [i_0])))))));
                /* LoopNest 2 */
                for (int i_2 = 3; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_10 [1] [1] [i_0] [i_3] = ((min((arr_0 [i_0 - 2]), ((((arr_2 [i_0]) && (arr_0 [i_0])))))));
                            var_19 = ((((max(1216, (arr_1 [i_0])))) ? 11484 : ((11494 ? 700760742 : ((max(99, 54080)))))));
                        }
                    }
                }
                arr_11 [i_0 - 2] [i_1] = (((((arr_7 [i_0 - 1] [i_0 - 2]) && (arr_7 [i_0 + 1] [i_0 - 2]))) ? (((arr_7 [i_0 - 2] [i_0 + 1]) ? (arr_7 [i_0 + 2] [i_0 + 1]) : (arr_7 [i_0 + 2] [i_0 - 2]))) : (arr_7 [i_0 - 2] [i_0 - 2])));
            }
        }
    }
    var_20 = ((((min(((min(var_17, var_12))), (max(var_8, var_14))))) ? var_17 : var_0));
    #pragma endscop
}
