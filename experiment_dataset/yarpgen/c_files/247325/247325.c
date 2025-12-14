/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247325
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247325 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247325
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = var_14;
    var_17 += ((1 ? 14169077112062271097 : (~34)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 15;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] [i_1] = (!((((((var_11 || (arr_2 [i_0])))) % (arr_6 [i_0] [i_1] [i_2 + 3])))));
                    var_18 = ((~(max((2992273150 ^ 5351), (var_5 % 1102487694)))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 0; i_4 < 18;i_4 += 1)
                        {
                            {
                                arr_14 [i_1] [i_1] [i_1] = (max(-5351, (max(-1, 2))));
                                var_19 *= ((((255 >= (arr_5 [1] [i_2 + 3] [1])))) | var_3);
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
