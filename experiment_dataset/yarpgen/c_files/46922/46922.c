/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 46922
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=46922 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/46922
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 *= (min(93264126012501631, 48));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 10;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_11 *= (arr_4 [i_0] [i_0] [i_0]);
                    var_12 = (arr_5 [i_2]);
                    arr_6 [i_1] [i_0] [i_2] [i_0] &= (arr_5 [i_1]);
                    arr_7 [i_2] [i_0] = (i_2 % 2 == 0) ? ((((((7456162307475787454 % (arr_3 [i_1] [i_1])))) ? (min(((var_3 << (((arr_5 [i_2]) - 3469231972)))), (arr_4 [i_1] [i_1] [i_2]))) : (((var_3 * var_7) ? 46 : (var_3 * var_2)))))) : ((((((7456162307475787454 % (arr_3 [i_1] [i_1])))) ? (min(((var_3 << (((((arr_5 [i_2]) - 3469231972)) - 2115904995)))), (arr_4 [i_1] [i_1] [i_2]))) : (((var_3 * var_7) ? 46 : (var_3 * var_2))))));
                }
            }
        }
    }
    var_13 = (max(var_13, (((var_8 ? (((~var_7) ? var_3 : var_6)) : (((-var_1 != (var_1 == 35751)))))))));
    var_14 = (min((var_7 & var_9), var_5));
    #pragma endscop
}
