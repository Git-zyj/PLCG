/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42968
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42968 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42968
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = ((~(((var_9 > ((var_2 ? 16777215 : var_3)))))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 6;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            {
                var_13 = -81;
                arr_4 [4] [4] |= (min((arr_3 [6] [i_0] [i_1]), (arr_0 [i_0 - 2] [i_1])));
                arr_5 [i_0] [i_0] = (arr_0 [i_0] [i_1]);
                var_14 = (arr_0 [i_0 + 3] [i_0 + 4]);
                var_15 += 125;
            }
        }
    }
    var_16 = -3095;
    #pragma endscop
}
