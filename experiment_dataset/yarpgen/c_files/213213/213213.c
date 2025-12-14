/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213213
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213213 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213213
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = ((var_6 != ((((var_3 % var_5) | (!var_5))))));

    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 2; i_1 < 16;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 17;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_2] = ((-(((!536870911) ? ((var_13 ? 536870913 : 1708875780)) : (((~(arr_6 [i_0]))))))));
                    var_17 = (arr_0 [i_1]);
                }
            }
        }
        var_18 |= (min((((32832 ^ var_7) == (((var_10 ? var_13 : var_15))))), ((!(arr_5 [i_0])))));
    }
    /* LoopNest 3 */
    for (int i_3 = 1; i_3 < 12;i_3 += 1)
    {
        for (int i_4 = 2; i_4 < 13;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 15;i_5 += 1)
            {
                {
                    var_19 ^= (((var_9 ^ 0) ? ((((arr_2 [i_3] [i_4 - 1] [i_3 + 2]) > (arr_2 [i_4] [i_4 - 2] [i_3 + 1])))) : ((((arr_2 [i_5] [i_4 + 1] [i_3 + 2]) >= (arr_2 [i_4 + 2] [i_4 + 1] [i_3 + 1]))))));
                    var_20 = (arr_15 [i_5] [1] [i_5] [i_5]);
                    arr_16 [i_4] [i_4] [i_4] |= ((((arr_9 [i_3] [i_4 - 1]) << var_3)) != ((((var_7 ^ (arr_14 [i_4] [i_3 + 3] [i_5]))) % 536870912)));
                    arr_17 [1] [i_5] [3] [3] = (((((~(arr_5 [i_3 + 2])))) < 3758096385));
                }
            }
        }
    }
    var_21 &= var_8;
    var_22 = (-32767 - 1);
    #pragma endscop
}
