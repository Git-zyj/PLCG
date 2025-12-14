/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226029
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226029 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226029
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 *= var_5;
    var_15 = (~var_3);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 6;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 9;i_2 += 1)
            {
                {
                    arr_6 [5] [i_2] = ((-((-(min(0, (arr_3 [i_0] [i_0])))))));
                    var_16 = (min(var_16, (arr_5 [i_2])));
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 6;i_4 += 1)
                        {
                            {
                                var_17 = (min(var_17, (((-(((((var_5 >> (var_0 - 11632225178464595270))) == (min(var_3, (arr_5 [i_2])))))))))));
                                var_18 = (((var_1 >> (((max(var_1, var_2)) - 10565408067124495734)))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
