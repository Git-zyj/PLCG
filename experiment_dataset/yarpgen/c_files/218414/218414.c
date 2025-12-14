/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218414
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218414 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218414
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (min(-54, (min(var_5, (max(16730131623121283702, var_2))))));
    var_11 = var_4;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 10;i_2 += 1)
            {
                {
                    var_12 = (((((min(9322774855584126156, (arr_3 [2]))))) ? (--70) : ((((((arr_3 [3]) - (arr_3 [2])))) + 802772460484744393))));
                    var_13 = (min(var_13, var_7));
                    var_14 = ((((14708 ? ((((!(arr_6 [8] [6] [10]))))) : (arr_4 [i_2 + 1] [2]))) != 10793));
                }
            }
        }
    }
    #pragma endscop
}
