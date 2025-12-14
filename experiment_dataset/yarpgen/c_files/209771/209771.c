/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209771
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_19 = ((~((-(arr_1 [i_0 + 2])))));

        /* vectorizable */
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            /* LoopNest 3 */
            for (int i_2 = 1; i_2 < 1;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 21;i_3 += 1)
                {
                    for (int i_4 = 2; i_4 < 18;i_4 += 1)
                    {
                        {
                            arr_14 [i_0 + 1] [1] [i_1] [4] [i_4 - 2] [i_4] = var_5;
                            var_20 += (!1);
                        }
                    }
                }
            }

            for (int i_5 = 3; i_5 < 17;i_5 += 1)
            {
                arr_17 [i_1] [i_1] [i_5] = 3599263102622063545;
                var_21 = 3068207680186925675;
                var_22 ^= (((((3599263102622063551 ? 14847480971087488071 : 3599263102622063551))) ? ((12728 ? (arr_6 [i_0] [i_0] [i_5]) : 103)) : (!1358959908)));
                arr_18 [9] [i_1] [i_5] [i_1] = 528246648716931465;
                arr_19 [i_0] [i_1] [i_0] [i_0] = 1;
            }
        }
        for (int i_6 = 1; i_6 < 20;i_6 += 1)
        {
            var_23 = 1143914305352105984;
            var_24 = (max(var_24, (((((max((arr_2 [i_0]), ((1 ? 1 : 72048797944905728))))) ? 103 : ((7680 ? 2109703915 : -36)))))));
            var_25 ^= (arr_15 [i_0] [i_6] [i_6]);
            var_26 += 0;
        }
        for (int i_7 = 3; i_7 < 17;i_7 += 1)
        {

            for (int i_8 = 1; i_8 < 19;i_8 += 1)
            {
                var_27 *= 140737488355327;
                var_28 = (min((max(47542, -140737488355327)), (((((~(arr_22 [i_0] [i_0])))) ? (~1598430391221312258) : (((min(18, 1))))))));
            }
            arr_28 [i_0] [i_7] &= ((((max(0, (arr_1 [i_7 - 3])))) ? ((min((arr_1 [i_7 + 3]), 32766))) : 18446744073709551584));
        }
        for (int i_9 = 1; i_9 < 17;i_9 += 1)
        {
            arr_31 [i_0 - 1] [i_9 + 4] = -36028797017915392;
            var_29 = 1;
            var_30 = 127;
            /* LoopNest 2 */
            for (int i_10 = 0; i_10 < 1;i_10 += 1)
            {
                for (int i_11 = 0; i_11 < 21;i_11 += 1)
                {
                    {
                        arr_36 [i_10] = (((((~(arr_11 [i_0 - 2] [i_10])))) ? (max((arr_11 [i_0] [i_10]), 536869888)) : ((1110291398 ? (arr_11 [i_0] [i_10]) : (arr_11 [i_0 - 1] [i_10])))));
                        arr_37 [i_0 - 1] [i_10] [i_10] [i_11] = 0;
                    }
                }
            }
        }
        var_31 = ((var_3 >> (18014123631575040 - 18014123631575035)));
        var_32 = (max(var_32, 711301918));

        for (int i_12 = 1; i_12 < 18;i_12 += 1)
        {
            var_33 |= 0;
            var_34 = (((((~(max(4095, 93))))) ? var_17 : (9223372036854775808 * 0)));
        }
    }
    var_35 &= 18446744073709547520;
    #pragma endscop
}
