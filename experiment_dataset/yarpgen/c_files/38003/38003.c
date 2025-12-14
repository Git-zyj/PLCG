/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38003
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 15;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            {
                                var_18 *= var_11;
                                var_19 = -var_10;
                                var_20 = (((1572253302 ? -5984 : 9223372036854775807)));
                            }
                        }
                    }
                    var_21 = (min((((arr_14 [i_0]) ? (arr_4 [i_0]) : (((arr_1 [i_0] [i_1]) ? (arr_0 [10]) : var_1)))), (arr_8 [i_0] [i_0] [i_2] [i_0])));
                }
            }
        }
    }
    var_22 += var_5;
    #pragma endscop
}
