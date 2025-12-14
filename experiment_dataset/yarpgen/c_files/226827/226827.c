/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 = (max(var_12, 9622847592980595710));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 15;i_2 += 1)
            {
                {
                    var_13 += (!-1);
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 16;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 15;i_4 += 1)
                        {
                            {
                                var_14 = 1;
                                arr_13 [i_0] [i_1 - 1] [i_1] [i_2] [i_3] [i_0] [i_4 - 2] = (min(((-435 ? 1 : 1)), (~1)));
                                arr_14 [i_0] = (15934162 || 1298162385);
                            }
                        }
                    }
                    /* LoopNest 2 */
                    for (int i_5 = 4; i_5 < 14;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 15;i_6 += 1)
                        {
                            {
                                arr_19 [1] [7] [i_2] [i_0] [i_6] = var_4;
                                var_15 = ((2097088 ? 268435455 : (min(1, -9477299))));
                            }
                        }
                    }
                    arr_20 [i_0] [i_1] = (!-var_5);
                }
            }
        }
    }
    #pragma endscop
}
