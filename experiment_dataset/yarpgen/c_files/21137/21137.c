/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21137
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21137 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21137
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 += 2147483647;

    for (int i_0 = 0; i_0 < 20;i_0 += 1)
    {
        arr_3 [i_0] = (max((((arr_1 [i_0] [i_0]) << (((arr_1 [i_0] [4]) - 1998917848485469910)))), ((((~1553558365) && ((((arr_1 [i_0] [i_0]) ? 6 : (arr_1 [i_0] [i_0])))))))));
        var_18 = (((!(arr_0 [i_0] [i_0]))));
        var_19 ^= var_10;
    }
    for (int i_1 = 0; i_1 < 14;i_1 += 1)
    {
        arr_8 [i_1] = ((((+((4294967295 ? (arr_5 [i_1]) : 18446744073709551613))))) ? (max(6, (((arr_1 [i_1] [i_1]) - var_0)))) : (((+(((arr_5 [i_1]) - (arr_6 [i_1])))))));
        arr_9 [i_1] [i_1] = ((4294967291 + 2147483647) >> (min((max((arr_6 [i_1]), var_15)), (min((arr_0 [i_1] [i_1]), (arr_4 [i_1]))))));
        arr_10 [i_1] = ((+(((arr_1 [i_1] [i_1]) / (arr_1 [i_1] [i_1])))));
    }
    /* vectorizable */
    for (int i_2 = 0; i_2 < 10;i_2 += 1)
    {
        arr_15 [i_2] = (((((var_2 ? var_8 : (arr_2 [i_2])))) ? (arr_0 [i_2] [i_2]) : ((var_3 - (arr_2 [i_2])))));
        /* LoopNest 3 */
        for (int i_3 = 2; i_3 < 6;i_3 += 1)
        {
            for (int i_4 = 1; i_4 < 8;i_4 += 1)
            {
                for (int i_5 = 0; i_5 < 10;i_5 += 1)
                {
                    {

                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            arr_31 [i_2] [i_2] [i_4] [2] = 6509265956693479540;
                            var_20 = (arr_24 [i_3 - 2] [i_3 - 1] [i_5] [i_3 + 2]);
                        }
                        arr_32 [i_3] [i_3] [i_4] [i_5] = (((arr_24 [i_3 - 1] [i_4 - 1] [8] [i_5]) ? 2147483647 : (arr_1 [i_4 - 1] [i_3 - 2])));
                        arr_33 [i_2] [i_3] [i_3] [i_5] = (((arr_23 [i_3 - 1] [i_4 + 2] [i_5] [i_5]) ? (arr_5 [i_3 - 1]) : (var_2 + 127)));
                    }
                }
            }
        }
    }
    for (int i_7 = 0; i_7 < 13;i_7 += 1)
    {

        /* vectorizable */
        for (int i_8 = 0; i_8 < 13;i_8 += 1)
        {
            /* LoopNest 3 */
            for (int i_9 = 0; i_9 < 13;i_9 += 1)
            {
                for (int i_10 = 3; i_10 < 12;i_10 += 1)
                {
                    for (int i_11 = 1; i_11 < 12;i_11 += 1)
                    {
                        {
                            arr_46 [i_10] [i_8] = ((((var_12 >= (-2147483647 - 1))) ? ((var_13 ? (arr_1 [i_9] [i_10 - 3]) : 11937478117016072076)) : 55011));
                            arr_47 [i_10] [i_10] [i_9] [i_10] [i_11] [i_10] = ((arr_40 [i_11 - 1] [i_10 - 2] [i_10] [i_10 - 1]) ^ (arr_42 [i_11 - 1] [i_10 - 2] [i_10 - 1] [i_10 - 1]));
                        }
                    }
                }
            }
            var_21 = (max(var_21, 593542847));
        }
        var_22 = (max(var_22, (((((max(var_14, (!2147483645)))) != ((~(max(-32744, (-2147483647 - 1))))))))));
    }
    var_23 ^= ((!(((((max(3882952713, var_12))) ? var_15 : var_3)))));
    var_24 = ((var_6 ? var_9 : -4453));
    var_25 = var_10;
    #pragma endscop
}
