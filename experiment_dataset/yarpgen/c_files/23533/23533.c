/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23533
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23533 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23533
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = ((((-1 - var_13) ? var_11 : -var_12)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                arr_5 [i_1] = (arr_4 [i_1] [i_1]);
                var_18 = ((-12786789107951553955 ? var_7 : (((arr_4 [i_1] [i_1]) - (((var_13 ? -13775 : (arr_0 [i_0]))))))));
                var_19 &= (((5659954965757997661 ? 124 : 192)));

                for (int i_2 = 4; i_2 < 16;i_2 += 1)
                {
                    var_20 = ((((((((var_3 >> (5659954965757997661 - 5659954965757997644)))) ^ -1))) | (((arr_2 [i_0] [13] [i_1]) | (min(12786789107951553955, 66))))));
                    arr_8 [i_0] [i_1] [7] [i_0] = ((((1 ? 32767 : 146))) ? 149 : ((-1 / (min(1361662042, 3213480126)))));
                }
                for (int i_3 = 0; i_3 < 19;i_3 += 1)
                {
                    var_21 = var_2;
                    var_22 ^= ((992 ? (var_16 < 17139) : ((2857 ? 4193280 : (6280866541201409511 != var_2)))));
                }
            }
        }
    }
    var_23 = (((~(var_15 > 5659954965757997661))) >= var_10);
    var_24 = (var_10 / var_9);
    #pragma endscop
}
