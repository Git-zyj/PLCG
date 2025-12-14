/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((((min((max(-2754, var_9)), var_8))) ? var_10 : var_1));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 9;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] = -1;
                arr_5 [i_0] = ((((min(9223372036854775807, 90)) % (((1 % (arr_2 [7])))))));
            }
        }
    }
    var_17 = (max(1, var_13));
    var_18 = 0;
    var_19 = (max(((var_0 ? -var_7 : ((1 ? var_13 : var_6)))), var_10));
    #pragma endscop
}
