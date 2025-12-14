/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34304
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34304 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34304
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
    var_20 = ((/* implicit */unsigned long long int) var_16);
    var_21 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (max((((/* implicit */unsigned int) (_Bool)1)), (2040834499U))) : (var_17)));
    var_22 = ((/* implicit */short) var_13);
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 25; i_0 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) (!(((_Bool) var_14)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            arr_4 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) (_Bool)1))));
            var_24 += ((/* implicit */unsigned int) ((unsigned short) ((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_1])) ? (((/* implicit */int) arr_1 [i_1])) : (((/* implicit */int) (_Bool)0)))));
            var_25 = ((/* implicit */signed char) (~(((/* implicit */int) arr_3 [i_0] [i_1] [8U]))));
            /* LoopNest 3 */
            for (unsigned char i_2 = 0; i_2 < 25; i_2 += 3) 
            {
                for (unsigned char i_3 = 0; i_3 < 25; i_3 += 3) 
                {
                    for (int i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        {
                            var_26 = ((/* implicit */_Bool) (((_Bool)1) ? (var_9) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (signed char)108)) <= (((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)3] [i_0] [i_0]))))))));
                            var_27 += ((/* implicit */unsigned short) (-(((/* implicit */int) arr_10 [i_4] [i_3] [i_2] [i_1] [i_0]))));
                            var_28 &= ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-116))));
                        }
                    } 
                } 
            } 
        }
        /* LoopSeq 2 */
        for (unsigned short i_5 = 0; i_5 < 25; i_5 += 3) /* same iter space */
        {
            /* LoopSeq 2 */
            for (short i_6 = 0; i_6 < 25; i_6 += 2) 
            {
                var_29 = ((/* implicit */unsigned short) (+(4294967295U)));
                /* LoopSeq 1 */
                for (unsigned short i_7 = 0; i_7 < 25; i_7 += 1) 
                {
                    var_30 = ((((/* implicit */_Bool) var_2)) ? (var_3) : (2697155012U));
                    arr_24 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_22 [i_7] [i_5] [i_6] [i_5])) ? (9205535128534808154LL) : (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))));
                    var_31 = ((/* implicit */unsigned int) min((var_31), (((/* implicit */unsigned int) (~(((((/* implicit */_Bool) arr_5 [i_6])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_6)))))))));
                }
            }
            for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
            {
                var_32 &= ((/* implicit */unsigned char) (+(((/* implicit */int) (signed char)-49))));
                var_33 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_0] [i_5])) * (((/* implicit */int) (unsigned char)87))))) + (arr_22 [i_8] [i_8 - 1] [i_8 - 1] [i_8])));
                var_34 *= ((/* implicit */unsigned int) (+(((/* implicit */int) var_15))));
            }
            var_35 = ((/* implicit */unsigned int) (!(var_16)));
        }
        for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
        {
            var_36 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_12 [i_0] [i_0] [18LL] [i_0] [(unsigned char)19])) && (((/* implicit */_Bool) var_17))));
            var_37 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_1)) ? (var_17) : (((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) var_5))))));
            var_38 = ((/* implicit */_Bool) max((var_38), (((/* implicit */_Bool) (~(((/* implicit */int) var_10)))))));
        }
    }
    for (unsigned short i_10 = 0; i_10 < 25; i_10 += 2) /* same iter space */
    {
        arr_33 [i_10] [i_10] &= ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(max((var_7), (131071U)))))) ? (((/* implicit */int) ((((/* implicit */_Bool) (signed char)(-127 - 1))) || (((/* implicit */_Bool) var_0))))) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_29 [i_10] [i_10])) : (((/* implicit */int) (unsigned short)65535))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_11 = 0; i_11 < 25; i_11 += 1) 
        {
            /* LoopNest 3 */
            for (unsigned int i_12 = 2; i_12 < 22; i_12 += 2) 
            {
                for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                {
                    for (unsigned int i_14 = 0; i_14 < 25; i_14 += 3) 
                    {
                        {
                            var_39 = ((/* implicit */long long int) ((_Bool) var_9));
                            var_40 = ((/* implicit */signed char) ((int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_10] [i_10] [i_14]))) & (8388607U))));
                            var_41 += ((/* implicit */unsigned short) (((_Bool)0) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_43 [i_10] [i_11] [i_10] [i_13] [i_12 - 1]))) : (870559718U)));
                            var_42 = ((/* implicit */unsigned short) (+(((/* implicit */int) (signed char)-26))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (_Bool i_16 = 0; i_16 < 0; i_16 += 1) 
                {
                    {
                        arr_53 [(signed char)0] [i_11] [i_15] [i_16] = ((/* implicit */short) ((((_Bool) var_4)) ? (((((/* implicit */int) arr_32 [i_10] [i_15])) * (((/* implicit */int) var_11)))) : (((/* implicit */int) var_4))));
                        var_43 = ((/* implicit */unsigned short) (~((+(arr_9 [i_10] [i_11] [i_15] [i_16])))));
                    }
                } 
            } 
            var_44 *= ((/* implicit */signed char) ((((((((/* implicit */int) arr_5 [18])) + (2147483647))) >> (((870559718U) - (870559709U))))) | (((/* implicit */int) (unsigned short)65535))));
            var_45 = ((/* implicit */_Bool) ((((arr_45 [i_10] [i_11] [(unsigned char)4] [(unsigned char)16] [5U]) > (var_14))) ? (((arr_18 [i_11]) + (((/* implicit */unsigned long long int) var_14)))) : (arr_46 [i_10] [i_11] [i_10])));
            var_46 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (signed char)(-127 - 1))) : (((/* implicit */int) arr_51 [i_10] [2ULL] [2ULL] [2ULL] [i_10])))))));
        }
        for (unsigned int i_17 = 0; i_17 < 25; i_17 += 2) 
        {
            var_47 = ((/* implicit */unsigned int) max((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), (((((/* implicit */int) ((var_13) <= (((/* implicit */unsigned int) ((/* implicit */int) arr_51 [i_17] [i_17] [22U] [i_17] [i_10])))))) + (((/* implicit */int) (_Bool)1))))));
            var_48 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned short) arr_5 [i_17])), ((unsigned short)65535)))), (max((-1LL), (((/* implicit */long long int) arr_12 [i_10] [i_10] [i_10] [i_10] [i_17]))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) 4286578684U)))))) : (min((((/* implicit */unsigned long long int) 402671612U)), (arr_21 [i_10] [i_17] [i_10] [i_17])))));
        }
        var_49 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 3541067379U)) ? (((/* implicit */int) (unsigned char)29)) : (((/* implicit */int) (unsigned short)0))));
    }
    for (unsigned short i_18 = 0; i_18 < 25; i_18 += 2) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned char i_19 = 0; i_19 < 25; i_19 += 1) /* same iter space */
        {
            var_50 ^= ((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) >= ((~(((/* implicit */int) var_1)))))) || (((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) var_15))))))));
            var_51 = ((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_4))))) ? ((~(arr_52 [i_18] [i_19] [i_19] [(unsigned short)19]))) : (((/* implicit */long long int) (-(var_0)))))));
            var_52 *= max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) & (3424407577U))), (((/* implicit */unsigned int) max((((/* implicit */unsigned short) var_1)), (arr_36 [i_18])))));
        }
        for (unsigned char i_20 = 0; i_20 < 25; i_20 += 1) /* same iter space */
        {
            arr_65 [i_18] = ((/* implicit */unsigned int) ((unsigned char) ((int) 101447234U)));
            var_53 |= ((/* implicit */long long int) ((max((((/* implicit */long long int) var_16)), (arr_54 [i_20] [i_20]))) <= (((/* implicit */long long int) max((((/* implicit */unsigned int) var_2)), ((-(var_0))))))));
            var_54 = max(((((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)36218))) : (4193520061U))), (max((var_0), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)0)) | (((/* implicit */int) arr_41 [(unsigned short)19] [15U] [(unsigned short)20]))))))));
        }
        for (unsigned short i_21 = 0; i_21 < 25; i_21 += 1) 
        {
            arr_70 [i_18] [i_21] = ((/* implicit */signed char) ((unsigned short) (~(((/* implicit */int) min((var_1), (((/* implicit */short) arr_3 [i_18] [(_Bool)1] [(_Bool)1]))))))));
            var_55 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)100)) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (signed char)31))));
            var_56 *= ((0U) / (((/* implicit */unsigned int) max((((/* implicit */int) (short)32767)), ((-(((/* implicit */int) (unsigned short)29309))))))));
        }
        var_57 = ((/* implicit */unsigned short) (~(((/* implicit */int) (unsigned short)13553))));
    }
    var_58 = ((/* implicit */long long int) ((((((/* implicit */_Bool) max((3735048080U), (366936317U)))) ? (((3692413552U) / (((/* implicit */unsigned int) ((/* implicit */int) (signed char)100))))) : (4294967168U))) & (var_14)));
}
