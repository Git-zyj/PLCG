/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46795
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (0 ^ var_3);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    var_13 = (255 || 17623947714804558108);
                    arr_9 [8] [i_2] [7] = ((!(arr_7 [i_0] [i_1] [i_2] [i_0])));
                }
                arr_10 [i_0] [i_0] [i_1] = ((((max(137, 40263))) ? (min(5939080957041635572, (arr_0 [i_0] [i_0]))) : (min((arr_0 [i_0] [i_1]), (arr_0 [i_1] [i_0])))));
                var_14 += 2147483647;
            }
        }
    }
    var_15 = (min(var_9, 0));
    #pragma endscop
}
