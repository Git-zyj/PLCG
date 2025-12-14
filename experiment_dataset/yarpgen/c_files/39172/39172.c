/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39172
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39172 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39172
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = (((var_6 & 252) == 1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((~((~(min(4058556913, 1))))));
                var_13 = 2147483648;
                arr_7 [i_1] = (((0 + -1) ^ (((1 ? var_5 : ((2147483648 | (arr_0 [13]))))))));
            }
        }
    }
    #pragma endscop
}
