/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200888
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200888 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200888
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = 7680;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_20 = ((~(4294967295 <= var_8)));
                var_21 = 29;
                var_22 = (max(var_22, 11));
                arr_5 [i_0] [i_0] = 4294967282;
            }
        }
    }
    var_23 = ((+(((var_14 ^ 256105141760533240) ? (var_0 >= 14) : var_11))));
    var_24 = var_1;
    var_25 = var_18;
    #pragma endscop
}
