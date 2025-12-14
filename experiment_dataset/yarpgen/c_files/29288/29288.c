/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29288
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29288 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29288
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_10 = (min((arr_0 [i_0] [0]), (((((15 + (arr_3 [1] [10] [i_2]))) - (arr_1 [i_0]))))));
                    var_11 += (((((((arr_4 [i_0] [2] [12]) >> (-995868671465338543 + 995868671465338547)))) || 8)) ? (((min((arr_2 [6]), (arr_1 [6]))))) : (arr_6 [6]));
                    var_12 = (i_0 % 2 == 0) ? ((((min(((2185 ? 995868671465338550 : (arr_4 [12] [i_1] [i_0]))), ((65535 & (arr_2 [i_0]))))) != (((((arr_2 [i_0]) + 9223372036854775807)) << (((((arr_3 [i_0] [i_1] [i_2 + 1]) << (((arr_4 [i_0] [i_1] [i_0]) - 2976546620)))) - 834666496))))))) : ((((min(((2185 ? 995868671465338550 : (arr_4 [12] [i_1] [i_0]))), ((65535 & (arr_2 [i_0]))))) != (((((((arr_2 [i_0]) - 9223372036854775807)) + 9223372036854775807)) << (((((((((arr_3 [i_0] [i_1] [i_2 + 1]) << (((((arr_4 [i_0] [i_1] [i_0]) - 2976546620)) - 914431647)))) - 834666496)) + 833036329)) - 41)))))));
                }
            }
        }
    }
    var_13 &= (min((((((995868671465338543 ? 1 : var_0))) ? ((51828 ? var_1 : var_2)) : (((max(var_3, 138)))))), ((((995868671465338543 || -995868671465338552) ? var_1 : 115)))));
    #pragma endscop
}
