/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213858
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213858 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213858
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 11;i_2 += 1)
            {
                {
                    arr_7 [i_2] [5] [i_2] = (arr_5 [i_2 + 1] [i_2] [i_2 + 2]);
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 13;i_4 += 1)
                        {
                            {
                                arr_16 [i_2] [i_2] = var_10;
                                var_11 = (max(var_11, (((var_3 ? 32767 : ((-var_1 ? 0 : var_5)))))));
                                var_12 = (((var_1 ? 0 : var_6)));
                            }
                        }
                    }
                    var_13 = 1;
                }
            }
        }
    }
    var_14 = (((((var_6 ? var_3 : var_9))) ? (min(((var_4 ? 2093056 : 4294967293)), (((32767 ? 1 : 32743))))) : var_1));
    #pragma endscop
}
