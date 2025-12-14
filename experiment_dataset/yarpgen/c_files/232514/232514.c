/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232514
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232514 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232514
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min((((((-32741 ? var_12 : var_11))) ? var_10 : var_3)), var_5));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 14;i_2 += 1)
            {
                {
                    var_14 = (min(var_14, (((((((min(var_1, var_6))))) ? ((((!(((~(arr_4 [i_0] [i_1])))))))) : (min((arr_8 [i_2 + 2] [i_1] [i_2]), var_4)))))));
                    arr_9 [i_0] [i_1] [i_1] [i_2] = ((-(!32716)));
                    arr_10 [i_2] [i_2 + 2] [i_2] = ((min((((arr_1 [i_0]) ? var_11 : 2606745638)), (arr_3 [i_1]))));
                    arr_11 [i_0] [i_1] [i_2] = (arr_1 [i_0]);
                }
            }
        }
    }
    var_15 = min(((((((var_4 ? var_6 : var_5))) || -1667878954))), (32740 ^ var_9));
    var_16 = var_9;
    #pragma endscop
}
