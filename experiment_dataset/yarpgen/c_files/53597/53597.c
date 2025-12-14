/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 53597
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=53597 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/53597
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_14 = max((max(var_9, 439953565)), 63);
                            arr_10 [i_0] [i_0] [1] [i_3] [i_1] [i_3] = ((~((184483329 ? (((52813 ? -63 : 32767))) : (min((arr_6 [i_0] [i_0] [i_2]), (arr_0 [i_0])))))));
                        }
                    }
                }
                var_15 += (min((arr_4 [i_0] [i_1]), (min((((arr_7 [i_0] [i_1]) | (arr_9 [i_1] [4] [i_1] [i_0] [i_0] [i_0]))), (~-36)))));
                var_16 = (min(var_16, ((min(((((max(var_10, var_11)) >= ((((arr_2 [i_1]) ? 16650 : var_11)))))), (arr_0 [i_0]))))));
            }
        }
    }
    var_17 = (var_5 | var_2);
    #pragma endscop
}
