/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206007
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 18;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_4 [i_1] = 791652433;
                var_13 = (max(var_13, 791652433));
                arr_5 [i_1] [i_1] [i_0] = var_1;
            }
        }
    }
    var_14 = ((65525 ? -3006127614847574220 : ((((-4196535093089981477 > (791652446 % var_6)))))));
    var_15 &= 10749142089682734936;
    var_16 = (!791652433);
    #pragma endscop
}
