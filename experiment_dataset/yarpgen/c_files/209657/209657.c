/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209657
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209657 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209657
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 3; i_0 < 23;i_0 += 1)
    {
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 23;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 25;i_3 += 1)
                {
                    {
                        var_19 -= (min(((((arr_4 [i_0]) / (max((arr_8 [i_0 - 3] [i_0 - 3]), (arr_4 [0])))))), (max((15 / var_10), 5772))));
                        var_20 ^= 84;
                    }
                }
            }
        }
        /* LoopNest 2 */
        for (int i_4 = 3; i_4 < 22;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 25;i_5 += 1)
            {
                {
                    var_21 = (min(((~(min((arr_11 [i_0] [i_0] [13]), (arr_6 [i_0] [i_0] [i_0 - 2]))))), ((min(-var_10, (((0 ? (arr_13 [i_0]) : (arr_0 [i_0] [i_0])))))))));
                    var_22 = ((((~(arr_14 [8] [i_4 - 1] [i_4 + 1] [i_0 - 1])))) ? 2 : ((max((arr_1 [i_0 + 2]), -8522))));
                    var_23 = (min(var_23, (((127 ? (arr_9 [i_5] [i_4] [i_0 + 2] [i_4 + 1] [i_0 + 2] [i_0 + 2]) : (((arr_6 [i_5] [19] [i_0 - 3]) ? ((((var_18 + 2147483647) >> 3))) : -1048575)))))));
                }
            }
        }
    }
    for (int i_6 = 4; i_6 < 22;i_6 += 1)
    {
        var_24 = ((-(~87)));
        var_25 = ((((((arr_17 [i_6 - 3]) ^ 0))) ? (((min((arr_17 [i_6 - 1]), (arr_17 [i_6 + 2]))))) : -8322278985794997234));
        var_26 ^= (((arr_14 [i_6] [i_6] [i_6] [12]) == ((((((-(arr_13 [1])))) <= (max(536870911, 1)))))));
    }
    for (int i_7 = 1; i_7 < 13;i_7 += 1)
    {
        var_27 = 255;
        var_28 = 126;
    }
    var_29 = ((!(11853 && 3627703448)));
    var_30 &= var_17;
    #pragma endscop
}
