/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213043
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213043 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213043
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        var_12 = ((/* implicit */signed char) ((min((((/* implicit */unsigned int) arr_0 [i_0 - 3])), ((+(0U))))) == (((/* implicit */unsigned int) (~(((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_0]))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            var_13 ^= ((/* implicit */signed char) 467443582U);
            var_14 |= ((/* implicit */unsigned short) min((((/* implicit */long long int) (-((-(arr_3 [i_1] [i_1])))))), (var_7)));
            var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) arr_3 [i_0 + 2] [i_1]))));
        }
    }
    for (short i_2 = 4; i_2 < 21; i_2 += 2) 
    {
        var_16 = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) 1832215189064283997ULL))))) << (((max((((((/* implicit */_Bool) 7078242785339712800LL)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (unsigned char)158)))), (min(((-2147483647 - 1)), (((/* implicit */int) arr_7 [16U] [i_2])))))) - (4088)))));
        /* LoopSeq 2 */
        for (_Bool i_3 = 0; i_3 < 0; i_3 += 1) 
        {
            arr_10 [20LL] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_3)) || (((((/* implicit */_Bool) (+(((/* implicit */int) var_3))))) || ((!(((/* implicit */_Bool) arr_8 [i_3] [i_3]))))))));
            /* LoopSeq 2 */
            for (long long int i_4 = 2; i_4 < 21; i_4 += 4) 
            {
                var_17 = ((/* implicit */unsigned long long int) (+(min((((/* implicit */int) arr_7 [i_4 + 1] [i_3 + 1])), (arr_8 [i_4 + 1] [i_3 + 1])))));
                /* LoopSeq 2 */
                for (signed char i_5 = 1; i_5 < 19; i_5 += 2) 
                {
                    arr_17 [i_2] [i_3] [(short)7] [i_4 + 1] [i_4 - 2] [(short)0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(arr_8 [i_2] [i_3 + 1])))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) 8U)) ? (arr_8 [i_2 - 2] [i_2 - 4]) : (arr_8 [i_2 - 4] [i_3 + 1]))))));
                    var_18 = ((/* implicit */unsigned int) arr_16 [i_2] [i_2] [i_2] [i_2] [6ULL] [i_2]);
                    var_19 = ((/* implicit */signed char) ((((/* implicit */int) arr_9 [i_3 + 1])) * ((+(((/* implicit */int) arr_9 [i_3 + 1]))))));
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */int) (signed char)98)) - ((-(((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_2] [i_2] [(signed char)16] [i_2]))) == (arr_15 [i_2] [2LL] [2LL] [2LL] [2LL])))))))))));
                }
                for (long long int i_6 = 0; i_6 < 22; i_6 += 2) 
                {
                    arr_22 [(unsigned char)6] [i_3] [i_3] [i_3] [(unsigned char)6] [i_3 + 1] = ((/* implicit */signed char) ((max((((4294967288U) << (((4294967295U) - (4294967265U))))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) (-2147483647 - 1)))))))) > (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                    /* LoopSeq 1 */
                    for (unsigned int i_7 = 3; i_7 < 20; i_7 += 2) 
                    {
                        var_21 = ((/* implicit */_Bool) ((arr_9 [i_2 - 3]) ? ((~(((/* implicit */int) arr_25 [i_2] [i_2] [i_4] [i_6] [i_7 - 1])))) : (((/* implicit */int) (short)127))));
                        arr_26 [i_2] [i_3] |= ((/* implicit */unsigned long long int) arr_15 [11U] [i_3] [15LL] [(_Bool)1] [19ULL]);
                        arr_27 [i_2 - 3] [i_4] &= ((/* implicit */unsigned char) ((((((((/* implicit */int) arr_25 [i_7 + 2] [i_4 - 1] [(unsigned short)14] [2LL] [(unsigned short)14])) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_4 - 1] [i_3] [20LL] [i_3])) + (25733))))) % (((/* implicit */int) max(((unsigned short)33535), (((/* implicit */unsigned short) arr_13 [i_4 - 2] [(short)5] [(unsigned char)5] [i_4])))))));
                    }
                }
                var_22 |= ((/* implicit */int) ((((((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))) & ((~(10U))))) >> (((((unsigned long long int) max((10U), (((/* implicit */unsigned int) var_9))))) - (4294962347ULL)))));
                arr_28 [i_2 - 3] [i_2] [i_2] [i_2 - 3] |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (unsigned char)7)), (746479636U)))) ? (((/* implicit */int) ((((/* implicit */int) arr_24 [i_4])) <= (((/* implicit */int) (short)-4096))))) : (((/* implicit */int) ((arr_9 [i_2 - 1]) || (((/* implicit */_Bool) arr_24 [i_2])))))));
            }
            for (unsigned long long int i_8 = 1; i_8 < 19; i_8 += 3) 
            {
                var_23 = ((/* implicit */unsigned int) arr_29 [i_8] [i_8]);
                /* LoopSeq 2 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) /* same iter space */
                {
                    arr_33 [i_2] [i_2] [i_2] [i_8] = ((/* implicit */unsigned long long int) ((var_0) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_12 [i_9] [i_3 + 1] [(signed char)6] [i_9])) : (((/* implicit */int) arr_16 [i_9] [i_8] [i_8 + 3] [i_2] [i_3 + 1] [i_2])))))))) : (((/* implicit */int) (!(arr_9 [(_Bool)1]))))));
                    var_24 = ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) arr_18 [i_8] [i_8 + 2] [i_8])) ? (((/* implicit */int) (signed char)98)) : (-682694877))))) ? (((/* implicit */int) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) arr_6 [i_2])), (arr_32 [(unsigned short)1])))) && (((/* implicit */_Bool) arr_16 [i_2] [11] [i_8] [i_3] [i_3] [i_3]))))) : ((+(((/* implicit */int) arr_11 [i_2 - 1] [i_9] [i_8 + 3] [i_3 + 1])))));
                }
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) /* same iter space */
                {
                    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) arr_8 [i_2 + 1] [i_3 + 1]))));
                    var_26 &= ((/* implicit */long long int) (~(((/* implicit */int) arr_7 [i_2] [i_3]))));
                    var_27 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) <= ((+(1795810554697128006ULL)))));
                    var_28 = ((/* implicit */short) (!(((((/* implicit */_Bool) arr_6 [i_2 - 4])) || (((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_8 + 2] [i_8 + 3]))))));
                }
                var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1)))))));
                /* LoopSeq 2 */
                for (unsigned short i_11 = 0; i_11 < 22; i_11 += 4) 
                {
                    var_30 -= ((/* implicit */int) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-4098)))))))) || (((/* implicit */_Bool) arr_7 [i_2] [i_3]))));
                    var_31 = ((/* implicit */short) (((+(((((/* implicit */_Bool) (short)4108)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-17))) : (4294967281U))))) - (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) max((((/* implicit */long long int) (short)5412)), (arr_37 [2ULL]))))))));
                    var_32 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_38 [i_2] [(_Bool)1] [i_8] [i_8 + 2])) ? ((-(((/* implicit */int) var_0)))) : (((int) arr_39 [i_2 - 3]))))) && (((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)17)))))));
                }
                for (short i_12 = 1; i_12 < 20; i_12 += 2) 
                {
                    var_33 |= ((/* implicit */unsigned short) var_8);
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 4; i_13 < 20; i_13 += 2) 
                    {
                        var_34 *= ((((/* implicit */_Bool) arr_37 [i_12 - 1])) && (((/* implicit */_Bool) (-(4294967289U)))));
                        var_35 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (short)6980)) == (((/* implicit */int) arr_7 [i_3 + 1] [i_12 + 1]))));
                    }
                    var_36 = ((/* implicit */signed char) min((var_36), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_47 [i_2]) <= (((unsigned long long int) arr_13 [i_8 - 1] [14] [i_3 + 1] [i_12]))))))))));
                    var_37 = ((/* implicit */int) min(((!(((/* implicit */_Bool) (short)-19139)))), (((((/* implicit */_Bool) arr_39 [i_2 - 2])) || (((/* implicit */_Bool) arr_39 [i_2 - 4]))))));
                }
                var_38 = ((/* implicit */unsigned int) (short)5412);
            }
        }
        for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
        {
            var_39 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_7 [i_2] [i_14]))))))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_24 [i_2]))));
            arr_50 [i_2] = ((/* implicit */short) ((((((/* implicit */unsigned long long int) arr_14 [i_14] [i_2 - 3] [i_2 - 1] [i_2 - 3] [i_2 + 1] [i_2 - 2])) / (((((/* implicit */_Bool) 15U)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_45 [i_2 - 1] [i_2] [i_2] [i_2] [i_2] [i_2]))) : (var_2))))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -103256371)) ? (max((((/* implicit */long long int) (_Bool)1)), (arr_19 [i_2 - 3] [i_2 + 1] [i_2] [i_14]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_2] [i_2] [i_14])))))))))));
            var_40 = ((/* implicit */unsigned long long int) (~((~(arr_37 [i_2])))));
            var_41 |= (-(((/* implicit */int) arr_9 [i_14])));
        }
        var_42 = ((/* implicit */_Bool) arr_44 [i_2] [i_2] [i_2] [i_2 - 4] [i_2] [i_2] [i_2 - 3]);
        arr_51 [i_2] [i_2] = ((/* implicit */short) (+(((unsigned long long int) ((((/* implicit */int) arr_13 [i_2] [i_2] [i_2 - 4] [(short)9])) > (((/* implicit */int) arr_12 [i_2] [i_2] [i_2] [i_2 - 1])))))));
    }
    var_43 = ((/* implicit */_Bool) min((var_43), (((/* implicit */_Bool) var_7))));
    var_44 = (~(max((var_8), (min((((/* implicit */unsigned long long int) var_7)), (var_2))))));
}
