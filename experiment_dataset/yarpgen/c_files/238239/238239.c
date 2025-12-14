/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238239
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238239 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238239
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 11;i_2 += 1)
            {
                {
                    var_20 = ((~(arr_2 [i_2])));
                    arr_9 [i_0] [1] [i_1] = (((((max(8193349466263769201, 58495)))) - (arr_8 [8] [i_2])));
                    var_21 = ((!(!-19606)));
                    arr_10 [i_1] = ((~(min((arr_5 [0] [i_1 + 1] [i_2]), (~var_7)))));
                    var_22 |= ((+((var_13 - ((((arr_3 [i_0] [i_2]) == var_0)))))));
                }
            }
        }
    }
    var_23 = (var_6 | var_8);
    #pragma endscop
}
