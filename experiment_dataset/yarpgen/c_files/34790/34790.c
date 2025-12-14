/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34790
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34790 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34790
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = ((!(((var_5 / var_10) > (!var_4)))));
    var_12 -= ((-(1 % 18644)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_0] = ((!(((1 ^ ((~(arr_2 [i_0]))))))));
                var_13 = ((((((((arr_1 [i_0]) == 1))) >= (arr_3 [i_0] [i_1])))) >= (((arr_1 [i_0]) << (var_5 | 1))));
            }
        }
    }
    var_14 = (((!var_5) < (1 + 1)));
    var_15 = ((!1) >= ((~(var_2 << 0))));
    #pragma endscop
}
