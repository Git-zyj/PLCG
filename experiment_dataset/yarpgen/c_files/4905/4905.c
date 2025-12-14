/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4905
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4905 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4905
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, ((((min(var_10, (min(30, 1092812334))))) ? var_12 : (((((max(4362810194605653525, 1092812334))) ? (2 + 1092812338) : var_8)))))));
    var_18 &= ((-1092812335 * (((((1 ? -1092812317 : var_7))) ? var_2 : -1092812317))));
    var_19 = (max(var_19, (((((min(var_6, 1092812317))) ? var_1 : ((((!((max(var_14, 1092812318))))))))))));
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 23;i_1 += 1)
        {
            {
                var_20 = (min(var_20, ((max((arr_1 [18]), (arr_4 [i_0 + 1]))))));
                var_21 = ((1092812311 + ((max(var_9, (arr_0 [i_1 + 1]))))));
                arr_5 [i_0] [i_1 - 2] [13] = var_14;
            }
        }
    }
    #pragma endscop
}
