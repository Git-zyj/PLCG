/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237583
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237583 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237583
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((~(~var_6)));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 17;i_1 += 1)
        {
            {

                /* vectorizable */
                for (int i_2 = 1; i_2 < 13;i_2 += 1)
                {
                    arr_11 [i_2] [i_1] = (((arr_7 [i_2] [i_2 + 1] [i_2 + 4] [i_2]) ? (arr_7 [i_2] [i_2 + 2] [i_2 + 2] [i_2]) : (arr_7 [i_2] [i_2 - 1] [i_2 + 2] [i_2])));
                    arr_12 [i_2] [i_1] [i_2] = ((!(-32767 - 1)));
                    arr_13 [i_1] [i_1] [i_1] = ((-1 ? (arr_7 [i_2 + 4] [i_2 + 2] [i_2] [i_0]) : (arr_6 [i_2 - 1] [i_1] [i_2])));
                }
                arr_14 [i_0] [i_1] [i_1] = ((-(min((arr_3 [i_0]), (arr_8 [i_0] [i_0] [i_1] [i_1])))));
                arr_15 [i_0] [i_1] [i_1] = (((((((max((arr_2 [i_0]), (arr_0 [i_0])))) ? ((~(arr_4 [i_0] [i_0]))) : ((((arr_2 [i_0]) == (arr_3 [i_0]))))))) ? ((~((-(arr_6 [i_0] [i_1] [i_1]))))) : (arr_9 [i_0])));

                for (int i_3 = 0; i_3 < 17;i_3 += 1)
                {
                    arr_18 [i_0] [i_0] [i_0] [i_0] = (arr_3 [i_1]);
                    arr_19 [i_0] [i_1] [i_3] [i_1] = (((((((((arr_16 [i_0] [i_3]) ? (arr_9 [i_1]) : (arr_6 [i_0] [i_1] [i_3])))) == (arr_5 [i_3])))) << (((((((-(arr_1 [i_1] [i_0])))) ? ((-(arr_5 [i_3]))) : ((((!(-9223372036854775807 - 1))))))) - 8198307010245570392))));
                    arr_20 [i_1] [i_0] = ((((((arr_8 [i_0] [i_3] [i_3] [i_3]) | (arr_8 [i_0] [i_0] [i_1] [i_3])))) ? ((((arr_8 [i_0] [i_3] [i_3] [i_1]) <= (arr_8 [i_0] [i_3] [i_3] [i_3])))) : (((arr_8 [i_3] [i_3] [i_3] [i_0]) ? (arr_8 [i_0] [i_1] [i_0] [i_0]) : (arr_8 [i_0] [i_0] [i_3] [i_3])))));
                    arr_21 [i_3] = (((((-(arr_9 [i_3])))) <= (((((arr_16 [i_0] [i_1]) == (arr_0 [i_0]))) ? ((-9223372036854775807 ? 13107474308493456630 : 107)) : (arr_4 [i_0] [i_3])))));
                }
                for (int i_4 = 0; i_4 < 17;i_4 += 1)
                {
                    arr_24 [i_0] [i_1] [i_4] = ((-((min((arr_3 [i_0]), (arr_3 [i_1]))))));
                    arr_25 [i_0] [i_0] = ((-((((((arr_1 [i_0] [i_1]) >> (((arr_4 [i_0] [i_1]) - 2469)))) >= (((min(107, 1)))))))));
                }
                for (int i_5 = 0; i_5 < 17;i_5 += 1)
                {
                    arr_28 [i_0] [i_0] [i_1] [i_5] = (((arr_22 [i_0] [i_0] [i_0]) ? ((((min((arr_23 [i_5] [i_1] [i_0] [i_1]), (arr_5 [i_0])))) ? ((((arr_6 [i_0] [i_0] [i_0]) >= (arr_2 [i_5])))) : ((~(arr_0 [i_5]))))) : (((!(arr_10 [i_0] [i_1] [i_5] [i_5]))))));
                    arr_29 [i_0] [i_1] [i_5] = ((-(4687938789382919255 || 9223372036854775789)));
                    arr_30 [i_0] = (arr_8 [i_0] [i_0] [i_5] [i_5]);
                }
                arr_31 [i_0] = (((arr_1 [i_1] [i_0]) ? (~-9223372036854775794) : (arr_16 [i_0] [i_0])));
            }
        }
    }
    var_14 = var_4;
    var_15 = var_4;
    #pragma endscop
}
