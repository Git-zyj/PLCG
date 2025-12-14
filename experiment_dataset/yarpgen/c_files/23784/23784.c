/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23784
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23784 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23784
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = 1758527160;
    var_19 = var_3;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_20 = (max(var_20, (~var_8)));

                    for (int i_3 = 1; i_3 < 1;i_3 += 1)
                    {
                        var_21 = (min(var_21, (((1 >= (((~(arr_6 [i_0 - 1] [i_3] [i_2] [0])))))))));
                        arr_8 [i_1 - 3] [i_1] = var_15;
                    }
                    arr_9 [i_2] [i_2] [1] |= ((((var_8 ? ((max(4, 218))) : (((arr_6 [i_0] [i_0] [i_1] [14]) ? (arr_6 [i_0] [i_1 - 4] [i_2] [18]) : 14088)))) - (max(((126 ? -587886730 : 51448)), (arr_3 [i_1 - 1] [i_1 - 3])))));
                    arr_10 [i_1] [i_1] = ((14075 ? ((((((max(var_14, (arr_5 [i_1])))) && ((((arr_1 [i_0]) - var_16))))))) : ((((((arr_7 [i_1] [i_1] [i_1 - 3] [i_0]) | 1055724874779444734))) * var_9))));
                }
            }
        }
    }
    var_22 ^= -23999;
    #pragma endscop
}
