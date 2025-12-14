/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212717
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212717 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212717
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_16 = (((max((1 < var_0), var_4)) ? (min(-var_5, (var_11 || var_4))) : ((max((!var_3), (min(var_10, 1)))))));

    for (int i_0 = 1; i_0 < 8;i_0 += 1) /* same iter space */
    {
        var_17 = ((var_2 - (((((min(114, -9223372036854775781))) ? ((63 ? var_8 : var_0)) : ((((arr_0 [i_0 + 1]) ? 15728640 : (arr_0 [9])))))))));
        /* LoopNest 3 */
        for (int i_1 = 1; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 10;i_3 += 1)
                {
                    {
                        arr_11 [i_1] = (max(6813109755443255617, 7141122364953432118));
                        arr_12 [i_1] [i_1] [i_1] [i_1] [i_1] = (i_1 % 2 == zero) ? (((var_10 >> ((((-(arr_6 [i_0] [i_1] [i_1 + 1]))) + 8561))))) : (((var_10 >> ((((((-(arr_6 [i_0] [i_1] [i_1 + 1]))) + 8561)) - 19444)))));
                    }
                }
            }
        }
        /* LoopNest 3 */
        for (int i_4 = 1; i_4 < 6;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 1; i_6 < 8;i_6 += 1)
                {
                    {
                        var_18 *= ((-((((!(arr_19 [i_0] [i_6 - 1] [i_6 - 1] [i_6] [i_6 + 1])))))));
                        arr_21 [i_0 - 1] [i_5] [i_5] [i_6] = min(((var_4 ? (arr_3 [i_0]) : (arr_9 [i_0] [i_0] [i_5] [6] [i_5] [i_6 + 1]))), var_6);
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 8;i_7 += 1) /* same iter space */
    {
        arr_24 [i_7] = (!var_13);
        var_19 = -var_3;
        arr_25 [i_7 - 1] = ((-((132 % (arr_4 [i_7] [i_7] [i_7 - 1])))));
        var_20 = 114;
    }
    var_21 |= ((var_9 ? (((max(var_0, 103)))) : 1545747975));
    #pragma endscop
}
