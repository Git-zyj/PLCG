/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22763
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 10;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_1] = (((arr_1 [i_0]) <= (((var_15 != var_12) * (((arr_1 [10]) ? 32303 : var_14))))));
                var_18 = min((var_6 >= 1), (min(-32295, 32303)));
                arr_8 [i_0] [i_1] [i_1] = var_14;
            }
        }
    }
    var_19 = ((~(var_8 <= var_10)));
    var_20 = (max(var_20, (((var_15 ? (max(var_10, ((min(-31041, -31030))))) : (max(-var_0, var_0)))))));
    #pragma endscop
}
