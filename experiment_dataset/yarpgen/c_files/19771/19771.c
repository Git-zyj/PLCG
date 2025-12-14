/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_0] [i_2 + 1] = (max(((((arr_7 [i_0] [i_1] [i_2 + 1]) ? -58 : ((min((arr_6 [i_0]), 0)))))), (((((1 ? 1 : (arr_4 [i_0] [i_1] [i_2])))) ? (arr_0 [i_2 - 1] [i_1 - 1]) : (max(33, 2775256110))))));
                    arr_9 [i_0] [i_2 - 1] = (min((max(17890, (min((arr_5 [i_0] [i_1]), (arr_4 [i_0] [i_1 - 1] [i_2]))))), (arr_7 [i_0] [i_2 - 2] [i_2 - 2])));
                }
            }
        }
    }
    var_15 = (max(var_15, ((((((((min(18446744073709551596, var_6))) ? (((max(var_14, var_9)))) : ((57904 ? 15265047570434646531 : 230))))) ? (min(3142199008, (max(10702587929408048577, 1)))) : var_13)))));
    var_16 = (min((((8960525800527826199 ? 103 : 1909217478))), (max(2186, var_6))));
    #pragma endscop
}
