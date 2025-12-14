/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_7, var_10));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 23;i_1 += 1)
        {
            {
                var_12 *= (arr_1 [i_1]);
                var_13 += ((-(!10)));
                var_14 = (max((min((arr_2 [i_1 + 2] [i_1 + 2] [i_1 + 1]), (arr_2 [i_0] [i_0 + 1] [15]))), ((~(arr_2 [i_0] [i_1] [i_0])))));
                var_15 = ((-(~192)));
            }
        }
    }
    #pragma endscop
}
