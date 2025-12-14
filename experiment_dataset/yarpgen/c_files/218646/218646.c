/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218646
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_14 = (min(((((((min(var_12, var_11)))) >= ((127 ? 1 : var_1))))), ((var_12 ? (!var_3) : 1480226488120193452))));
    var_15 = ((((((min(var_5, var_5))) != ((var_3 ? 0 : 197)))) ? ((min(var_1, -19))) : 16456118914025777117));
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 1;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            for (int i_2 = 3; i_2 < 13;i_2 += 1)
            {
                {
                    var_16 = (max(var_16, (~var_13)));
                    arr_9 [i_2 + 4] [i_2 - 1] [i_2 + 2] [i_2 - 1] = (((((((1 ? 1 : 100))) || (arr_8 [i_2 + 3] [i_2] [i_2 + 3] [i_2 + 3]))) ? ((((!(((1 ? var_9 : var_9))))))) : ((var_0 ? (arr_0 [i_0]) : (((var_9 ? (arr_7 [i_0] [4] [i_2] [i_2 - 3]) : (arr_5 [i_0] [i_1] [i_2 - 2]))))))));
                }
            }
        }
    }
    var_17 = (((((var_2 ? (var_4 % var_13) : (var_9 != 1)))) ? var_7 : (~959060638914210775)));
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 20;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 19;i_4 += 1)
        {
            {
                var_18 *= -4924546236353003571;
                var_19 = (min(var_19, ((min(((-14393 ? 0 : 1)), ((-((max(14394, var_4))))))))));
                arr_16 [i_3] [i_3] = ((((1 % (arr_15 [i_3] [i_3] [i_4 - 1]))) >= (((((arr_14 [i_4 + 1] [i_3]) <= (arr_13 [i_3]))) ? var_6 : (arr_15 [i_4 + 1] [i_4 + 1] [i_3])))));

                /* vectorizable */
                for (int i_5 = 0; i_5 < 20;i_5 += 1) /* same iter space */
                {
                    /* LoopNest 2 */
                    for (int i_6 = 1; i_6 < 17;i_6 += 1)
                    {
                        for (int i_7 = 0; i_7 < 20;i_7 += 1)
                        {
                            {
                                arr_23 [i_7] [i_7] [i_5] [i_5] [i_5] = ((-(((arr_12 [i_3]) ? 14410 : 1))));
                                arr_24 [i_3] [16] [i_5] [i_7] [i_6 + 3] [i_7] = ((-(arr_13 [i_6 + 3])));
                                var_20 = (19 - 1497996692610821503);
                            }
                        }
                    }
                    arr_25 [i_3] [i_3] [i_4] = 1972486073;
                }
                /* vectorizable */
                for (int i_8 = 0; i_8 < 20;i_8 += 1) /* same iter space */
                {
                    arr_29 [i_3] [i_4 + 1] [i_8] = (((arr_28 [7] [i_4] [i_8]) ? (arr_10 [i_3] [i_4 - 1]) : 1));
                    arr_30 [i_3] [i_3] [i_3] = (((arr_10 [i_4 - 1] [i_4 - 1]) ? (((arr_28 [i_8] [i_4 + 1] [i_3]) | 35)) : (((~(arr_11 [i_4] [i_4]))))));
                    var_21 = (((arr_17 [i_3] [i_4 - 1] [i_4 - 1]) <= (arr_28 [i_3] [i_4] [i_4 - 1])));
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 20;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 20;i_10 += 1)
                    {
                        {
                            arr_36 [i_3] [i_3] [i_3] [i_3] [i_10] &= ((((((arr_12 [i_9]) > var_13))) < var_10));
                            arr_37 [i_3] [i_9] = (((arr_32 [i_4] [i_9] [i_4]) != (~14816994385149420759)));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
