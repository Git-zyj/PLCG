/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207869
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (var_13 << ((((~(var_0 | 1446172971082285327))) - 17000571102627248223)));
    var_15 *= (4194303 && 562949953421311);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                var_16 = (min(var_16, (((~((((var_4 << (((arr_4 [i_0]) + 1620575504)))))))))));
                arr_7 [i_1] = (~(arr_4 [i_0]));
            }
        }
    }
    #pragma endscop
}
