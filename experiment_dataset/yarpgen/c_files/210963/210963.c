/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210963
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210963 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210963
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 14;i_2 += 1)
            {
                {
                    arr_6 [i_0] = (min(19043, 1867885414943848683));
                    var_16 = (max(var_16, (~-9216461410091697660)));
                }
            }
        }
    }
    var_17 = (((min((((var_14 << (var_11 - 223)))), (min(var_2, 9408768484185730914)))) < ((((((min(var_11, -9216461410091697666))) || (-19043 || var_2)))))));
    var_18 |= 3;
    #pragma endscop
}
