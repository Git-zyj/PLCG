/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243244
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243244 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243244
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                var_17 ^= (~2027215916871788519);

                for (int i_2 = 0; i_2 < 25;i_2 += 1)
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 25;i_4 += 1)
                        {
                            {
                                var_18 = (min(27452, 52));
                                arr_14 [i_1] [i_1] [i_1] [i_1] = (!6);
                            }
                        }
                    }
                    var_19 = -3901649720;
                    arr_15 [16] [i_1] [16] = (max(((max((arr_9 [i_0] [i_0] [i_0]), (arr_10 [i_0] [i_1] [i_2])))), (((arr_7 [i_0] [i_1] [i_2]) + ((52 * (arr_13 [i_0])))))));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 0; i_5 < 25;i_5 += 1)
    {
        for (int i_6 = 1; i_6 < 24;i_6 += 1)
        {
            {
                var_20 ^= arr_3 [i_5];
                var_21 ^= ((((max(0, 19269))) ? (min((min(19253, 10856821418557510686)), (arr_7 [21] [21] [14]))) : 46283));
                arr_22 [i_5] = var_9;
            }
        }
    }
    #pragma endscop
}
