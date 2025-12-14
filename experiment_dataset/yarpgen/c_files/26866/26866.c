/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 26866
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=26866 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/26866
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((((!((max(var_16, 1104466016733844507)))))), var_12));

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 4; i_2 < 19;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((((!(arr_5 [i_2 - 1] [i_2 - 1]))) ? (arr_5 [i_2 - 4] [i_2 - 2]) : ((17342278056975707096 ? 10227469393312619687 : (arr_5 [i_2 - 3] [i_2 - 2])))));
                    arr_10 [i_0] [i_0] = max((~-108), ((((((var_2 ? var_5 : -2509))) ? (~var_17) : (arr_6 [i_2 - 4] [i_2 + 1] [i_2 - 3])))));
                }
            }
        }
        arr_11 [i_0] = (arr_4 [i_0]);
        arr_12 [i_0] = (((arr_4 [i_0]) ? ((var_13 ? var_14 : 9700251753732882289)) : ((max(var_18, 2718551752)))));
    }
    #pragma endscop
}
