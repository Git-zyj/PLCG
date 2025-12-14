/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30221
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30221 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30221
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
    var_17 = ((/* implicit */signed char) (~((+(469762048U)))));
    var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) (((((+(((((/* implicit */int) var_10)) - (var_14))))) + (2147483647))) << (((max((((/* implicit */int) ((unsigned char) var_2))), ((~(((/* implicit */int) (short)-26246)))))) - (26245))))))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 4; i_0 < 8; i_0 += 2) /* same iter space */
    {
        var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (~(arr_0 [i_0] [i_0]))))));
        var_20 += ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(-716551205)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0 - 4])))) : ((~(arr_0 [i_0] [i_0])))))) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : ((~(((/* implicit */int) arr_1 [i_0 - 4] [5LL]))))));
    }
    for (unsigned int i_1 = 4; i_1 < 8; i_1 += 2) /* same iter space */
    {
        /* LoopSeq 4 */
        for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
        {
            arr_9 [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((arr_5 [i_2]) ? (((/* implicit */int) arr_5 [i_2])) : (((/* implicit */int) arr_5 [i_1]))))) ? (max(((-(((/* implicit */int) (unsigned short)24576)))), (((/* implicit */int) arr_1 [i_2] [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_2])))))));
            /* LoopNest 3 */
            for (signed char i_3 = 3; i_3 < 9; i_3 += 4) 
            {
                for (unsigned short i_4 = 0; i_4 < 11; i_4 += 3) 
                {
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) (~(var_5))))));
                            var_22 = ((/* implicit */_Bool) (~(max((((/* implicit */unsigned int) arr_7 [i_1] [i_1] [i_1 - 1])), (min((((/* implicit */unsigned int) var_6)), (arr_3 [(signed char)10])))))));
                            var_23 += max(((short)-16384), (((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_3] [i_1])) ? (arr_0 [i_1] [i_2]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_3]))))))))));
                        }
                    } 
                } 
            } 
            var_24 = ((/* implicit */_Bool) min((var_24), (((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1]))));
            /* LoopSeq 1 */
            for (unsigned char i_6 = 2; i_6 < 9; i_6 += 4) 
            {
                var_25 -= ((/* implicit */unsigned short) (-(((/* implicit */int) (short)-16384))));
                var_26 += ((/* implicit */short) min(((!(((/* implicit */_Bool) arr_16 [i_6 - 2] [i_6 - 2] [i_6 + 2] [i_1 - 1] [i_1 - 2])))), (((((/* implicit */int) arr_16 [i_6 - 1] [i_6 + 1] [i_6 - 2] [i_1 + 2] [i_1 - 1])) != (((/* implicit */int) arr_16 [i_6 + 1] [i_6 + 2] [i_6 - 2] [i_1 - 1] [i_1 + 3]))))));
            }
            var_27 = ((/* implicit */unsigned short) (short)4020);
        }
        for (unsigned int i_7 = 0; i_7 < 11; i_7 += 3) 
        {
            arr_22 [i_7] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(4194303)))) ? (293629508) : (((/* implicit */int) min((((/* implicit */unsigned short) max((((/* implicit */signed char) var_10)), (var_16)))), (arr_11 [i_1] [i_1]))))));
            arr_23 [i_1] = ((/* implicit */unsigned short) (-(((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)(-127 - 1))), ((short)15)))) >= (((arr_5 [i_1]) ? (arr_6 [i_1]) : (((/* implicit */int) (short)-1)))))))));
            arr_24 [(short)8] [i_1 - 1] |= ((/* implicit */int) arr_4 [i_1]);
            var_28 = ((/* implicit */long long int) var_6);
        }
        for (unsigned char i_8 = 0; i_8 < 11; i_8 += 3) 
        {
            arr_28 [i_8] [i_8] = ((/* implicit */short) arr_0 [i_1] [i_8]);
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 11; i_9 += 3) 
            {
                for (unsigned char i_10 = 0; i_10 < 11; i_10 += 1) 
                {
                    {
                        arr_33 [i_1] [(unsigned short)5] [i_9] [i_10] [i_8] = ((/* implicit */short) min((max((arr_18 [i_1] [1U] [i_10]), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_32 [3] [i_8] [i_9] [(signed char)5] [i_1]))))))), (min(((~(11379643661449621368ULL))), (((/* implicit */unsigned long long int) arr_20 [i_1]))))));
                        var_29 = ((/* implicit */signed char) ((short) min((arr_19 [i_8] [i_1 + 1]), ((short)-16384))));
                        var_30 = (i_8 % 2 == 0) ? (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned int) var_1))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)105)) : (1595439754))) : ((+(((arr_6 [7ULL]) >> (((((/* implicit */int) arr_8 [i_8])) - (192)))))))))) : (((/* implicit */unsigned char) (((!(((/* implicit */_Bool) ((unsigned int) var_1))))) ? (((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) (unsigned char)105)) : (1595439754))) : ((+(((arr_6 [7ULL]) >> (((((((/* implicit */int) arr_8 [i_8])) - (192))) + (200))))))))));
                        arr_34 [i_8] [i_9] [i_8] [i_8] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)0)) ? (((/* implicit */int) (unsigned char)84)) : (293629502)));
                    }
                } 
            } 
        }
        for (_Bool i_11 = 0; i_11 < 0; i_11 += 1) 
        {
            arr_38 [i_1] |= ((short) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)58015)))) ? (((var_8) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-51))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)63)) ? (((/* implicit */int) arr_15 [i_1])) : (((/* implicit */int) (short)32767)))))));
            arr_39 [i_1] [i_11] [i_11] = ((/* implicit */unsigned char) var_2);
            arr_40 [i_11] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) ((unsigned long long int) var_9))) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) var_9)))))));
        }
        var_31 = ((/* implicit */signed char) min((var_31), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(0U)))) ? (max((var_2), (((/* implicit */unsigned long long int) arr_14 [i_1] [i_1] [i_1] [i_1])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_15 [i_1 + 3])))))) ? ((-(((/* implicit */int) ((short) var_5))))) : (((((/* implicit */int) arr_31 [i_1 - 2] [i_1 - 4] [i_1 - 3] [i_1 + 2])) << ((((((-(((/* implicit */int) arr_14 [i_1] [i_1] [i_1] [i_1])))) + (24))) - (19))))))))));
        arr_41 [i_1] = ((/* implicit */unsigned short) ((min((((((/* implicit */_Bool) arr_7 [i_1] [i_1] [i_1])) ? (((/* implicit */int) var_13)) : (arr_12 [i_1] [i_1]))), ((~(((/* implicit */int) arr_21 [i_1] [i_1] [i_1])))))) == (((/* implicit */int) var_9))));
    }
    for (unsigned int i_12 = 4; i_12 < 8; i_12 += 2) /* same iter space */
    {
        var_32 = ((/* implicit */signed char) max((var_32), (((/* implicit */signed char) (~(((/* implicit */int) (short)-11)))))));
        /* LoopSeq 2 */
        for (signed char i_13 = 4; i_13 < 8; i_13 += 1) 
        {
            arr_47 [i_12] [i_12] |= ((/* implicit */unsigned int) min((((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_15)) ? (var_8) : (((/* implicit */unsigned long long int) arr_13 [i_12 - 4] [i_12]))))) && (((/* implicit */_Bool) var_2))))), (((int) (!(((/* implicit */_Bool) 1023)))))));
            /* LoopSeq 1 */
            for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) 
            {
                arr_50 [i_12] [i_12] [i_13] [i_14] = ((/* implicit */short) (+(((((((/* implicit */_Bool) arr_4 [i_14])) || (((/* implicit */_Bool) (signed char)-104)))) ? (min((9223372036854775807LL), (((/* implicit */long long int) var_10)))) : (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                var_33 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) arr_4 [(unsigned short)4])) ? (arr_0 [i_12] [i_13]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-16392)))))))) ? (((arr_46 [i_14]) ? (((((/* implicit */_Bool) var_3)) ? (arr_42 [i_14] [i_13]) : (((/* implicit */unsigned int) 881757165)))) : (((/* implicit */unsigned int) 881757186)))) : (((/* implicit */unsigned int) (-(((/* implicit */int) min((var_4), ((short)-19362)))))))));
            }
        }
        for (unsigned int i_15 = 1; i_15 < 9; i_15 += 2) 
        {
            arr_55 [i_15] [i_15] = ((/* implicit */short) ((unsigned char) (((~(var_14))) == (((/* implicit */int) ((unsigned short) 4294967284U))))));
            var_34 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_48 [i_12 + 3] [10U] [(short)6] [i_12])) ? (((/* implicit */unsigned long long int) ((arr_2 [i_15]) ? (((/* implicit */int) arr_20 [i_15 + 1])) : (((/* implicit */int) arr_10 [i_12] [(signed char)6] [1]))))) : (((arr_0 [i_15] [i_15]) & (arr_29 [i_12] [i_15 - 1] [i_15] [i_12])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_12] [i_12]))) : (min((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_7 [i_15] [i_12] [(unsigned short)3]))))), (min((var_1), (((/* implicit */unsigned long long int) arr_11 [i_12] [i_12]))))))));
        }
        arr_56 [i_12] = ((/* implicit */unsigned int) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (signed char)3)))))) != ((-(arr_0 [i_12] [i_12 + 3]))))))));
        var_35 = ((/* implicit */int) max((var_35), (((/* implicit */int) min((((/* implicit */unsigned long long int) (~(arr_3 [i_12])))), ((~((~(arr_29 [i_12 + 1] [i_12 - 2] [3] [i_12]))))))))));
    }
    /* vectorizable */
    for (short i_16 = 0; i_16 < 25; i_16 += 4) 
    {
        var_36 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_58 [i_16] [i_16]))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_3))));
        arr_59 [21] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_57 [i_16] [i_16])) * (((/* implicit */int) arr_58 [i_16] [i_16]))))) ? (((arr_58 [i_16] [i_16]) ? (((/* implicit */int) arr_57 [i_16] [i_16])) : (((/* implicit */int) arr_57 [(short)24] [i_16])))) : ((+(((/* implicit */int) (short)992))))));
        var_37 |= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) ((short) var_0)))) <= (0U)));
        /* LoopNest 3 */
        for (unsigned short i_17 = 1; i_17 < 23; i_17 += 4) 
        {
            for (int i_18 = 1; i_18 < 23; i_18 += 3) 
            {
                for (unsigned int i_19 = 0; i_19 < 25; i_19 += 4) 
                {
                    {
                        var_38 -= ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_57 [i_16] [i_17])) : (((/* implicit */int) (_Bool)1)))) >= (((/* implicit */int) (!(arr_67 [i_19] [i_19] [i_19] [i_17] [i_19] [i_16]))))));
                        var_39 = arr_66 [i_17] [i_18];
                        var_40 = (i_17 % 2 == 0) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (arr_61 [1] [i_17])))) ? (((/* implicit */int) arr_60 [i_17] [i_19])) : (((((-881757186) + (2147483647))) << (((((/* implicit */int) arr_66 [i_17] [i_17])) - (10628)))))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) / (arr_61 [1] [i_17])))) ? (((/* implicit */int) arr_60 [i_17] [i_19])) : (((((-881757186) + (2147483647))) << (((((((((/* implicit */int) arr_66 [i_17] [i_17])) - (10628))) + (8450))) - (29))))))));
                        var_41 = ((/* implicit */unsigned char) min((var_41), (((/* implicit */unsigned char) ((((/* implicit */int) arr_60 [i_19] [(unsigned short)0])) >> (((((((/* implicit */_Bool) arr_57 [i_16] [i_16])) ? (((/* implicit */int) arr_66 [i_19] [i_17 + 1])) : (((/* implicit */int) var_10)))) - (10598))))))));
                    }
                } 
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_20 = 3; i_20 < 22; i_20 += 4) 
        {
            for (unsigned int i_21 = 1; i_21 < 24; i_21 += 4) 
            {
                {
                    var_42 = ((/* implicit */short) ((arr_67 [i_16] [i_16] [i_21] [i_21] [i_21 + 1] [i_16]) ? (((/* implicit */int) arr_67 [i_16] [i_16] [i_21] [i_20] [i_21 - 1] [i_16])) : (((/* implicit */int) arr_67 [i_16] [i_16] [i_21] [i_20] [i_21 - 1] [(unsigned char)20]))));
                    var_43 |= ((/* implicit */_Bool) ((((/* implicit */int) arr_67 [i_20] [i_16] [i_21 - 1] [i_20 + 2] [i_16] [i_21 - 1])) << (((/* implicit */int) arr_67 [i_16] [i_16] [i_16] [i_16] [18U] [18U]))));
                }
            } 
        } 
    }
}
