/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24589
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24589 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24589
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 11;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 11;i_1 += 1)
        {
            {
                var_15 = (min(-5951597030094439433, ((((-74 * 12137853722347498428) ? (arr_5 [i_0] [i_1] [i_1]) : (((arr_2 [i_1]) >> (4378 - 4366))))))));
                var_16 = ((((min((arr_3 [i_0] [i_0] [0]), 1529148479))) && (((((((-25191 || (arr_0 [i_1] [3]))))) & (min(1345548533499660755, 14001)))))));
                arr_6 [2] = (((((!(arr_2 [i_0])))) & ((max((arr_5 [i_0] [i_0] [i_0]), (arr_5 [i_0] [i_1] [i_1]))))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 24;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 24;i_3 += 1)
        {
            {
                var_17 = ((min((arr_7 [i_2] [i_2]), (arr_7 [i_2] [11]))));

                for (int i_4 = 0; i_4 < 24;i_4 += 1)
                {
                    arr_16 [i_2] [i_3] [9] = (min(((min((!1), (arr_10 [i_3] [i_3] [i_4])))), (arr_14 [22] [i_2] [i_2])));

                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 24;i_5 += 1)
                    {
                        var_18 = (max(var_18, (((!(arr_8 [i_2]))))));
                        arr_19 [i_5] [i_3] [i_4] [i_5] &= ((!((((arr_15 [i_4] [i_4] [i_3]) ? (arr_10 [i_5] [i_5] [i_5]) : 6308890351362053212)))));
                    }
                    for (int i_6 = 0; i_6 < 1;i_6 += 1)
                    {
                        var_19 = ((((~(arr_9 [i_6])))) ? (arr_9 [i_4]) : ((((arr_9 [i_3]) > (-2147483647 - 1)))));
                        arr_23 [i_2] [i_3] [i_4] [i_6] [i_6] [i_3] = (min(((max((((arr_14 [i_2] [i_3] [i_2]) / 1072693248)), (arr_14 [i_3] [i_4] [i_6])))), (min(2630051504, (32760 * 18343548674427430462)))));
                        arr_24 [i_2] [i_2] [i_3] [i_2] [i_3] = ((+(((arr_18 [i_3]) ? 1 : (arr_18 [i_3])))));
                        arr_25 [7] [i_2] [i_3] [i_3] [i_3] [i_6] = ((!(((-72 ? (((arr_8 [i_2]) ? 18446744073709551615 : (arr_15 [7] [i_3] [i_6]))) : ((-(arr_15 [i_2] [i_3] [i_2]))))))));
                    }
                    var_20 = (min(var_20, ((min(1700708302, ((~(arr_15 [i_2] [20] [i_4]))))))));
                    arr_26 [i_2] [i_3] [i_4] [4] &= ((((max((arr_10 [18] [i_3] [i_3]), (arr_7 [i_2] [i_3])))) ? ((~(arr_10 [10] [i_3] [10]))) : (((!(arr_10 [4] [i_3] [i_4]))))));
                }
                var_21 = 36;
                var_22 = (((max(4294967285, (((65535 ? -333133589 : 26737))))) <= ((((((~(arr_15 [i_2] [i_3] [4]))) > (min((arr_8 [i_2]), (arr_15 [i_3] [i_2] [i_2])))))))));
            }
        }
    }
    #pragma endscop
}
