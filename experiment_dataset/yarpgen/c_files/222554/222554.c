/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222554
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_20 = var_13;
    var_21 ^= var_8;

    /* vectorizable */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        var_22 = 7727026331706012722;
        var_23 *= ((((((arr_1 [i_0] [i_0]) % var_19))) ? (arr_0 [i_0] [i_0]) : (arr_0 [i_0] [i_0])));

        for (int i_1 = 0; i_1 < 21;i_1 += 1)
        {
            /* LoopNest 2 */
            for (int i_2 = 0; i_2 < 21;i_2 += 1)
            {
                for (int i_3 = 0; i_3 < 1;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 21;i_4 += 1)
                        {
                            var_24 += (arr_2 [i_0]);
                            var_25 = ((var_19 ? (arr_4 [i_2] [i_2]) : (arr_9 [i_2] [i_3])));
                            var_26 &= (arr_10 [i_4] [i_2] [i_0]);
                        }
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            var_27 = (arr_8 [i_3] [i_1] [i_2] [i_2] [i_3]);
                            var_28 = var_11;
                        }
                        for (int i_6 = 0; i_6 < 21;i_6 += 1)
                        {
                            var_29 = (((var_18 || (arr_6 [i_0] [i_0]))) ? (arr_2 [i_0]) : (~var_10));
                            var_30 += ((+(((arr_11 [i_2] [i_1] [i_2] [8]) ? var_5 : var_17))));
                            var_31 = (((((arr_14 [i_0] [4] [i_3] [i_0] [i_0]) % 1838329783)) % var_17));
                        }
                        var_32 = (((arr_6 [i_0] [i_0]) / (arr_6 [i_0] [i_0])));
                        var_33 = (arr_1 [i_3] [i_3]);

                        for (int i_7 = 3; i_7 < 20;i_7 += 1)
                        {
                            var_34 &= ((-var_18 == (~-1838329783)));
                            var_35 = (((arr_7 [i_0] [i_7 - 2] [13] [19] [i_7 + 1]) ^ var_16));
                            var_36 = var_17;
                            var_37 *= ((+(((-1059255194 + 2147483647) << (((-2908 + 2932) - 24))))));
                        }
                    }
                }
            }
            var_38 = (arr_5 [i_0] [i_0] [7] [i_0]);
            /* LoopNest 2 */
            for (int i_8 = 1; i_8 < 20;i_8 += 1)
            {
                for (int i_9 = 2; i_9 < 19;i_9 += 1)
                {
                    {
                        var_39 = (min(var_39, (arr_19 [i_9] [i_8] [i_8])));
                        var_40 = (min(var_40, (~var_5)));
                        var_41 = 224;
                    }
                }
            }
            var_42 = (((arr_1 [i_0] [i_1]) < var_12));
            var_43 -= ((var_1 * (((((arr_0 [i_0] [16]) > var_17))))));
        }
        var_44 = ((((arr_5 [i_0] [i_0] [i_0] [i_0]) ? (arr_7 [i_0] [3] [i_0] [i_0] [i_0]) : var_17)));
        var_45 = (((arr_19 [4] [i_0] [i_0]) ? (arr_19 [20] [20] [i_0]) : (arr_8 [10] [i_0] [i_0] [i_0] [i_0])));
    }
    #pragma endscop
}
