/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50428
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50428 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50428
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 19;i_1 += 1)
        {
            {
                var_10 |= 70368744177660;
                var_11 = ((0 | (41 ^ 3008764609)));
                arr_6 [i_0] [i_1] [i_0] = (-32767 - 1);
                arr_7 [i_1] = -26;
            }
        }
    }
    var_12 = (4294967295 || 3095006109);
    var_13 &= ((var_8 & (((5009475720824049867 ^ 4588424436425332996) & 63))));
    var_14 = 70368744177658;
    #pragma endscop
}
