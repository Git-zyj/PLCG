/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212393
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212393 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212393
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 |= (((((var_4 ? var_7 : var_3))) ? var_8 : (!var_0)));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_0] = (!1846614444);
                    var_11 = (max(var_11, (((481352188 + (min(var_0, 9216260000308931168)))))));
                    var_12 = var_0;
                }
            }
        }
    }
    var_13 = (max(-var_3, ((var_4 ? ((min(-1, 139))) : ((-1983899849516477355 ? var_6 : 16383))))));
    #pragma endscop
}
