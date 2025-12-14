/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 190364
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=190364 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/190364
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_12 ^= (max(-637042005, (min(((max(-38, 214564324))), 15))));
    var_13 = var_0;
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 16;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 16;i_1 += 1)
        {
            {
                arr_7 [i_0] [i_0] [i_0] = ((((417835673458715340 ? (arr_5 [i_0]) : var_11))));
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 16;i_2 += 1)
                {
                    for (int i_3 = 1; i_3 < 15;i_3 += 1)
                    {
                        {
                            arr_12 [i_0] [i_3] [i_2] [i_1] [8] [i_0] = ((((max(((1 ? 3118340980 : 930)), ((((-364711355 + 2147483647) >> (167 - 160))))))) ? ((((((var_2 ? var_8 : 121))) ? (arr_0 [i_3 - 1] [i_3]) : (((!(arr_11 [0] [0]))))))) : ((~(((arr_10 [i_0] [i_1] [1] [i_1]) & var_2))))));
                            arr_13 [i_0] [i_0] [i_1] [5] [i_3] = (arr_0 [i_3] [4]);
                        }
                    }
                }
            }
        }
    }
    var_14 += (min((((!(((0 ? var_4 : var_0)))))), var_10));
    /* LoopNest 2 */
    for (int i_4 = 0; i_4 < 12;i_4 += 1)
    {
        for (int i_5 = 0; i_5 < 12;i_5 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_6 = 2; i_6 < 11;i_6 += 1)
                {
                    for (int i_7 = 0; i_7 < 12;i_7 += 1)
                    {
                        {
                            var_15 = 202811508;
                            var_16 = (arr_20 [i_4] [i_5] [i_5] [i_5]);
                            arr_28 [i_4] [i_5] [i_5] [i_7] = (min((((arr_16 [i_5] [i_5] [i_6 - 2]) ? var_6 : (arr_16 [i_5] [i_5] [i_6 - 1]))), 3387605047));
                            arr_29 [10] [i_6] [i_5] [i_5] [i_4] = ((+((min((arr_24 [i_4] [i_5] [i_6] [i_6 - 2]), (arr_24 [i_4] [i_5] [i_6 - 1] [i_7]))))));
                        }
                    }
                }
                arr_30 [i_5] [i_5] = (max(1, (min(((((-1538210515 + 2147483647) >> (-1 + 11)))), (((arr_21 [i_5] [i_5] [i_5] [i_5]) ? 225 : var_2))))));
                arr_31 [i_5] [i_5] [i_4] = (arr_23 [i_5] [i_5] [i_4]);
            }
        }
    }
    #pragma endscop
}
