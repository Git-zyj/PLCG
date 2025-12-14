/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221973
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221973 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221973
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 3; i_0 < 17;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            for (int i_2 = 1; i_2 < 20;i_2 += 1)
            {
                {
                    var_17 = ((~((((((arr_5 [i_0] [i_1] [i_2]) ? 15137777660975584991 : (arr_4 [i_0] [12] [i_0])))) ? (((arr_5 [i_0] [i_1] [13]) + (arr_4 [i_0] [i_1] [i_2]))) : (min(215, 7344513284087442410))))));
                    var_18 |= (arr_3 [i_1]);
                    arr_7 [i_0] [i_1] [i_1] [10] = ((40400 ? (arr_0 [i_2 + 1]) : (arr_6 [i_2] [5] [20] [i_0])));
                }
            }
        }
    }
    /* LoopNest 2 */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {
        for (int i_4 = 1; i_4 < 9;i_4 += 1)
        {
            {
                arr_14 [i_4] [i_4] [i_3] = (arr_9 [i_4]);
                var_19 = ((0 ? ((min((arr_10 [i_4 + 2]), (((18685183 == (arr_1 [i_4] [i_4]))))))) : (min((((0 ? (arr_5 [i_3] [i_4] [i_4]) : 18685204))), (arr_12 [i_3] [i_4])))));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_5 = 1; i_5 < 18;i_5 += 1)
    {
        for (int i_6 = 0; i_6 < 1;i_6 += 1)
        {
            {
                /* LoopNest 3 */
                for (int i_7 = 0; i_7 < 19;i_7 += 1)
                {
                    for (int i_8 = 0; i_8 < 19;i_8 += 1)
                    {
                        for (int i_9 = 2; i_9 < 18;i_9 += 1)
                        {
                            {
                                arr_27 [7] [i_6] [i_7] [10] [i_6] [i_8] = (((((arr_16 [i_5 - 1] [i_9 - 1]) & 1)) == 18685204));
                                var_20 ^= ((-2146750695350072824 ? 8396611094796134464 : (arr_5 [i_5 - 1] [i_5 - 1] [i_9 - 2])));
                                var_21 += var_16;
                                arr_28 [i_9] [i_9] [i_6] [i_9] [i_9] = (min(((min((((18685204 ? -18685205 : 0))), (~var_13)))), ((((min(18685184, (arr_5 [i_7] [i_6] [2])))) ^ ((-18685184 ? var_7 : -97))))));
                                var_22 = (((arr_5 [i_5] [12] [12]) || ((((arr_24 [i_6] [i_7] [i_5 + 1] [i_6]) | (arr_24 [i_6] [i_6] [i_5 - 1] [i_6]))))));
                            }
                        }
                    }
                }
                var_23 = ((-(((arr_24 [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1]) ? (arr_24 [i_6] [i_5 + 1] [i_5 + 1] [i_5 + 1]) : 0))));
                /* LoopNest 3 */
                for (int i_10 = 0; i_10 < 19;i_10 += 1)
                {
                    for (int i_11 = 0; i_11 < 19;i_11 += 1)
                    {
                        for (int i_12 = 0; i_12 < 19;i_12 += 1)
                        {
                            {
                                var_24 = 178;
                                var_25 *= (min((max(((-(arr_22 [i_11] [i_12]))), -18685173)), (((14447442756408363575 ? ((18685204 - (arr_35 [i_5] [i_6] [i_10] [i_11] [i_12]))) : var_11)))));
                                var_26 = 18685183;
                                var_27 -= (min(-18685184, (min((arr_36 [i_6] [i_11] [i_12]), 18685204))));
                            }
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
