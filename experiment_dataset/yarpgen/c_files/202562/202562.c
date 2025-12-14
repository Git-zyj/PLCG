/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202562
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (min(var_16, (((((((-127 == (max(1056964608, 3)))))) == 7222813426664097892)))));
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 10;i_1 += 1)
        {
            {
                var_17 = (((!(((var_6 >> (arr_4 [i_0] [i_0])))))) ? (((!(arr_3 [i_0 + 1] [i_1 + 1])))) : (max(1651240856, 16972)));
                var_18 &= (((arr_0 [i_0 - 2]) ? (min((127 & 1), 1879048192)) : (((((1228670552 ? var_2 : 1)) == (arr_0 [i_0 - 1]))))));
            }
        }
    }
    #pragma endscop
}
