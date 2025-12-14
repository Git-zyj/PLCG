/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246933
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246933 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246933
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, 1077));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((((((~1074) * ((max((arr_2 [i_0] [i_1]), 1097)))))) ? -1098 : -682380243));
                var_17 = (1066 ? ((((((2137952203 ? -218263401 : 3751286742))) ? 13 : (arr_3 [0] [i_1])))) : 13845245756401212006);
                var_18 = 255;
                arr_6 [7] = ((((((arr_4 [i_1] [i_1] [i_0 - 1]) >> (((((-2147483647 - 1) - -2147483589)) + 98))))) ? ((((var_11 != (-2147483647 - 1))))) : 0));
            }
        }
    }
    var_19 = (min(var_19, 9));
    var_20 = ((17052664985986685463 ? var_15 : -30));
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 15;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {
                arr_12 [i_3] [i_2] = ((((((min(var_5, -1004626975))) ? 3063985938 : (max(-2147483625, (arr_4 [i_2] [0] [i_2]))))) & ((max((max((arr_9 [i_3] [i_3] [i_2]), var_3)), ((1 | (arr_9 [13] [i_2] [10]))))))));

                for (int i_4 = 0; i_4 < 1;i_4 += 1)
                {
                    arr_16 [i_4] [i_4] [i_4] [i_2] = (arr_2 [i_3] [i_4]);
                    var_21 = (arr_13 [i_2] [0] [i_4]);
                }
            }
        }
    }
    #pragma endscop
}
