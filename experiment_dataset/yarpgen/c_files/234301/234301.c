/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234301
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234301 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234301
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_17 = (max(var_17, 0));
    var_18 += (((-32767 - 1) < (((((((-2147483647 - 1) + 2147483647)) + 2147483647)) >> (((min(var_4, var_12)) + 2641288143889648474))))));
    var_19 = (min(var_3, var_10));
    var_20 &= var_9;

    for (int i_0 = 2; i_0 < 19;i_0 += 1)
    {
        var_21 = ((+(min((arr_1 [i_0 - 2] [i_0 - 2]), (arr_1 [i_0] [i_0])))));
        var_22 = (max(var_22, -309851279));
    }
    for (int i_1 = 1; i_1 < 20;i_1 += 1)
    {
        /* LoopNest 2 */
        for (int i_2 = 4; i_2 < 19;i_2 += 1)
        {
            for (int i_3 = 0; i_3 < 23;i_3 += 1)
            {
                {
                    arr_10 [i_2 - 4] [i_3] [i_1] [i_2 - 4] = ((-309851261 >= ((min((arr_9 [i_1] [i_1 + 3] [i_2 - 4] [i_2 + 4]), var_13)))));
                    var_23 = (min(var_23, ((max(309851260, (61093 ^ 4278190080))))));
                    /* LoopNest 2 */
                    for (int i_4 = 0; i_4 < 23;i_4 += 1)
                    {
                        for (int i_5 = 2; i_5 < 20;i_5 += 1)
                        {
                            {
                                var_24 = (arr_2 [i_2] [i_1]);
                                var_25 = (((max(var_1, (((arr_5 [i_1]) == (arr_6 [i_2] [i_2]))))) ? (!var_6) : ((((var_1 >= (arr_9 [i_1] [i_3] [i_4] [i_5]))) ? 31571 : (max(-10, 17944949063527167579))))));
                                arr_17 [i_1] [i_2] [i_1] [i_4] [i_5 - 1] = (((((~(max(var_3, var_16))))) ? (((!((min(32, 214)))))) : ((0 >> (((((arr_16 [i_2 + 2] [i_4] [i_3] [i_2 + 4] [i_2 + 2] [i_2] [i_1]) << (var_6 - 52682))) - 1766980714))))));
                                arr_18 [i_1] [i_5] [i_4] [1] [i_2] [i_1] = var_4;
                            }
                        }
                    }
                }
            }
        }
        arr_19 [i_1] [i_1] = ((var_14 ? ((var_9 ? ((max((arr_14 [i_1] [i_1] [i_1] [i_1 + 3] [i_1 + 3]), var_14))) : (arr_16 [i_1] [14] [14] [i_1] [i_1] [i_1 + 1] [i_1]))) : ((((((arr_7 [i_1]) ? (arr_2 [i_1] [i_1]) : var_3))) ? ((((arr_7 [i_1]) >= 1))) : (arr_13 [i_1 + 3] [i_1 - 1])))));
        /* LoopNest 3 */
        for (int i_6 = 1; i_6 < 21;i_6 += 1)
        {
            for (int i_7 = 0; i_7 < 23;i_7 += 1)
            {
                for (int i_8 = 2; i_8 < 21;i_8 += 1)
                {
                    {
                        arr_27 [i_8 - 2] [i_1] [i_1] [i_6] [i_1] [i_1 + 2] = (min((((var_16 * var_0) ? (arr_2 [i_1] [i_1]) : (~var_4))), ((((-(arr_11 [i_1] [i_6] [i_7] [i_8])))))));
                        var_26 ^= ((!(arr_21 [i_8])));
                    }
                }
            }
        }
    }
    #pragma endscop
}
