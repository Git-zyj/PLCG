/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193313
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193313 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193313
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_15 *= (arr_0 [i_1] [i_1]);
                var_16 += ((2405638416361252263 == (((max((arr_0 [i_1] [i_0]), var_9))))));
                arr_5 [i_0] [i_0] [i_0] = (((((707533114 / (arr_1 [i_1])))) % (max((arr_2 [i_0]), (max(16041105657348299353, 16041105657348299355))))));
            }
        }
    }
    /* LoopNest 3 */
    for (int i_2 = 0; i_2 < 25;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 25;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 25;i_4 += 1)
            {
                {

                    for (int i_5 = 0; i_5 < 25;i_5 += 1)
                    {
                        arr_15 [22] = ((((max(((min((arr_9 [i_3] [i_3] [14]), var_7))), (arr_11 [i_3] [i_3])))) + (((((-(arr_13 [i_2] [i_2] [i_5])))) ? (((arr_12 [4] [22] [i_4]) >> (104 - 104))) : (((((arr_14 [i_2] [i_2]) < 32767))))))));
                        var_17 = ((((arr_6 [i_5] [i_5]) / ((var_4 ? 45196274747791227 : (arr_9 [10] [i_3] [i_5]))))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_18 = (max(var_18, ((max((min((max((arr_17 [i_2] [i_3] [i_2] [i_6]), 90)), (arr_7 [i_4]))), ((min(((-114 % (arr_6 [i_6] [i_4]))), (arr_11 [7] [24])))))))));
                        var_19 = 17488;
                    }
                    var_20 = (min((-125 & var_9), (-18795 * 16041105657348299330)));
                    var_21 &= (arr_17 [i_2] [i_2] [1] [i_2]);
                }
            }
        }
    }
    var_22 = (max(var_22, var_4));
    /* LoopNest 2 */
    for (int i_7 = 0; i_7 < 16;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 16;i_8 += 1)
        {
            {
                var_23 = (max((arr_8 [i_8]), (((arr_16 [i_7] [i_7] [17] [i_8]) - (((arr_12 [i_7] [i_8] [1]) - (arr_9 [i_8] [13] [1])))))));
                var_24 = (((((arr_19 [i_8]) ? (arr_19 [i_7]) : (arr_12 [i_7] [2] [i_7]))) * (arr_19 [i_7])));
                var_25 -= (max((max((((3175279976 && (arr_8 [i_8])))), (-32453 ^ var_5))), (arr_14 [14] [17])));
            }
        }
    }
    #pragma endscop
}
