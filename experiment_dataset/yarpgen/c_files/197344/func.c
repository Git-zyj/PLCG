/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197344
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197344 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197344
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
    /* LoopSeq 3 */
    for (signed char i_0 = 1; i_0 < 23; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_20 |= ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)127)) ? (576460752303423487LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)0)))));
                    var_21 = ((/* implicit */_Bool) (-(((/* implicit */int) (_Bool)1))));
                    var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) ((((/* implicit */_Bool) max((arr_0 [i_1]), (arr_0 [i_0 - 1])))) ? (((((/* implicit */_Bool) arr_0 [i_1])) ? (arr_0 [i_2]) : (arr_0 [i_0 + 1]))) : (min((arr_0 [i_0 - 1]), (((/* implicit */int) (unsigned char)255)))))))));
                    var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) min((var_17), (((/* implicit */int) var_12))))), ((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) max((4294967295U), (((/* implicit */unsigned int) arr_1 [i_2])))))))) : ((~(((/* implicit */int) var_5)))))))));
                }
            } 
        } 
        var_24 *= ((/* implicit */long long int) ((((/* implicit */_Bool) ((min((((/* implicit */long long int) var_16)), (9223372036854775807LL))) - (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((signed char) arr_1 [i_0 + 1]))) || (var_4)))) : (arr_4 [i_0] [i_0 + 2])));
        var_25 = ((/* implicit */long long int) var_18);
        var_26 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (var_1) : (((/* implicit */int) var_0))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : ((~(4294967295U)))))));
    }
    for (short i_3 = 1; i_3 < 17; i_3 += 4) 
    {
        var_27 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_3 + 2])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_12))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_3 + 1]))))) : (min((arr_0 [i_3 + 2]), (((/* implicit */int) var_13))))));
        var_28 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_14)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (-9223372036854775796LL))) >= (((/* implicit */long long int) (~(((/* implicit */int) var_6)))))));
        arr_11 [i_3] [i_3] = ((/* implicit */_Bool) ((((((/* implicit */int) var_14)) == (arr_8 [i_3] [i_3] [i_3] [i_3 + 1]))) ? (((((/* implicit */_Bool) arr_9 [i_3])) ? (var_9) : (((/* implicit */long long int) arr_8 [i_3] [i_3] [i_3] [i_3])))) : (((/* implicit */long long int) (~(arr_9 [i_3]))))));
        var_29 *= ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) (!(((/* implicit */_Bool) var_2)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_3 - 1] [i_3 - 1])))))) : (max((((((/* implicit */_Bool) var_6)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))))), (((/* implicit */unsigned long long int) ((-5276633480553186840LL) - (((/* implicit */long long int) 4294967295U)))))))));
    }
    for (unsigned short i_4 = 2; i_4 < 22; i_4 += 4) 
    {
        var_30 = ((/* implicit */unsigned short) (+((-(1962548957)))));
        var_31 |= ((/* implicit */_Bool) (((!(var_18))) ? (((unsigned long long int) var_1)) : (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)252), (((/* implicit */unsigned char) arr_1 [i_4 + 1]))))))));
        var_32 = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_6 [i_4 - 1] [i_4 - 1] [i_4 - 2])), (0ULL)))) ? ((~(arr_7 [i_4 - 1] [i_4 + 1] [i_4 - 2]))) : (max((arr_7 [i_4 - 1] [i_4 + 1] [i_4 + 1]), (((/* implicit */unsigned long long int) arr_8 [i_4 - 1] [i_4] [i_4 - 2] [i_4 + 1]))))));
        arr_14 [i_4] |= ((/* implicit */signed char) 0LL);
        arr_15 [i_4] [i_4] |= ((/* implicit */unsigned int) max((max((arr_1 [i_4 + 1]), (arr_1 [i_4 + 1]))), (max((var_16), ((_Bool)1)))));
    }
    /* LoopNest 3 */
    for (short i_5 = 1; i_5 < 12; i_5 += 4) 
    {
        for (unsigned int i_6 = 0; i_6 < 13; i_6 += 4) 
        {
            for (signed char i_7 = 0; i_7 < 13; i_7 += 2) 
            {
                {
                    var_33 = ((/* implicit */short) max((var_33), (((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_20 [i_6] [i_7]) || (((/* implicit */_Bool) min((-1LL), (((/* implicit */long long int) (unsigned char)90))))))))) <= (max((0ULL), (arr_19 [i_5] [i_5] [i_5]))))))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_8 = 0; i_8 < 13; i_8 += 1) /* same iter space */
                    {
                        var_34 = ((/* implicit */short) (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_19 [i_7] [i_6] [i_7])))))))));
                        var_35 -= ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) (+(1962548957)))) ? ((-(4294967295U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_4))))), (((/* implicit */unsigned int) var_4))));
                    }
                    for (unsigned long long int i_9 = 0; i_9 < 13; i_9 += 1) /* same iter space */
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_9 [i_9])))) ? (((/* implicit */long long int) ((/* implicit */int) max((max((var_14), (((/* implicit */short) var_16)))), (((/* implicit */short) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) (unsigned short)65535))))))))) : (((((/* implicit */_Bool) (unsigned char)71)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (((((/* implicit */long long int) ((/* implicit */int) var_12))) * (var_15)))))));
                        /* LoopSeq 1 */
                        for (_Bool i_10 = 1; i_10 < 1; i_10 += 1) 
                        {
                            var_37 |= ((/* implicit */_Bool) ((unsigned char) ((((/* implicit */_Bool) (unsigned char)252)) ? (((/* implicit */int) (signed char)2)) : (((/* implicit */int) (_Bool)1)))));
                            arr_29 [i_5] [i_5] [i_7] [i_7] [i_5] [i_9] [i_9] = (-((~(((((/* implicit */_Bool) var_14)) ? (var_11) : (((/* implicit */unsigned long long int) arr_3 [i_5])))))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 13; i_11 += 1) /* same iter space */
                    {
                        var_38 = ((/* implicit */unsigned char) var_11);
                        var_39 = ((/* implicit */unsigned int) ((((((((/* implicit */int) arr_25 [i_5 + 1] [i_5 + 1] [i_5] [i_5 - 1] [i_5 + 1])) + (2147483647))) >> (((var_19) - (7719499855079013324ULL))))) >> (((-1962548958) + (1962548974)))));
                        /* LoopSeq 3 */
                        for (unsigned short i_12 = 1; i_12 < 11; i_12 += 4) /* same iter space */
                        {
                            var_40 = ((/* implicit */_Bool) min((((var_11) % (((/* implicit */unsigned long long int) arr_4 [i_5 - 1] [i_5])))), (((/* implicit */unsigned long long int) max((var_16), ((_Bool)0))))));
                            arr_37 [i_5] [i_6] [i_11] [i_11] [i_12] [i_12 + 2] = (+(18446744073709551615ULL));
                        }
                        for (unsigned short i_13 = 1; i_13 < 11; i_13 += 4) /* same iter space */
                        {
                            arr_40 [i_5] [i_6] [i_11] [i_13] = ((/* implicit */short) max((((((var_15) > (arr_33 [i_5] [i_6] [i_11] [i_5]))) ? (((/* implicit */int) var_16)) : (arr_4 [i_11] [i_7]))), (((/* implicit */int) var_18))));
                            var_41 *= ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                        }
                        for (unsigned short i_14 = 1; i_14 < 11; i_14 += 4) /* same iter space */
                        {
                            var_42 = ((/* implicit */short) (-(((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_16)) : (arr_0 [i_5 - 1])))));
                            var_43 = ((/* implicit */int) max((var_43), ((-(((/* implicit */int) (short)0))))));
                        }
                    }
                    var_44 = ((/* implicit */_Bool) max((var_44), (((/* implicit */_Bool) (+(var_10))))));
                    var_45 = ((/* implicit */long long int) min((((/* implicit */unsigned long long int) ((((/* implicit */long long int) (~((-2147483647 - 1))))) ^ (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) 3070846662U)) : (var_15)))))), (min((arr_27 [i_7]), (max((((/* implicit */unsigned long long int) (unsigned short)21637)), (var_11)))))));
                    var_46 = (+(((var_15) / (((/* implicit */long long int) ((/* implicit */int) var_13))))));
                }
            } 
        } 
    } 
}
