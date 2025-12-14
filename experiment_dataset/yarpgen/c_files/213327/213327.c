/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213327
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213327 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213327
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = max(((max(var_4, ((var_6 ? var_15 : 1))))), (min(1, var_12)));
    var_17 = (var_14 || ((min(((1 ? var_0 : 1)), (min(1073928128, 140737421246464))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 15;i_3 += 1)
                    {
                        for (int i_4 = 2; i_4 < 12;i_4 += 1)
                        {
                            {
                                arr_11 [i_0] [i_0] [i_1] [0] [i_3] [i_0] = ((~(((!((max((arr_9 [i_0] [0] [i_0] [i_0] [i_0] [i_0]), var_9))))))));
                                arr_12 [i_0] [i_0] [i_2] [i_0] [i_0] = ((var_6 >> (arr_0 [i_0])));
                                arr_13 [0] [0] [i_2] [i_2] [i_0] = ((-(max(((0 ? 6593464057995105278 : 1844491410)), ((min(var_2, var_3)))))));
                            }
                        }
                    }
                    var_18 = (1 == 1);
                    var_19 = (~((((((arr_9 [i_2] [i_2] [i_2] [i_1] [i_1] [1]) ? var_7 : 0))) ? (min(var_7, var_1)) : 4294967278)));
                    var_20 = (((arr_0 [i_0]) / (((3528975377 == 1) + ((min((arr_4 [i_0]), (arr_2 [i_1] [i_0]))))))));
                    var_21 = (min(var_21, (arr_4 [i_0])));
                }
            }
        }
    }
    var_22 = (min(var_22, (~var_10)));
    #pragma endscop
}
