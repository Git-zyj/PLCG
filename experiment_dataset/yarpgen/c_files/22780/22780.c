/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22780
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22780 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22780
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((max(199, 3100623354))) ? (((-var_1 ? ((1 ? var_2 : var_4)) : (~2147483647)))) : ((min(var_0, var_11)))));
    var_14 = (1 & var_8);
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (((((arr_4 [i_0] [i_1] [i_0]) && ((((arr_4 [i_0 - 1] [i_0] [i_0]) ? (arr_4 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_2])))))) ? (max((((arr_5 [i_0] [i_0]) & 1608739394)), ((~(arr_2 [i_0]))))) : (((((!-6223376300691567672) != var_0))))));
                    arr_7 [i_0] = 142;
                    arr_8 [i_0] = (arr_6 [i_0] [i_2 + 1] [i_2 - 3]);
                    var_16 = ((((min((max(14542, (arr_2 [i_0]))), (524287 != 1)))) ? ((var_12 ? (arr_3 [i_2 + 1] [i_2 + 3]) : ((max(var_1, 1))))) : (~0)));
                }
            }
        }
    }
    #pragma endscop
}
