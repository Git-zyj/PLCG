/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194170
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194170 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194170
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min(var_5, 18283640549155652937)));
    var_15 = (min(var_15, var_10));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                var_16 ^= ((((((arr_2 [0] [i_1]) ? var_13 : var_3)))) ? ((var_8 & (arr_0 [i_0]))) : (((!((min((arr_4 [i_1] [i_1] [1]), (arr_2 [14] [i_0]))))))));
                var_17 = (min(((min((arr_0 [i_1]), (var_1 | 1)))), (~77)));
                var_18 -= (--var_1);
                arr_6 [i_1] [i_0] [11] = (((arr_0 [13]) >> ((min(((!(arr_4 [1] [i_0] [5]))), ((!(arr_1 [0]))))))));

                for (int i_2 = 1; i_2 < 12;i_2 += 1)
                {
                    var_19 = (!var_10);
                    var_20 += var_8;
                }
            }
        }
    }
    #pragma endscop
}
