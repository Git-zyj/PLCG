/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 235651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=235651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/235651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    arr_8 [i_1] [i_0] = (var_7 & 4294967294);
                    arr_9 [i_0] = ((((2 >> (((arr_4 [i_2]) + 802688514)))) & (max(4294967287, 1))));
                }
            }
        }
    }
    var_11 &= 4294967288;
    var_12 = (max(var_12, ((15709357408430379787 ? (((-var_0 ? 187 : var_6))) : var_10))));
    var_13 = ((var_5 ? 9360261870212428783 : (min((min(var_4, 291100867)), var_9))));
    #pragma endscop
}
