/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 += ((var_3 ? 1850605019 : 69));
    var_13 = min(var_10, 186);
    var_14 |= var_0;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_6 [9] = max(((((((arr_5 [15] [15] [15]) ^ 234))) * (((arr_1 [i_1]) * var_7)))), var_9);
                var_15 = (min(((((arr_5 [i_0 + 1] [i_0 - 2] [i_0 + 1]) >= (arr_5 [i_0 + 2] [i_0 + 2] [i_0 + 2])))), (max(186, (arr_5 [i_0 - 3] [i_0 - 3] [i_0 + 2])))));
                var_16 = ((!((min((arr_2 [i_0 + 2]), var_0)))));
                var_17 = ((min(var_4, var_1)));
            }
        }
    }
    #pragma endscop
}
