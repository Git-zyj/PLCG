/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {
                var_19 ^= (max(((min(((min(2784497894, 95))), ((var_11 ? (arr_1 [i_0]) : 70368744177663))))), (min(17084616098821274532, (arr_3 [0])))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 10;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 6;i_3 += 1)
                    {
                        {
                            arr_12 [i_0 + 2] [i_0] [i_0] [5] = (~1);
                            var_20 = (~227);
                        }
                    }
                }
            }
        }
    }
    var_21 = (min((((4294967282 ? 1 : 153))), var_8));
    var_22 = var_3;
    var_23 = var_12;
    #pragma endscop
}
