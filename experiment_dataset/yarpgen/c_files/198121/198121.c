/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198121
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198121 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198121
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        var_14 = 4294967295;
        var_15 = (max(var_15, ((((arr_0 [i_0]) ? ((~(arr_1 [i_0]))) : (arr_3 [i_0]))))));
    }
    /* vectorizable */
    for (int i_1 = 4; i_1 < 11;i_1 += 1)
    {
        var_16 = var_8;

        for (int i_2 = 0; i_2 < 14;i_2 += 1)
        {
            var_17 = ((((((arr_9 [i_2] [i_1 - 2] [i_2]) ? (arr_1 [i_1 + 3]) : 7))) ? (arr_4 [i_1]) : var_9));
            var_18 = (!50048);
            arr_11 [i_1] = (((((-5386676539742121455 ? 3068599035 : 50041))) ? var_2 : (arr_3 [i_2])));
        }
        arr_12 [i_1] = (((((var_12 ? (arr_2 [i_1 - 2] [i_1 + 2]) : -1))) ? (((-993563365 ? 2147483620 : (arr_7 [i_1 + 3])))) : ((-1173 ? (arr_9 [i_1 + 1] [i_1 - 4] [i_1 - 1]) : (arr_3 [i_1 - 3])))));
        var_19 = 2312155815981858129;
    }
    var_20 += var_2;
    var_21 = var_3;
    var_22 *= var_0;
    #pragma endscop
}
