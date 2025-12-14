/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249735
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249735 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249735
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 18;i_0 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 18;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 18;i_3 += 1)
                {
                    {
                        arr_12 [8] [2] [2] [i_3] = ((~((((max(1, var_8))) ? var_15 : (((arr_11 [i_3] [5] [i_3]) * (arr_1 [9])))))));
                        var_19 *= ((-((1 ? 18446744073709551615 : 55958))));
                        var_20 &= (~1756926236);
                    }
                }
            }
        }
        arr_13 [8] [16] = (((((((255 ? var_4 : (arr_5 [15]))) == (min((arr_8 [12] [11] [13] [8]), 8191))))) >> 1));
        var_21 = (max(var_21, ((((arr_6 [6] [i_0]) ? (((arr_6 [i_0] [0]) ? (arr_2 [i_0]) : (arr_7 [4]))) : ((-(arr_7 [i_0]))))))));
    }
    for (int i_4 = 0; i_4 < 18;i_4 += 1) /* same iter space */
    {
        var_22 *= (arr_5 [10]);
        var_23 &= min(((-981494587275052550 ? (arr_6 [16] [12]) : (arr_6 [i_4] [i_4]))), -25077);
    }
    var_24 = var_14;
    var_25 *= var_3;
    #pragma endscop
}
