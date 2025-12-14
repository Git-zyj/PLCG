/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 228622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=228622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/228622
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (max(-9082, -50866377));

    for (int i_0 = 0; i_0 < 10;i_0 += 1)
    {

        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {

            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                arr_7 [i_0] [i_0] [i_1] [i_0] = ((-50866376 ? 50866377 : 50866382));
                arr_8 [i_0] [i_1 - 2] [i_0] [i_2] = (((((((max((arr_2 [0] [i_2]), (arr_3 [i_1])))) * (min(50866376, (arr_6 [6])))))) ? ((min((arr_6 [5]), -50866377))) : (arr_0 [i_0])));
                var_16 = -50866377;
            }
            for (int i_3 = 0; i_3 < 10;i_3 += 1)
            {
                arr_12 [i_0] [i_0] [i_0] &= (arr_2 [i_1] [i_1]);
                arr_13 [i_3] [i_3] = (arr_9 [i_1] [6]);
                arr_14 [3] [i_1] [i_0] = (((((arr_4 [1]) >= (arr_1 [i_0])))));
            }
            arr_15 [i_0] = (min((((arr_6 [i_1]) ? (arr_5 [i_0] [i_1 - 1] [i_0]) : (min((arr_6 [i_0]), 50866375)))), ((min((((!(arr_4 [i_0])))), (min((arr_5 [i_0] [i_1] [i_0]), (arr_5 [i_1] [i_1] [i_0]))))))));

            for (int i_4 = 0; i_4 < 10;i_4 += 1)
            {

                for (int i_5 = 0; i_5 < 10;i_5 += 1) /* same iter space */
                {
                    var_17 |= (min((((min((arr_0 [i_5]), (arr_11 [i_5]))))), (arr_9 [i_1] [i_5])));
                    var_18 = (min((max((arr_16 [i_1 - 2] [i_1 + 1] [i_1 + 1] [i_4]), (arr_5 [i_1 - 2] [i_1 + 1] [i_1 + 1]))), (-50866376 == 50866376)));
                }
                for (int i_6 = 0; i_6 < 10;i_6 += 1) /* same iter space */
                {
                    var_19 = (((!-50866376) ^ (arr_2 [i_0] [i_4])));

                    for (int i_7 = 0; i_7 < 10;i_7 += 1) /* same iter space */
                    {
                        arr_27 [i_0] [i_4] [i_1] [i_1] [i_6] [i_7] = (((max((min((arr_18 [i_6] [i_4]), (arr_10 [1] [i_1 + 1] [i_4] [i_6]))), ((max((arr_19 [i_4]), (arr_3 [i_4])))))) << (-50866377 + 50866395)));
                        var_20 = ((((arr_22 [i_0] [i_4] [i_4] [i_4] [i_6] [i_4]) ? ((((arr_18 [i_0] [i_4]) || (arr_2 [i_7] [i_7])))) : (min(-50866377, 50866374)))));
                        var_21 = (min((((min((arr_9 [i_0] [i_0]), -50866359)))), ((((arr_6 [i_0]) ? -50866376 : -50866376)))));
                    }
                    for (int i_8 = 0; i_8 < 10;i_8 += 1) /* same iter space */
                    {
                        var_22 = (max(((min(((max((arr_26 [3] [i_6] [i_4] [i_4] [1] [1]), (arr_0 [i_0])))), (((arr_29 [i_1] [i_1] [i_1] [i_4] [i_1]) ? (arr_17 [i_4]) : -50866372))))), (arr_2 [2] [i_4])));
                        var_23 = (((max((arr_29 [i_1 - 2] [i_4] [i_1 + 1] [i_4] [i_1]), (arr_26 [i_1 - 2] [i_1] [i_4] [i_4] [i_1] [i_1]))) / ((min(50866383, (50866356 & 50866376))))));
                    }
                }
                arr_30 [i_4] [i_4] [i_4] = (max((arr_0 [i_0]), (arr_17 [i_4])));
                arr_31 [i_4] [i_4] [i_4] = ((min((arr_6 [i_1]), 50866376)));
            }
        }
        var_24 -= (min(-50866377, 50866394));
        var_25 -= (min((min(((min((arr_9 [0] [0]), (arr_10 [i_0] [i_0] [i_0] [i_0])))), (min((arr_25 [i_0] [i_0] [6] [i_0] [i_0]), (arr_1 [i_0]))))), (min(((((arr_17 [6]) >> (((arr_2 [i_0] [i_0]) - 56377))))), (max((arr_16 [i_0] [i_0] [i_0] [8]), (arr_25 [i_0] [i_0] [0] [8] [i_0])))))));
    }
    var_26 |= ((((min(var_6, -50866376)) == var_2)));
    #pragma endscop
}
