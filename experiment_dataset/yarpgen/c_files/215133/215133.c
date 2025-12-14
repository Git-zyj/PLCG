/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215133
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215133 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215133
*/
#include "init.h"
#define max(x,y)    ((x) > (y)? (x) : (y))
#define min(x,y)    ((x) < (y)? (x) : (y))
void test() {
    #pragma scop
    /* LoopNest 2 */
    for (int i_0 = 4; i_0 < 7;i_0 += 1)
    {
        for (int i_1 = 2; i_1 < 7;i_1 += 1)
        {
            {

                for (int i_2 = 0; i_2 < 1;i_2 += 1) /* same iter space */
                {
                    arr_11 [i_0 - 3] [i_2] [i_2] = ((!(((-49 ? 562949953421312 : 17266752298356610799)))));

                    for (int i_3 = 3; i_3 < 6;i_3 += 1)
                    {
                        var_11 = 59;
                        arr_14 [i_2] [i_2] [i_3] = (max(32765, 127));
                    }
                    for (int i_4 = 0; i_4 < 1;i_4 += 1)
                    {

                        /* vectorizable */
                        for (int i_5 = 1; i_5 < 9;i_5 += 1)
                        {
                            var_12 = (arr_16 [i_2] [i_5 + 1]);
                            arr_19 [i_0] [i_2] [0] [i_0] [i_0 - 2] [i_0 - 2] [i_0] = ((-107 ? -49 : 127));
                        }
                        /* vectorizable */
                        for (int i_6 = 0; i_6 < 10;i_6 += 1)
                        {
                            var_13 = ((62 ? ((((arr_18 [i_0] [i_1] [i_2] [i_4] [i_4]) ? (arr_18 [i_6] [i_2] [i_2] [i_1] [i_0]) : (arr_15 [i_0] [i_2] [i_0] [i_4] [i_6])))) : (((arr_10 [i_6] [i_4] [i_2]) ? 10163482730721541405 : var_3))));
                            var_14 = ((18060 ^ (46 | 86)));
                            arr_23 [i_2] [i_2] [i_2] = ((10757834089097322588 && (131071 && 311988935748278467)));
                            var_15 ^= (arr_2 [i_1 + 1] [i_2]);
                        }
                        for (int i_7 = 0; i_7 < 10;i_7 += 1)
                        {
                            arr_26 [i_1] [i_2] [i_1 + 1] [i_1] [i_1 + 2] [6] = -29;
                            var_16 = (arr_15 [i_7] [i_4] [i_2] [i_1] [i_0]);
                            var_17 = ((~(((~1) ? -131071 : (arr_0 [i_0 + 2])))));
                        }
                        var_18 = 3353;

                        for (int i_8 = 0; i_8 < 10;i_8 += 1)
                        {
                            var_19 = (((!-53) / ((-((1 ? (arr_0 [i_8]) : (arr_21 [i_0] [i_2] [i_4] [i_8])))))));
                            var_20 = 127;
                            arr_31 [i_0 + 2] [i_0] [i_1] [i_0] [i_2] [i_2] [i_8] = ((!((((arr_24 [i_0] [i_0] [i_1 - 2] [i_8]) & (arr_10 [3] [i_1] [i_1 - 1]))))));
                        }
                        var_21 = (min(var_21, 25));
                    }
                }
                for (int i_9 = 0; i_9 < 1;i_9 += 1) /* same iter space */
                {
                    var_22 = (min(var_22, ((min(((min(1, 53))), (((max(131071, 1726748428)) % ((min((arr_34 [i_0] [i_0]), (arr_18 [i_0] [i_1 + 1] [i_0] [i_0 + 2] [i_0])))))))))));
                    var_23 = 4217060723;
                    var_24 = 3437835600;
                }
                var_25 = (!-var_6);
                arr_36 [i_0] [i_0] = (min(((+(((arr_1 [i_0]) ? 4217060723 : 857131695)))), -127));
            }
        }
    }
    var_26 = 1;
    var_27 = ((((((((-6105968425801443549 ? 62182 : 1660768187))) ? ((10757834089097322586 ? 1726748423 : -6105968425801443526)) : (((46 << (var_7 - 3679097779))))))) ? var_4 : ((((7126663889996845721 ? 16532835464236755370 : 6105968425801443548)) / 3359))));
    #pragma endscop
}
