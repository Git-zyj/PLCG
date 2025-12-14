/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_11;
    var_14 = (max((((((max(42846, var_12))) ? 22675 : ((24772 & (-127 - 1)))))), var_12));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = ((234881024 ? 4060086248 : 1));
                var_16 = (min(var_16, (((((((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1])))) ? ((237 - (arr_0 [i_0 - 1] [i_0 - 1]))) : (((arr_0 [i_0 - 1] [i_0 - 1]) ? (arr_0 [i_0 - 1] [i_0 - 1]) : (arr_0 [i_0 - 1] [i_0 - 1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 0;i_3 += 1)
                    {
                        {
                            var_17 += ((+((min(((((arr_7 [i_0] [3] [i_2]) || 15843942189312461978))), (arr_5 [i_0 - 1]))))));
                            arr_12 [i_3] [i_2] [i_2] = (((arr_10 [i_3] [i_3 + 1] [i_3] [i_3]) ? (var_6 > var_1) : (((arr_10 [i_3] [i_3] [i_3] [i_3]) & (arr_10 [8] [i_3 + 1] [i_3] [i_3])))));
                        }
                    }
                }
                var_18 = arr_7 [i_0] [i_0] [i_1];
            }
        }
    }
    #pragma endscop
}
