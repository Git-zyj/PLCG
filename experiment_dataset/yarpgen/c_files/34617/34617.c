/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34617
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34617 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34617
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = var_1;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {
                            var_15 ^= (max((!var_8), var_8));
                            arr_11 [i_2] [i_2] [i_2] [i_2] [i_2] = (4118844690 > 38625);
                        }
                    }
                }
                var_16 = ((+((((arr_5 [10] [0] [i_1]) == (arr_6 [i_0] [i_0]))))));
                var_17 = (arr_7 [i_0] [i_1] [i_0] [12]);
                arr_12 [i_1] = ((~(((arr_2 [i_0]) / (arr_2 [i_0])))));
            }
        }
    }
    #pragma endscop
}
