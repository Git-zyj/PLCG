/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [6] [i_1] [i_1] = ((max(-var_0, (min(var_2, var_16)))));
                var_17 = max((((min(var_2, -1)))), (~var_3));
                arr_7 [i_0] [i_0] [i_1] = ((~((~((~(arr_4 [i_1] [i_1])))))));
                var_18 *= ((~((~(~-1)))));
                arr_8 [i_1] [i_1] = ((~((~(~11)))));
            }
        }
    }
    var_19 = (+-var_4);
    var_20 = ((!((!(!var_15)))));
    #pragma endscop
}
