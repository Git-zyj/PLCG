/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49018
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49018 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49018
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        arr_4 [i_0] = ((-((1568661888 - (var_3 >= var_2)))));
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 23;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 23;i_2 += 1)
            {
                {
                    arr_9 [i_0] = ((((max((var_4 - -6831313041695218483), (arr_2 [10])))) ? 1568661888 : (var_6 == var_0)));
                    arr_10 [i_0] = ((~var_10) ^ (~26684));
                    arr_11 [i_1] [i_1] [i_1] = (((((arr_5 [i_0]) <= var_0)) ? ((((var_0 ^ 0) & -2936015440))) : ((min(1066065210, -6831313041695218483)))));
                }
            }
        }
        arr_12 [i_0] = -1;
    }

    for (int i_3 = 1; i_3 < 14;i_3 += 1)
    {
        arr_15 [i_3] = var_6;
        arr_16 [i_3] = (((1568661888 / 277423415991535210) ? (((var_8 != (((-(arr_14 [i_3] [i_3]))))))) : (max(47, ((8388608 ? 0 : var_9))))));
    }
    #pragma endscop
}
