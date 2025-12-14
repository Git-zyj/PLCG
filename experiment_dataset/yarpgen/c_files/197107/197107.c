/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197107
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197107 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197107
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 &= (((((-((max(174, var_3)))))) || var_9));
    var_12 -= (min((var_0 * var_0), (max((1 + 0), (((65535 ? 268369920 : var_8)))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            {
                var_13 = (max(var_13, 86));
                var_14 = (min(-1, 0));
                var_15 -= (((var_7 && -27) ? ((11287088273366218082 ? (arr_0 [i_1 + 1] [i_1 + 1]) : (arr_0 [i_1 + 1] [i_1 + 1]))) : (31 != 7)));
                var_16 = (max((((var_10 <= (arr_3 [i_1 + 1])))), (arr_3 [i_1 - 1])));
            }
        }
    }
    var_17 = (max(var_7, (((((min(-4, var_1))) ? -4 : (147 <= -1089939118))))));
    var_18 = (max(var_18, var_5));
    #pragma endscop
}
