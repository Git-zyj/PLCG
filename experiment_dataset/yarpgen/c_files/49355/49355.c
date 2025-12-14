/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49355
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_12 = (((-var_9 * (max((arr_5 [i_0] [i_1] [i_1]), 8563306440799980264)))));
                    var_13 = (max(((((((!(arr_4 [i_0] [5] [i_2] [i_0])))) >> (((-32016 / 511) + 80))))), (~-5288495802091503103)));
                    var_14 = (max(var_14, ((min(8563306440799980264, 20167)))));
                    arr_7 [i_0] [i_1] [16] [i_2] = ((~(max(4721976882156425697, -1724656667844881251))));
                    arr_8 [i_2] [i_2] = (((((arr_2 [i_0]) ? 128 : ((34084860461056 ? 950159916609744412 : 0)))) + 0));
                }
            }
        }
    }
    var_15 = (max(var_15, -var_4));
    var_16 = (!5962457847775857563);
    var_17 = (34084860461063 ? ((54946 ? (32767 ^ 0) : 5116130849573695183)) : (((44 ? 1564484708 : 511))));
    var_18 = (((((((-1329365301 ? var_2 : var_3)) > (((var_8 ? 15 : 255)))))) % (~var_2)));
    #pragma endscop
}
