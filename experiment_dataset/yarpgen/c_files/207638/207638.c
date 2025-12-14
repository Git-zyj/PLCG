/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207638
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207638 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207638
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_6 [i_0] = (2047 - ((((min(var_8, (arr_4 [i_0])))) ? (1 < 1) : 2067)));
                arr_7 [i_0] [i_0] = ((511 ? 63489 : -41));
            }
        }
    }
    var_13 = var_10;
    var_14 = (max(1, ((-48 ? (~63) : (~var_8)))));
    #pragma endscop
}
