/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21811
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21811 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21811
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max((max(var_1, ((var_3 ? var_2 : var_4)))), ((((min(0, var_9))) ? ((min(var_6, var_6))) : var_3))));
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_15 = (max((arr_8 [i_0 + 3] [i_0] [i_0]), (max((((arr_7 [i_0] [0] [i_0]) ? 18213292161813435512 : (arr_6 [i_1] [i_1] [i_1] [i_0]))), 18213292161813435526))));
                    arr_9 [i_2] [1] [i_1] [i_2] |= ((((((arr_3 [i_0 - 1]) ? (((arr_4 [i_0 - 1] [i_0 - 1]) ? 18213292161813435512 : (arr_1 [i_2]))) : (((arr_6 [2] [8] [i_2] [i_1]) ? (arr_7 [i_1] [i_0] [i_1]) : 233451911896116104))))) ? (arr_6 [i_0 + 1] [i_1] [i_1] [i_1]) : ((min((arr_3 [i_1]), ((200 ? (arr_2 [i_1] [i_1]) : (arr_4 [i_0 - 1] [i_1]))))))));
                    var_16 = (max(var_16, ((min((max(((min(6689619495782390201, 10086))), (max((arr_7 [i_0 + 1] [i_1] [i_1]), (arr_6 [i_0] [i_0 - 2] [i_0] [i_1]))))), (min((arr_0 [i_0]), (max((arr_2 [i_1] [i_0]), 18446744073709551594)))))))));
                }
            }
        }
    }
    #pragma endscop
}
