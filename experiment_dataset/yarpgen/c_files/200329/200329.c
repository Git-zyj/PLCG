/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200329
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200329 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200329
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            {
                var_18 = ((!((min(16299607662417420715, (arr_0 [i_1 + 1] [i_1]))))));
                var_19 = (min(var_19, (((16299607662417420715 ? 1070984200 : 20523)))));
                var_20 = ((((max((var_4 * 938903708), 237))) && (((((max(14566804284879441597, 13598))) ? (arr_4 [i_0 + 4]) : (arr_1 [i_0] [i_0 + 3]))))));
                arr_5 [i_0] [i_1] [i_0] = (arr_1 [i_1 + 2] [i_1]);
            }
        }
    }
    var_21 *= var_13;
    var_22 = ((var_4 ? (((18446744073709551607 ? (~137) : var_2))) : var_3));
    var_23 = (min(var_15, var_14));
    #pragma endscop
}
