/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19874
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19874 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19874
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_10;
    var_12 = var_10;
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0 - 2] [i_1] [i_1] = ((var_3 & (arr_1 [i_0 - 2] [i_0 - 2])));
                    var_13 = (min((((!(arr_5 [4] [17] [17])))), (~var_10)));
                    arr_8 [i_0] [i_1] [13] = (-2147483647 - 1);
                }
            }
        }
    }
    #pragma endscop
}
