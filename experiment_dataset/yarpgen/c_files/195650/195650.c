/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195650
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195650 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195650
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_10 = (max(var_10, ((min((~939524096), ((~((783022983 ? 127 : var_9)))))))));
    var_11 = ((var_1 == (((var_2 + 9223372036854775807) >> (!var_5)))));
    var_12 = (max(var_12, (((~(~var_2))))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                {
                    var_13 = (!var_8);
                    arr_9 [8] [i_1] = ((-(arr_6 [i_0] [i_2 - 1])));
                    arr_10 [i_0] [i_1] [18] [17] = -2147483641;
                    arr_11 [1] [i_1] [i_2] [i_2] = (max(var_8, (((!((!(arr_6 [i_0] [4]))))))));
                    var_14 = (max((arr_2 [i_2 - 1]), 4477986154030524289));
                }
            }
        }
    }
    #pragma endscop
}
