/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249404
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_11 = (max(var_11, (((!(5 == -6386825093045004813))))));
    var_12 = (min(var_12, -var_7));

    /* vectorizable */
    for (int i_0 = 0; i_0 < 23;i_0 += 1)
    {
        var_13 ^= (-9223372036854775807 - 1);
        var_14 = (arr_0 [9]);
        var_15 = 1;
    }
    for (int i_1 = 0; i_1 < 19;i_1 += 1)
    {
        var_16 ^= (arr_3 [i_1] [i_1]);
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 19;i_3 += 1)
            {
                for (int i_4 = 2; i_4 < 16;i_4 += 1)
                {
                    {
                        var_17 = (min(var_17, ((((((arr_5 [i_1] [i_4 - 1]) == ((((arr_7 [i_1] [i_1] [i_1]) && (arr_10 [i_4] [i_2] [i_3] [i_4 + 1]))))))) * ((((arr_0 [i_1]) == (~9631452072235961468))))))));
                        arr_11 [5] [i_2] [5] [i_4] [i_2] [i_2] = (((((((arr_7 [i_3] [i_3] [i_3]) ? (arr_3 [i_1] [i_2]) : 1331120418516490086)))) ? (((max((arr_6 [i_1]), (!var_4))))) : (((7 > 8815292001473590147) ? (((max((arr_6 [i_3]), (arr_1 [i_2]))))) : -20))));
                        var_18 -= (+((10774377916520074140 ? (arr_10 [i_1] [i_1] [i_3] [i_4 + 3]) : (arr_10 [1] [1] [i_4 - 1] [i_4 + 1]))));
                        var_19 = (((10774377916520074140 ? (max(43783, 1890473650) : (min(1483773094, 36384))))));
                    }
                }
            }
        }
    }
    /* vectorizable */
    for (int i_5 = 1; i_5 < 10;i_5 += 1)
    {
        var_20 = arr_5 [1] [i_5 + 2];
        /* LoopNest 2 */
        for (int i_6 = 0; i_6 < 14;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 14;i_7 += 1)
            {
                {
                    var_21 = 8430973837452631732;
                    var_22 = (!4239619560);
                    var_23 |= (arr_18 [i_5 + 4] [i_5 + 3]);
                    var_24 = ((-var_5 ? ((((!(arr_18 [i_6] [13]))))) : (arr_18 [i_5 - 1] [i_5 + 3])));
                }
            }
        }
        arr_21 [i_5] [i_5 + 1] = (arr_3 [i_5 + 1] [i_5]);
        /* LoopNest 2 */
        for (int i_8 = 0; i_8 < 1;i_8 += 1)
        {
            for (int i_9 = 2; i_9 < 10;i_9 += 1)
            {
                {
                    arr_26 [8] &= ((2047726706 | (8815292001473590147 > var_4)));
                    var_25 = (arr_16 [i_5 + 4] [i_9 + 3]);
                    var_26 = ((~(arr_14 [i_5 + 3] [i_8])));
                }
            }
        }
        var_27 &= ((!(((var_5 ? 1 : 1810444902)))));
    }
    var_28 = ((~(((((var_1 ? var_2 : var_0))) ? (min(var_5, 18085096795898736497)) : (2036774060314430142 ^ var_0)))));
    #pragma endscop
}
