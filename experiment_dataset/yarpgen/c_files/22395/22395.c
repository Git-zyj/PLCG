/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22395
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 24;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 24;i_1 += 1)
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 24;i_2 += 1)
                {
                    for (int i_3 = 0; i_3 < 24;i_3 += 1)
                    {
                        {
                            arr_13 [i_0] [i_1] = max(9223372036854775790, (arr_11 [i_0] [i_1] [i_2] [i_0] [i_2]));
                            var_16 *= (1 ? ((-(!0))) : ((~(((!(arr_10 [i_0] [i_1] [10])))))));
                            arr_14 [1] [i_1] [i_0] [i_1] = -7728;
                            var_17 = ((!((((arr_9 [i_0] [i_0] [i_0]) ? (arr_10 [i_0] [0] [i_0]) : ((((arr_0 [i_0] [i_0]) ? 2556894037 : (arr_0 [21] [i_0])))))))));

                            for (int i_4 = 0; i_4 < 1;i_4 += 1)
                            {
                                var_18 = min((((-(((!(arr_7 [1] [i_3] [1]))))))), ((-(((arr_9 [i_4] [i_1] [i_0]) ? (arr_1 [i_0]) : 0)))));
                                arr_17 [i_0] [i_1] [i_2] [i_0] [i_2] [i_4] [i_3] &= (max(((!(arr_8 [i_0]))), ((!(arr_2 [i_0])))));
                                arr_18 [i_0] [i_1] [i_0] [23] [i_0] [i_0] [i_4] = ((((max(9223372036854775790, 2940508352))) ? ((((!(arr_8 [21]))) ? (((444511083 != (-9223372036854775807 - 1)))) : 4557)) : 44192));
                            }
                        }
                    }
                }
                var_19 = ((((!((!(arr_2 [i_0]))))) ? (arr_0 [i_0] [i_0]) : ((((arr_9 [i_0] [i_0] [i_0]) <= ((min(10214, 761485418))))))));
                arr_19 [10] [i_0] [i_1] = 3678568748061934711;
                var_20 += (!2784516070989852527);
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 16;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                arr_24 [i_5] [5] [i_6] = (((arr_9 [8] [i_5] [i_5]) % (arr_3 [i_5])));
                var_21 &= (((((arr_3 [i_5 + 1]) << (((arr_3 [i_5 + 2]) - 16362))))) || (((arr_3 [i_5 + 2]) != (arr_3 [i_5 + 2]))));
                var_22 &= ((-((917175228 ? (arr_15 [i_5 + 2] [i_5] [i_5] [i_5] [i_5] [6] [i_6]) : -2320470982777906927))));
            }
        }
    }
    #pragma endscop
}
