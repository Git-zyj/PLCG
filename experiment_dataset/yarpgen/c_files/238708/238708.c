/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238708
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238708 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238708
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_9;
    var_12 = (((((var_10 ? 1 : 1)))) ? (((((8128 ? -106176972 : 106176942))) ? ((max(1, 36))) : 9210)) : var_4);
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] = max(-106176968, ((1 ? 1 : 106176969)));
                var_13 += (((((((((arr_3 [i_1]) % (arr_4 [i_0] [i_1])))) ? (var_3 == var_2) : (arr_0 [i_0])))) <= var_2));
            }
        }
    }
    var_14 = (~-1);
    var_15 = (((var_7 ? -1 : var_2)));
    #pragma endscop
}
