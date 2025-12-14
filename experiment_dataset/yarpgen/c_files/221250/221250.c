/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221250
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221250 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221250
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 12;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 13;i_1 += 1)
        {
            {
                arr_5 [i_0] [i_0] = (((arr_1 [i_0 + 2]) ? -9131 : (arr_1 [i_0 - 1])));

                for (int i_2 = 1; i_2 < 1;i_2 += 1)
                {
                    var_18 = ((-(arr_7 [i_0] [i_1] [i_2])));
                    var_19 = (max(((((arr_0 [15]) ? (arr_3 [i_2] [i_1] [i_0]) : 0))), (arr_7 [i_0] [0] [i_0 - 1])));
                }
                var_20 ^= var_3;
            }
        }
    }

    /* vectorizable */
    for (int i_3 = 0; i_3 < 11;i_3 += 1)
    {

        for (int i_4 = 0; i_4 < 11;i_4 += 1)
        {
            /* LoopNest 2 */
            for (int i_5 = 1; i_5 < 1;i_5 += 1)
            {
                for (int i_6 = 0; i_6 < 11;i_6 += 1)
                {
                    {
                        var_21 = (arr_4 [i_3]);
                        var_22 = (max(var_22, var_5));
                    }
                }
            }
            var_23 = (!1);
            arr_16 [i_3] [i_3] = (((((!(arr_12 [i_3] [i_3] [4] [4])))) ^ (arr_10 [1])));
        }
        var_24 = (arr_12 [i_3] [i_3] [i_3] [i_3]);
        var_25 = (arr_7 [i_3] [i_3] [i_3]);
    }
    var_26 = 65532;
    var_27 = var_2;

    for (int i_7 = 0; i_7 < 15;i_7 += 1)
    {
        var_28 = (max(var_28, (arr_18 [i_7] [i_7])));
        var_29 &= (((12057 ? (((min(var_14, 23976))) : (((arr_2 [i_7] [i_7]) ^ (arr_2 [i_7] [i_7])))))));
        arr_19 [i_7] = var_11;
    }
    #pragma endscop
}
