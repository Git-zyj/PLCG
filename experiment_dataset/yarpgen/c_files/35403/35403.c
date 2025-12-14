/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35403
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    var_15 = var_6;
                    var_16 = (min(var_16, ((((~4631399870048986164) >= -8806221323663685738)))));
                }
            }
        }
    }
    var_17 = (max(var_17, (((((((var_14 ? 0 : var_13))) ? 1597326019 : ((var_9 ? -4631399870048986164 : var_3))))))));
    var_18 = (min(((((var_9 ? var_9 : 1816573533)))), (((14 ? 4631399870048986163 : 2863331711)))));
    var_19 = (max(var_19, ((((((126 ? var_3 : ((max(71, -1597326040)))))) ? 1597326032 : (((122 && (((var_1 ? -126 : var_0)))))))))));
    #pragma endscop
}
