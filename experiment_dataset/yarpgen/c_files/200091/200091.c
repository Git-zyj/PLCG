/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200091
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200091 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200091
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = var_0;
    var_12 = var_6;
    var_13 = (((-(min(589723642418259017, 68)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                arr_5 [i_1] [i_1] [i_1] = (((((max(-1636184587743209849, -589723642418259016)))) ? (min((((-(arr_2 [i_1])))), -426333135346100209)) : (((((arr_3 [i_0] [i_1] [i_0 - 2]) != -69))))));
                arr_6 [i_1] = (arr_1 [i_0]);
                var_14 = -4061;
            }
        }
    }
    #pragma endscop
}
