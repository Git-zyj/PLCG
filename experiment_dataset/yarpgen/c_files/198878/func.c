/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198878
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
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 10; i_1 += 4) 
        {
            {
                arr_7 [5U] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) min((((signed char) var_4)), (((/* implicit */signed char) (!(((/* implicit */_Bool) var_15)))))))) * (((/* implicit */int) arr_4 [i_0] [i_1] [i_0]))));
                arr_8 [i_1] [i_0] = ((/* implicit */signed char) (+(((long long int) (~(((/* implicit */int) arr_5 [i_0])))))));
                arr_9 [i_0] [i_0] [i_1] = ((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_1])))))))));
                var_20 ^= ((((/* implicit */_Bool) max((15209183887092045317ULL), (((/* implicit */unsigned long long int) (unsigned short)34211))))) ? (((/* implicit */int) arr_0 [i_1])) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_1])))));
                /* LoopNest 3 */
                for (short i_2 = 1; i_2 < 7; i_2 += 1) 
                {
                    for (int i_3 = 0; i_3 < 10; i_3 += 1) 
                    {
                        for (signed char i_4 = 4; i_4 < 8; i_4 += 1) 
                        {
                            {
                                var_21 *= ((short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 4166476896U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_14))) : (var_6)))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_15)));
                                var_22 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_3] [i_0]))));
                            }
                        } 
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 2 */
    for (short i_5 = 0; i_5 < 20; i_5 += 1) 
    {
        var_23 = ((/* implicit */short) (!(((/* implicit */_Bool) 8191U))));
        arr_19 [17] [(signed char)14] = ((/* implicit */unsigned int) ((((int) (~(((/* implicit */int) (signed char)124))))) - (((int) arr_17 [i_5]))));
    }
    for (int i_6 = 4; i_6 < 18; i_6 += 4) 
    {
        /* LoopNest 2 */
        for (short i_7 = 2; i_7 < 18; i_7 += 1) 
        {
            for (int i_8 = 0; i_8 < 20; i_8 += 2) 
            {
                {
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) min((((((((/* implicit */int) arr_24 [i_6 - 3])) + (2147483647))) << (((2LL) - (2LL))))), (max((-418082327), (((/* implicit */int) (unsigned short)15468)))))))));
                    arr_26 [i_6] [i_7 - 2] [i_6] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((signed char) ((unsigned int) var_13))))) != (((((/* implicit */_Bool) min((((/* implicit */int) (signed char)-1)), (arr_22 [i_7])))) ? (((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) (signed char)3))))) : (((/* implicit */unsigned int) var_0))))));
                    var_25 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */long long int) 418082343)) : ((+((-9223372036854775807LL - 1LL))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_7] [i_7])) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_6])))))) - (9276164464870831855ULL))));
                }
            } 
        } 
        arr_27 [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-30558)) ? (-418082336) : (arr_22 [i_6 + 1])))) ? (((((/* implicit */_Bool) arr_17 [i_6])) ? (((((/* implicit */_Bool) arr_22 [i_6])) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_19))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_6 - 4]))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6 + 2] [i_6])))));
        var_26 = ((/* implicit */signed char) (-((+(((/* implicit */int) arr_25 [i_6 - 1] [i_6 + 1] [i_6 + 1]))))));
    }
    /* LoopSeq 2 */
    for (unsigned long long int i_9 = 0; i_9 < 15; i_9 += 3) 
    {
        var_27 = min((((4294967295U) & (((/* implicit */unsigned int) ((/* implicit */int) var_7))))), (((/* implicit */unsigned int) ((_Bool) (unsigned char)153))));
        arr_30 [i_9] [i_9] = ((/* implicit */unsigned int) arr_20 [i_9] [i_9]);
    }
    for (short i_10 = 0; i_10 < 13; i_10 += 4) 
    {
        var_28 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-(-605538459)))) ? (((((/* implicit */_Bool) 0ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_10] [i_10]))) : (arr_32 [(unsigned short)4]))) : (((/* implicit */unsigned long long int) (-(0)))))))));
        var_29 = ((/* implicit */long long int) min((var_29), (((/* implicit */long long int) 418082336))));
        arr_34 [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_33 [i_10])) ? (((/* implicit */unsigned long long int) max((var_2), (((/* implicit */unsigned int) var_5))))) : ((-(var_4))))) << (((((((/* implicit */_Bool) (signed char)1)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_25 [i_10] [i_10] [i_10])))) - (71)))));
        var_30 = ((/* implicit */short) min((var_30), (((/* implicit */short) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 850870043077736227ULL)) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) var_10))))))) : ((+(arr_28 [12]))))))));
    }
    var_31 = ((/* implicit */long long int) var_18);
    var_32 = ((/* implicit */unsigned long long int) var_12);
}
