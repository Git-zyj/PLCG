/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20960
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20960 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20960
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 *= 0;
    var_12 = 1405819574;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 20;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_0] = ((1405819574 ? 1405819574 : (((1405819574 ? 1 : 69)))));
                    var_13 = ((-13505 ? ((((((2889147721 ? 255 : 144044819331678208))) ? ((-1 ? 9223372036854775807 : 1)) : 30036))) : ((-32758 ? 0 : 1405819574))));
                    var_14 = 17949;
                }
            }
        }
    }
    #pragma endscop
}
