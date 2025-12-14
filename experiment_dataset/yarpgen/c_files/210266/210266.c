/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210266
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210266 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210266
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = ((min((((var_7 ? var_13 : 421526289))), (57435 | 17244968254734969221))));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    arr_7 [i_0] [i_1] [i_1] [i_1] = ((28 ? (((var_2 ? -28 : 6825))) : 8142605063150071584));

                    for (int i_3 = 0; i_3 < 11;i_3 += 1)
                    {
                        arr_10 [i_0] [i_0] [i_2] [i_0] = ((-(((-31885 & 7927911091255184422) / -7927911091255184423))));
                        arr_11 [8] [8] [i_1] [i_2] [i_3] &= (max(-28, 0));

                        for (int i_4 = 1; i_4 < 1;i_4 += 1)
                        {
                            var_15 = ((min(2147483647, -27)) > (8975843439179246611 || 34));
                            var_16 = 56;
                        }
                        arr_16 [i_0] [10] [i_0] [i_0] = (((min((arr_13 [i_1 - 1] [i_1 + 2] [i_1] [i_1 + 2] [i_1]), (arr_13 [i_1 - 1] [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_0]))) >= ((((!(arr_13 [i_1 - 1] [0] [6] [i_0] [i_0])))))));
                    }
                }
            }
        }
    }
    var_17 = (1004 >= var_0);
    #pragma endscop
}
