/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50418
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50418 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50418
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(var_2, var_6));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0 - 1] = (((arr_3 [i_1 - 3]) << (var_4 - 16478)));
                var_11 = (((((((var_0 ? (arr_4 [i_0] [i_1 - 3]) : 4067684047))) || (-7591917782121579886 ^ 1737))) ? (arr_0 [i_0] [i_0 - 1]) : (max(1, ((-540511669 ? var_1 : 25140))))));
            }
        }
    }
    var_12 = (((var_7 <= ((max(var_7, var_6))))));
    #pragma endscop
}
