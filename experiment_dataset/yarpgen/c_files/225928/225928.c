/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225928
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225928 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225928
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_19 = (max((-32767 - 1), (~var_8)));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 13;i_2 += 1)
            {
                {
                    var_20 = max(-22, (((202 <= (~255)))));
                    var_21 = (((((27980 ? (arr_0 [i_0]) : (arr_0 [i_1])))) | (var_2 | var_4)));
                }
            }
        }
    }
    var_22 = 4294967295;
    var_23 += var_3;
    #pragma endscop
}
