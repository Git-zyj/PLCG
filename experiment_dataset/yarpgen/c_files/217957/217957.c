/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217957
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217957 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217957
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_13 = (((4528974968240893515 >= 492578122948646065) ? ((-4546 ? 17954165950760905551 : var_10)) : 966186356));
                    arr_8 [i_0] = ((var_2 != (((var_7 == 13613853235926065519) ? ((min(-609626119, var_2))) : (((arr_2 [14]) << (3117572870 - 3117572869)))))));
                }
            }
        }
    }
    var_14 = (((((var_0 ? (var_6 | var_8) : var_10))) ? var_8 : var_0));
    #pragma endscop
}
