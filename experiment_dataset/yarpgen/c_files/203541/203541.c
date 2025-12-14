/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203541
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203541 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203541
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 |= ((((((((var_3 ? -12 : var_2))) ? (~2863741420771268820) : (~623039019)))) || ((((var_3 ? 2297256691 : -2944163883570423879))))));
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 12;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] = (((arr_3 [11] [i_1]) & 4294967281));
                    var_21 = (min(2293908362, -328225417));
                }
            }
        }
    }
    #pragma endscop
}
