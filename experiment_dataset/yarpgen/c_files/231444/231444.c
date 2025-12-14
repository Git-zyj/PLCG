/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231444
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231444 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231444
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = ((((max(var_9, 52391))) ? ((((((1985219130 ? 193607602 : var_8))) == (min(15107, var_3))))) : (((!((max(var_0, var_9))))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 19;i_2 += 1)
            {
                {
                    var_11 = (max(var_11, ((min(52391, (((!(arr_5 [i_0] [i_0] [i_0])))))))));
                    arr_10 [i_2] [i_2] [i_2] [i_0] = ((!(((((max((arr_2 [i_0]), var_9))) ? (max(1384484746, var_0)) : var_2)))));
                    arr_11 [i_2] [i_1] [i_1] = (((((40473 ? (~2095268917) : 11215))) ? -81 : (((~var_7) ? (max(14121350105716788380, 1985219130)) : 32675))));
                    arr_12 [i_0] [i_2] = (~(((2267350720 % 886339052) ? (max(var_2, var_7)) : 1445564422)));
                }
            }
        }
    }
    #pragma endscop
}
