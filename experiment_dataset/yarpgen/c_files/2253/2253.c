/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2253
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2253 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2253
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max((min(var_15, var_16)), 17856));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 6;i_3 += 1)
                    {
                        for (int i_4 = 1; i_4 < 9;i_4 += 1)
                        {
                            {
                                arr_12 [i_0] [i_0] [i_3] [i_1] [i_0] [7] = (((((96 ? 107 : 10256105452266820770))) ? (arr_3 [i_0]) : (((1961198536 && (arr_4 [i_3 + 3]))))));
                                var_18 = (max((arr_10 [i_4 - 1] [i_0] [i_2] [i_1] [i_0]), (min((min(716017683311260782, 8190638621442730868)), (arr_0 [i_4 + 1] [i_4 - 1])))));
                                var_19 = ((((min((arr_10 [i_2] [i_0] [i_3 + 3] [i_3 + 2] [i_4 + 1]), var_12))) || (((arr_10 [i_1] [i_0] [i_3 - 1] [i_3 + 1] [i_4 + 1]) == (arr_10 [i_1] [i_0] [i_3 + 3] [i_3 - 1] [i_4 + 1])))));
                            }
                        }
                    }
                    var_20 &= 8190638621442730846;
                }
            }
        }
    }
    #pragma endscop
}
