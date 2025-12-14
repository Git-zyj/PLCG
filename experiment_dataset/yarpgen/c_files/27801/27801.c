/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27801
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27801 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27801
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 21;i_2 += 1)
            {
                {
                    arr_9 [i_2] [i_1] [i_0] = (min(((max((~3), 14))), (9 - 477124016596715916)));
                    var_13 = ((116 ? 104 : 8415368012918612881));
                    var_14 = 8527633106912716901;
                    var_15 = (!8296138956508459133);
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 24;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 24;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] [i_3] = (!var_7);
                var_16 = (min(var_16, (182 == 152)));
                var_17 += ((((min((arr_13 [i_3] [i_3] [i_4]), (arr_13 [i_3] [13] [14])))) ? ((min((arr_10 [18]), (arr_10 [4])))) : (((arr_7 [i_4] [i_3]) % 238))));
            }
        }
    }
    var_18 = (min((max((((var_10 ? 99 : var_6))), (max(var_5, var_12)))), var_11));
    #pragma endscop
}
