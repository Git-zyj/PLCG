/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207797
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207797 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207797
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (0 % 33554431);

    /* vectorizable */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 8;i_2 += 1)
            {
                {
                    var_16 = (((((((arr_0 [i_1] [i_1]) != (arr_7 [i_0 + 1] [i_0] [i_0] [i_2 + 3]))))) == -0));
                    var_17 = 248;
                    arr_9 [i_0] [i_1] [i_2] = (((arr_2 [i_0]) ? (!9223372036854775807) : 102));
                }
            }
        }
        var_18 = (arr_2 [i_0 - 1]);
        var_19 = (arr_5 [i_0]);
        var_20 = 2774153077916351744;
    }
    var_21 = 4294967295;
    var_22 = (min((((!0) & (var_13 != var_10))), (var_2 * var_0)));
    #pragma endscop
}
