/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237210
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 0; i_0 < 14;i_0 += 1)
    {
        arr_3 [i_0] &= (max(251, ((-(arr_0 [i_0] [i_0])))));
        var_18 = ((0 >> (249 - 232)));
        var_19 = ((~((((var_6 ? 7 : 7)) | var_1))));
        arr_4 [i_0] [i_0] = var_12;
    }
    /* LoopNest 2 */
    for (int i_1 = 1; i_1 < 19;i_1 += 1)
    {
        for (int i_2 = 0; i_2 < 20;i_2 += 1)
        {
            {

                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_20 = (261954895 > -var_13);
                    var_21 = var_12;
                    var_22 = max((arr_10 [i_1 - 1] [i_1 + 1]), (var_8 / 57327));
                    var_23 ^= 2305843007066210304;
                }
                var_24 = (min((((arr_7 [i_1 + 1]) >> (((arr_10 [i_1 + 1] [i_1 - 1]) - 106)))), (((!(arr_7 [i_1 - 1]))))));
                var_25 ^= (max((arr_6 [i_2]), (((-261954895 % (arr_7 [i_1 + 1]))))));
            }
        }
    }
    #pragma endscop
}
