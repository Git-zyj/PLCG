/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197201
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197201 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197201
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, (((((((var_9 << (var_12 - 3852922463)))) % ((18 ? var_3 : var_7)))) >> (var_4 + 20369)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    arr_8 [i_0] [i_0] [i_1] [i_2] = 12795489752690851229;
                    arr_9 [i_0] [i_2] = ((var_0 ^ (arr_7 [i_0 + 1] [i_0 + 1])));
                }
                arr_10 [3] = ((((((var_12 + (arr_0 [i_0])))) ? (max(2337602778160082630, (arr_5 [9] [9]))) : (((max(-4861, 8138)))))));
                var_16 *= (arr_6 [14] [i_0] [i_0]);
            }
        }
    }
    #pragma endscop
}
