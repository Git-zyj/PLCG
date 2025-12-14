/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215287
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((~(min(9065870267927919264, ((min(137, var_7)))))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    var_18 = 6954742563203772233;
                    arr_10 [i_2] = -6954742563203772222;

                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        var_19 = -6954742563203772241;
                        arr_15 [i_2] [i_3] = ((((arr_9 [i_0 - 2] [i_0 - 2] [i_0 - 1]) ? (arr_6 [i_0 - 3] [i_0 - 1] [i_0 - 2]) : (arr_8 [i_0 - 3] [i_0 - 1] [i_0 + 1]))));
                    }
                    var_20 = (((((min(32, -49)))) ^ (min((arr_8 [7] [7] [i_0 - 2]), (arr_8 [1] [i_0] [i_0 - 3])))));
                    var_21 = (max(var_21, 6954742563203772250));
                }
            }
        }
    }
    #pragma endscop
}
