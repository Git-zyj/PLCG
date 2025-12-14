/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43560
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43560 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43560
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 -= var_6;
    var_11 = (!var_2);
    var_12 = (max(1858094412, var_6));

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 = 19;
        var_14 = (max(var_14, ((min((max(var_4, (max(1200661176, 8905091034900138078)))), ((((arr_0 [i_0]) & (arr_0 [i_0])))))))));
    }
    /* LoopNest 3 */
    for (int i_1 = 0; i_1 < 21;i_1 += 1)
    {
        for (int i_2 = 2; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 21;i_3 += 1)
            {
                {
                    arr_10 [i_1] = (min((((0 ? 255 : -20450))), -2409));
                    arr_11 [i_1] [i_1] [i_1] [i_3] = ((((max(var_0, 0)) ? ((min(-1902523485677143566, 2))) : (max(var_9, 10241868512790010515)))));
                }
            }
        }
    }
    #pragma endscop
}
