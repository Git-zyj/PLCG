/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213012
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213012 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213012
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (-68 > -1585843774);
    var_14 = (1585843773 | var_10);
    var_15 = -var_9;
    var_16 = (max(((min(var_6, var_9))), 1585843773));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            {
                arr_6 [0] = ((((-(arr_0 [i_1]))) & ((((!(arr_2 [20])))))));
                arr_7 [i_0] |= (min(var_10, (((0 ^ -1585843773) ? (max(var_11, var_5)) : (arr_0 [i_0])))));
            }
        }
    }
    #pragma endscop
}
