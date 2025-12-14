/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 51911
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=51911 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/51911
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 2; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                {
                    var_20 = ((-(~1619157671)));
                    var_21 = (((1954641060 < 1974434734) ? 442900691 : ((var_4 ? var_6 : 13583))));
                    var_22 = var_2;
                    var_23 = (max(var_23, ((((((-7443255973600011232 || 2573355836) != ((-1057304255062352918 * (arr_4 [i_0] [i_2] [i_1] [i_2]))))) ? ((max((!var_19), (var_1 * var_16)))) : (((max(-4480630357992983122, (arr_1 [i_0]))) << (arr_2 [i_1]))))))));
                    var_24 |= ((-(arr_1 [i_0 - 2])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 0; i_3 < 21;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 21;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 21;i_5 += 1)
            {
                {

                    for (int i_6 = 0; i_6 < 21;i_6 += 1) /* same iter space */
                    {
                        var_25 = ((var_16 % (max((((-4480630357992983122 + 9223372036854775807) << (((arr_10 [i_3] [i_5]) - 61)))), var_0))));
                        var_26 = var_6;
                        var_27 ^= (((arr_12 [i_3] [i_4] [i_5] [3] [i_4]) + ((max(-13624, (max(-2249, (arr_9 [i_3] [i_4] [7]))))))));
                    }
                    for (int i_7 = 0; i_7 < 21;i_7 += 1) /* same iter space */
                    {

                        for (int i_8 = 0; i_8 < 1;i_8 += 1)
                        {
                            var_28 = (min(var_28, ((((!(arr_8 [i_3] [i_5])))))));
                            var_29 += var_19;
                            var_30 = (arr_11 [i_3] [i_4]);
                        }
                        var_31 = 989127811059602097;
                        var_32 = ((((max((arr_13 [i_3] [i_3] [i_4] [i_5] [10] [i_7]), (arr_13 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7])))) || (arr_14 [i_3] [i_4] [i_5] [i_7])));
                    }

                    /* vectorizable */
                    for (int i_9 = 0; i_9 < 21;i_9 += 1)
                    {
                        var_33 = (((arr_8 [i_3] [i_3]) > (arr_13 [i_3] [i_4] [i_4] [i_5] [12] [i_9])));
                        var_34 = (max(var_34, (arr_9 [i_3] [i_3] [15])));
                    }
                    var_35 = (((arr_15 [i_3] [i_3] [i_3] [i_3] [i_3]) == ((((max(8930232504330111490, (arr_7 [i_3])))) ? (max(var_2, var_6)) : (4480630357992983122 & var_4)))));
                    var_36 = 8208523808157029809;
                    var_37 &= ((((min(((-(arr_16 [i_4] [i_4] [1]))), (((var_4 + 9223372036854775807) >> (((arr_15 [i_3] [i_3] [i_3] [i_4] [i_5]) + 75))))))) || ((((((-(arr_11 [i_4] [i_4])))) / (-4480630357992983140 - -127))))));
                }
            }
        }
    }
    #pragma endscop
}
