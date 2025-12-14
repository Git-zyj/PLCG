/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245477
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245477 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245477
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 8;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 10;i_3 += 1)
                    {
                        for (int i_4 = 3; i_4 < 8;i_4 += 1)
                        {
                            {
                                var_10 = ((+((((arr_8 [i_0] [i_3] [i_0 - 1] [i_3]) >= (arr_8 [i_2] [i_2] [i_0 + 2] [i_1]))))));
                                var_11 = 17777261041695555707;
                            }
                        }
                    }
                    arr_14 [i_1] = var_2;
                    /* LoopNest 2 */
                    for (int i_5 = 0; i_5 < 0;i_5 += 1)
                    {
                        for (int i_6 = 3; i_6 < 8;i_6 += 1)
                        {
                            {
                                var_12 = (((((var_2 ? 0 : (arr_0 [3])))) + var_2));
                                arr_20 [i_0] [i_5 + 1] [i_2] [i_5] [i_6] = (0 ? 0 : 6860958636604609505);
                            }
                        }
                    }
                    var_13 = ((((0 ? 0 : 14734959169590609444))) ? ((((-32767 - 1) | -15115))) : (((-9165111271964632058 ? -3240272643592836314 : (arr_16 [i_0] [i_1] [10] [1])))));
                }
            }
        }
    }
    var_14 = ((0 ? 4294967295 : -22719));
    #pragma endscop
}
