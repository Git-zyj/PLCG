/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209761
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209761 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209761
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 4; i_1 < 11;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 12;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 12;i_3 += 1)
                    {
                        {
                            arr_10 [i_0] [i_0] [i_0] [i_0] = 65529;
                            var_17 = (max(var_17, (((!((!((min(var_0, 1487573221))))))))));
                            arr_11 [i_0] [i_0] [i_2] [i_3] |= ((!((min((arr_9 [i_2] [i_2] [i_2] [i_2]), (arr_6 [i_0] [i_0] [i_0] [i_0]))))));
                        }
                    }
                }
                var_18 = (min(var_18, ((((arr_3 [i_0] [i_0]) == (max(529296403, (arr_3 [i_0] [i_1]))))))));
            }
        }
    }
    var_19 = 28;
    var_20 |= ((~(21 < -1)));
    #pragma endscop
}
