/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200812
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200812 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200812
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
    var_11 &= ((/* implicit */unsigned char) var_0);
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 17; i_0 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_1 = 2; i_1 < 15; i_1 += 4) 
        {
            var_12 = ((/* implicit */unsigned char) arr_4 [i_1 - 2] [i_1 + 2]);
            /* LoopSeq 1 */
            for (unsigned char i_2 = 0; i_2 < 17; i_2 += 4) 
            {
                arr_10 [i_0] [i_0] [i_2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_8 [i_1 - 1]))));
                /* LoopSeq 2 */
                for (unsigned int i_3 = 1; i_3 < 15; i_3 += 1) /* same iter space */
                {
                    arr_13 [i_3] = ((/* implicit */unsigned int) ((((/* implicit */int) arr_6 [i_1 + 1] [i_1 + 2] [i_1] [i_3 + 1])) | (((/* implicit */int) arr_6 [i_1 - 2] [i_1 - 2] [i_1 - 2] [i_3 + 1]))));
                    arr_14 [i_0] [i_1] [i_3] [i_2] = ((/* implicit */signed char) ((arr_9 [i_2]) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_3] [i_2] [i_1 + 2] [i_0])))));
                    arr_15 [(_Bool)1] [i_3] [i_3] [(_Bool)1] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_6 [i_2] [i_1] [i_2] [i_3]))));
                }
                for (unsigned int i_4 = 1; i_4 < 15; i_4 += 1) /* same iter space */
                {
                    arr_18 [i_1] [i_1 + 2] [i_2] [i_2] [i_2] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_4 - 1] [i_1 + 1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_6 [i_4 - 1] [i_4 - 1] [i_1 - 1] [i_1]))));
                    arr_19 [i_0] [(_Bool)1] [i_1] [i_2] [i_4] [i_4 + 2] = ((/* implicit */unsigned char) arr_2 [i_1]);
                }
                /* LoopSeq 4 */
                for (unsigned int i_5 = 1; i_5 < 14; i_5 += 1) 
                {
                    /* LoopSeq 1 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_13 = ((/* implicit */_Bool) arr_21 [i_6] [i_5 + 3] [i_5] [i_1 - 2] [i_1] [i_1 + 1]);
                        var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
                        var_15 *= ((/* implicit */unsigned short) ((((/* implicit */int) arr_1 [i_0])) - (((/* implicit */int) arr_1 [i_0]))));
                        arr_25 [i_2] [i_6] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_6 [(unsigned char)1] [i_1 + 2] [i_1 - 2] [i_1 - 2])) || (var_10)));
                    }
                    var_16 ^= ((/* implicit */unsigned char) (~(((/* implicit */int) arr_17 [i_5 + 3] [i_5 + 2] [i_5 + 2] [i_1 - 2]))));
                    var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_7 [i_1 + 1] [i_1 + 2])))))));
                    var_18 = ((/* implicit */unsigned char) arr_5 [i_0] [i_1 - 1] [2]);
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_19 = ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 2]))));
                    arr_28 [i_0] [i_1] [i_2] [(unsigned char)9] [i_2] = ((/* implicit */unsigned char) arr_5 [i_1 - 2] [i_1 - 1] [i_2]);
                }
                for (unsigned short i_8 = 0; i_8 < 17; i_8 += 2) 
                {
                    arr_31 [(short)3] [i_8] [i_2] [i_2] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_9 [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_4)))))) ? ((+(((/* implicit */int) arr_5 [(unsigned char)12] [i_1] [i_2])))) : (((/* implicit */int) arr_5 [i_1 + 2] [i_1 - 1] [i_1 - 2]))));
                    arr_32 [i_0] [i_0] [i_1] [i_2] [(_Bool)1] = ((/* implicit */short) (!(((/* implicit */_Bool) arr_7 [i_2] [i_1]))));
                    var_20 = ((/* implicit */signed char) arr_12 [i_2]);
                }
                for (short i_9 = 4; i_9 < 16; i_9 += 3) 
                {
                    /* LoopSeq 3 */
                    for (unsigned short i_10 = 0; i_10 < 17; i_10 += 4) 
                    {
                        var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_16 [i_9 - 4] [i_9 - 1] [i_1 - 2] [i_1 - 2] [i_0])) ? (((/* implicit */int) arr_16 [i_9 - 4] [i_9 - 1] [i_1] [i_1 + 2] [i_1])) : (((/* implicit */int) arr_16 [i_9 - 1] [i_9 - 3] [i_1 - 1] [i_1 - 1] [i_0])))))));
                        arr_40 [i_0] [i_1] [i_2] [i_9] [i_10] = ((/* implicit */unsigned int) arr_36 [i_0] [i_0] [i_0] [i_0] [(unsigned char)2] [i_0]);
                    }
                    for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) /* same iter space */
                    {
                        var_22 -= ((/* implicit */signed char) (+(((/* implicit */int) arr_30 [i_1 - 2] [i_1 + 2] [(_Bool)1] [i_1] [i_1] [i_9 - 1]))));
                        arr_44 [i_0] [6U] [i_1] [i_2] [i_9 - 1] [i_0] = ((/* implicit */unsigned int) ((var_10) ? (((/* implicit */int) arr_16 [i_9 - 1] [i_9 + 1] [i_9] [3] [i_1 - 2])) : (((/* implicit */int) arr_34 [i_9 - 2] [i_1 - 2] [i_1 + 2] [i_1 + 2]))));
                        var_23 = ((/* implicit */unsigned char) arr_16 [i_11] [i_1] [i_2] [i_1 - 2] [i_9 - 3]);
                        arr_45 [i_9] [i_1] [i_1] = ((/* implicit */_Bool) arr_3 [i_9]);
                    }
                    for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) /* same iter space */
                    {
                        var_24 = ((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 - 2]);
                        var_25 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_1 + 2] [i_9 - 2] [i_9 - 3] [i_12] [i_12])) ? (((/* implicit */int) arr_37 [i_1 + 2] [i_9 - 3] [i_9 - 3] [i_9 - 3] [13LL])) : (((/* implicit */int) arr_37 [i_1 - 2] [i_9 + 1] [i_9 - 1] [8LL] [(unsigned char)16]))));
                    }
                    var_26 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)16)) % (218663394)))) ? (arr_7 [i_1 - 2] [i_1 - 2]) : (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */int) arr_17 [i_9 - 2] [i_9] [i_9] [i_9 - 4])) <= ((-(((/* implicit */int) arr_24 [i_0] [i_2] [i_2] [i_9 + 1]))))));
                    var_28 &= ((/* implicit */unsigned short) arr_3 [i_9 - 1]);
                }
            }
            var_29 += ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_43 [i_0] [i_1 - 1] [i_0] [i_1 + 2] [i_0])) ? (((/* implicit */int) arr_16 [i_1] [i_1 + 1] [i_1 + 1] [(_Bool)1] [i_1 - 2])) : (((/* implicit */int) arr_33 [i_0] [i_1 + 2] [i_0] [i_1 + 1]))));
            var_30 = ((/* implicit */_Bool) arr_37 [i_0] [i_0] [i_0] [i_0] [i_0]);
            /* LoopSeq 1 */
            for (unsigned char i_13 = 1; i_13 < 16; i_13 += 2) 
            {
                arr_50 [1U] [(_Bool)1] [i_13 + 1] = ((/* implicit */signed char) var_1);
                var_31 = ((/* implicit */unsigned char) max((var_31), (((/* implicit */unsigned char) ((var_0) << (((arr_47 [(_Bool)1] [i_1 - 2] [i_13 - 1] [i_13 + 1] [i_13]) - (37774296U))))))));
                var_32 += ((((arr_35 [(short)4] [i_1 + 2] [i_0] [i_0]) & (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_1]))))) & (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) arr_2 [i_0])) != (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_0])))))));
                var_33 = ((/* implicit */short) arr_48 [i_1] [i_0]);
                var_34 = ((/* implicit */_Bool) max((var_34), (((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1 - 2]))));
            }
        }
        for (unsigned short i_14 = 1; i_14 < 15; i_14 += 3) 
        {
            var_35 -= ((/* implicit */signed char) arr_23 [i_0] [i_0] [i_0] [i_14] [i_14 - 1]);
            arr_53 [i_0] = (!(((/* implicit */_Bool) arr_42 [i_0] [i_0] [i_14] [i_14 + 1] [(signed char)8])));
            var_36 = arr_12 [(short)4];
        }
        var_37 = ((/* implicit */unsigned short) arr_12 [14U]);
    }
    for (unsigned int i_15 = 1; i_15 < 17; i_15 += 4) 
    {
        var_38 = max((min((arr_54 [i_15 - 1]), (arr_54 [i_15 + 1]))), (min((arr_54 [i_15 - 1]), (arr_54 [i_15 - 1]))));
        arr_56 [i_15] = ((/* implicit */short) max((arr_54 [i_15]), (var_7)));
        /* LoopSeq 2 */
        for (short i_16 = 0; i_16 < 18; i_16 += 4) 
        {
            arr_61 [i_15 - 1] [(signed char)10] [i_15] &= ((/* implicit */short) (~(((/* implicit */int) min((arr_60 [i_15 - 1]), ((!(var_10))))))));
            var_39 = ((/* implicit */_Bool) var_3);
        }
        /* vectorizable */
        for (unsigned short i_17 = 0; i_17 < 18; i_17 += 1) 
        {
            arr_64 [i_15] [i_15 + 1] [(short)10] = (~(arr_58 [i_15 + 1]));
            var_40 = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_60 [i_15 - 1]))));
            var_41 = ((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_15] [i_17])) ? (((arr_60 [i_15]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_3))) : (arr_55 [i_15] [i_17]))) : (((((/* implicit */_Bool) arr_54 [i_15])) ? (arr_55 [i_17] [2U]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_60 [i_17])))))));
            /* LoopSeq 2 */
            for (unsigned char i_18 = 1; i_18 < 15; i_18 += 1) /* same iter space */
            {
                arr_67 [i_15] [i_17] = ((/* implicit */short) ((((/* implicit */int) arr_54 [i_15 + 1])) - (((/* implicit */int) arr_54 [i_18]))));
                arr_68 [i_17] [i_17] [i_15] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)0)) ? (((/* implicit */unsigned int) arr_58 [i_15 + 1])) : (0U)));
                var_42 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_0))));
            }
            for (unsigned char i_19 = 1; i_19 < 15; i_19 += 1) /* same iter space */
            {
                arr_71 [i_19] [i_17] [i_15] = ((/* implicit */long long int) arr_63 [i_19] [(signed char)0]);
                arr_72 [i_15] [i_15 - 1] [i_17] [i_19 - 1] &= ((/* implicit */unsigned short) ((((/* implicit */int) ((((/* implicit */_Bool) arr_63 [i_17] [(unsigned short)4])) || (((/* implicit */_Bool) arr_54 [(unsigned char)1]))))) - (((/* implicit */int) var_2))));
                var_43 = ((/* implicit */short) ((arr_59 [i_17] [i_17] [i_19 - 1]) >= (((/* implicit */long long int) arr_58 [i_17]))));
                var_44 = ((/* implicit */short) ((arr_57 [i_15 + 1] [i_15 + 1] [i_19 - 1]) >> (((arr_57 [i_15 + 1] [i_15 + 1] [i_19 - 1]) - (3083722596U)))));
            }
            var_45 |= ((/* implicit */unsigned int) var_3);
        }
        /* LoopSeq 1 */
        for (short i_20 = 1; i_20 < 17; i_20 += 4) 
        {
            var_46 = ((/* implicit */unsigned short) max((((/* implicit */int) arr_60 [i_15])), (((((/* implicit */_Bool) arr_62 [i_15 - 1] [i_15 - 1] [i_20 - 1])) ? (((/* implicit */int) max((arr_54 [(unsigned char)9]), (((/* implicit */unsigned short) arr_66 [i_15] [i_20]))))) : (((/* implicit */int) var_4))))));
            arr_75 [i_20] [i_20] = ((/* implicit */_Bool) (~(((/* implicit */int) min((((/* implicit */unsigned short) (short)-2)), (arr_65 [i_15 + 1] [i_20 + 1] [i_20 + 1]))))));
            arr_76 [i_20] [i_20] [i_20] = ((/* implicit */short) var_10);
        }
        arr_77 [i_15 - 1] [i_15 - 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (short)0)), (4158886801U)))) ? (((/* implicit */long long int) arr_63 [i_15 - 1] [i_15])) : (arr_59 [i_15 - 1] [i_15 + 1] [i_15 + 1])));
    }
    for (short i_21 = 2; i_21 < 14; i_21 += 1) 
    {
        arr_80 [i_21] = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned int) (unsigned short)42408)), (arr_47 [i_21 + 2] [i_21 + 2] [i_21 - 1] [i_21] [i_21]))), (((/* implicit */unsigned int) (short)29584))));
        var_47 = ((/* implicit */unsigned int) (-(max((((/* implicit */long long int) arr_48 [i_21 - 2] [(short)16])), (arr_39 [i_21] [i_21 - 1] [i_21 + 2] [i_21 + 2] [i_21] [i_21 - 1])))));
        arr_81 [i_21] = ((/* implicit */long long int) arr_62 [i_21] [i_21] [i_21]);
    }
    var_48 = ((/* implicit */unsigned char) min((max((((/* implicit */unsigned int) var_5)), (var_0))), (((/* implicit */unsigned int) max((((/* implicit */unsigned char) var_9)), (var_3))))));
}
