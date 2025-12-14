/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193357
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193357 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193357
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = var_0;
                var_17 -= (-1 && var_13);
                var_18 = ((-(6013402006063215569 + 6013402006063215579)));
                arr_6 [i_0] [i_1] [i_0] = ((134217472 ? 12433342067646336021 : 15123));
            }
        }
    }
    var_19 = ((((min(var_14, var_1))) << ((((-335136783 ? 13685790867505064352 : 0)) - 13685790867505064352))));
    #pragma endscop
}
