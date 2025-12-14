/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51462
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51462 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51462
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            {
                arr_5 [i_0] = (max((((arr_3 [i_1] [i_1]) ? (arr_3 [i_0] [i_1]) : 507904)), (arr_3 [i_1] [i_0])));
                var_12 = (max(var_12, (((max(var_8, 2779693974046967504)) / ((538563713 ? -4860277664146712264 : 1643882422))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 23;i_3 += 1)
                    {
                        {
                            var_13 = (max(var_13, ((((arr_0 [i_2] [i_1]) | (((arr_0 [i_2] [i_3]) ? (arr_0 [i_0] [i_1]) : 1)))))));
                            arr_11 [i_0] [i_0] [i_2] [i_0] |= (var_6 >= var_7);
                            var_14 *= var_7;
                            arr_12 [0] [i_3] [1] [1] [i_0] = (arr_2 [i_0]);
                            arr_13 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0] = ((((~(arr_9 [i_3] [i_3] [i_2] [i_1] [i_0] [i_0]))) > 1));
                        }
                    }
                }
            }
        }
    }
    var_15 = (var_11 >= 1);
    #pragma endscop
}
