/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248221
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            {
                var_13 = ((-(arr_0 [i_0] [i_0])));
                /* LoopNest 2 */
                for (int i_2 = 4; i_2 < 8;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        {
                            arr_8 [i_1] [i_2] [i_1] = var_5;
                            arr_9 [i_0] [8] [i_0] [i_3] |= (((arr_5 [i_3] [i_3] [i_0]) ? ((((-16384 + 2147483647) << (!96)))) : (arr_5 [0] [i_3] [0])));
                        }
                    }
                }
                arr_10 [i_0] [1] [i_0] |= 28420;
                arr_11 [i_1] = (arr_3 [i_1]);
                arr_12 [i_1] = (arr_3 [i_1]);
            }
        }
    }
    var_14 -= var_2;
    var_15 = (((((var_5 ? (var_11 * 6) : var_11))) ? var_0 : var_7));
    #pragma endscop
}
