/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35788
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35788 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35788
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (1639962576 <= 15309376258770964973);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] [i_1] = (((arr_2 [i_0] [i_1]) == (arr_2 [i_0] [i_1])));
                var_17 = (max(var_17, (arr_2 [i_0] [i_0])));
                arr_6 [i_1] = ((((arr_3 [i_0] [1]) & (26 & var_13))));
                var_18 = ((!((((arr_2 [i_0] [i_1]) ? -123 : (arr_3 [i_0] [i_1]))))));
            }
        }
    }
    var_19 = (max(((max((max(199, -361133939)), var_1))), (((!-98) ? (((var_6 ? 45 : var_11))) : var_8))));
    #pragma endscop
}
