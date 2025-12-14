/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206088
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 15;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_2] = ((((max(47, (arr_6 [i_0 + 1])))) ? (((+(min((arr_5 [i_2] [i_2] [i_2] [i_2]), var_3))))) : ((var_8 ? (max(18446744073709551615, 1099081242)) : (arr_6 [i_2])))));
                    arr_8 [i_0] [i_0] [i_0] = 9223372036854775807;
                    arr_9 [i_2] [i_2] = var_11;
                }
            }
        }
    }
    var_20 = var_2;
    var_21 = var_3;
    var_22 = var_8;
    #pragma endscop
}
