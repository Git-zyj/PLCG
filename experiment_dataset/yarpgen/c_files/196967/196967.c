/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196967
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196967 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196967
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 16;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 1;i_4 += 1)
                        {
                            {
                                arr_14 [i_0] [i_3] [i_0] [i_0] [i_0] = (min(-var_10, (min((!69805794224242688), (min((arr_12 [i_3]), 958517213))))));
                                var_15 += min((((5608 & (arr_11 [i_0] [i_0] [i_0 - 1] [i_0])))), 917504);
                            }
                        }
                    }
                    arr_15 [i_0] [i_1] = (((~(((arr_12 [i_1]) << (((arr_10 [i_1]) + 3052687442936027132)))))));
                }
            }
        }
    }
    var_16 = ((4294967295 >> ((-(0 * 2147483647)))));
    var_17 = var_13;
    var_18 = ((!(min(1, (var_8 >= var_3)))));
    #pragma endscop
}
