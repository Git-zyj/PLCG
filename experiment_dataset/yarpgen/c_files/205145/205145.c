/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205145
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205145 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205145
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                arr_5 [1] [3] = ((16256 <= ((~(arr_3 [i_0] [23])))));
                var_13 *= 1;
                arr_6 [i_0] [i_1] = (((((arr_3 [i_0] [i_1]) | (arr_1 [i_0]))) - (((5420763398134666374 ? (arr_3 [i_0] [i_0]) : (arr_3 [i_0] [i_1]))))));
                var_14 = (max(var_14, (((~(((!(((arr_3 [i_1] [i_1]) || 13025980675574885254))))))))));
                var_15 ^= 1;
            }
        }
    }
    var_16 = (min(var_16, ((max((~-var_10), ((~((1 ? 13025980675574885241 : 2226661263)))))))));
    #pragma endscop
}
