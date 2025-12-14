/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230202
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230202 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230202
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 &= (max(((max(var_9, ((1302948440 ? 526 : -564999732902219502))))), (((((4398046511103 ? 6347055802405940554 : 5246514718056463607))) ? (max(26, 5558081892896905278)) : var_6))));
    var_14 = var_9;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_5 [i_0] = ((!(((1578359922141624747 ? -6347055802405940555 : 527)))));
                arr_6 [i_0] [i_0] [i_0] = 18446744073709551602;
                arr_7 [i_1] [i_1] = (-((2782612657 ? 9787 : -1)));
            }
        }
    }
    #pragma endscop
}
