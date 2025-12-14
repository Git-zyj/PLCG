/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199613
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199613 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199613
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = -3946303691489380211;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 0;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((((((12253864 % (arr_0 [i_1] [i_0]))) * (arr_2 [1] [1] [12])))) | (((((1 % (arr_2 [i_1] [i_0] [9])))) + var_8)));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 22;i_2 += 1)
                {
                    for (int i_3 = 2; i_3 < 20;i_3 += 1)
                    {
                        {
                            var_20 = (max(var_20, 14856514767681265345));
                            var_21 = ((+(max((((-645397374999058439 + 9223372036854775807) >> (((arr_3 [i_0 + 1]) + 3745)))), (2080374784 <= var_4)))));
                            arr_13 [i_0] [i_0] [i_2] [i_3 + 2] [i_3 - 1] [i_3 - 1] = ((min(645397374999058451, 1)) * (arr_5 [1]));
                            arr_14 [i_0] [i_1] [i_1] [i_2] [7] = (!11508899234027000158);
                            arr_15 [i_0] [i_0] [i_0] [i_0] = (min(1, 1));
                        }
                    }
                }
                arr_16 [15] [i_0] = -645397374999058439;
            }
        }
    }
    var_22 = (!var_1);
    #pragma endscop
}
