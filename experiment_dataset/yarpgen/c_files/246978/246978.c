/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246978
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246978 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246978
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_15 = (min(var_15, var_6));
    var_16 = 0;
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 18;i_2 += 1)
            {
                {
                    var_17 = (((((min(56, 1)))) || (!-27)));
                    var_18 = (((((((max(4075889475, 53))) < var_7))) * (arr_5 [i_0] [i_0] [i_0] [i_2])));
                    arr_8 [i_2] = (((53 ? (((var_3 ? (arr_0 [16] [i_1]) : (arr_4 [i_1])))) : ((var_5 ^ (arr_0 [i_0] [i_0]))))));
                    var_19 = ((((((!(arr_4 [i_0]))))) ? (((!var_2) ? (((~(arr_5 [i_0] [i_1] [i_0] [6])))) : (min(-311829424, var_0)))) : (arr_1 [i_0])));
                }
            }
        }
    }
    /* LoopNest 3 */
    for (int i_3 = 3; i_3 < 16;i_3 += 1)
    {
        for (int i_4 = 0; i_4 < 20;i_4 += 1)
        {
            for (int i_5 = 0; i_5 < 20;i_5 += 1)
            {
                {
                    /* LoopNest 2 */
                    for (int i_6 = 0; i_6 < 20;i_6 += 1)
                    {
                        for (int i_7 = 1; i_7 < 17;i_7 += 1)
                        {
                            {
                                var_20 &= -1;
                                var_21 = (max(var_21, ((min(((~((((arr_20 [18]) > var_11))))), ((((((32767 ? 56 : var_1))) || ((((arr_16 [14]) ? 14594178371520773564 : (arr_10 [i_3]))))))))))));
                                var_22 = 54;
                            }
                        }
                    }
                    arr_26 [i_3] [i_3] = var_13;
                    arr_27 [i_3] [i_3] [16] = ((!(((~(arr_9 [i_3]))))));

                    for (int i_8 = 0; i_8 < 20;i_8 += 1)
                    {
                        var_23 = (arr_16 [i_3]);
                        var_24 = var_10;
                        arr_30 [1] [i_3] [i_3] [i_8] = (min((~var_8), (((((((arr_5 [i_8] [i_3 - 2] [i_3 - 2] [i_3 - 2]) >> (((arr_21 [18]) - 8220702046011913457))))) && (arr_2 [i_3 - 2] [i_3 + 2]))))));
                    }
                    for (int i_9 = 0; i_9 < 20;i_9 += 1) /* same iter space */
                    {
                        var_25 *= ((-(arr_31 [15] [i_4] [15] [14] [i_5] [i_9])));
                        var_26 = (((~(((var_14 == (arr_1 [i_4])))))));
                    }
                    /* vectorizable */
                    for (int i_10 = 0; i_10 < 20;i_10 += 1) /* same iter space */
                    {
                        arr_37 [0] [0] [i_10] [i_10] &= var_6;
                        arr_38 [i_3] [i_4] [i_4] [i_4] [i_4] = ((arr_25 [i_3]) != ((((arr_9 [i_3]) & 56))));
                        var_27 = (max(var_27, (~var_10)));
                    }
                    /* LoopNest 2 */
                    for (int i_11 = 0; i_11 < 20;i_11 += 1)
                    {
                        for (int i_12 = 3; i_12 < 18;i_12 += 1)
                        {
                            {
                                var_28 &= (((~203) ? (max(((min((arr_28 [i_12] [i_11] [i_4] [i_3]), 38648))), 12245340704881569829)) : ((((arr_44 [i_12] [i_12 + 1] [i_12 - 2] [12] [i_12] [i_12]) ? var_13 : (arr_43 [i_12] [i_12 + 1] [i_12 - 2] [i_12] [i_12 - 2] [i_12]))))));
                                var_29 = var_1;
                                var_30 = (((((-(((!(arr_3 [i_5]))))))) ? ((-((42897 ? 32767 : 1)))) : (((((var_12 ? var_1 : 14594178371520773564))) ? (0 || 44) : ((((arr_28 [i_12] [10] [i_4] [i_3]) > var_6)))))));
                                arr_45 [i_3 + 4] [i_4] [i_5] [i_11] [i_3] [i_5] [i_3] = (((1 ? 127 : 11809692511773137102)));
                            }
                        }
                    }
                }
            }
        }
    }
    var_31 = (42897 && 56);
    #pragma endscop
}
