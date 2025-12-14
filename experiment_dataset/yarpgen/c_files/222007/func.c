/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222007
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222007 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222007
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
    /* LoopSeq 4 */
    for (unsigned char i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopSeq 1 */
            for (signed char i_2 = 0; i_2 < 19; i_2 += 1) 
            {
                arr_7 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((arr_0 [i_0] [i_0]) ? (arr_1 [i_0] [i_1]) : (((/* implicit */int) var_8)))))) ? (((/* implicit */int) var_11)) : (((((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_2])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_0])) : (((/* implicit */int) (unsigned short)10452)))) | (((/* implicit */int) ((unsigned char) var_11)))))));
                var_17 = ((/* implicit */_Bool) (~(((((4294967273U) >= (((/* implicit */unsigned int) ((/* implicit */int) var_16))))) ? ((+(((/* implicit */int) arr_2 [i_0] [i_1] [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [i_0] [i_0])))))))));
                /* LoopNest 2 */
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (unsigned int i_4 = 1; i_4 < 16; i_4 += 3) 
                    {
                        {
                            arr_12 [i_0] [(unsigned char)3] [i_3] [i_2] [i_0] [i_0] = ((/* implicit */short) arr_10 [i_0] [i_1] [i_2] [i_2] [i_3] [i_4 + 1]);
                            arr_13 [i_3] [i_2] [i_2] [i_0] [i_2] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_5 [i_0] [i_1] [i_1] [i_0])) ? (((/* implicit */int) arr_2 [i_1] [i_1] [i_0])) : (((/* implicit */int) ((((/* implicit */_Bool) (+(arr_3 [i_2] [i_0])))) || (((/* implicit */_Bool) (~(((/* implicit */int) arr_10 [i_0] [i_0] [4ULL] [i_2] [i_3] [i_4 - 1]))))))))));
                        }
                    } 
                } 
            }
            var_18 = ((/* implicit */long long int) ((min((((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_0])), (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_1] [i_1])) ? (((/* implicit */int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1])) : (((/* implicit */int) arr_5 [i_0] [i_1] [i_0] [i_0])))))) % ((~(((/* implicit */int) (signed char)-112))))));
            arr_14 [i_0] [i_0] = ((/* implicit */long long int) ((_Bool) ((var_10) >= (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_1] [i_1] [(unsigned short)7])))))))));
            /* LoopSeq 1 */
            for (unsigned long long int i_5 = 0; i_5 < 19; i_5 += 3) 
            {
                var_19 = ((/* implicit */short) min((arr_8 [i_0] [i_1] [i_0] [i_0] [i_0]), (((/* implicit */unsigned long long int) (-(((var_7) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_9 [i_0] [16ULL] [i_1] [i_1] [i_0])))))))));
                var_20 = ((/* implicit */unsigned int) max((arr_17 [i_0] [i_1]), (((/* implicit */long long int) var_1))));
            }
        }
        var_21 = ((/* implicit */unsigned short) (((+(((/* implicit */int) arr_2 [i_0] [i_0] [i_0])))) != (((/* implicit */int) var_8))));
        var_22 *= ((/* implicit */unsigned long long int) arr_16 [i_0] [i_0] [i_0]);
    }
    for (long long int i_6 = 1; i_6 < 24; i_6 += 4) 
    {
        arr_21 [i_6 - 1] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_6 - 1]))))) << (((arr_18 [i_6]) - (1840827734U))))));
        var_23 -= ((/* implicit */unsigned short) arr_20 [i_6 + 1]);
        arr_22 [i_6] = ((/* implicit */signed char) ((arr_18 [i_6]) * (((((((/* implicit */_Bool) arr_18 [i_6 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_6 - 1]))) : (arr_20 [i_6 - 1]))) / (((/* implicit */unsigned int) ((((/* implicit */int) var_1)) + (((/* implicit */int) var_13)))))))));
        /* LoopSeq 1 */
        for (signed char i_7 = 0; i_7 < 25; i_7 += 2) 
        {
            var_24 = ((/* implicit */long long int) min((((var_5) ? ((+(((/* implicit */int) var_1)))) : (((/* implicit */int) (!(var_1)))))), (((/* implicit */int) (signed char)113))));
            /* LoopSeq 1 */
            for (int i_8 = 2; i_8 < 22; i_8 += 3) 
            {
                /* LoopSeq 3 */
                for (short i_9 = 0; i_9 < 25; i_9 += 4) 
                {
                    var_25 = ((/* implicit */unsigned char) arr_26 [i_6] [i_7] [i_8 - 1] [(signed char)14]);
                    arr_30 [i_9] [i_6] [i_7] [i_7] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-((+(((/* implicit */int) var_12))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) (signed char)113)))) : (((((/* implicit */_Bool) arr_20 [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (((long long int) var_16))))));
                    arr_31 [i_8] [i_8] [i_8] [i_7] [12LL] [i_6] = (+(((/* implicit */int) ((((var_8) && (((/* implicit */_Bool) arr_20 [i_6 - 1])))) && (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_19 [i_8]))) ^ (arr_25 [(unsigned char)1] [i_7] [i_8 + 1]))))))));
                    var_26 = ((/* implicit */_Bool) arr_28 [i_6] [i_9] [(short)10] [i_9]);
                }
                /* vectorizable */
                for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                {
                    arr_34 [i_7] [i_7] [i_8] [i_10] = ((/* implicit */unsigned int) (+(((/* implicit */int) (unsigned char)175))));
                    arr_35 [i_6] [i_6] [i_7] [12] [i_8] [i_10] = ((/* implicit */_Bool) arr_18 [i_6 + 1]);
                }
                for (int i_11 = 0; i_11 < 25; i_11 += 3) 
                {
                    var_27 += ((/* implicit */long long int) ((int) arr_38 [i_6] [i_7] [i_8 - 1] [i_11] [i_11]));
                    var_28 *= ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) arr_27 [i_7] [i_8]))));
                }
                /* LoopNest 2 */
                for (int i_12 = 3; i_12 < 22; i_12 += 1) 
                {
                    for (unsigned long long int i_13 = 1; i_13 < 24; i_13 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_1))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) var_4)))) : (((arr_45 [i_6 - 1] [i_7] [i_8 + 3] [i_7] [i_7]) ^ (((/* implicit */unsigned int) ((/* implicit */int) arr_33 [i_6] [i_6] [i_6] [i_8] [i_8] [i_13 + 1])))))))) ? (min((min((arr_20 [i_7]), (((/* implicit */unsigned int) arr_37 [i_7] [i_7])))), (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) - (((/* implicit */int) var_1))))))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_27 [i_6 - 1] [i_6])) ^ (((/* implicit */int) var_9)))))));
                            var_30 = ((/* implicit */signed char) max((((/* implicit */short) (!(((/* implicit */_Bool) ((arr_29 [(_Bool)1] [i_6] [i_8 + 1] [0] [i_6]) / (((/* implicit */long long int) ((/* implicit */int) arr_23 [23LL]))))))))), (min((arr_36 [i_12 + 2] [i_6 + 1] [i_6] [i_6 - 1]), (((/* implicit */short) arr_39 [i_6 + 1] [i_7] [(unsigned short)10] [i_12 - 3] [i_13 + 1]))))));
                        }
                    } 
                } 
                arr_46 [i_8] [i_8 - 2] [i_7] [(short)1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_7)) : (-1029515488)))))) ? (((/* implicit */int) arr_40 [i_6 - 1] [i_6 - 1] [i_7] [i_8 - 1] [i_8 - 2] [i_8 - 1])) : (((((/* implicit */int) arr_26 [i_8 + 3] [i_8 + 2] [i_6 + 1] [i_6 + 1])) + (((/* implicit */int) arr_26 [i_8 + 3] [i_8 + 1] [i_6 - 1] [i_6 - 1]))))));
                var_31 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned char) arr_43 [i_8 + 1] [i_7] [24LL] [i_7] [i_7] [i_7] [i_6 + 1]))) ? (arr_44 [i_6] [i_6] [i_6] [i_7] [i_7] [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (-(((/* implicit */int) var_8)))))))));
            }
            arr_47 [i_7] [i_6 - 1] = ((/* implicit */long long int) arr_44 [i_7] [i_7] [i_6 - 1] [i_6] [i_6] [i_6]);
            var_32 += ((/* implicit */signed char) ((((((/* implicit */int) ((signed char) arr_45 [i_6 + 1] [(unsigned char)18] [i_6 + 1] [21LL] [(unsigned short)17]))) >= (((/* implicit */int) ((unsigned char) var_8))))) ? (((((/* implicit */_Bool) max((arr_25 [i_7] [i_6 + 1] [i_6]), (arr_25 [i_6] [i_6] [i_6])))) ? (((2738150791627812416ULL) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_27 [i_6] [i_7]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_33 [i_7] [i_7] [i_7] [i_6] [i_6] [i_6])) - (((/* implicit */int) var_8))))))) : (((/* implicit */unsigned long long int) (-((~(1029515492))))))));
            arr_48 [i_7] [i_7] = ((/* implicit */unsigned int) max(((-(((/* implicit */int) var_0)))), (((((/* implicit */int) arr_40 [i_6 - 1] [i_6] [i_6 - 1] [i_7] [12] [i_6])) * (((((/* implicit */int) arr_19 [i_7])) / (((/* implicit */int) var_4))))))));
        }
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned long long int i_14 = 1; i_14 < 22; i_14 += 3) 
        {
            /* LoopNest 2 */
            for (unsigned char i_15 = 0; i_15 < 25; i_15 += 1) 
            {
                for (long long int i_16 = 0; i_16 < 25; i_16 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_17 = 0; i_17 < 25; i_17 += 3) 
                        {
                            var_33 = ((/* implicit */signed char) ((arr_39 [i_14] [9] [9] [9] [i_14 + 3]) ? (((var_13) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (arr_29 [i_6] [i_14] [i_15] [i_16] [i_17]))) : (((/* implicit */long long int) (((_Bool)1) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_54 [i_14] [(_Bool)1])))))));
                            var_34 -= ((/* implicit */signed char) var_16);
                            arr_60 [i_6] [i_14 - 1] [i_15] [i_15] [i_14] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_40 [i_6] [(short)7] [i_14 - 1] [i_15] [i_16] [i_14 - 1]))))) ? (((((/* implicit */_Bool) arr_57 [i_17] [i_14 + 1])) ? (((/* implicit */int) arr_40 [i_6] [i_6] [i_15] [(signed char)7] [(_Bool)1] [i_15])) : (((/* implicit */int) arr_36 [i_6] [i_14 + 3] [i_14 + 2] [i_16])))) : (((((/* implicit */int) arr_39 [(_Bool)1] [i_14] [i_15] [i_16] [i_17])) & (((/* implicit */int) var_15))))));
                        }
                        var_35 = ((/* implicit */signed char) (-(((/* implicit */int) ((var_13) && (var_7))))));
                        var_36 = ((/* implicit */signed char) var_6);
                    }
                } 
            } 
            arr_61 [i_14] [i_14] [i_14] = ((/* implicit */long long int) arr_37 [i_6 + 1] [6]);
            arr_62 [i_14] [i_14] [i_6] = ((((/* implicit */_Bool) (unsigned short)5022)) ? ((-(((/* implicit */int) arr_33 [i_6] [i_6] [i_14] [i_14 + 3] [i_6] [i_14])))) : ((+(((/* implicit */int) var_15)))));
            var_37 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_57 [i_6 - 1] [i_6 - 1])) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (-787027142569633044LL)))));
        }
    }
    for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) /* same iter space */
    {
        var_38 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_37 [i_18] [i_18])) ? (((/* implicit */int) ((var_8) || (((/* implicit */_Bool) arr_42 [i_18]))))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_26 [i_18] [i_18] [i_18] [5ULL]))))))) * (((/* implicit */int) (!(((/* implicit */_Bool) min((arr_56 [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned short) var_3))))))))));
        var_39 = ((/* implicit */unsigned long long int) ((long long int) arr_45 [i_18] [i_18] [i_18] [i_18] [i_18]));
        arr_66 [(signed char)14] [(signed char)14] |= ((/* implicit */signed char) (!(((/* implicit */_Bool) ((signed char) min((arr_40 [i_18] [i_18] [i_18] [i_18] [i_18] [i_18]), (((/* implicit */unsigned char) var_12))))))));
    }
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (signed char i_20 = 0; i_20 < 21; i_20 += 3) 
        {
            arr_73 [i_19] [i_20] = ((/* implicit */_Bool) ((((_Bool) ((((/* implicit */_Bool) arr_59 [i_19] [i_19] [i_19] [i_19] [i_19] [i_20])) ? (((/* implicit */int) arr_27 [(unsigned char)16] [(unsigned char)16])) : (((/* implicit */int) var_4))))) ? ((+(((var_13) ? (((/* implicit */int) (short)-32766)) : (((/* implicit */int) arr_23 [i_20])))))) : (((/* implicit */int) (!(min((arr_27 [i_19] [i_20]), (var_5))))))));
            var_40 = ((signed char) arr_32 [(_Bool)1] [(_Bool)1]);
            arr_74 [i_20] = ((/* implicit */unsigned int) arr_26 [i_19] [i_20] [i_19] [i_20]);
            var_41 -= ((/* implicit */signed char) (((!(var_5))) ? ((~(((/* implicit */int) var_4)))) : ((-(((/* implicit */int) arr_72 [i_20] [i_20] [i_19]))))));
        }
        arr_75 [i_19] = ((/* implicit */signed char) arr_36 [i_19] [i_19] [(unsigned char)12] [i_19]);
    }
    var_42 = ((/* implicit */_Bool) (~((-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))));
}
