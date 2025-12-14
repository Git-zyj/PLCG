/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 244865
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=244865 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/244865
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 22;i_1 += 1)
        {
            {
                arr_6 [i_0] [i_1] [i_1] &= ((-(arr_4 [i_0 + 1] [i_1] [i_1])));
                var_18 += (~((((min(var_2, 901834325))) ? ((61362 ? (arr_5 [i_0] [0] [i_0]) : var_2)) : -1764798788)));
            }
        }
    }
    var_19 = ((1764798772 ? -var_4 : ((~((var_7 ? 1 : 1764798763))))));
    var_20 |= ((((((1 ? -1764798788 : var_4)))) ? ((~(1700681576 ^ var_2))) : var_5));
    #pragma endscop
}
