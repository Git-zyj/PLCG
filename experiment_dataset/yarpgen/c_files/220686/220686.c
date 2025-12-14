/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220686
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220686 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220686
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    var_17 ^= (((((((~(arr_5 [i_0]))) | ((~(arr_5 [i_2])))))) ? (max(16068444877482202906, 16068444877482202926)) : (((~(arr_0 [i_0] [i_0]))))));
                    arr_7 [i_2] [i_2] [i_1] = ((((var_9 + (arr_3 [i_0] [i_1]))) | ((((!(arr_3 [11] [i_1])))))));
                }
            }
        }
    }
    var_18 = ((16068444877482202945 & (!2378299196227348669)));
    #pragma endscop
}
