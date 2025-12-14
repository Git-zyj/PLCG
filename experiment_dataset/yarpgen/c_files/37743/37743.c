/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37743
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((-((max(var_8, 252))))) > var_4));
    var_11 = 128;
    var_12 = ((var_6 == (((10561 <= 11882566438956276700) ? (var_3 > var_3) : var_3))));
    var_13 = (((((var_4 << 0) ? 3302539278486348798 : 0)) * (-3248269957192493434 >= 9404149879866869403)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    arr_8 [i_0] [13] [i_0] [i_2] = (arr_1 [i_0] [i_1]);
                    arr_9 [1] [i_0] [1] = var_3;
                }
            }
        }
    }
    #pragma endscop
}
