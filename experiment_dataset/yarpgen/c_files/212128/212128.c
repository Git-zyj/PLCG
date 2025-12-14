/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212128
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212128 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212128
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 12;i_2 += 1)
            {
                {
                    arr_8 [i_0] [i_1] [i_2] = ((((~((var_2 + (arr_2 [i_0 + 2] [i_2]))))) > (max(1010923713, -52))));
                    var_19 = ((!(((-52 ? (arr_6 [i_2 + 1] [i_1] [i_0]) : 119)))));
                }
            }
        }
        arr_9 [i_0] = (min((125 - 52), (((arr_2 [i_0] [i_0]) | -1231051065))));
        arr_10 [i_0 - 4] [i_0] = ((((-(arr_3 [i_0 + 1]))) - (arr_0 [i_0 - 4] [i_0])));
        var_20 = (255 + 234);
        var_21 &= -233;
    }
    for (int i_3 = 1; i_3 < 16;i_3 += 1)
    {
        arr_13 [i_3] = (((233 & 127) ? ((-52 - (-2147483647 - 1))) : (arr_12 [i_3 - 1] [i_3 - 1])));
        arr_14 [i_3] [i_3] = (((((((arr_12 [i_3] [i_3]) != 73)))) || (arr_11 [i_3])));
    }
    for (int i_4 = 0; i_4 < 10;i_4 += 1)
    {
        var_22 = (min(((((max(0, (arr_18 [i_4])))) & (((arr_18 [i_4]) ? var_6 : (arr_4 [i_4] [i_4]))))), (max(((min((arr_16 [i_4] [i_4]), var_10))), (arr_7 [i_4] [i_4])))));
        arr_19 [i_4] = (((((-((20908 ? 57 : var_13))))) ? ((241 ? 237 : ((max((arr_0 [i_4] [i_4]), (arr_2 [i_4] [i_4])))))) : (min(-21421, -2147483647))));

        /* vectorizable */
        for (int i_5 = 2; i_5 < 7;i_5 += 1)
        {
            arr_22 [i_5] [i_5 - 1] = ((245 ? var_18 : (arr_7 [i_5 + 1] [i_5 + 3])));
            var_23 = (167 / -961069487);
        }
    }
    for (int i_6 = 0; i_6 < 10;i_6 += 1)
    {
        arr_25 [i_6] [i_6] = 167;
        /* LoopNest 2 */
        for (int i_7 = 0; i_7 < 10;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 10;i_8 += 1)
            {
                {
                    arr_31 [i_6] = (max((+-57), ((-((-(arr_16 [i_6] [i_7])))))));
                    var_24 = ((-167 ? ((((max(-13, 961069464))) ? ((min(var_14, -21432))) : (arr_28 [i_6] [i_7] [i_7] [i_8]))) : ((var_5 >> (((arr_27 [i_6] [i_7] [i_8]) - 95))))));
                    var_25 = (((((((min(137, 201))) ? ((-(arr_0 [i_8] [i_7]))) : ((40 ? 183 : (arr_18 [i_7])))))) ? (~182) : 31));
                }
            }
        }
        arr_32 [i_6] = -0;
        arr_33 [i_6] = ((((!(arr_7 [i_6] [i_6]))) ? (~109) : 137));
    }
    var_26 += ((-(min(31, -27))));
    #pragma endscop
}
