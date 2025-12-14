/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211474
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211474 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211474
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((var_2 ? (var_13 && 274877906943) : var_1)))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 18;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    arr_9 [i_1] [i_1 - 2] [i_1 + 1] = (((var_6 ? 0 : ((~(arr_1 [i_1]))))));
                    arr_10 [i_0] [i_1] = (min(var_6, 3940565404175453517));
                }
            }
        }
    }
    #pragma endscop
}
