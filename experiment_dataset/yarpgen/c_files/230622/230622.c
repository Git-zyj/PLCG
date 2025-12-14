/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_13));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = -236;
                arr_7 [i_0] [i_0] = (!33);
                var_17 ^= ((((((arr_1 [i_0 - 1]) ? (arr_3 [i_1]) : (arr_4 [0] [0])))) ? (((((arr_1 [i_0]) + 2147483647)) << (((arr_6 [18] [18]) - 193)))) : 149));
                arr_8 [i_0] [i_0] = (arr_2 [i_0] [i_1]);
            }
        }
    }
    var_18 *= (min(123, 4769906412473418211));
    #pragma endscop
}
