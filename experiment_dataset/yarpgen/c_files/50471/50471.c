/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50471
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50471 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50471
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_4 [i_1] = (min(var_2, (var_1 << 14)));

                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    arr_7 [i_0] [i_0] [i_0] = min(((var_11 ? 4294967282 : (18 * 0))), ((min(4, (min((arr_1 [i_0]), var_11))))));
                    arr_8 [i_0] [i_0] = var_10;
                    arr_9 [i_0] = ((~(arr_0 [i_0] [i_0])));
                }
            }
        }
    }
    var_12 = (var_9 >= var_11);
    var_13 &= var_4;
    var_14 = (min((~2193835862), var_7));
    #pragma endscop
}
