/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48642
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48642 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48642
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((((var_15 ? 29829 : (65535 > var_8)))) ? (max((var_4 || -1), ((var_14 ? var_3 : 65535)))) : var_11));
    var_17 = var_11;
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            {
                arr_6 [i_0] = (max((((!(arr_1 [i_0 + 1])))), (((16262717128631370606 << (var_3 - 876711613))))));
                var_18 |= (((min(4294967295, (((arr_4 [i_0 - 3]) >> var_8)))) >= (~-4)));
            }
        }
    }
    #pragma endscop
}
