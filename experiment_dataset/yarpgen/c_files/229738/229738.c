/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229738
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229738 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229738
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    /* vectorizable */
    for (int i_0 = 2; i_0 < 16;i_0 += 1)
    {
        arr_3 [i_0] = ((~(~7863280073765667069)));
        var_17 = (!var_2);
    }
    var_18 -= ((-(max((min(12288, 10583463999943884546)), (!var_9)))));
    var_19 = (max((min((~var_4), -24190353)), (min((max(var_10, 1156433084)), ((max(var_13, 0)))))));
    var_20 = (min(var_20, (!var_10)));
    /* LoopNest 2 */
    for (int i_1 = 0; i_1 < 1;i_1 += 1)
    {
        for (int i_2 = 1; i_2 < 11;i_2 += 1)
        {
            {
                var_21 = (max(var_21, (min(((~(max((arr_4 [i_1] [i_1]), (arr_1 [i_1]))))), (((~(min(var_3, 23)))))))));
                /* LoopNest 2 */
                for (int i_3 = 4; i_3 < 12;i_3 += 1)
                {
                    for (int i_4 = 3; i_4 < 10;i_4 += 1)
                    {
                        {
                            arr_16 [i_3] [i_3 - 4] |= ((!(!1833847446)));
                            arr_17 [0] [i_2] [i_4] = 0;
                            var_22 = (max(var_22, ((min((!-var_4), (min((~5), (((!(arr_10 [i_4] [i_3] [i_3] [i_4 - 1])))))))))));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
