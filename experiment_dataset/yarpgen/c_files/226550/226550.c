/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226550
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226550 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226550
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((((max(var_6, 1))) >> (((~var_3) - 5957608603704024395))))) ? (((((var_16 ? var_5 : var_4)) ^ -32754))) : (((((31104 ? 31104 : 2360028897))) ? (max(2602745561, 1)) : -var_9)));
    var_18 ^= ((~((-((max(1, var_13)))))));
    var_19 = (max(var_10, (min(-1, 1))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 14;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_20 ^= (((max(((1 ? 31111 : 31115)), -var_4))) ? (((~(arr_8 [i_0] [i_1 + 1] [i_2 + 1])))) : (max((min(9223372036854775807, -31112)), (arr_7 [10]))));
                                arr_15 [i_0] [i_1] [i_1] = (~15812);
                                arr_16 [i_0] [i_1] [14] [i_2] [i_1] [12] = ((32767 ? -2160979463397942227 : 1));
                            }
                        }
                    }
                    arr_17 [i_1] = (4 & 8787503087616);
                }
            }
        }
    }
    #pragma endscop
}
