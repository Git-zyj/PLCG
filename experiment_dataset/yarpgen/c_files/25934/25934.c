/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25934
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25934 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25934
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 ^= (((!(((var_12 ? 8537 : 0))))));
    var_16 = ((-var_4 ? var_8 : var_8));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (max(var_17, var_12));

                for (int i_2 = 0; i_2 < 13;i_2 += 1)
                {
                    var_18 = ((~((31203 ? 80 : 0))));
                    var_19 = (((!30745) ? (min(2218900541, 1132414812)) : ((((!(((~(arr_6 [i_0] [i_1]))))))))));
                    var_20 = ((((((arr_0 [i_1 + 2]) ? (arr_5 [i_1 + 3] [i_1 + 3] [i_1 + 3] [i_1]) : (arr_4 [i_0] [i_0])))) ? (max((((0 ? (arr_1 [i_1 - 2]) : var_4))), 2076066755)) : (arr_1 [i_0])));
                }
                var_21 = (max(var_21, (((!((((arr_2 [i_1 - 1]) ? ((((arr_1 [7]) ? (arr_5 [6] [i_1 - 1] [i_1 + 1] [i_0]) : 1132414812))) : (arr_6 [12] [i_0])))))))));
            }
        }
    }
    #pragma endscop
}
