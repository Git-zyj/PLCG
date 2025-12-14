/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54827
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_19 = ((!((!(arr_3 [i_0 - 2] [9])))));
                arr_6 [i_0] [i_0] = ((7135 ? 3690 : 61850));
                var_20 = (!1048576);
                var_21 -= (!-14078);
                var_22 = -134217664;
            }
        }
    }
    var_23 = ((var_2 ? var_2 : ((((((682171168 ? 18446744073708503056 : 18446744073709551600))) ? var_5 : (1048551 >= var_0))))));
    var_24 = var_4;
    var_25 = (-(((-var_0 && (((2804266342 ? var_0 : var_2)))))));
    var_26 = ((var_17 <= (((-4291364721718977117 ? var_0 : -var_4)))));
    #pragma endscop
}
