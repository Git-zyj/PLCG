/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208996
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208996 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208996
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 20;i_1 += 1)
        {
            {
                arr_4 [i_1 - 1] [i_1 - 2] [i_1 - 2] = ((((((arr_1 [i_0] [i_1 + 1]) - (arr_1 [i_0] [i_1 + 1])))) ? (((arr_1 [17] [i_1 + 1]) ? (arr_1 [i_0] [i_1 - 2]) : (arr_1 [11] [i_1 + 1]))) : (!1)));
                var_16 += (((130 << 10) ? (((((var_12 ? 0 : (arr_0 [i_1]))) <= (11 < 7)))) : var_11));
            }
        }
    }
    var_17 = ((((min((((4294967285 ? 10 : 4294967285))), var_14))) ? 4294967285 : (!var_11)));
    var_18 = (-var_5 + -var_5);
    #pragma endscop
}
