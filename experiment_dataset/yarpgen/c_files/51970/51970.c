/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51970
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51970 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51970
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (max(var_14, (((~((var_5 ? ((1 >> (var_2 - 787))) : ((2077127788 ? var_4 : var_2)))))))));
    var_15 = 5348658885170279637;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 12;i_1 += 1)
        {
            {
                var_16 -= ((((min((arr_3 [i_1 - 1]), (((arr_4 [i_0] [i_1 + 3]) >> (93 - 31)))))) ? ((((-127 - 1) ? -1198893916 : -2077127789))) : (((0 % 1) >> (((arr_0 [i_1 - 1]) - 2927489842250096259))))));
                var_17 = (max(var_17, (((((arr_4 [i_1 - 1] [i_1 - 1]) * (arr_2 [i_1 - 2] [i_1 - 2] [i_1 + 4])))))));
            }
        }
    }
    #pragma endscop
}
