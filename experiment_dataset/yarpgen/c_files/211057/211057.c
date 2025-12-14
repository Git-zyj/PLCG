/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211057
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211057 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211057
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                arr_5 [1] [i_1] = (max((var_1 * var_0), (min(((max(var_7, 4294967291))), var_8))));
                arr_6 [i_0 + 1] [i_1] [i_1] |= ((((min(1, ((1 >> (-21 + 30)))))) ? (7111880316479764256 || 31) : (((21022 ? 248 : 1)))));
                arr_7 [i_0] [i_0] [i_0] &= max(24166, 16383);
            }
        }
    }
    var_13 = var_9;
    var_14 = var_6;
    var_15 = (min((min(var_1, var_3)), var_9));
    #pragma endscop
}
