/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42602
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42602 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42602
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
    var_20 = ((/* implicit */signed char) (-(max((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_12))) != (4311109837710391754LL)))), (((((/* implicit */int) (unsigned short)16383)) - (((/* implicit */int) (unsigned char)63))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_9)) ? (arr_1 [i_0]) : (arr_1 [i_0])))))) ? (((min((((/* implicit */long long int) arr_0 [i_0] [i_0])), (arr_1 [i_0]))) ^ (arr_1 [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) arr_0 [(short)15] [i_0])) : (((/* implicit */int) var_8)))))))));
        arr_2 [i_0] = ((/* implicit */short) min(((+(arr_1 [i_0]))), (((/* implicit */long long int) (+(-602919175))))));
        var_22 &= ((/* implicit */unsigned short) max((var_11), (((/* implicit */long long int) var_9))));
        var_23 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) var_18)) ? (((/* implicit */int) (unsigned char)190)) : (((/* implicit */int) (unsigned short)33170)))))) + (min((((/* implicit */long long int) ((((/* implicit */int) var_5)) ^ (((/* implicit */int) var_5))))), (((((/* implicit */_Bool) var_3)) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224)))))))));
    }
    /* vectorizable */
    for (unsigned char i_1 = 0; i_1 < 12; i_1 += 1) 
    {
        var_24 = ((/* implicit */signed char) ((_Bool) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)33183))) <= (var_11))));
        var_25 = ((/* implicit */unsigned int) ((1170005729) | (((/* implicit */int) (unsigned short)58538))));
    }
    /* LoopNest 3 */
    for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 3) 
    {
        for (unsigned char i_3 = 1; i_3 < 23; i_3 += 3) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 25; i_4 += 1) 
            {
                {
                    var_26 = ((/* implicit */short) ((((/* implicit */int) min(((!(((/* implicit */_Bool) var_14)))), ((_Bool)1)))) | (((/* implicit */int) ((((/* implicit */_Bool) arr_12 [i_2] [i_3] [i_2])) && (((/* implicit */_Bool) var_1)))))));
                    var_27 -= ((/* implicit */int) ((((/* implicit */long long int) ((arr_8 [20U] [i_3 + 2]) & (((/* implicit */int) var_15))))) & (max((((/* implicit */long long int) var_4)), (arr_12 [i_3 + 2] [i_3 - 1] [i_3 - 1])))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (short i_5 = 3; i_5 < 24; i_5 += 1) 
                    {
                        var_28 = ((/* implicit */long long int) -1);
                        var_29 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_5] [i_3] [i_4]))))) ? (((/* implicit */int) var_9)) : (arr_8 [i_2] [i_4])));
                    }
                    /* LoopSeq 3 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        arr_18 [i_2] [i_2] [i_4] [i_6] [i_2] = ((/* implicit */unsigned int) var_12);
                        var_30 &= ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_15 [i_3 + 1] [i_3 + 1] [i_3 + 1] [i_3])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_7 [i_3 + 1] [i_3]))))) - (max((((((/* implicit */unsigned long long int) var_19)) ^ (var_0))), (((/* implicit */unsigned long long int) arr_14 [i_3 + 1] [i_3 - 1]))))));
                        var_31 += ((/* implicit */unsigned short) (~(((/* implicit */int) ((((/* implicit */int) arr_13 [i_3 + 2] [23LL])) < (((/* implicit */int) arr_13 [i_3 + 2] [i_3 - 1])))))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned long long int i_7 = 0; i_7 < 25; i_7 += 1) /* same iter space */
                        {
                            var_32 |= ((/* implicit */unsigned long long int) arr_20 [i_2] [i_3 + 2] [i_4]);
                            var_33 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)221))));
                            var_34 = ((/* implicit */unsigned int) ((unsigned char) ((((/* implicit */_Bool) -602919175)) ? (10513702372890277944ULL) : (((/* implicit */unsigned long long int) arr_12 [i_2] [i_2] [i_2])))));
                            var_35 = ((/* implicit */unsigned char) max((var_35), (((/* implicit */unsigned char) (+(var_0))))));
                        }
                        for (unsigned long long int i_8 = 0; i_8 < 25; i_8 += 1) /* same iter space */
                        {
                            var_36 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_22 [i_2] [i_6] [i_4] [i_3] [i_3] [i_2])) ? (arr_19 [i_2] [i_2] [i_4] [i_6] [i_8] [i_8]) : (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_2] [i_3 + 2])))));
                            var_37 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-50)) ? (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_2] [i_3] [i_2] [i_6] [i_8]))))) <= (((((/* implicit */_Bool) arr_23 [i_8] [16ULL] [16ULL] [i_4] [16ULL] [i_2])) ? (((/* implicit */int) (unsigned short)20407)) : (((/* implicit */int) var_3))))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)128)) ? (arr_12 [i_3] [i_6] [i_8]) : (arr_12 [i_2] [i_2] [i_6])))))))));
                            arr_25 [i_2] [i_2] [i_2] [(unsigned char)9] [i_2] = (~((-((~(arr_19 [i_8] [i_2] [i_4] [i_3] [i_2] [i_2]))))));
                        }
                        for (short i_9 = 0; i_9 < 25; i_9 += 3) 
                        {
                            var_38 = ((/* implicit */unsigned short) (+(var_0)));
                            var_39 = ((/* implicit */unsigned int) min((var_39), (((/* implicit */unsigned int) (+(arr_16 [i_2] [22] [i_4] [i_6] [i_9]))))));
                            var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (((~(7475146429468846583LL))) - (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)3))))))))) ? ((~(((/* implicit */int) ((unsigned short) var_0))))) : (((((/* implicit */_Bool) var_17)) ? (((((/* implicit */int) var_9)) >> (((var_17) + (1462111723))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))))));
                            var_41 = ((/* implicit */signed char) var_2);
                        }
                    }
                    for (unsigned char i_10 = 0; i_10 < 25; i_10 += 1) /* same iter space */
                    {
                        var_42 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_22 [i_3] [(unsigned char)19] [i_3 - 1] [i_3] [i_3 + 2] [i_2])) ? (((/* implicit */int) arr_22 [i_3] [i_3] [i_3] [i_3] [i_3 - 1] [i_2])) : (((/* implicit */int) var_6)))), ((+(((/* implicit */int) var_12))))));
                        var_43 = ((/* implicit */signed char) (~(max((((/* implicit */long long int) -1490374274)), (((((/* implicit */_Bool) (short)26822)) ? (-8541812732959678416LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)232)))))))));
                        var_44 += ((/* implicit */long long int) ((int) (_Bool)0));
                    }
                    for (unsigned char i_11 = 0; i_11 < 25; i_11 += 1) /* same iter space */
                    {
                        var_45 = ((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_32 [i_3 + 1] [i_3] [i_4] [i_11])) ? (-3578103820411902533LL) : (((/* implicit */long long int) ((/* implicit */int) var_18))))), (((((/* implicit */_Bool) var_17)) ? (arr_32 [i_3 - 1] [i_3] [i_4] [i_11]) : (((/* implicit */long long int) -1490374271))))));
                        arr_35 [i_2] [i_3 + 1] [i_4] [i_11] = ((/* implicit */long long int) ((int) (+(((((/* implicit */_Bool) (unsigned char)98)) ? (((/* implicit */int) arr_6 [i_2])) : (((/* implicit */int) var_5)))))));
                        var_46 += ((/* implicit */int) var_9);
                        var_47 &= ((/* implicit */_Bool) 2699152547U);
                    }
                }
            } 
        } 
    } 
}
