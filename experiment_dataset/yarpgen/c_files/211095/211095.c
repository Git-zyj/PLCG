/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211095
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211095 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211095
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min(((7604427666743776705 ? 42 : 9621652316971487616)), ((min((!43), -var_7)))));
    var_21 = (min(var_21, (((!((max(-43, var_11))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] = arr_2 [i_1];
                arr_6 [i_0] [i_1] [i_1] = (max(-43, 1));
                arr_7 [i_1] = ((-5 + (max((~-4034427113309615284), 112))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 1; i_3 < 22;i_3 += 1)
        {
            {
                var_22 = (arr_8 [5]);
                var_23 = var_3;
                arr_12 [i_2] [i_2] [i_3] = -var_13;
            }
        }
    }
    var_24 = ((~(min(var_3, (max(var_6, -114))))));
    #pragma endscop
}
