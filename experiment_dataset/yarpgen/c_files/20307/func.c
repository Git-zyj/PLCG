/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 20307
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=20307 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/20307
*/
#include "init.h"
#define max(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a > _b ? _a : _b; })
#define min(a,b) \
    ({ __typeof__ (a) _a = (a); \
       __typeof__ (b) _b = (b); \
       _a < _b ? _a : _b; })
void test() {
    var_12 = ((/* implicit */long long int) min((((/* implicit */unsigned int) ((((/* implicit */int) var_5)) * (((((/* implicit */_Bool) 7978879883516098994LL)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_3))))))), (((((/* implicit */_Bool) var_6)) ? (max((((/* implicit */unsigned int) var_4)), (var_9))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) -8862798895085543127LL)) ? (((/* implicit */unsigned long long int) 8593141523400099367LL)) : (17606544944022308915ULL)));
        arr_3 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) (~(((/* implicit */int) var_3))))) : (var_0)));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) (signed char)(-127 - 1)))) + (8593141523400099367LL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 3] [i_0 - 2]))) : (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_0)))));
    }
    /* vectorizable */
    for (long long int i_1 = 0; i_1 < 10; i_1 += 3) /* same iter space */
    {
        var_13 = ((/* implicit */unsigned int) (~(var_11)));
        var_14 = ((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) 2071512319U)) ? (8988727182148335771LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)193))))));
        var_15 = ((/* implicit */unsigned long long int) (unsigned char)124);
    }
    for (long long int i_2 = 0; i_2 < 10; i_2 += 3) /* same iter space */
    {
        var_16 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((arr_10 [i_2]) + (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) : (4185583697524383685LL)))));
        var_17 = ((/* implicit */signed char) max((max((arr_7 [i_2]), (((/* implicit */unsigned int) max((var_3), (((/* implicit */unsigned short) arr_6 [i_2]))))))), (max((arr_1 [i_2] [i_2]), (((/* implicit */unsigned int) (signed char)(-127 - 1)))))));
    }
    for (long long int i_3 = 0; i_3 < 10; i_3 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */long long int) max(((-(var_2))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 413775684776993520LL)) ? (8988727182148335771LL) : (-3954609510567016134LL)))) ? (((/* implicit */int) ((signed char) -413775684776993521LL))) : (((/* implicit */int) var_1)))))));
        /* LoopNest 2 */
        for (unsigned long long int i_4 = 2; i_4 < 8; i_4 += 3) 
        {
            for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            {
                                var_19 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)255)) ? (17606544944022308945ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)136)))));
                                arr_26 [i_3] [i_4] [i_5] [i_3] [i_4] [i_7] = ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)131))));
                                arr_27 [i_3] [i_4 + 1] [i_5] [i_6] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((int) ((((/* implicit */_Bool) 579342465)) ? (3954609510567016133LL) : (-256773370949947032LL))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) + (min((919413422113053785LL), (((/* implicit */long long int) var_7))))))) : (max((((/* implicit */unsigned long long int) ((int) 919413422113053785LL))), (max((((/* implicit */unsigned long long int) var_7)), (var_2)))))));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */unsigned char) min((max((18446744073709551615ULL), (((/* implicit */unsigned long long int) var_6)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_3] [1LL] [(unsigned char)3] [i_4 - 2] [i_4])) ? (((/* implicit */int) arr_23 [i_3] [i_4] [i_5] [i_4 - 2] [i_4])) : (((/* implicit */int) var_1)))))));
                    arr_28 [i_3] [i_4] [i_5] [i_5] = ((/* implicit */unsigned char) max(((-(3954609510567016134LL))), (((/* implicit */long long int) max((((/* implicit */int) arr_12 [i_4 - 1])), (((((/* implicit */_Bool) 3954609510567016134LL)) ? (((/* implicit */int) arr_20 [i_5])) : (((/* implicit */int) var_10)))))))));
                }
            } 
        } 
        arr_29 [i_3] = ((/* implicit */signed char) max((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_5))))));
    }
    var_21 = ((/* implicit */_Bool) (+(413775684776993520LL)));
}
