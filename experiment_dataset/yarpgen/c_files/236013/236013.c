/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236013
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = 2006663951;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 17;i_3 += 1)
                    {
                        {
                            var_13 += 0;
                            var_14 = (max(var_14, ((((((arr_9 [0] [i_3 + 1] [i_3 - 1] [i_3 - 2]) == (arr_5 [i_3] [i_3 + 1] [4] [i_3 - 1]))) ? (~var_5) : (((arr_9 [i_2] [i_3 + 1] [i_3 - 2] [i_3 + 1]) ? (arr_9 [i_1] [i_3 + 1] [17] [i_3]) : (arr_5 [13] [i_3 + 1] [i_3 - 1] [17]))))))));
                            arr_10 [3] [i_1] [2] [i_3] [i_1] = ((((var_6 ? (-2147483647 - 1) : (arr_1 [16])))) ? ((-7648037533981802402 / (min(-7648037533981802409, (arr_2 [i_0] [i_1] [3]))))) : (2288303350 / 24));
                            arr_11 [i_0] [14] [i_2] [i_3] = (max(65535, 2288303344));
                        }
                    }
                }
                var_15 = (min(var_15, var_6));
                var_16 = (min(var_16, ((1 ? -1 : 7648037533981802402))));
                arr_12 [i_0] [i_0] [7] = ((((!(arr_8 [i_0] [i_0] [i_0]))) ? 2288303336 : (min((((var_3 ? (arr_8 [5] [8] [i_0]) : 4294967281))), (-15 ^ var_6)))));
            }
        }
    }
    var_17 = ((((!(!var_7))) ? var_1 : var_6));
    var_18 = min(var_7, ((var_5 ? 0 : var_10)));
    #pragma endscop
}
