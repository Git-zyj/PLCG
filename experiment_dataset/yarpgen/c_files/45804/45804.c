/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45804
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45804 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45804
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (((-1597769548 + 2147483647) >> (var_16 - 21)));
    var_18 = (((((((16106 << (32767 - 32767))) >> ((max(var_7, 1)))))) ? -688696962 : var_16));
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 11;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_2 [i_0]);
                var_19 = (((0 ? (max(17540, 5073821312595633933) : 1019538063))));
                var_20 = ((((max((arr_3 [i_1]), (arr_3 [i_1])))) == 200));
            }
        }
    }
    #pragma endscop
}
