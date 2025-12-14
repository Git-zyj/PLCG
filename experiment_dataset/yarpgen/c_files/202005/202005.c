/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202005
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202005 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202005
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            {
                var_15 = (min((((((-121 && (arr_0 [i_1] [i_0]))) || 1))), (((!1) ? ((min(-1490216544, (arr_2 [i_0] [i_0])))) : (arr_1 [i_0])))));
                var_16 = (min((-127 - 1), 1));
                arr_5 [i_0] [i_0] = 31;
            }
        }
    }

    /* vectorizable */
    for (int i_2 = 2; i_2 < 12;i_2 += 1)
    {
        var_17 = (arr_0 [i_2] [2]);
        arr_9 [i_2] [i_2] = (-(((arr_0 [i_2] [i_2 - 2]) - (arr_3 [i_2 - 1]))));
    }

    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        var_18 *= 3269203971;
        var_19 = (arr_4 [i_3] [i_3] [i_3]);
        arr_13 [i_3] = ((((((arr_6 [i_3]) ? 1 : 4468718696399252442))) | (max((arr_11 [i_3] [i_3]), ((((arr_1 [i_3]) ? 3324597784 : 4321711050107324829)))))));
        var_20 = ((((((((arr_10 [i_3]) ? -4321711050107324845 : (arr_8 [i_3]))) + 4671))) ? ((min(3324597790, (arr_0 [i_3] [i_3])))) : (arr_1 [i_3])));
    }
    for (int i_4 = 0; i_4 < 24;i_4 += 1)
    {
        var_21 = (34 <= 36);
        arr_16 [i_4] = (((((arr_15 [i_4]) & ((((970369511 >= (arr_15 [i_4]))))))) << (((min(79, (min(3324597789, 970369516)))) - 26))));
    }
    #pragma endscop
}
