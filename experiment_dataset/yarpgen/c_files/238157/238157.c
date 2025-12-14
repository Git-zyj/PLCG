/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238157
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238157 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238157
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            {
                arr_6 [5] [i_0] = (~var_6);
                var_16 = (((-1783858890 ? (arr_2 [i_0] [i_1]) : 41317226)));
                var_17 ^= (max(((984406148 >> (-41317249 + 41317272))), (-133412969 && 25)));
                var_18 = 715496726;

                for (int i_2 = 0; i_2 < 18;i_2 += 1)
                {
                    var_19 *= max((max((arr_3 [i_1] [0]), (arr_3 [i_0 + 1] [0]))), (((arr_3 [16] [16]) & (arr_3 [i_0 + 2] [16]))));
                    var_20 = (max(var_20, ((min((arr_9 [i_0] [i_0 - 2] [4] [6]), (max((max(41127, -41317249)), ((max(112, (arr_9 [8] [8] [i_2] [14])))))))))));
                    var_21 = (((2716743890 >> 1) != (arr_7 [i_2] [i_0] [i_2] [i_0 + 1])));
                }
                for (int i_3 = 3; i_3 < 15;i_3 += 1)
                {
                    var_22 -= (max(-var_8, (arr_2 [i_3 + 1] [i_0 - 2])));
                    var_23 += (((min(((~(arr_3 [10] [8]))), var_9)) >= var_1));
                }
            }
        }
    }
    var_24 = (min(var_24, (~var_5)));
    var_25 = var_7;
    var_26 = (max(var_26, (var_8 / var_11)));
    #pragma endscop
}
