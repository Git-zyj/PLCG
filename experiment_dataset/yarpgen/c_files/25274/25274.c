/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25274
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25274 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25274
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 -= ((1062247561 ? (max(var_10, -3380043870594640597)) : var_10));
    var_12 = var_2;

    for (int i_0 = 0; i_0 < 12;i_0 += 1)
    {
        arr_2 [i_0] &= (((-1062247567 ? (arr_0 [i_0]) : var_3)));
        arr_3 [i_0] = ((~(((((((arr_1 [i_0]) | (arr_1 [i_0])))) == (arr_0 [i_0]))))));
    }
    for (int i_1 = 1; i_1 < 17;i_1 += 1)
    {
        var_13 -= 0;
        var_14 = (arr_5 [i_1] [i_1]);
        arr_6 [i_1] = (((-(arr_5 [i_1 - 1] [i_1 + 1]))));
        var_15 = (((((-3 ? -1062247562 : (arr_4 [i_1 + 1])))) ? 11179895225314748089 : 4051164049368670237));
    }
    for (int i_2 = 0; i_2 < 24;i_2 += 1) /* same iter space */
    {
        var_16 = (max(var_16, ((((1062247542 ? 11179895225314748060 : (arr_8 [i_2] [i_2])))))));
        /* LoopNest 3 */
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            for (int i_4 = 0; i_4 < 24;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 24;i_5 += 1)
                {
                    {
                        arr_19 [i_5] |= (!var_9);
                        arr_20 [i_2] [i_2] [i_3] [i_3] [i_4] [i_5] = (arr_10 [i_2]);
                        arr_21 [i_5] = -1062247575;
                    }
                }
            }
        }
    }
    for (int i_6 = 0; i_6 < 24;i_6 += 1) /* same iter space */
    {
        arr_25 [i_6] = (((arr_23 [i_6]) ? ((55573 * (arr_23 [i_6]))) : (((arr_23 [i_6]) ? (arr_23 [i_6]) : 142))));
        var_17 = (((min(118, (arr_15 [i_6] [i_6] [i_6] [i_6])))));
    }
    var_18 = (45 && -1749822854);
    /* LoopNest 3 */
    for (int i_7 = 1; i_7 < 15;i_7 += 1)
    {
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 17;i_9 += 1)
            {
                {
                    var_19 |= var_8;
                    var_20 = (min(((17499910514316861571 ? (arr_29 [i_7 + 2]) : (arr_16 [i_7] [i_8] [i_9] [i_9] [i_9] [i_7]))), (((!(arr_29 [i_7 + 1]))))));
                }
            }
        }
    }
    #pragma endscop
}
