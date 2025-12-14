/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221041
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221041 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221041
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = var_6;
    var_14 = (((~((36457 ? var_9 : var_5)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [1] [i_0] [i_1] = ((~(18446744073709551613 * var_1)));
                arr_7 [i_0] = max(((((((var_4 ? -15176 : var_9))) < (~14915214583017996401)))), ((~(arr_0 [i_0]))));
            }
        }
    }
    #pragma endscop
}
