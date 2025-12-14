/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192741
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192741 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192741
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
    var_10 ^= ((/* implicit */short) (+(((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65507)))))));
    var_11 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (~(((/* implicit */int) var_4)))))))));
    /* LoopSeq 1 */
    for (int i_0 = 2; i_0 < 21; i_0 += 3) 
    {
        var_12 ^= ((/* implicit */signed char) (~((+(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) (!(var_9))))))));
        /* LoopSeq 3 */
        for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            var_13 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (~((-(((/* implicit */int) (unsigned char)249)))))))));
            var_14 = (+((~(213961455527114764ULL))));
            var_15 = (~((+((-(((/* implicit */int) (_Bool)1)))))));
            var_16 = ((/* implicit */unsigned short) max((var_16), (((/* implicit */unsigned short) (-((-(((/* implicit */int) (!(((/* implicit */_Bool) 17981019262888147928ULL))))))))))));
        }
        for (signed char i_2 = 0; i_2 < 22; i_2 += 1) 
        {
            var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (~((~((~(((/* implicit */int) arr_5 [i_0] [i_0])))))))))));
            arr_10 [i_0] [i_2] = ((/* implicit */int) (!(((/* implicit */_Bool) (+((-(arr_7 [(short)7] [i_2]))))))));
        }
        for (signed char i_3 = 2; i_3 < 20; i_3 += 2) 
        {
            /* LoopSeq 4 */
            /* vectorizable */
            for (unsigned char i_4 = 1; i_4 < 20; i_4 += 2) 
            {
                var_18 ^= ((/* implicit */short) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_3])))))));
                var_19 -= ((/* implicit */_Bool) (~((+(3782703497521685868ULL)))));
                var_20 = ((/* implicit */signed char) (-((-(var_7)))));
            }
            for (unsigned int i_5 = 0; i_5 < 22; i_5 += 4) 
            {
                var_21 = ((/* implicit */_Bool) (~((+((-(arr_14 [i_0] [i_3] [i_3])))))));
                var_22 ^= (-(((/* implicit */int) (!((!(((/* implicit */_Bool) arr_11 [i_5] [i_5]))))))));
            }
            /* vectorizable */
            for (unsigned char i_6 = 0; i_6 < 22; i_6 += 1) 
            {
                /* LoopSeq 3 */
                for (unsigned char i_7 = 2; i_7 < 21; i_7 += 4) 
                {
                    var_23 ^= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (_Bool)1))))));
                    /* LoopSeq 2 */
                    for (unsigned char i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        var_24 = ((/* implicit */_Bool) (-((~(var_7)))));
                        var_25 = ((/* implicit */unsigned int) (-((+(((/* implicit */int) var_1))))));
                        var_26 ^= ((/* implicit */unsigned char) (-((-(((/* implicit */int) (signed char)98))))));
                    }
                    for (long long int i_9 = 2; i_9 < 20; i_9 += 3) 
                    {
                        var_27 = ((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))));
                        var_28 = ((/* implicit */unsigned short) (+((~(5140673896275967168LL)))));
                        arr_30 [i_0] [i_3] [i_3] [i_6] [i_0] [i_9] = ((/* implicit */unsigned short) (+((+(((/* implicit */int) arr_11 [i_0] [i_3]))))));
                        var_29 = ((/* implicit */short) (!(((/* implicit */_Bool) (unsigned char)20))));
                    }
                    arr_31 [i_0] [i_0] [i_3] [i_6] [i_6] [i_7 - 2] = ((/* implicit */unsigned long long int) (~((-(((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))));
                }
                for (unsigned long long int i_10 = 2; i_10 < 18; i_10 += 1) 
                {
                    var_30 ^= ((/* implicit */short) (+(((/* implicit */int) (!(arr_16 [(unsigned short)14] [i_3] [i_6] [i_10]))))));
                    var_31 ^= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (short)26582)))))));
                    arr_34 [i_0] [i_3] [14ULL] [i_10] [i_10] = ((/* implicit */short) (~((+(arr_8 [i_0] [i_6] [i_6])))));
                    /* LoopSeq 3 */
                    for (unsigned long long int i_11 = 0; i_11 < 22; i_11 += 2) 
                    {
                        var_32 = (+((-(-2147483617))));
                        var_33 *= ((/* implicit */_Bool) (+((~(9223372036854775807LL)))));
                        var_34 = ((/* implicit */unsigned short) max((var_34), (((/* implicit */unsigned short) (~((~(((/* implicit */int) arr_20 [i_11])))))))));
                    }
                    for (short i_12 = 0; i_12 < 22; i_12 += 2) 
                    {
                        var_35 = (!(((/* implicit */_Bool) (~(((/* implicit */int) arr_27 [i_0] [i_0] [i_6] [i_6] [i_12] [(_Bool)1] [i_6]))))));
                        var_36 *= ((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned char)107))));
                    }
                    for (unsigned short i_13 = 3; i_13 < 19; i_13 += 4) 
                    {
                        var_37 = ((/* implicit */unsigned short) (+((~(((/* implicit */int) (signed char)98))))));
                        var_38 ^= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (+(9223372036854775807LL))))));
                        var_39 = ((/* implicit */unsigned long long int) (+((+(((/* implicit */int) (unsigned char)254))))));
                        arr_42 [i_0] [i_3] [i_6] [i_10] [i_0] = ((/* implicit */short) (+((~(((/* implicit */int) arr_25 [(short)15] [(short)15] [i_6] [i_6] [(unsigned short)21] [(short)15]))))));
                    }
                }
                for (long long int i_14 = 2; i_14 < 21; i_14 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned char i_15 = 0; i_15 < 22; i_15 += 1) 
                    {
                        var_40 += ((/* implicit */long long int) (-((+(((/* implicit */int) (short)22495))))));
                        var_41 = ((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_6)))))));
                        var_42 = ((/* implicit */short) (!((!(((/* implicit */_Bool) var_8))))));
                        arr_47 [i_0] [i_3] [i_6] [i_14] [i_15] = ((/* implicit */int) (~((~((-9223372036854775807LL - 1LL))))));
                    }
                    for (long long int i_16 = 2; i_16 < 20; i_16 += 1) 
                    {
                        arr_52 [i_0] [i_6] = ((/* implicit */signed char) (+((~(arr_48 [i_0 + 1] [i_0 + 1] [i_6] [i_14] [i_16] [i_0 + 1])))));
                        var_43 = ((/* implicit */short) (+((~(var_5)))));
                    }
                    arr_53 [i_14] [i_0] [i_0] [i_0] = ((/* implicit */short) (-((+(((/* implicit */int) var_0))))));
                    arr_54 [i_0] [i_3 - 1] [i_6] [i_0] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_3))))));
                }
                var_44 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0])))))));
                var_45 = ((/* implicit */unsigned char) (-((+(0ULL)))));
            }
            for (unsigned char i_17 = 2; i_17 < 21; i_17 += 1) 
            {
                var_46 = ((/* implicit */signed char) max((var_46), (((/* implicit */signed char) (+((+((-(((/* implicit */int) var_3)))))))))));
                arr_57 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1)))))));
                arr_58 [i_0] = ((/* implicit */_Bool) (~(((/* implicit */int) (!(((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
            }
            arr_59 [i_0] [i_0] = ((/* implicit */_Bool) (+((+((+(((/* implicit */int) (unsigned short)53309))))))));
            var_47 -= ((/* implicit */unsigned char) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) -6213516156766527040LL)))))))));
            var_48 = ((/* implicit */int) min((var_48), (((/* implicit */int) (~((~((~(-9223372036854775799LL))))))))));
            var_49 ^= ((/* implicit */unsigned short) (-((+((+(((/* implicit */int) var_2))))))));
        }
        var_50 -= ((/* implicit */unsigned char) (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(var_5)))))))));
    }
}
