/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48248
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48248 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48248
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    var_13 = ((((-(var_10 + var_6)))) ? ((((var_7 > ((var_8 ? var_7 : var_0)))))) : (max(var_11, ((18446744073709551584 ^ (-2147483647 - 1))))));

    /* vectorizable */
    for (int i_0 = 1; i_0 < 7;i_0 += 1)
    {
        arr_2 [0] [0] = (((((arr_0 [i_0] [i_0]) + var_1))) ? (var_0 & 11) : ((var_12 - (-2147483647 - 1))));
        /* LoopNest 3 */
        for (int i_1 = 2; i_1 < 9;i_1 += 1)
        {
            for (int i_2 = 0; i_2 < 10;i_2 += 1)
            {
                for (int i_3 = 1; i_3 < 8;i_3 += 1)
                {
                    {

                        for (int i_4 = 0; i_4 < 10;i_4 += 1)
                        {
                            arr_15 [i_0] [i_0] [3] [i_1] [i_2] [i_3 + 2] [i_0] = 3812141484;
                            var_14 = 1573555363;
                            arr_16 [i_1] [i_3] [i_2] [i_1] [i_0 + 2] [i_1] = var_12;
                            var_15 = (arr_11 [i_1] [i_1] [i_4]);
                        }

                        for (int i_5 = 0; i_5 < 10;i_5 += 1)
                        {
                            arr_19 [i_0 + 1] [i_0 + 1] [i_0 + 1] [i_3] [1] [i_2] [i_1] = ((14341392793787448821 ? (-2147483647 - 1) : 32129));
                            var_16 = (~65506);
                            var_17 = (((((6586991866048799262 ? 65525 : 13030))) || (((-9040107453259153842 ? 3341337555650777153 : -9040107453259153842)))));
                            var_18 += (arr_7 [i_5] [i_0] [8]);
                            var_19 = 14341392793787448822;
                        }
                        var_20 *= (arr_5 [i_0] [6] [i_2]);
                    }
                }
            }
        }

        for (int i_6 = 1; i_6 < 9;i_6 += 1)
        {
            var_21 = (min(var_21, ((((13468488692393982752 ? (arr_23 [i_0] [6] [i_6]) : (arr_20 [2]))) - (arr_4 [i_0 + 2] [i_0 + 3] [4])))));
            var_22 = (max(var_22, 40485));
            var_23 ^= (((arr_4 [i_6 + 1] [i_6] [2]) % (arr_4 [i_6 - 1] [i_6] [4])));
        }
    }
    var_24 = ((((((max(var_4, var_7))) ? (((50146 ? 531900558571372202 : var_0))) : (min(var_3, var_6)))) - ((min(var_8, var_12)))));
    var_25 = (max((var_3 - 1), var_2));
    #pragma endscop
}
