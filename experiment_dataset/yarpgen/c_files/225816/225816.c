/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225816
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = (min(var_13, (((1 ? 0 : 1)))));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            {
                var_14 = (max(var_14, (((((1 != ((var_3 ? 0 : 1)))) ? (1 < 1) : (var_5 < 1))))));
                arr_4 [i_0] [i_0] = (min((((arr_0 [i_0 + 1]) ? var_3 : (arr_1 [i_0 + 1]))), ((((arr_1 [i_0 + 1]) != ((6012818745662278608 ? 1 : 9223372036854775807)))))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 1;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        {
                            arr_10 [i_3] [i_3] |= (((1967138876166797757 != 1) ? 3644476398234925758 : (((min(1, 1))))));
                            var_15 ^= ((1 << (2744202335362007092 - 2744202335362007086)));
                            var_16 = (1 ? 0 : 9029082084417907330);
                            arr_11 [7] [7] [1] [i_3] &= (((((var_6 << (((arr_6 [i_0 - 1]) - 5853619216951774162))))) ? (((min(1, 1)))) : 1));
                        }
                    }
                }
            }
        }
    }
    var_17 -= var_10;
    #pragma endscop
}
