/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200546
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        {
                            arr_9 [i_3] [0] [0] [0] [5] [i_0] = 9703198498004574588;
                            var_17 += (-1 ? (arr_8 [i_0] [i_2 + 1] [i_2 + 1] [i_3]) : ((((arr_6 [i_2 - 1] [i_2 + 1] [1] [i_2 + 2]) || 1866458454355071663))));
                            arr_10 [i_0] = (max((((11946384885069123737 + var_9) + 1)), var_6));
                        }
                    }
                }
                arr_11 [7] [7] = ((max(var_11, var_14)));
                /* LoopNest 2 */
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    for (int i_5 = 0; i_5 < 14;i_5 += 1)
                    {
                        {
                            arr_18 [i_0] = 1;
                            arr_19 [i_0] [i_0] [i_0] [11] [i_0] [i_0] = (((((652887047 ? 1 : 12753370599291558878))) ? (((-1 + (min(-1627791580, 1))))) : ((1 ? (arr_2 [i_1] [1]) : (((max(1, (arr_14 [i_5] [i_4] [i_4 + 1] [i_0])))))))));
                            arr_20 [i_0] [i_0] [5] [i_0] = (arr_3 [i_0] [i_0]);
                        }
                    }
                }
            }
        }
    }
    var_18 = (min(var_18, ((max(var_7, (min(1, ((var_11 ? 512573172 : 14302661231621305020)))))))));
    #pragma endscop
}
