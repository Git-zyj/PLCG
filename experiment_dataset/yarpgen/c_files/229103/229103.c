/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229103
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229103 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229103
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 += ((124 << ((((((min(-124, 124))) - -60)) + 66))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_4 [i_0] [i_1] [i_1] = (max(((3910 ? -var_3 : var_2)), (((-var_5 ? var_2 : (max(-125, 160250355)))))));
                arr_5 [i_0] = ((((((max(var_3, -60)) | (((max(var_6, -110))))))) ? -124 : ((((max(var_3, 75))) ? 27 : ((var_9 ? var_8 : 501890748))))));
            }
        }
    }
    #pragma endscop
}
