/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195017
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195017 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195017
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                {
                    var_19 += ((4611686018427387900 ? (min((max(var_18, 1948170605)), (((var_1 ? 0 : (-2147483647 - 1)))))) : (((~7092111685710356846) ? 14 : ((((arr_1 [i_0]) ? (arr_5 [i_2] [i_1]) : 65525)))))));
                    var_20 = ((((((((arr_2 [i_0]) ? 65525 : (arr_5 [i_0 - 1] [i_1])))) > (min(672881815, var_13)))) ? ((((!(-2147483647 - 1))) ? var_2 : ((18446744073709551607 ? (arr_7 [8] [i_1] [i_2] [i_0 - 2]) : 17024971122831233565)))) : 0));
                }
            }
        }
    }
    var_21 = var_12;
    #pragma endscop
}
