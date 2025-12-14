/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2759
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2759 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2759
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        arr_2 [i_0] = (~var_4);
        var_18 = 7458233491351689851;
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 23;i_2 += 1)
            {
                {
                    var_19 = var_8;
                    arr_7 [i_0] [i_1] [i_2] = (((((-127 + 2147483647) << (145 - 145))) >> (((arr_4 [i_2 + 2]) - 7330279524619458652))));
                    arr_8 [i_0] [i_1] [i_1] = (arr_4 [i_0]);
                }
            }
        }
    }
    var_20 = (((-114 - 1023) - var_6));
    var_21 &= (((((min(5039270770056233683, 109))) || (!4577478900552262590))) ? (((103 || (-9088086711983894531 ^ 16456)))) : ((var_16 / (max(var_10, -532226499)))));
    var_22 = (+-9088086711983894520);
    var_23 = (max((max((max(var_7, -1339468247)), 1637211992)), 28825));
    #pragma endscop
}
