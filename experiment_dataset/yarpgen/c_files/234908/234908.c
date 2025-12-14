/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234908
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234908 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234908
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = var_2;
    var_19 &= var_12;
    var_20 = (1 && -6448);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 17;i_1 += 1)
        {
            {
                var_21 = (min(var_21, var_4));
                var_22 = (((var_15 >= 10301021309721114242) % var_14));
                arr_4 [i_1] [1] = var_14;
                arr_5 [i_1] [i_0] [i_1] = (((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 2]) > var_5));
            }
        }
    }
    #pragma endscop
}
