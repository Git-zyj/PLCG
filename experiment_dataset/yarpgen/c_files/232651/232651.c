/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232651
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232651 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232651
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, (~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_11 = (arr_9 [i_0] [i_1 - 1] [i_2] [i_3] [1] [i_4]);
                                arr_12 [i_0] [i_0] [i_0] [i_0] [i_3] [i_3] = ((~(((((max(53, (arr_10 [i_0] [i_3] [i_2] [0] [0] [i_4] [1]))))) ^ (max(8796059467776, 28))))));
                                var_12 = ((((max((arr_6 [i_0] [i_1 + 1] [i_1 + 1]), 1))) ? var_6 : ((((arr_6 [i_0] [1] [i_1 - 1]) > (arr_6 [i_0] [i_0] [i_1 + 1]))))));
                                arr_13 [i_0] [i_0] [i_0] [12] [i_0] [i_3] = ((-(((max((arr_11 [i_0] [i_0] [i_2] [i_3] [i_3]), 8796059467777))))));
                                var_13 = -17856;
                            }
                        }
                    }
                }
                arr_14 [1] [1] = ((~(arr_0 [i_0])));
                var_14 ^= -4;
                arr_15 [2] [i_0] = (max(((((-32757 * 137) % var_4))), ((18446735277650083853 ? var_0 : (arr_7 [i_0] [i_1] [i_0])))));
                var_15 = (max(1571522279, -var_1));
            }
        }
    }
    var_16 = (max(var_16, ((max((((((-6670729127182263606 + 9223372036854775807) >> (8796059467762 - 8796059467729))) | (((max(-22217, 255)))))), (min(var_2, -1945208694)))))));
    #pragma endscop
}
