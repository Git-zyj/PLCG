/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245303
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245303 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245303
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = (min((min(-98, -5170289634430694171)), (((max(var_2, var_10))))));
    var_21 = (!32768);
    var_22 = (max(var_2, 1430612424));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 15;i_2 += 1)
            {
                {
                    var_23 = (max((min(793193719, (max(-793193719, 966434785)))), 9164526218605428185));
                    arr_6 [i_0] = (min(-5976657941655641490, 0));
                }
            }
        }
    }
    #pragma endscop
}
