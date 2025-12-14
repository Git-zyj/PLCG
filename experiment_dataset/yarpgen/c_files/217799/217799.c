/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217799
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217799 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217799
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 20;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 22;i_2 += 1)
            {
                {
                    var_20 = ((((((-85 >= (((arr_0 [i_0 - 2]) ? 202 : -1)))))) % ((((max((arr_3 [11] [1]), (arr_5 [i_1])))) + (max((arr_9 [i_2] [12] [15]), var_4))))));
                    var_21 = (max((max(13968800921797257799, (((!(arr_3 [i_0] [i_1])))))), (max((!-22746), (((arr_4 [5] [1] [1]) ? 1267466811 : (arr_7 [1] [i_1 + 1] [i_1 + 1] [i_2])))))));
                }
            }
        }
    }
    var_22 = (min(var_22, ((((((((89 ? var_3 : var_3))) || ((min(141, var_14))))) ? var_17 : ((((!4503599358935040) ? var_6 : 198))))))));
    var_23 = var_14;
    #pragma endscop
}
