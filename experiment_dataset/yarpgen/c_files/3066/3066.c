/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3066
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3066 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3066
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 16;i_1 += 1)
        {
            {
                arr_4 [i_0] = (~((7851286141373733438 ? (((!(arr_0 [i_1 - 1] [i_1 - 1])))) : 17425)));
                var_12 = min((((3 <= (arr_1 [i_0])))), -1234899377);
                arr_5 [i_0] = (arr_2 [i_1] [i_1 + 1]);
            }
        }
    }
    var_13 = -36202474;
    var_14 = ((((max((!var_11), ((1234899377 ? -15590 : var_7))))) ? (max(var_8, var_8)) : (var_2 | var_1)));
    #pragma endscop
}
