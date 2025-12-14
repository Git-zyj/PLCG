/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47080
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47080 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47080
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = -var_0;
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 16;i_2 += 1)
            {
                {
                    var_14 = (max((((arr_3 [i_0 - 1] [i_0 - 1] [i_1]) >> (8537 - 8517))), 98));
                    var_15 = (max(((((min(-7350119590069636873, 98)) == (min(4294934528, 46494))))), ((((max((arr_2 [i_0 - 1] [i_1] [i_1]), (arr_4 [i_1])))) ? 44 : (min((arr_1 [i_2]), (arr_6 [i_0 - 1] [i_1] [19] [i_2])))))));
                    arr_7 [i_1] = 7350119590069636889;
                }
            }
        }
    }
    #pragma endscop
}
