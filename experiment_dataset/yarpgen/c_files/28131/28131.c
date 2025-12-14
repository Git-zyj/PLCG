/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28131
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_18 = ((+((((-12 != 13753633582017726416) && var_13)))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_4 [i_0] [8] [i_0] = ((((!(((-9 ? 2303254393848174885 : var_9)))))) & (!var_5));
                arr_5 [i_1] [i_0] = ((!((max(16143489679861376720, 2637910941)))));
                var_19 = ((((108 ? (65535 ^ var_17) : ((max(var_4, -112)))))) ? 2147483632 : var_14);
                arr_6 [i_0] [i_0] = (((1507423033 ? (-99 & var_7) : -107)) % var_8);
                var_20 = (13753633582017726405 ? ((2147483647 ? (min(-3, var_4)) : 44)) : (((!-1382048470) ? 2147483647 : (min(93, -8064399855382478503)))));
            }
        }
    }
    var_21 = (~var_4);
    #pragma endscop
}
