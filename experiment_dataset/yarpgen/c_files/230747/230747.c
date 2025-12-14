/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230747
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230747 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230747
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_1] [2] = (((((-((var_5 ? -1489 : 4590322719555838577))))) ? 4294967293 : ((-((1 ? 245691026656865085 : 3310212048))))));
                    /* LoopNest 2 */
                    for (int i_3 = 2; i_3 < 9;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_14 [i_0 + 1] [i_1] [i_2] [i_2] [i_1] [i_4] = (max(((((36 - 63819) * (var_13 / -11293)))), 884336452));
                                var_16 *= -13433;
                            }
                        }
                    }
                    arr_15 [i_0 + 1] [11] [i_1] = var_15;
                }
            }
        }
    }
    var_17 = (var_3 < 1514666441);
    var_18 = (max(16404, var_11));
    #pragma endscop
}
