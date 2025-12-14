/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5169
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5169 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5169
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 19;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 19;i_1 += 1)
        {
            {
                var_17 = (min(var_17, -68));
                var_18 = (min(75, (arr_2 [i_0] [i_1])));
            }
        }
    }
    /* LoopNest 2 */
    for (int i_2 = 0; i_2 < 18;i_2 += 1)
    {
        for (int i_3 = 0; i_3 < 1;i_3 += 1)
        {
            {

                for (int i_4 = 1; i_4 < 1;i_4 += 1)
                {
                    var_19 = ((((max((arr_0 [i_2] [i_2]), (arr_9 [i_3] [i_3])))) ? ((((((min(-46, -356383462))) && -var_9)))) : ((min(27, (arr_7 [i_3] [i_3]))))));
                    var_20 = (max(var_20, ((max(((min(8925, (arr_1 [i_4 - 1] [i_4 - 1])))), (min((arr_2 [i_4 - 1] [i_4]), (arr_7 [i_2] [i_2]))))))));
                    var_21 = (((((max(8943, (arr_7 [i_3] [7])))) ? (var_7 ^ 13885403983505124768) : (((0 >> (3490288784 - 3490288754)))))));
                    var_22 *= ((min((arr_0 [i_2] [i_2]), (arr_0 [i_3] [i_4 - 1]))));
                }
                /* vectorizable */
                for (int i_5 = 0; i_5 < 18;i_5 += 1)
                {
                    var_23 = 804678527;
                    var_24 = (var_5 > 3490288769);
                    var_25 = ((-(~-6522654735209019596)));
                    var_26 |= ((((0 ? 68 : var_4))) + (arr_8 [i_2] [i_3] [i_5]));
                }
                for (int i_6 = 1; i_6 < 16;i_6 += 1)
                {
                    var_27 = ((((min((arr_13 [i_6 + 1] [i_6 + 1] [i_6]), 804678526))) ? var_16 : ((((784553448422435926 ? var_13 : 11140302486929136430)) % var_8))));
                    /* LoopNest 2 */
                    for (int i_7 = 0; i_7 < 18;i_7 += 1)
                    {
                        for (int i_8 = 1; i_8 < 14;i_8 += 1)
                        {
                            {
                                var_28 = (max((max(-47, (arr_4 [i_2] [i_2] [i_2]))), ((((arr_12 [i_6] [i_6] [i_6 + 1] [i_8 + 1]) ? (arr_12 [i_2] [1] [i_6 + 2] [i_8 + 2]) : (arr_12 [i_2] [10] [i_6 + 1] [i_8 + 2]))))));
                                arr_24 [i_3] = 6522654735209019596;
                                var_29 = (min(var_29, (((max(((-(arr_13 [i_7] [i_3] [i_2]))), (max(45, 1868159823))))))));
                            }
                        }
                    }
                    arr_25 [i_2] [i_3] [i_3] [i_3] = var_0;
                }
                /* LoopNest 2 */
                for (int i_9 = 0; i_9 < 1;i_9 += 1)
                {
                    for (int i_10 = 0; i_10 < 18;i_10 += 1)
                    {
                        {
                            arr_32 [i_3] = (arr_3 [i_2] [16] [16]);
                            var_30 = 1779342846;
                        }
                    }
                }
                var_31 = ((1868159851 ? (((!(((-(arr_1 [i_2] [i_3]))))))) : ((-(!var_7)))));
            }
        }
    }
    var_32 = 18446744073709551594;
    #pragma endscop
}
