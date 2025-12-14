/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222538
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222538 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222538
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            {
                arr_6 [10] [i_0] = ((((((((min(-103, var_11))) || ((((arr_5 [i_0]) / -6020084678578899742))))))) - (((arr_3 [i_0] [i_1] [i_0]) >> (((arr_3 [i_0] [i_0] [i_1]) - 17795167460864850850))))));
                arr_7 [i_0] [i_0] [i_0] = (max((max((((-(arr_4 [3] [i_1])))), (min(var_2, 18446744073709551615)))), (((!((min(var_0, (arr_3 [i_0] [i_1] [i_1])))))))));
            }
        }
    }
    var_14 = ((+((var_10 ? var_12 : (((var_6 + 2147483647) << (((-1044942503261326667 + 1044942503261326697) - 30))))))));
    var_15 = (min(var_5, (min(var_3, var_8))));
    var_16 += ((((((-1448485801 >= 12166) ? -1468434167 : var_12))) ? ((max(-1892158838, 1523707324))) : var_13));
    #pragma endscop
}
