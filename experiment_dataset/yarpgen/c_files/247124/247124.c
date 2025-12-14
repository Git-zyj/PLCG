/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247124
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247124 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247124
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 9;i_2 += 1)
            {
                {
                    var_17 = ((((22917 ? 27894 : -1733557562)) | (((!(arr_1 [i_2 + 1] [i_0 - 3]))))));
                    var_18 -= (arr_0 [i_1] [i_2]);
                    var_19 = (max(42619, (arr_8 [i_0])));
                    var_20 ^= 0;
                }
            }
        }
    }
    var_21 -= var_16;
    var_22 += var_13;
    #pragma endscop
}
