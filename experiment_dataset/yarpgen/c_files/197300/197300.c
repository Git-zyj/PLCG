/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197300
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197300 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197300
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 -= ((63 ? 936762716 : 63607));
    /* LoopNest 2 */
    for (int i_0 = 1; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 3; i_1 < 16;i_1 += 1)
        {
            {

                for (int i_2 = 1; i_2 < 17;i_2 += 1)
                {
                    var_14 = (min((((!(((34 ? (arr_6 [i_0] [i_0] [i_0] [i_0]) : -13)))))), ((((25 ? var_12 : (arr_5 [i_1 + 2] [i_1]))) / ((((arr_3 [i_0] [i_0] [i_0]) ? var_5 : 12)))))));
                    var_15 = (min(var_15, (13 / 12)));
                    arr_9 [i_1] [i_1] = (45801 ? 29 : -13);
                }
                /* vectorizable */
                for (int i_3 = 0; i_3 < 20;i_3 += 1)
                {
                    var_16 = (max(var_16, ((((arr_5 [i_0 + 1] [i_0 + 1]) << (((arr_2 [i_1]) - 1488443084166818474)))))));
                    arr_13 [i_0 + 1] [i_3] = (((!5860472596449394403) ? 137438953344 : var_3));
                }

                for (int i_4 = 2; i_4 < 18;i_4 += 1)
                {
                    arr_18 [i_0 + 1] = (max((arr_0 [i_0 - 1] [i_0 - 1]), (((arr_11 [i_1] [i_1 + 4]) >> ((((-137438953322 ? (arr_3 [i_0 - 1] [i_0 - 1] [i_0 - 1]) : 16719180197108937511)) - 4011364816169391146))))));
                    var_17 *= ((((28 ? 10806 : 16))) != (max((((!(arr_16 [1] [i_1 - 2] [5])))), 14344)));
                }
                for (int i_5 = 4; i_5 < 19;i_5 += 1)
                {
                    var_18 = (min(var_18, (arr_12 [i_0] [i_1 - 2] [14] [14])));
                    var_19 = (max((arr_12 [i_0] [8] [i_0] [i_0]), (min(1727563876600614104, (arr_15 [i_0] [i_0 - 1] [i_0] [i_0 + 1])))));
                    var_20 = (((arr_19 [i_1] [i_1] [i_5 - 1] [i_1]) | (max((arr_19 [7] [7] [i_5 - 2] [i_5]), -50))));
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_27 [i_0] [i_0] [i_6] [i_0 - 1] = (((arr_6 [i_7] [i_6] [i_5 + 1] [i_1 + 3]) - (arr_7 [i_5 - 4] [i_0 - 1])));
                                var_21 = (arr_8 [1] [i_1 - 1]);
                                var_22 += ((-(((var_9 && (arr_21 [i_1 - 2]))))));
                            }
                        }
                    }
                    var_23 = ((var_4 ? ((min(12265876097858559683, 12))) : ((~(min(1727563876600614105, -13))))));
                }
            }
        }
    }
    var_24 = (~var_11);
    /* LoopNest 3 */
    for (int i_8 = 0; i_8 < 17;i_8 += 1)
    {
        for (int i_9 = 0; i_9 < 1;i_9 += 1)
        {
            for (int i_10 = 1; i_10 < 15;i_10 += 1)
            {
                {
                    var_25 = ((((2660583563941737311 ? 137438953344 : 1727563876600614103))) ? (arr_3 [i_8] [i_8] [i_10]) : (max((!127), ((1727563876600614105 ? (arr_29 [i_10 + 1]) : (arr_28 [i_8] [i_8]))))));
                    var_26 |= 127;
                }
            }
        }
    }
    var_27 = ((77 - ((-16719180197108937511 ? (~var_8) : var_3))));
    #pragma endscop
}
