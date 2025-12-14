/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211668
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211668 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211668
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                var_18 = ((1 ? 255 : -4917200020266071559));
                var_19 = (min(var_19, 4294967295));
                arr_4 [1] = ((~((0 ? (max(-118, -3323306570492453331)) : ((-11269 ? 0 : 1272548293))))));
                var_20 = var_5;
                arr_5 [i_0 - 1] [i_1] [i_1] = (min(((5 ? 0 : (~0))), (min(4294967287, 6402841048646346438))));
            }
        }
    }
    var_21 = (max(var_21, var_9));
    var_22 = 1879048192;
    #pragma endscop
}
