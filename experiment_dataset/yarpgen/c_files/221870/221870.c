/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221870
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = 21790;
    var_17 = (!21790);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 18;i_1 += 1)
        {
            {
                arr_6 [i_1] [i_1] |= var_0;
                arr_7 [i_0] [i_1] [i_0] = ((((-var_0 || (!var_1)))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 22;i_3 += 1)
                    {
                        {
                            arr_14 [i_0] [i_0] = ((((7353007594050082742 ? var_9 : 226)) >= (1256938981 >> 1)));
                            arr_15 [i_0] [i_0] [i_2] [i_3] [i_0] = ((((((arr_8 [i_0] [i_0] [i_3] [i_3]) / (((max(14306, 1))))))) ? ((((max(var_3, -21791))) ? ((-71 ? 9049611704328831448 : 117)) : 14280)) : (~var_1)));
                            arr_16 [i_0] [i_1 - 2] [i_0] [i_2] [i_0] = ((+(min((arr_10 [i_1 + 3] [i_1 - 2]), -262144))));
                            arr_17 [i_0] = (max(-111, (max(var_13, 262144))));
                        }
                    }
                }
                arr_18 [i_1] [i_1] &= (arr_10 [i_1 + 1] [i_1]);
            }
        }
    }
    #pragma endscop
}
