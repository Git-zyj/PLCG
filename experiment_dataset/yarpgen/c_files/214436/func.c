/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214436
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214436 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214436
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
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        var_14 = ((/* implicit */unsigned short) min((14903530293149927630ULL), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_2 [i_0])))))));
        /* LoopSeq 3 */
        for (unsigned char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            var_15 ^= ((/* implicit */short) (~(min((1146201357028004814ULL), (((/* implicit */unsigned long long int) arr_2 [i_0]))))));
            arr_5 [i_0] [i_0] [i_1] = ((/* implicit */signed char) arr_2 [i_1]);
        }
        for (long long int i_2 = 3; i_2 < 24; i_2 += 1) 
        {
            var_16 = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) (~(var_7)))) ? (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0] [i_2 + 1]))) : ((-9223372036854775807LL - 1LL))))));
            arr_8 [i_2 + 1] = ((/* implicit */unsigned int) (short)-12057);
        }
        for (signed char i_3 = 3; i_3 < 23; i_3 += 1) 
        {
            var_17 *= ((/* implicit */_Bool) arr_11 [i_0] [i_3 - 1] [i_3 + 2]);
            var_18 += ((/* implicit */short) min(((((~((-2147483647 - 1)))) - (((int) 146263212U)))), (((/* implicit */int) (short)-24217))));
            /* LoopNest 2 */
            for (long long int i_4 = 2; i_4 < 22; i_4 += 1) 
            {
                for (long long int i_5 = 1; i_5 < 22; i_5 += 2) 
                {
                    {
                        var_19 = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_3)) ? (arr_15 [i_0] [i_3 - 1] [i_5 - 1] [i_3 + 1] [i_0] [13LL]) : (arr_12 [i_0] [i_0] [i_0])))), (((unsigned long long int) arr_15 [i_0] [(unsigned char)7] [i_0] [i_0] [i_0] [i_0]))));
                        var_20 = ((/* implicit */signed char) (~(((4148704100U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)31894)))))));
                        var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */long long int) arr_11 [i_5 + 3] [i_3 + 1] [i_3 - 1])) <= (((((/* implicit */_Bool) (unsigned short)33641)) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_7)))))) <= (((/* implicit */int) ((((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) (unsigned char)130)))) == (((var_11) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_11)))))))));
                        arr_17 [i_0] [15LL] [2LL] [i_5] = ((/* implicit */short) (-((((((_Bool)1) || (((/* implicit */_Bool) (unsigned short)6138)))) ? (((((/* implicit */_Bool) var_7)) ? (arr_3 [i_0] [i_3]) : (((/* implicit */long long int) ((/* implicit */int) var_12))))) : (arr_16 [i_5 + 2] [i_5] [i_5 + 2] [i_5 + 2] [i_5 + 2] [i_5])))));
                    }
                } 
            } 
        }
        var_22 = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_0] [i_0] [(unsigned short)5] [i_0] [(unsigned short)5]))))) ? (arr_15 [i_0] [(_Bool)1] [i_0] [i_0] [16U] [(_Bool)1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)33648)))))));
        arr_18 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_11))) ^ (arr_12 [17LL] [i_0] [(_Bool)1])))) ? ((((_Bool)0) ? (((/* implicit */int) arr_1 [i_0])) : (1067748352))) : ((~(1847099416)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_1) != (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_0])) ? (-1349714732) : (((/* implicit */int) var_5))))))))) : (var_3)));
        arr_19 [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [i_0] [i_0])) | ((+(((/* implicit */int) arr_14 [i_0] [i_0] [i_0] [3LL] [i_0]))))));
    }
    var_23 = ((/* implicit */unsigned short) -1847099411);
    /* LoopSeq 2 */
    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) /* same iter space */
    {
        /* LoopSeq 1 */
        for (long long int i_7 = 0; i_7 < 16; i_7 += 2) 
        {
            arr_26 [i_6] [i_7] [i_7] = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_15 [i_6] [i_7] [i_7] [20LL] [i_7] [i_7]))))), ((+(min((var_3), (((/* implicit */unsigned long long int) var_0))))))));
            /* LoopNest 3 */
            for (long long int i_8 = 0; i_8 < 16; i_8 += 4) 
            {
                for (short i_9 = 2; i_9 < 13; i_9 += 1) 
                {
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        {
                            var_24 = ((/* implicit */unsigned short) var_1);
                            arr_35 [(_Bool)1] [(unsigned char)2] [i_8] [i_9] [8U] [12] = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_5))));
                            arr_36 [i_7] [i_7] [i_8] [i_9] [i_10] [i_6] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)3734)) < (((/* implicit */int) var_13))))))))));
                            arr_37 [i_6] [i_6] [i_7] [i_8] [i_9 + 1] [i_10] [i_10] = ((/* implicit */unsigned long long int) arr_31 [i_6] [i_7] [i_8] [i_9 - 1] [i_10]);
                        }
                    } 
                } 
            } 
            var_25 ^= ((/* implicit */long long int) min((((/* implicit */unsigned int) (-(((/* implicit */int) arr_27 [i_6] [i_6] [i_7] [i_7]))))), (4148704100U)));
            /* LoopSeq 1 */
            for (short i_11 = 0; i_11 < 16; i_11 += 1) 
            {
                var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) ((min((((/* implicit */long long int) (short)500)), (arr_15 [(short)12] [i_7] [i_11] [i_6] [i_7] [i_6]))) == (var_7)))) < (((/* implicit */int) (unsigned short)31882))));
                arr_40 [i_6] [(short)0] = ((/* implicit */unsigned short) arr_0 [i_6]);
                arr_41 [(unsigned short)13] [i_7] = ((/* implicit */signed char) ((min((arr_9 [22] [i_7] [i_6]), (arr_9 [i_6] [i_7] [i_7]))) ? (((/* implicit */unsigned long long int) (-((~(((/* implicit */int) (unsigned short)33642))))))) : (((((/* implicit */unsigned long long int) (+(var_8)))) % ((+(var_3)))))));
            }
            /* LoopNest 2 */
            for (unsigned char i_12 = 3; i_12 < 14; i_12 += 1) 
            {
                for (unsigned short i_13 = 0; i_13 < 16; i_13 += 1) 
                {
                    {
                        var_27 = ((/* implicit */_Bool) arr_4 [i_7] [8]);
                        arr_48 [i_6] [i_6] [i_6] [i_6] = ((((/* implicit */long long int) ((/* implicit */int) arr_47 [i_12 - 1] [i_7] [i_12] [i_13]))) | (var_8));
                        arr_49 [i_12] [i_12 - 1] [i_12] [i_12] [i_12] = ((/* implicit */long long int) (-((+(((/* implicit */int) ((arr_0 [i_6]) > (((/* implicit */long long int) arr_2 [23])))))))));
                    }
                } 
            } 
        }
        var_28 ^= ((((/* implicit */_Bool) (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_6])))))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)59722)) && (((((/* implicit */_Bool) -6201554897853631955LL)) || (((/* implicit */_Bool) arr_31 [6LL] [i_6] [i_6] [i_6] [i_6])))))))) : ((-(((var_7) + (((/* implicit */long long int) ((/* implicit */int) arr_29 [i_6] [i_6] [i_6] [10LL]))))))));
    }
    for (_Bool i_14 = 0; i_14 < 1; i_14 += 1) /* same iter space */
    {
        var_29 = ((/* implicit */int) min((var_29), (-1349714736)));
        arr_53 [i_14] [i_14] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)31864)) : (((((/* implicit */_Bool) arr_3 [(signed char)8] [i_14])) ? (((/* implicit */int) (short)-7205)) : (((/* implicit */int) arr_27 [i_14] [i_14] [(signed char)4] [(short)5]))))))));
        var_30 ^= ((/* implicit */short) ((((/* implicit */_Bool) (-((-(((/* implicit */int) (unsigned short)3))))))) || (((/* implicit */_Bool) ((var_3) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)30))))))));
        var_31 = ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_2 [i_14])) ? (arr_2 [i_14]) : (arr_2 [i_14]))) == ((+(arr_2 [i_14])))));
        var_32 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)32768)) <= ((+(((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (var_2))))))));
    }
    /* LoopSeq 1 */
    for (unsigned int i_15 = 2; i_15 < 20; i_15 += 4) 
    {
        arr_56 [i_15 + 3] = ((/* implicit */unsigned int) min((arr_11 [i_15 + 1] [i_15 + 1] [(short)7]), ((~(arr_11 [i_15] [i_15 - 1] [i_15 + 2])))));
        arr_57 [i_15 - 1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_4 [i_15] [i_15])) >> (((arr_7 [(unsigned char)19] [i_15 + 1] [i_15 + 1]) - (11544622385049943699ULL)))))) ? (((/* implicit */long long int) arr_11 [i_15] [i_15 + 1] [i_15])) : (var_4)));
        /* LoopSeq 1 */
        for (_Bool i_16 = 0; i_16 < 1; i_16 += 1) 
        {
            /* LoopSeq 2 */
            for (long long int i_17 = 1; i_17 < 21; i_17 += 2) 
            {
                var_33 = ((/* implicit */unsigned char) max((var_33), (((/* implicit */unsigned char) arr_10 [i_15]))));
                var_34 -= ((/* implicit */unsigned long long int) (short)-21943);
                /* LoopSeq 1 */
                for (_Bool i_18 = 0; i_18 < 1; i_18 += 1) 
                {
                    var_35 = arr_12 [i_18] [i_17 - 1] [i_15];
                    var_36 ^= ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_13 [i_17] [i_18] [i_17 + 2])), ((+(((/* implicit */int) arr_13 [i_15 - 2] [i_15 + 3] [i_15 + 1]))))));
                    var_37 = ((/* implicit */short) ((min((arr_58 [i_15 - 1] [i_17 - 1]), (((((/* implicit */_Bool) (unsigned short)33617)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)27498))) : (var_0))))) * (((/* implicit */long long int) (((+(((/* implicit */int) (short)-15591)))) * (((/* implicit */int) (_Bool)0)))))));
                    var_38 = ((/* implicit */unsigned int) min((var_38), (((/* implicit */unsigned int) var_7))));
                }
                var_39 = ((/* implicit */unsigned int) (_Bool)1);
                arr_67 [i_17 + 1] = ((/* implicit */unsigned short) (+(((unsigned long long int) var_7))));
            }
            /* vectorizable */
            for (long long int i_19 = 2; i_19 < 20; i_19 += 1) 
            {
                var_40 = ((/* implicit */short) (+(((/* implicit */int) arr_10 [i_15 + 1]))));
                arr_71 [i_16] [i_16] [i_16] [i_16] = ((/* implicit */signed char) 524224U);
                var_41 = ((/* implicit */_Bool) (short)-15591);
            }
            /* LoopNest 2 */
            for (signed char i_20 = 2; i_20 < 19; i_20 += 2) 
            {
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    {
                        var_42 = ((/* implicit */_Bool) (-((+((~(((/* implicit */int) var_12))))))));
                        arr_78 [i_15 - 1] [i_15 - 1] = ((/* implicit */short) (+(((/* implicit */int) max((var_6), (arr_66 [i_20] [i_15 - 1]))))));
                        /* LoopSeq 1 */
                        for (long long int i_22 = 1; i_22 < 21; i_22 += 3) 
                        {
                            var_43 ^= ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) (~(((/* implicit */int) var_6))))) || (((/* implicit */_Bool) arr_15 [i_15] [11U] [i_20] [i_21] [24U] [i_20])))))));
                            arr_81 [i_22] [i_21] [1LL] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */int) var_12)) | (((/* implicit */int) (signed char)-40)))) : (((/* implicit */int) (unsigned short)33672))))) ? ((~(((/* implicit */int) ((2418902875U) != (((/* implicit */unsigned int) -14))))))) : ((~(((/* implicit */int) var_11))))));
                        }
                    }
                } 
            } 
            var_44 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_2))));
        }
        arr_82 [i_15] [i_15 - 1] = ((/* implicit */long long int) (+(((/* implicit */int) (signed char)-22))));
        /* LoopNest 2 */
        for (unsigned int i_23 = 0; i_23 < 23; i_23 += 1) 
        {
            for (unsigned char i_24 = 0; i_24 < 23; i_24 += 4) 
            {
                {
                    arr_88 [2] [i_23] [i_23] = ((/* implicit */long long int) ((short) min((((/* implicit */unsigned long long int) var_9)), ((+(arr_7 [i_15 + 3] [i_15] [i_15 + 3]))))));
                    arr_89 [i_15] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_55 [i_15 + 2] [i_24])) ? (min((arr_70 [0U] [(_Bool)1] [i_24]), (((/* implicit */long long int) (unsigned short)31860)))) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_68 [i_24] [i_23]))) < (146263212U)))))))) ? (arr_80 [(_Bool)1] [9ULL] [9LL] [i_23] [i_23]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (arr_85 [i_15 + 1] [i_15 + 3] [i_15 + 2]) : (((/* implicit */int) (unsigned short)59741))))));
                }
            } 
        } 
    }
}
