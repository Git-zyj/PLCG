/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229857
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229857 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229857
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 25;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 25;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 2; i_2 < 23;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 25;i_3 += 1)
                    {
                        {

                            for (int i_4 = 0; i_4 < 25;i_4 += 1)
                            {
                                var_12 = var_7;
                                var_13 &= ((-((3754525550039646102 ? (arr_12 [9] [i_2 - 2] [i_2] [i_2 - 1]) : (arr_8 [i_0] [i_0] [i_1] [i_1] [i_0] [i_0])))));
                                var_14 = max((((arr_2 [i_2 - 2] [i_2 - 2]) % (arr_2 [i_2 - 1] [i_2 + 1]))), (14106102826160019346 && 0));
                            }
                            for (int i_5 = 0; i_5 < 25;i_5 += 1) /* same iter space */
                            {
                                arr_16 [0] [i_0] [i_0] [i_0] [3] = ((-3873709896959399914 | (arr_2 [i_5] [i_5])));
                                arr_17 [7] [i_0] = max(((((21317 >= -3873709896959399914) ^ 1370662728))), (4294967286 | var_3));
                                var_15 &= (((~(arr_7 [i_0] [i_0] [i_2] [i_3] [i_5]))));
                                var_16 = var_8;
                            }
                            for (int i_6 = 0; i_6 < 25;i_6 += 1) /* same iter space */
                            {
                                arr_21 [i_0] [i_0] [i_0] [i_0] [i_0] = ((1722959974 || (((arr_11 [i_0] [i_2] [i_2] [i_2 + 2] [i_2 + 1]) || var_10))));
                                var_17 = ((var_5 > (!var_9)));
                                arr_22 [i_1] [i_1] [i_0] = 27813;
                            }

                            for (int i_7 = 0; i_7 < 25;i_7 += 1)
                            {
                                var_18 = ((+(max((arr_7 [i_0] [i_1] [i_2 - 2] [i_2 + 2] [i_2 - 2]), -4))));
                                var_19 = (((var_10 && (arr_4 [i_0] [i_3]))) ? (arr_4 [i_0] [i_3]) : (arr_4 [i_0] [i_7]));
                            }
                            /* vectorizable */
                            for (int i_8 = 2; i_8 < 24;i_8 += 1)
                            {
                                var_20 = (min(var_20, (((5184833618774680754 > (arr_11 [i_1] [i_1] [i_1] [i_3] [i_1]))))));
                                arr_30 [i_8] [i_8] [17] [i_3] [i_0] [i_0] = (((arr_28 [i_1] [i_0] [i_1] [i_1] [i_1]) ? -878098273 : (!21310)));
                            }
                        }
                    }
                }
                var_21 = ((124145552 ? ((((-5380502329180753386 ? var_9 : var_8)))) : ((var_0 ^ (((var_4 ? (arr_14 [i_0] [i_1] [i_1] [i_0]) : 0)))))));
                var_22 += ((-((~(arr_0 [i_1])))));
            }
        }
    }
    var_23 = 4949;
    var_24 = ((~(var_11 == 4241821446)));
    #pragma endscop
}
