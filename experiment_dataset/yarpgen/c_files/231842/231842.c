/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231842
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231842 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231842
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = var_4;
    var_20 ^= var_18;
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 0;i_1 += 1)
        {
            {
                var_21 -= 4237257021;
                var_22 -= -var_14;
                arr_6 [i_0] = ((((((2085151643698795786 >= var_12) ? (arr_5 [i_0 - 1] [i_1 + 1] [i_1 + 1]) : (~-30432)))) ? 1867882953 : ((~((4237257021 ? 4237257021 : var_11))))));
            }
        }
    }
    #pragma endscop
}
