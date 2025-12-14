/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 22;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 19;i_2 += 1)
                {
                    arr_7 [i_0] [2] [i_2 + 1] = (max(var_10, (((var_0 ? ((((arr_3 [i_0]) > 1638313384468687905))) : (~31))))));
                    arr_8 [i_2] [i_0] [i_0] = (arr_0 [i_0]);
                }

                for (int i_3 = 2; i_3 < 22;i_3 += 1)
                {
                    var_20 += (((((((var_19 & (arr_2 [22]))) + var_12))) && (arr_3 [i_3 - 2])));
                    var_21 *= ((var_9 && ((max((arr_4 [18] [i_3 - 1]), (arr_1 [14] [4]))))));
                    var_22 = (((~384) ? ((((!(arr_10 [i_0] [i_0] [i_1]))))) : (arr_2 [i_0])));
                }
            }
        }
    }
    var_23 = (max(((((7347 << (var_6 + 39))) + -14094)), var_8));
    #pragma endscop
}
