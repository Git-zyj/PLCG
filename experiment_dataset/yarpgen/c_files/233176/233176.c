/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233176
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233176 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233176
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = (~var_13);
    var_19 = var_11;

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        arr_3 [i_0] = 126;
        arr_4 [i_0] = (~((130 ? 246 : 451236269663465555)));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 21;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 21;i_4 += 1)
                        {
                            {
                                var_20 = ((142 ? 16887893873195904717 : 12824765677120767108));
                                var_21 = (max(var_21, ((((~2521030122) ? 16887893873195904717 : ((4293203959 ? 16 : -1211050050275627316)))))));
                            }
                        }
                    }
                    arr_13 [i_1] [i_1] [i_0] = ((~(~2485815423)));
                }
            }
        }
    }
    var_22 = 4194303;
    var_23 = var_3;
    #pragma endscop
}
