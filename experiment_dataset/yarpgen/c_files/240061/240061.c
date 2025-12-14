/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 240061
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=240061 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/240061
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 15;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_15 = (min(121, (154 + 4294967295)));
                    var_16 += ((min(872636845223566412, ((((arr_3 [i_1]) < (arr_4 [i_0])))))));
                    arr_7 [i_0] [i_0] [i_0] [15] = (!-730569730105893515);
                    var_17 = ((((!((min(var_6, (arr_1 [i_0 + 3])))))) ? (((!(arr_6 [i_2] [i_1] [i_0])))) : 63));
                    arr_8 [5] [i_0] [8] [14] = ((arr_0 [i_0]) > var_9);
                }
            }
        }
    }
    var_18 = (max(var_18, (((1290012857 ? -872636845223566413 : var_6)))));
    #pragma endscop
}
