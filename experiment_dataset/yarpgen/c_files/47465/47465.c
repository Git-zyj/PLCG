/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47465
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47465 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47465
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] [i_0] = var_11;
                    var_15 = var_2;
                    arr_10 [i_0] = (((arr_0 [i_2 + 1] [i_2 + 1]) ? (arr_0 [i_2 - 2] [i_2 - 1]) : (arr_0 [i_2 - 2] [i_2 - 1])));
                    arr_11 [8] [i_1] [i_2 + 1] = (min((arr_0 [i_2 - 1] [i_2 - 2]), ((-(arr_7 [i_0] [i_2 - 2] [i_1])))));

                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        var_16 = min(((937906254 ? 448 : ((440 ? -566302708 : 1439303951)))), ((max(65105, 65095))));
                        arr_15 [i_0] [i_0] [i_0] [19] [19] = var_0;
                    }
                }
            }
        }
    }
    var_17 = var_9;
    var_18 = var_5;
    var_19 = min((min((max(var_3, var_0)), (var_0 < var_10))), (((~((1015971602 << (var_11 - 31683)))))));
    #pragma endscop
}
