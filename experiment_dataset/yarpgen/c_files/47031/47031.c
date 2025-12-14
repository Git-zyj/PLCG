/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47031
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 12;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 1;i_2 += 1)
            {
                {
                    var_19 = (max(var_19, ((max((((arr_2 [i_2]) ? (arr_2 [i_2]) : (arr_2 [i_2]))), (21 <= 22269))))));
                    arr_9 [i_2] [i_1] [i_0] = ((!(((-13478 ? (arr_4 [i_1] [i_1] [i_1]) : (arr_7 [i_1] [i_2] [i_1] [i_1]))))));
                }
            }
        }
    }
    var_20 = 1;
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 1;i_4 += 1)
        {
            {
                var_21 = ((arr_14 [i_3]) || ((((((arr_6 [i_4]) > var_10))) <= (arr_4 [6] [i_3] [6]))));
                /* LoopNest 2 */
                for (int i_5 = 0; i_5 < 1;i_5 += 1)
                {
                    for (int i_6 = 0; i_6 < 11;i_6 += 1)
                    {
                        {
                            var_22 = (min(1, 13478));
                            var_23 = min(13486, (min((arr_12 [0]), (arr_12 [i_5]))));
                        }
                    }
                }
                arr_19 [i_3] [i_3] [i_3] |= (max(13486, (((var_17 >= (arr_3 [i_3] [i_4] [i_4]))))));
            }
        }
    }
    var_24 = (((13478 ? 52049 : 52048)));
    var_25 = var_4;
    #pragma endscop
}
