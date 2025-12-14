/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42411
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42411 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42411
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
    var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((unsigned char) var_7))), (min((((/* implicit */long long int) var_14)), (var_7)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_14))) : (95049102U)));
    var_18 = ((/* implicit */int) var_13);
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) ((signed char) ((((/* implicit */_Bool) var_13)) ? (((((-5294614249352911946LL) + (9223372036854775807LL))) >> (((var_7) + (760611672800529428LL))))) : (((/* implicit */long long int) (-(((/* implicit */int) (unsigned short)32767)))))))))));
    /* LoopSeq 3 */
    for (unsigned char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (signed char i_1 = 1; i_1 < 9; i_1 += 4) 
        {
            arr_6 [i_1] [(signed char)3] [i_1] = ((/* implicit */short) (~(((((/* implicit */_Bool) max((((/* implicit */long long int) 4199918194U)), (9223372036854775807LL)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_1)) & (arr_1 [4LL])))) : (min((((/* implicit */long long int) (unsigned short)65528)), (-910040953900293715LL)))))));
            var_20 ^= ((/* implicit */unsigned short) 4199918193U);
            var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) (~(arr_0 [i_0]))))));
            /* LoopSeq 1 */
            /* vectorizable */
            for (long long int i_2 = 2; i_2 < 7; i_2 += 3) 
            {
                var_22 = (~((+(95049101U))));
                var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_0] [i_1] [i_2] [i_2 + 3])) ? (var_7) : (((/* implicit */long long int) arr_1 [i_2]))))) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_9))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4199918178U)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_3)))))));
                /* LoopSeq 1 */
                for (unsigned char i_3 = 0; i_3 < 10; i_3 += 2) 
                {
                    var_24 += ((/* implicit */short) (!(((/* implicit */_Bool) var_1))));
                    arr_11 [i_3] [i_1] [i_1] [i_0] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_14))));
                }
                var_25 += ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (95049095U) : (95049102U)));
            }
            var_26 = ((/* implicit */unsigned char) ((signed char) 9223372036854775807LL));
        }
        for (unsigned long long int i_4 = 1; i_4 < 7; i_4 += 3) 
        {
            var_27 ^= ((/* implicit */signed char) var_11);
            var_28 *= ((/* implicit */unsigned char) ((_Bool) (+(95049102U))));
            var_29 ^= ((/* implicit */short) (-(((/* implicit */int) arr_14 [i_0] [i_4 + 1] [i_0]))));
            arr_15 [i_4] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 95049102U)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) var_14))))) ? (((/* implicit */int) min(((short)-8118), (((/* implicit */short) (unsigned char)9))))) : (((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_4 + 1])) || (((/* implicit */_Bool) -7250033340327779063LL)))))));
        }
        arr_16 [3] [i_0] &= ((/* implicit */signed char) ((((/* implicit */int) (!(((/* implicit */_Bool) (short)-8118))))) | (arr_13 [i_0] [(unsigned char)6])));
        var_30 = ((/* implicit */long long int) max((var_30), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0])))))));
    }
    for (unsigned long long int i_5 = 0; i_5 < 17; i_5 += 2) 
    {
        arr_19 [i_5] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)239)))))));
        /* LoopSeq 4 */
        for (short i_6 = 3; i_6 < 16; i_6 += 3) /* same iter space */
        {
            var_31 -= ((/* implicit */unsigned int) (!(((/* implicit */_Bool) min((9223372036854775797LL), (var_2))))));
            /* LoopSeq 2 */
            for (unsigned long long int i_7 = 0; i_7 < 17; i_7 += 1) /* same iter space */
            {
                var_32 = ((/* implicit */long long int) (-(((/* implicit */int) (!(((/* implicit */_Bool) -5876388035428485945LL)))))));
                var_33 = ((/* implicit */short) (~(((int) (signed char)64))));
            }
            for (unsigned long long int i_8 = 0; i_8 < 17; i_8 += 1) /* same iter space */
            {
                arr_29 [i_6] [i_8] = ((/* implicit */int) (-(((((/* implicit */_Bool) 9223372036854775797LL)) ? (95049102U) : (95049099U)))));
                /* LoopNest 2 */
                for (unsigned char i_9 = 0; i_9 < 17; i_9 += 1) 
                {
                    for (signed char i_10 = 1; i_10 < 16; i_10 += 2) 
                    {
                        {
                            arr_35 [i_5] [i_6] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((short) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)34230))))) ? (max((((/* implicit */unsigned long long int) (short)29820)), (18446744073709551615ULL))) : (3458764513820540928ULL))));
                            arr_36 [i_5] [i_6] [i_8] [i_9] [i_9] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((min((((/* implicit */long long int) var_16)), (var_8))), (arr_34 [i_5] [i_9] [i_6 - 1] [i_5] [i_10 - 1] [i_6 - 3])))) ? (((((/* implicit */_Bool) (unsigned short)22490)) ? (((/* implicit */int) arr_24 [i_5] [i_9] [i_8])) : (((/* implicit */int) (unsigned char)62)))) : (((/* implicit */int) var_13))));
                        }
                    } 
                } 
                arr_37 [2LL] [i_6 - 2] = ((/* implicit */unsigned char) 1328824764597498976LL);
                arr_38 [i_8] [i_6] [i_8] [(signed char)11] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((((/* implicit */long long int) 2893331260U)) / (-649147614198516047LL)))))) ? (((/* implicit */int) var_16)) : (((/* implicit */int) arr_32 [(unsigned char)8] [13LL] [i_8] [(unsigned char)8] [i_5] [i_6]))));
                var_34 ^= ((/* implicit */unsigned int) var_14);
            }
            var_35 -= ((/* implicit */short) min((((/* implicit */int) ((short) ((((/* implicit */_Bool) 4352304250357767788ULL)) || (((/* implicit */_Bool) 13700828286422114115ULL)))))), ((+(((((/* implicit */int) var_5)) << (((((/* implicit */int) var_11)) - (194)))))))));
        }
        for (short i_11 = 3; i_11 < 16; i_11 += 3) /* same iter space */
        {
            var_36 = ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_14)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))))) ? (((((/* implicit */_Bool) ((-1LL) % (((/* implicit */long long int) ((/* implicit */int) var_5)))))) ? (((((/* implicit */_Bool) 4199918194U)) ? (-9223372036854775786LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)115))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) (short)16352)))))) : (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) var_13)))));
            arr_41 [i_11] = arr_28 [i_5] [6LL] [13LL] [i_5];
            arr_42 [i_5] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_39 [i_5] [i_5])), (var_16)))) ? (min((((/* implicit */long long int) arr_40 [i_5] [i_5] [i_11 + 1])), (var_8))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_39 [i_5] [i_5])))))));
        }
        for (short i_12 = 3; i_12 < 16; i_12 += 3) /* same iter space */
        {
            var_37 = ((/* implicit */long long int) arr_40 [i_5] [i_5] [i_5]);
            /* LoopNest 3 */
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                for (unsigned char i_14 = 0; i_14 < 17; i_14 += 2) 
                {
                    for (unsigned char i_15 = 0; i_15 < 17; i_15 += 1) 
                    {
                        {
                            var_38 += ((/* implicit */int) ((unsigned short) min(((+(((/* implicit */int) (unsigned char)108)))), (((((/* implicit */int) (short)32767)) + (((/* implicit */int) arr_47 [i_13])))))));
                            arr_53 [i_5] [i_12 + 1] [i_12] [(_Bool)1] [i_15] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) arr_46 [i_12] [(short)4] [i_12 - 3] [i_12 - 1])) : (((/* implicit */int) (short)-4467))))));
                            var_39 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(1618647769U)))) ? (-1610763330) : (((((/* implicit */_Bool) var_1)) ? ((+(((/* implicit */int) (short)32640)))) : (((((/* implicit */int) arr_33 [i_14])) & (((/* implicit */int) (short)-1))))))));
                            arr_54 [i_12] [i_12] [i_13] [i_12] [i_15] = ((((/* implicit */_Bool) min((11ULL), (((/* implicit */unsigned long long int) arr_48 [i_5] [i_5] [i_5] [i_12 - 1]))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)202)))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_31 [i_5] [i_12 - 1] [i_12 + 1] [i_14]))) : (((long long int) arr_46 [i_12] [i_14] [i_13] [i_12]))))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((int) (_Bool)1))) : (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_13] [i_13] [i_13]))) : (14094439823351783826ULL))))));
                        }
                    } 
                } 
            } 
            arr_55 [i_5] [i_5] &= (unsigned char)72;
        }
        for (short i_16 = 3; i_16 < 16; i_16 += 3) /* same iter space */
        {
            /* LoopSeq 1 */
            for (unsigned char i_17 = 4; i_17 < 16; i_17 += 2) 
            {
                arr_63 [i_5] [i_16 - 2] [(unsigned char)15] = ((/* implicit */unsigned char) arr_28 [i_5] [1U] [i_17] [i_17]);
                var_40 = ((/* implicit */unsigned int) var_12);
                var_41 = ((/* implicit */unsigned long long int) ((-9223372036854775797LL) - (-1504521432643584233LL)));
                var_42 = ((/* implicit */unsigned int) (+(max((((/* implicit */int) (_Bool)1)), (min((71676821), (-71676808)))))));
            }
            var_43 = ((/* implicit */unsigned char) (!(arr_51 [i_5])));
        }
    }
    for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
    {
        arr_66 [i_18] = ((/* implicit */unsigned short) -5805841673752694774LL);
        var_44 += ((/* implicit */unsigned char) var_4);
    }
    var_45 = ((/* implicit */unsigned long long int) (+(((long long int) (_Bool)1))));
}
