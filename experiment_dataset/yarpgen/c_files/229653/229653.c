/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229653
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 19;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 20;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 20;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] = (((arr_4 [i_2]) ? var_4 : (arr_5 [i_1 - 1] [i_1 - 1])));
                            arr_11 [i_0] [i_0] [i_1] [i_2] [i_0] = (arr_9 [i_0] [i_1 - 2] [i_2] [19] [i_3]);
                            var_12 *= ((-((-120 ? (arr_2 [i_2]) : (max(12, (arr_8 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3])))))));
                        }
                    }
                }
                arr_12 [i_0] = (--var_5);
                /* LoopNest 2 */
                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    for (int i_5 = 2; i_5 < 19;i_5 += 1)
                    {
                        {
                            arr_20 [i_4] [i_0] [0] [18] [1] = (~-8330918329701244272);
                            var_13 = (max(var_13, ((min(((((max(-24972, 102))) ? 5825199344238469404 : 21522)), 418390652636895060)))));
                        }
                    }
                }
            }
        }
    }
    var_14 = (min(var_14, ((min(24959, ((var_6 ? -743325653314010543 : (~var_3))))))));
    #pragma endscop
}
