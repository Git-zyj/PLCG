/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227315
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227315 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227315
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 22;i_0 += 1)
    {
        arr_2 [i_0] = ((-((11487987363453137412 ? ((16461945774911571561 ? 33435 : 27353)) : -4552171938344436826))));
        var_11 = (min(var_11, (((!(((-5466245193443903764 ? 2450682465441667360 : 12435))))))));
        var_12 = (~16430140858075864618);
    }
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 17;i_2 += 1)
        {
            for (int i_3 = 1; i_3 < 17;i_3 += 1)
            {
                {
                    var_13 = 9178;
                    arr_12 [i_1] [i_1] [i_1] [14] = (-99 && 1);
                    var_14 = 195;
                }
            }
        }
        var_15 = (45991 >> ((((25269 >> (52991 == 1087771556217683743))) - 25260)));
        arr_13 [i_1] = 44;
    }
    var_16 = (min(var_16, (~var_10)));
    var_17 = (!var_9);
    #pragma endscop
}
