/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205453
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205453 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205453
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = ((!((max((min(var_0, 1268187837)), var_15)))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_20 = min((((arr_5 [i_0 - 1]) ? (arr_5 [i_0 - 4]) : -8843631552691815732)), ((((arr_5 [i_0 + 1]) << (var_14 + 7813756626382211816)))));
                var_21 = ((max((-2147483647 - 1), (-2147483647 - 1))));
                var_22 *= 2147483647;
            }
        }
    }
    var_23 = (max(var_23, -2147483639));
    var_24 = min((min((min(2147483638, 2147483647)), var_9)), ((-(min(var_8, var_0)))));
    #pragma endscop
}
