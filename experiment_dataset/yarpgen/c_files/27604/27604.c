/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27604
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27604 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27604
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_0] = ((-(10872 | -var_2)));
                arr_7 [i_0] [i_1] = (var_9 && 58530594);
                var_16 = (((((var_5 ? (var_5 ^ var_2) : (((arr_5 [i_1] [i_0] [i_1]) ? var_10 : 0))))) ? (((10872 ? var_13 : var_1))) : (((arr_0 [i_0 - 3]) >> (10858 - 10840)))));
            }
        }
    }
    var_17 = ((((min((!-243440884), (243440884 & var_3)))) ? var_10 : 610564377));
    var_18 = var_4;
    var_19 = ((((max(var_1, var_1))) ? ((-((max(var_5, 3026))))) : ((var_11 ? var_10 : ((max(43, var_5)))))));
    #pragma endscop
}
