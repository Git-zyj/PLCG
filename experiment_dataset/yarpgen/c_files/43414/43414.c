/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (min(var_11, ((((((var_1 ? var_1 : -32)) ^ (((4167635570 ? 8689 : var_8))))) ^ (!4558819879149101427)))));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_2 [i_0] = ((((var_1 ? 1603209971 : var_7)) >= (arr_1 [i_0])));
        var_12 *= ((~(arr_1 [i_0])));
        var_13 ^= (((2559372082 >= var_2) ? var_7 : var_0));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 14;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            var_14 = (~var_9);
                            arr_14 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = (1 >> (14245585206591070977 - 14245585206591070965));
                        }
                        var_15 = (arr_8 [i_0] [i_1] [i_1] [i_0] [i_3] [i_3]);
                        var_16 = (arr_0 [i_0]);
                    }
                }
            }
        }
        var_17 = (min(var_17, (((31 ? (arr_9 [i_0] [i_0] [4] [i_0] [i_0] [i_0]) : (arr_13 [8] [i_0] [i_0] [i_0] [i_0] [8]))))));
    }
    var_18 = (((((((min(12826, var_9)))) | var_2)) % ((((((max(1, var_9))) && (((var_0 ? -32 : var_0)))))))));
    #pragma endscop
}
