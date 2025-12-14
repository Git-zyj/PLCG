/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208368
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208368 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208368
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_20 = (18446744073709551615 ^ 1366732327);
                arr_7 [1] = ((~(min(var_8, (arr_5 [i_0] [i_1])))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                {
                    var_21 *= ((3546458590 ? 10754376013073073749 : 118));
                    arr_14 [i_2] = var_3;
                }
            }
        }
    }
    var_22 ^= var_6;
    #pragma endscop
}
