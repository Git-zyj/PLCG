/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219026
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219026 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219026
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
    var_14 = ((/* implicit */short) (+((~(((((/* implicit */int) var_10)) | (((/* implicit */int) var_0))))))));
    var_15 = ((/* implicit */int) min((var_15), (((/* implicit */int) ((((((((/* implicit */int) var_3)) < (((/* implicit */int) var_1)))) ? (((/* implicit */int) ((signed char) var_2))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_7))))))) != (((/* implicit */int) ((short) ((signed char) var_0)))))))));
    /* LoopSeq 4 */
    /* vectorizable */
    for (signed char i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 15; i_1 += 1) 
        {
            arr_5 [i_0] [i_1] = ((/* implicit */unsigned char) arr_0 [i_0]);
            arr_6 [i_0] = ((/* implicit */signed char) (-(((/* implicit */int) ((short) arr_1 [i_0] [i_1])))));
            var_16 = ((/* implicit */long long int) arr_4 [i_0] [i_0] [i_1]);
            var_17 = ((/* implicit */signed char) (+(((/* implicit */int) arr_2 [i_1]))));
            var_18 |= ((/* implicit */int) (!(((/* implicit */_Bool) arr_2 [i_0]))));
        }
        var_19 = ((((((/* implicit */int) arr_2 [i_0])) + (2147483647))) << (((((/* implicit */int) var_3)) - (150))));
        var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((arr_3 [i_0]) % (arr_0 [(signed char)4])))))))));
    }
    for (short i_2 = 4; i_2 < 8; i_2 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (signed char i_3 = 2; i_3 < 8; i_3 += 3) 
        {
            for (signed char i_4 = 1; i_4 < 9; i_4 += 2) 
            {
                {
                    var_21 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((((/* implicit */int) var_1)) / (((/* implicit */int) var_10))))))) ? (arr_0 [7LL]) : (((/* implicit */int) ((min((var_5), (((/* implicit */long long int) arr_10 [i_2])))) < (min((((/* implicit */long long int) var_12)), (arr_15 [(unsigned char)0] [i_3] [i_2 - 4] [i_2]))))))));
                    /* LoopSeq 1 */
                    for (unsigned char i_5 = 0; i_5 < 10; i_5 += 4) 
                    {
                        arr_20 [i_2 + 2] [i_2] [i_3] [9] = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min((-204943808), (-204943820)))) ? (((/* implicit */int) arr_16 [i_2 - 3] [i_2 - 2] [i_3 - 2] [i_4 - 1])) : (((/* implicit */int) var_9)))))));
                        arr_21 [i_3] [(short)8] [i_4] [(signed char)9] [i_3] = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned char)232)) ? (((/* implicit */int) (signed char)48)) : (-204943826)));
                        arr_22 [i_3] [(unsigned char)9] [(signed char)1] [i_4 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((signed char) arr_19 [i_2] [i_2 - 4] [i_2] [(unsigned char)0] [(unsigned char)3] [(unsigned char)3]))) ? (((/* implicit */int) arr_10 [i_2 - 3])) : ((-(((/* implicit */int) var_10))))))) || (((/* implicit */_Bool) min((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_10)))), ((-(((/* implicit */int) arr_16 [(unsigned char)5] [i_3] [i_4] [i_5])))))))));
                    }
                    var_22 = ((/* implicit */unsigned char) min((var_22), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) ((((/* implicit */int) var_9)) >= (((/* implicit */int) arr_2 [(short)2]))))) : (((/* implicit */int) var_7))))))))));
                }
            } 
        } 
        arr_23 [i_2 - 4] [i_2] = ((/* implicit */signed char) ((int) ((((/* implicit */int) ((signed char) var_6))) - (max((arr_0 [i_2 + 1]), (((/* implicit */int) arr_10 [i_2])))))));
        /* LoopNest 2 */
        for (long long int i_6 = 0; i_6 < 10; i_6 += 3) 
        {
            for (unsigned char i_7 = 0; i_7 < 10; i_7 += 3) 
            {
                {
                    var_23 = ((/* implicit */short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_12))))) ? (((((/* implicit */_Bool) (short)30703)) ? (-204943808) : (204943818))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_7 [i_2] [i_7]))))))))));
                    /* LoopSeq 4 */
                    for (unsigned char i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_3 [i_2])) ? (((/* implicit */int) arr_24 [(signed char)7] [2LL] [i_2])) : (((/* implicit */int) var_6)))), (((arr_8 [3LL]) | (((/* implicit */int) arr_13 [i_8] [i_7] [i_8]))))))) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (((((/* implicit */_Bool) arr_2 [i_2 - 1])) ? (((((/* implicit */_Bool) 204943840)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)46))) : (-3539571557267425400LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) var_13)), (arr_4 [i_6] [(signed char)14] [(short)9])))))))));
                        var_25 = ((/* implicit */long long int) ((short) ((((/* implicit */_Bool) var_1)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) arr_27 [(signed char)1] [i_6] [i_2 - 3] [0]))))));
                        var_26 = ((((/* implicit */_Bool) min((((((/* implicit */_Bool) arr_16 [i_8] [i_6] [i_6] [i_2 - 1])) ? (((/* implicit */long long int) var_4)) : (arr_1 [i_7] [i_6]))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_16 [i_8] [i_7] [i_6] [i_2 - 3])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_26 [i_2 - 2] [i_6] [i_7])))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_8])) ? (((/* implicit */int) arr_19 [i_2 + 2] [i_2 - 4] [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_7])) : (((/* implicit */int) arr_19 [i_2 + 1] [i_2 - 2] [i_2 - 1] [i_2 - 3] [i_2] [i_2 - 3]))))) : (((long long int) (+(((/* implicit */int) arr_26 [i_2] [i_2 + 2] [i_2]))))));
                        arr_31 [(signed char)4] = ((/* implicit */long long int) (~(((/* implicit */int) arr_28 [i_2 + 2] [i_2 + 2] [(signed char)1] [(short)0] [(short)4] [i_8]))));
                    }
                    for (unsigned char i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        arr_35 [(short)1] [i_6] = ((/* implicit */signed char) (~(((/* implicit */int) (unsigned char)108))));
                        arr_36 [i_2 - 1] [i_2 - 1] [i_6] [i_2 - 1] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) var_8)) ^ (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_13 [i_9] [i_2 - 1] [(unsigned char)8])) : (((((var_4) + (2147483647))) >> (((var_5) - (47249019433556558LL)))))))));
                    }
                    for (unsigned char i_10 = 0; i_10 < 10; i_10 += 4) /* same iter space */
                    {
                        var_27 = ((/* implicit */int) (!(((/* implicit */_Bool) (short)-22656))));
                        arr_41 [i_6] [i_6] [i_2 + 2] [(short)7] [(short)7] = ((/* implicit */signed char) ((long long int) (~(((/* implicit */int) arr_19 [i_2] [i_2] [i_2 - 4] [i_7] [i_2] [i_7])))));
                        arr_42 [i_2] [i_6] [i_7] [i_6] [(signed char)7] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_0)) / (((/* implicit */int) var_12)))) / (((((/* implicit */_Bool) arr_34 [(signed char)5])) ? (((/* implicit */int) arr_27 [i_2] [i_2] [i_2 - 4] [i_2 - 1])) : (((/* implicit */int) var_1))))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_29 [i_2] [i_2] [i_2 - 2] [0LL]))) * (((((/* implicit */_Bool) -6807752617108642542LL)) ? (((/* implicit */long long int) ((/* implicit */int) (short)0))) : (-9223372036854775802LL))))) : (((/* implicit */long long int) (((+(((/* implicit */int) (short)(-32767 - 1))))) / (((((/* implicit */int) var_8)) * (((/* implicit */int) arr_12 [i_6] [i_6] [i_10])))))))));
                    }
                    for (unsigned char i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        arr_45 [i_11] [i_7] [i_2] [i_2] [i_2] = ((signed char) ((((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)0))) : (-3539571557267425376LL))) != (((/* implicit */long long int) (+(((/* implicit */int) var_12)))))));
                        arr_46 [i_6] [i_6] [(unsigned char)7] = ((/* implicit */signed char) (((+((+(arr_1 [i_2] [i_7]))))) != (min(((-(var_5))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) - (((/* implicit */int) var_0)))))))));
                        arr_47 [i_6] [i_6] [i_7] [i_6] = ((/* implicit */signed char) ((((((/* implicit */int) arr_16 [i_2 - 3] [i_2 - 3] [i_2 + 2] [i_2 + 2])) != (((/* implicit */int) arr_16 [i_2 - 1] [i_2 - 4] [i_2 - 4] [i_2 + 2])))) && (((/* implicit */_Bool) (+(((((/* implicit */_Bool) arr_18 [i_2] [(signed char)4] [i_11] [i_2 - 4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_6)))))))));
                    }
                }
            } 
        } 
        arr_48 [i_2] [i_2] = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) arr_37 [i_2] [i_2 - 2] [i_2 - 3] [i_2 + 2])))) ? (((long long int) ((var_5) <= (((/* implicit */long long int) ((/* implicit */int) var_1)))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_2 - 2])) ? (((/* implicit */int) arr_34 [i_2 - 2])) : (((/* implicit */int) arr_28 [i_2] [i_2 - 2] [i_2 - 2] [i_2 + 2] [i_2 + 2] [i_2 + 2])))))));
        arr_49 [i_2] [i_2] = (((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) (+(204943826)))));
    }
    for (short i_12 = 4; i_12 < 8; i_12 += 3) /* same iter space */
    {
        var_28 = ((/* implicit */short) (~(((/* implicit */int) ((signed char) arr_0 [i_12 - 1])))));
        var_29 -= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)15451)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)81)))))));
        var_30 *= ((/* implicit */short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_0)) ? (var_5) : (((/* implicit */long long int) ((/* implicit */int) var_9))))), (((/* implicit */long long int) arr_29 [i_12 + 1] [i_12 - 2] [i_12 - 1] [i_12 - 2]))))) ? ((-(((long long int) arr_30 [(short)1])))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_26 [i_12 + 1] [i_12 - 3] [i_12 - 3])) < (((/* implicit */int) ((unsigned char) var_4)))))))));
    }
    /* vectorizable */
    for (short i_13 = 4; i_13 < 8; i_13 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (int i_14 = 0; i_14 < 10; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 10; i_15 += 3) 
            {
                {
                    var_31 *= (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_25 [i_13] [i_15]))))));
                    var_32 = ((/* implicit */signed char) ((long long int) arr_40 [i_13 - 3] [i_15]));
                    arr_60 [i_13] [i_14] [i_14] = ((/* implicit */signed char) ((((/* implicit */int) var_3)) | (((/* implicit */int) arr_54 [i_15]))));
                }
            } 
        } 
        arr_61 [(short)8] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [(short)9])) ? (((/* implicit */int) arr_13 [(short)6] [i_13 - 2] [i_13 - 2])) : (arr_43 [8LL] [i_13 - 2] [8] [8LL])))) ? (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */long long int) arr_25 [i_13 + 2] [i_13 - 4])))) : (((/* implicit */long long int) (~(((/* implicit */int) arr_13 [2] [i_13] [2])))))));
    }
    var_33 = ((/* implicit */signed char) max((((/* implicit */long long int) var_0)), (((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) var_6))))) ? (((/* implicit */long long int) ((/* implicit */int) min((var_9), (((/* implicit */unsigned char) var_10)))))) : (min((((/* implicit */long long int) (unsigned char)226)), (34594033032871464LL)))))));
    var_34 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) var_8)) || (((/* implicit */_Bool) var_7)))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) ((signed char) var_12)))))) ? (((/* implicit */int) var_9)) : ((((!(((/* implicit */_Bool) var_8)))) ? (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_8)))) : (((/* implicit */int) max((var_7), (((/* implicit */short) var_12)))))))));
}
