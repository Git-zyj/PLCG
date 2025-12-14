/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39367
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39367 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39367
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 3 */
    for (int i_0 = 0; i_0 < 21;i_0 += 1)
    {
        for (int i_1 = 0; i_1 < 1;i_1 += 1)
        {
            for (int i_2 = 2; i_2 < 20;i_2 += 1)
            {
                {

                    for (int i_3 = 0; i_3 < 1;i_3 += 1)
                    {
                        var_20 = var_13;
                        var_21 -= ((!(((arr_6 [i_0] [i_3]) != 9223372036854775792))));
                        var_22 = -1;
                        var_23 |= ((((min((((-(arr_4 [18] [1])))), var_3))) ? 16 : (min(((var_1 + (arr_7 [i_2]))), (!-9223372036854775793)))));
                    }
                    for (int i_4 = 3; i_4 < 19;i_4 += 1)
                    {
                        var_24 = (max(var_24, 4992112101458074581));
                        var_25 = (arr_3 [i_0] [1]);
                        var_26 = (((min((max((arr_13 [1] [i_1] [i_1]), var_3)), (((var_9 + (arr_9 [i_0] [i_0] [i_4])))))) * ((((((((arr_12 [i_0] [i_0] [i_2] [i_4]) ? (arr_10 [i_4] [4] [i_4]) : var_7))) && (arr_6 [i_0] [i_1])))))));
                        var_27 -= ((~(4294967295 ^ 9223372036854775803)));
                    }
                    for (int i_5 = 0; i_5 < 21;i_5 += 1)
                    {
                        var_28 = ((~((max(247, var_11)))));
                        var_29 = var_0;
                        var_30 = ((-(max(var_4, (arr_9 [i_0] [2] [i_5])))));
                        var_31 = ((1 ? ((((min(1, -9223372036854775794))) ? (arr_9 [i_0] [i_1] [i_0]) : ((-20113 ? (arr_7 [i_0]) : (arr_7 [i_1]))))) : ((~(arr_4 [i_1] [i_1])))));
                    }
                    var_32 = 127;
                }
            }
        }
    }
    var_33 = var_19;
    var_34 = 1;
    var_35 = ((!var_14) || var_6);
    /* LoopNest 3 */
    for (int i_6 = 0; i_6 < 13;i_6 += 1)
    {
        for (int i_7 = 0; i_7 < 13;i_7 += 1)
        {
            for (int i_8 = 0; i_8 < 13;i_8 += 1)
            {
                {
                    var_36 -= ((((!(!var_17))) || (((-9223372036854775797 ? 14336 : 1)))));
                    /* LoopNest 2 */
                    for (int i_9 = 1; i_9 < 11;i_9 += 1)
                    {
                        for (int i_10 = 2; i_10 < 12;i_10 += 1)
                        {
                            {
                                var_37 = (!0);
                                var_38 = ((!(!9223372036854775793)));
                                var_39 = ((((((arr_32 [i_10 - 1] [i_10 - 1] [i_9 + 2] [i_9 - 1] [i_9 - 1]) && (arr_32 [i_10 + 1] [i_10 - 1] [i_9 + 1] [i_9 + 1] [i_9 + 1])))) - var_11));
                                var_40 = 17326295680475197432;
                                var_41 = (arr_2 [i_6] [1]);
                            }
                        }
                    }
                    var_42 = (arr_23 [i_6] [i_7] [i_7] [i_8]);

                    for (int i_11 = 1; i_11 < 11;i_11 += 1)
                    {
                        var_43 = (var_4 < (0 << var_10));
                        var_44 = ((!(!var_16)));
                        var_45 = 99;
                        var_46 = (596732094 ? 0 : 4294967295);
                        var_47 = 5758;
                    }
                    for (int i_12 = 0; i_12 < 13;i_12 += 1)
                    {
                        var_48 = ((((arr_7 [i_6]) ? 6 : (arr_7 [i_6]))));

                        for (int i_13 = 0; i_13 < 1;i_13 += 1)
                        {
                            var_49 = (((85 / var_11) ? (max(3601559097, ((((arr_21 [i_6] [4] [i_8]) ? -9372 : var_0))))) : (((-4837974125368059958 ? 2 : 1871)))));
                            var_50 = (!-115);
                            var_51 = (!(~120));
                        }
                    }
                }
            }
        }
    }
    #pragma endscop
}
