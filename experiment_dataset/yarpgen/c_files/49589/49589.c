/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        var_14 = ((var_13 ? 255 : (((arr_1 [i_0]) ? var_1 : (arr_0 [i_0])))));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 24;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 23;i_3 += 1)
                {
                    {
                        arr_8 [i_0] [i_1] [i_2] [i_1] [i_0] [i_0] = ((((((((arr_0 [i_1]) && 18446744073709551592)) ? ((min(var_9, var_5))) : var_13))) || (!1497)));
                        arr_9 [i_3 + 1] [i_2] [i_1] [i_1] [i_0] [0] = var_6;
                    }
                }
            }
        }
    }
    for (int i_4 = 1; i_4 < 17;i_4 += 1)
    {
        var_15 = (min(159, (-127 - 1)));
        var_16 = (min(var_16, var_1));
        arr_14 [i_4] = ((11788653019087042196 ? 28156 : 1466));
    }
    var_17 += ((var_0 ? var_9 : (!18446744073709551615)));
    #pragma endscop
}
