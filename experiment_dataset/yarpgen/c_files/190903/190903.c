/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190903
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (var_10 * ((648445662 & (11858930291792974323 && 1))));
    var_18 ^= (((var_2 > var_15) ^ var_2));
    var_19 = var_3;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 1;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 3; i_3 < 12;i_3 += 1)
                    {
                        {
                            var_20 = ((((max(var_3, (arr_5 [i_0] [i_0] [10] [13])))) || (arr_5 [i_2] [i_2] [i_1 - 1] [i_0])));
                            var_21 |= (min((arr_0 [i_0]), ((((((arr_8 [i_0] [i_1 - 1] [0] [6]) | (arr_5 [i_0] [4] [i_0] [i_3])))) % (var_5 - 15)))));
                            var_22 = ((((arr_8 [i_0] [i_1] [i_3] [i_3]) <= ((18446744073709551613 ? 64 : -467178020933637912)))));
                        }
                    }
                }
                var_23 = (max(var_23, ((min(3884273348622915109, -3884273348622915114)))));
            }
        }
    }
    #pragma endscop
}
