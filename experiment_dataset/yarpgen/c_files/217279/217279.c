/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217279
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217279 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217279
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-1652371068140738238, (min(var_7, ((62 ? 2146230048 : var_6))))));
    var_11 = (min((~89), (((((var_3 ? 1181379281 : -1181379282))) ? (min(-1181379281, -1181379282)) : var_4))));
    var_12 = -927861913502276937;
    var_13 = (!114);
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 22;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 22;i_2 += 1)
            {
                {
                    var_14 = (arr_2 [i_0] [i_1 - 2] [i_2 + 1]);
                    var_15 = (max(var_15, ((max((min((arr_6 [i_0] [i_1] [i_2 + 1] [i_1 + 1]), 1181379281)), (((arr_6 [i_0] [i_1] [i_2 - 1] [i_1 - 1]) | (arr_3 [i_1 - 2]))))))));
                    arr_7 [i_0] [i_0] [i_0] [i_2] = (((min(408494943, (arr_2 [i_2 + 1] [i_2 + 1] [i_1 - 1]))) * 1181379282));
                    var_16 = (min(var_16, ((max(((-(arr_5 [i_0] [i_1 + 1] [i_1]))), (arr_3 [i_0]))))));
                    var_17 = (((arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 1]) ? ((-1181379281 ^ (arr_4 [i_1 + 1] [i_2 - 1] [i_2 - 1]))) : (((arr_4 [i_1 + 1] [i_2 - 1] [i_2 + 1]) * (arr_4 [i_1 - 1] [i_2 + 1] [i_2 + 1])))));
                }
            }
        }
    }
    #pragma endscop
}
