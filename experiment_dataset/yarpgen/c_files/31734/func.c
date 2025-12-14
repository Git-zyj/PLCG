/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31734
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31734 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31734
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
    var_19 = ((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-31))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 7; i_0 += 2) 
    {
        var_20 ^= ((/* implicit */signed char) ((((/* implicit */int) min((arr_0 [i_0 - 1]), (arr_0 [i_0 + 4])))) + (((/* implicit */int) var_16))));
        /* LoopSeq 1 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (signed char i_2 = 0; i_2 < 11; i_2 += 1) 
            {
                for (signed char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_11 [i_0] [i_2] [(signed char)7] [i_3] = ((/* implicit */short) ((_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0 - 1]))) | (((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (arr_7 [i_2] [i_1] [(unsigned char)10] [i_2]))))));
                        var_21 = ((/* implicit */short) arr_4 [i_0] [i_0 + 4]);
                    }
                } 
            } 
            arr_12 [i_1] = ((/* implicit */_Bool) (+((-(((/* implicit */int) arr_4 [i_0 + 1] [i_0 - 2]))))));
        }
        arr_13 [i_0] &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)113)) / (((var_8) ? (arr_8 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_2 [i_0] [i_0]))))))) ? (((/* implicit */int) arr_9 [i_0] [(unsigned short)2] [(short)10] [i_0])) : (((((/* implicit */int) var_11)) / (max((((/* implicit */int) var_3)), (var_10)))))));
    }
    for (short i_4 = 0; i_4 < 21; i_4 += 1) 
    {
        /* LoopSeq 1 */
        for (unsigned char i_5 = 1; i_5 < 20; i_5 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned char i_6 = 0; i_6 < 21; i_6 += 2) 
            {
                arr_20 [i_4] [i_4] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_17 [i_5])), (arr_14 [i_6])))) ? (((/* implicit */int) var_5)) : (((var_10) / (((/* implicit */int) (signed char)30))))))) ? (((/* implicit */int) max((arr_19 [(unsigned short)2] [i_5] [(unsigned char)3]), (((/* implicit */short) (signed char)-114))))) : (((/* implicit */int) min((arr_19 [i_5 + 1] [i_5 + 1] [i_5 - 1]), (arr_19 [i_5 + 1] [i_5] [i_5 - 1]))))));
                var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) arr_17 [i_5]))));
                var_23 ^= ((/* implicit */short) max((((((((/* implicit */_Bool) (short)255)) ? (((/* implicit */int) (unsigned char)228)) : (((/* implicit */int) (unsigned short)40090)))) | (((/* implicit */int) ((unsigned short) (signed char)67))))), (((arr_16 [i_5 + 1] [(unsigned short)14] [i_5 + 1]) ? (((/* implicit */int) (signed char)114)) : (((/* implicit */int) arr_16 [i_5 - 1] [i_5] [i_5 + 1]))))));
            }
            for (unsigned char i_7 = 0; i_7 < 21; i_7 += 4) /* same iter space */
            {
                /* LoopNest 2 */
                for (short i_8 = 0; i_8 < 21; i_8 += 3) 
                {
                    for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                    {
                        {
                            arr_29 [i_4] [i_5 - 1] [i_8] [i_8] [i_8] [i_9] = ((/* implicit */_Bool) min((arr_28 [i_8]), (((/* implicit */int) ((signed char) arr_17 [(signed char)18])))));
                            arr_30 [i_8] = ((/* implicit */signed char) (-(((/* implicit */int) min((arr_23 [(unsigned char)17] [(unsigned char)17]), (arr_23 [(signed char)14] [i_5]))))));
                            arr_31 [i_9] [i_8] [i_4] [i_8] [i_4] = ((/* implicit */unsigned char) ((unsigned short) (signed char)-114));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (short i_10 = 0; i_10 < 21; i_10 += 1) 
                {
                    var_24 = ((/* implicit */unsigned short) min((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_14))))) ? (((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) (unsigned short)62696)))) : (((/* implicit */int) (signed char)121)))))));
                    var_25 = ((/* implicit */int) min((var_25), (((/* implicit */int) ((unsigned short) (~(((/* implicit */int) arr_32 [i_5 - 1] [i_5] [i_4] [i_10]))))))));
                }
                for (signed char i_11 = 0; i_11 < 21; i_11 += 1) 
                {
                    arr_38 [i_4] [i_4] [4U] [i_4] [i_4] &= ((/* implicit */unsigned char) ((max((((/* implicit */int) min((((/* implicit */unsigned short) (unsigned char)157)), ((unsigned short)40090)))), (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (unsigned char)61)) : (((/* implicit */int) arr_18 [10U])))))) != (((/* implicit */int) arr_21 [i_11]))));
                    arr_39 [i_7] = ((/* implicit */short) arr_32 [i_4] [(signed char)1] [i_4] [i_11]);
                    arr_40 [i_7] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_35 [i_4] [i_4] [i_4] [i_4] [i_5])) ? (max((((/* implicit */int) (signed char)-2)), (2147483647))) : (((/* implicit */int) (signed char)30))));
                }
                for (unsigned char i_12 = 0; i_12 < 21; i_12 += 4) 
                {
                    /* LoopSeq 2 */
                    for (short i_13 = 2; i_13 < 20; i_13 += 4) 
                    {
                        arr_48 [i_4] [i_4] [i_7] [i_12] [i_13] = (signed char)(-127 - 1);
                        var_26 = ((/* implicit */signed char) max((var_26), (((/* implicit */signed char) min((((/* implicit */unsigned int) max((((/* implicit */signed char) arr_16 [i_4] [i_12] [i_13 - 1])), (var_14)))), (max((2431419746U), (((/* implicit */unsigned int) arr_27 [i_4] [i_5] [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_7])))))))));
                    }
                    for (signed char i_14 = 1; i_14 < 19; i_14 += 3) 
                    {
                        arr_51 [i_4] [i_4] [i_5] [i_7] [i_12] [i_14] = ((/* implicit */unsigned short) max((((/* implicit */signed char) (!(((/* implicit */_Bool) arr_43 [i_5 - 1] [i_7] [i_14 + 1] [i_14] [i_14] [i_14]))))), (arr_43 [i_5] [i_5] [i_14 - 1] [i_14] [(unsigned char)7] [(unsigned short)6])));
                        arr_52 [9] [9] [i_7] [i_12] [i_14 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */signed char) (_Bool)1)), ((signed char)9)))) ? (((/* implicit */int) max(((unsigned char)62), (((/* implicit */unsigned char) var_9))))) : (((/* implicit */int) max((arr_22 [(unsigned char)16] [i_4] [i_5 - 1] [i_14 + 2]), (arr_22 [i_4] [i_5] [i_5 + 1] [i_14 - 1]))))));
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) (!(((/* implicit */_Bool) (((~(((/* implicit */int) (signed char)-113)))) - ((((-2147483647 - 1)) ^ (((/* implicit */int) (signed char)-31))))))))))));
                    }
                    arr_53 [i_4] [i_4] [i_5] [i_7] [i_12] [i_12] = ((/* implicit */unsigned char) (+(((((/* implicit */int) arr_27 [i_4] [i_5] [i_5] [i_7] [i_7] [i_12] [i_12])) / (((/* implicit */int) arr_15 [i_4]))))));
                    var_28 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)12397))))) ? (((/* implicit */int) arr_22 [i_4] [i_5] [i_7] [(unsigned short)8])) : (((/* implicit */int) arr_27 [i_4] [(signed char)6] [8U] [i_5 - 1] [i_12] [i_7] [i_7]))))) ? (((/* implicit */int) max((((/* implicit */unsigned short) arr_43 [i_12] [i_7] [i_5] [(unsigned short)13] [i_5 + 1] [i_4])), ((unsigned short)55141)))) : (arr_28 [i_12])));
                }
            }
            for (unsigned char i_15 = 0; i_15 < 21; i_15 += 4) /* same iter space */
            {
                /* LoopSeq 2 */
                for (signed char i_16 = 0; i_16 < 21; i_16 += 1) 
                {
                    arr_60 [i_4] [i_4] = ((/* implicit */short) ((max((arr_26 [i_4] [i_4] [i_15] [(unsigned char)20]), ((_Bool)1))) ? (max((max((((/* implicit */unsigned int) (signed char)-30)), (var_12))), (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-34)) + (((/* implicit */int) arr_57 [i_4]))))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_57 [i_4])))));
                    arr_61 [i_16] [i_5] [i_15] [i_16] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) max((arr_14 [i_5 - 1]), (arr_14 [i_5 + 1]))))));
                    var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (short)8702))));
                }
                for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_18 = 0; i_18 < 21; i_18 += 3) 
                    {
                        arr_67 [i_17] [i_17] [i_17] [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */int) (unsigned short)62474)) / (((/* implicit */int) max(((unsigned short)57071), (((/* implicit */unsigned short) arr_32 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5])))))));
                        var_30 = ((/* implicit */unsigned short) max((var_30), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) max(((short)1), (arr_25 [i_4] [i_5] [(unsigned char)14])))) ? (((/* implicit */int) (unsigned short)56182)) : ((~(((/* implicit */int) (short)-1)))))) - (((((/* implicit */_Bool) max((arr_46 [i_4] [i_5] [i_15] [i_17] [i_18] [i_18]), ((signed char)-114)))) ? (((((/* implicit */int) (unsigned short)46619)) & (((/* implicit */int) arr_15 [i_4])))) : (((/* implicit */int) (signed char)(-127 - 1))))))))));
                        var_31 = (!(((/* implicit */_Bool) arr_21 [i_4])));
                        arr_68 [i_4] [i_5 + 1] [i_4] [i_15] [i_4] [i_18] = ((/* implicit */unsigned short) arr_64 [i_18] [i_17] [i_15] [(unsigned char)12] [i_4]);
                        var_32 = ((/* implicit */short) (+(((/* implicit */int) arr_26 [i_18] [i_15] [i_15] [i_4]))));
                    }
                    /* LoopSeq 2 */
                    for (unsigned short i_19 = 1; i_19 < 19; i_19 += 1) 
                    {
                        var_33 = ((/* implicit */unsigned short) arr_16 [i_19 - 1] [i_19 - 1] [i_5 - 1]);
                        var_34 += max((((/* implicit */short) arr_42 [i_19 + 2] [i_19 - 1] [i_19 + 1])), (max(((short)-8169), (((/* implicit */short) arr_71 [(short)12] [i_4] [i_5 - 1] [(short)16] [i_19 - 1] [i_19])))));
                        var_35 = ((/* implicit */signed char) (((-(((/* implicit */int) arr_54 [i_19 + 2])))) ^ (((((/* implicit */int) arr_54 [i_17])) * (((/* implicit */int) arr_54 [i_4]))))));
                    }
                    for (signed char i_20 = 0; i_20 < 21; i_20 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned char) min((((((/* implicit */_Bool) ((unsigned short) 13U))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)6))))) : ((-(((/* implicit */int) (short)-24160)))))), (((/* implicit */int) min((((/* implicit */signed char) ((((/* implicit */int) (signed char)-31)) != (((/* implicit */int) var_15))))), (arr_42 [i_5 - 1] [i_17] [i_17]))))));
                        var_37 = ((/* implicit */_Bool) (unsigned char)0);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (signed char i_21 = 0; i_21 < 21; i_21 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_49 [i_5] [(_Bool)1] [i_5 + 1] [i_5 + 1] [i_5])) ? (((/* implicit */int) (signed char)-114)) : (((/* implicit */int) arr_43 [i_5 - 1] [i_5] [i_5] [i_5 - 1] [i_21] [i_21]))));
                        arr_78 [i_5 + 1] [i_5 + 1] [i_5 + 1] [i_5] [i_21] = ((_Bool) arr_69 [i_17] [i_17] [i_5 + 1] [i_21] [i_17]);
                        var_39 = ((/* implicit */short) ((((((/* implicit */int) (unsigned char)19)) * (((/* implicit */int) (signed char)-114)))) | (arr_37 [i_5 + 1] [i_5 + 1] [i_5] [i_5] [i_5 - 1])));
                        var_40 ^= ((/* implicit */int) (signed char)114);
                    }
                }
                var_41 += (short)22558;
            }
            arr_79 [i_4] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_74 [i_5] [i_5] [i_5 - 1] [i_5 + 1])) ? (((/* implicit */int) (short)24169)) : (((/* implicit */int) arr_32 [i_5] [i_5] [i_5 + 1] [i_5 + 1]))))) ? (((unsigned int) arr_74 [i_4] [i_5 - 1] [i_5 + 1] [i_5 - 1])) : (((/* implicit */unsigned int) ((/* implicit */int) arr_32 [i_4] [i_4] [i_5 + 1] [i_5 + 1])))));
        }
        arr_80 [i_4] = ((/* implicit */_Bool) max((((((/* implicit */int) var_5)) / (((/* implicit */int) (short)-24160)))), ((-(((/* implicit */int) arr_73 [i_4] [i_4] [i_4] [i_4]))))));
    }
}
