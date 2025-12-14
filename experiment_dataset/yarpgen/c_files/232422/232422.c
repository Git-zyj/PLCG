/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 232422
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=232422 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/232422
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 3; i_0 < 13;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 15;i_1 += 1)
        {
            {
                var_15 = ((((30085 == ((20189 ? -1199632195 : var_14)))) ? ((-(~var_0))) : ((((38 >= (~22138)))))));
                var_16 = (min((var_1 ^ 202), var_7));

                for (int i_2 = 1; i_2 < 14;i_2 += 1)
                {
                    arr_8 [i_1] [i_0] = 35;
                    arr_9 [i_0] = ((~(((arr_5 [i_2 + 1] [11] [i_2 + 1] [i_0]) & var_2))));
                }
                for (int i_3 = 1; i_3 < 13;i_3 += 1)
                {
                    arr_12 [i_0] [7] [i_0] = (((((!(arr_4 [i_0] [i_0 - 2] [i_0 - 1])))) / -var_13));
                    var_17 = (min((((87 ? (12 != 89) : (2305807824841605120 != var_14)))), (((arr_1 [i_0 - 1]) ? 18420651249225810665 : (((min(-22139, 22138))))))));
                }
                for (int i_4 = 1; i_4 < 12;i_4 += 1)
                {
                    var_18 |= ((var_14 % (((1 ? 65535 : (-32767 - 1))))));
                    arr_15 [i_0 + 1] [i_1] [i_1] [i_0] = (arr_6 [i_0] [i_1]);
                    var_19 = (min(var_19, ((((((var_10 - (arr_10 [i_4 - 1] [i_4 - 1] [0] [i_0 + 2])))) ? ((((arr_14 [i_4 - 1] [i_4 - 1] [2] [i_0 + 2]) & 66))) : ((var_0 ^ (arr_14 [i_4 - 1] [14] [i_4] [i_0 + 2]))))))));
                }
            }
        }
    }
    var_20 = var_5;
    var_21 = (min(var_6, var_10));
    var_22 = ((var_12 && (~var_0)));
    var_23 = var_13;
    #pragma endscop
}
