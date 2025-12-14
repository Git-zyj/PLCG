/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217544
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217544 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217544
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 8;i_2 += 1)
            {
                {
                    var_12 = ((((((min((arr_0 [i_2]), var_8)) | (((arr_1 [i_0]) ^ 0))))) ? (max(25974, (arr_6 [i_2] [i_2 + 4] [i_2]))) : ((~(arr_6 [i_0] [i_1] [i_2 + 3])))));
                    var_13 = (min((65535 | 30301), ((~(1 * 1)))));
                }
            }
        }
    }
    var_14 &= (min(-1580, ((((var_2 ? 0 : 4865793338699942557)) * (15 == 10915264311678324912)))));
    var_15 = 6;
    var_16 = (max(var_16, var_3));
    #pragma endscop
}
