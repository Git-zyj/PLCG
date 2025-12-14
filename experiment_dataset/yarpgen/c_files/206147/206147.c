/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206147
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206147 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206147
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (max(var_20, -0));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 11;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 14;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 14;i_4 += 1)
                        {
                            {
                                arr_13 [i_0] [i_0] [i_2 + 2] [i_1] [i_0] [i_0] = ((max(16330365905284848631, -10)));
                                var_21 = (2116378168424702985 != 6854638541215822318);
                                var_22 = ((max(-4700377531545272912, -4700377531545272912)));
                            }
                        }
                    }
                    var_23 = max(2033048320, (max(((var_11 ? 110 : 2116378168424702985)), 18446744073709551605)));
                }
            }
        }
    }
    var_24 = var_12;
    #pragma endscop
}
