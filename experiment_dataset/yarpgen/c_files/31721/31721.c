/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31721
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31721 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31721
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 9;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 7;i_1 += 1)
        {
            {
                arr_5 [i_0 - 3] [i_0] [i_1] = ((var_4 && ((min(((((arr_1 [i_0] [i_1]) && (arr_2 [i_0] [i_1])))), (((arr_1 [i_0] [i_0]) ? var_11 : (arr_1 [i_0] [i_1 + 2]))))))));
                var_14 = (min(var_14, ((min(((min((arr_1 [2] [i_1]), var_3))), ((-((1 ? var_7 : -9)))))))));
            }
        }
    }
    var_15 = ((((((max(-10, -24426))))) || ((max(var_6, var_7)))));
    var_16 = 6020288318373200524;
    #pragma endscop
}
