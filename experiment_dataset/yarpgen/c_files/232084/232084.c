/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232084
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (max(var_13, (~3290901112)));
    var_14 = (-var_8 && 3290901099);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] = ((((((max(3840437781949612655, var_6))))) | ((-((8460708621660938809 ? (arr_3 [i_0] [i_1]) : 0))))));
                arr_7 [i_1] [i_1] [i_1] = ((!(arr_2 [i_1] [i_1])));
            }
        }
    }
    var_15 = var_10;
    #pragma endscop
}
