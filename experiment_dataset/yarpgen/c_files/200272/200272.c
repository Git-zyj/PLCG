/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200272
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200272 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200272
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                var_18 = (max(var_18, ((((((((min((arr_1 [i_0] [i_0]), (arr_3 [i_0] [i_0] [i_1])))) ? (min((arr_3 [i_0] [8] [i_1]), (arr_1 [i_0] [i_1]))) : (var_3 ^ var_1)))) ? (arr_0 [i_0 + 3] [i_1]) : ((-(arr_1 [17] [i_1]))))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 21;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 21;i_3 += 1)
                    {
                        {
                            var_19 = (((min(-1346482549, (arr_1 [i_0] [i_0 + 2]))) & (~var_15)));
                            var_20 += 1346482547;
                            var_21 += (((arr_9 [i_2]) ? (max(1346482560, var_9)) : ((((var_3 | 1346482557) < (max(-1346482554, var_11)))))));
                        }
                    }
                }
            }
        }
    }
    var_22 = (max(var_22, 1346482551));
    #pragma endscop
}
