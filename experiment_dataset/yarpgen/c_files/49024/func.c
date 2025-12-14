/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49024
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_14 ^= ((/* implicit */short) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)47961)) : (((/* implicit */int) arr_2 [i_0] [i_0]))));
        var_15 |= ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (unsigned short)34248)) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) arr_0 [i_0]))))));
    }
    /* vectorizable */
    for (signed char i_1 = 1; i_1 < 21; i_1 += 2) 
    {
        arr_6 [i_1] = ((/* implicit */int) ((signed char) ((signed char) arr_5 [i_1])));
        var_16 = ((/* implicit */unsigned short) arr_3 [i_1]);
        /* LoopSeq 4 */
        for (unsigned int i_2 = 0; i_2 < 22; i_2 += 4) 
        {
            var_17 = var_1;
            var_18 -= ((/* implicit */int) var_4);
            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (arr_7 [i_1] [i_1] [i_2]) : (((/* implicit */long long int) var_6))));
            var_20 *= (unsigned short)31298;
            var_21 *= ((/* implicit */unsigned long long int) ((signed char) (unsigned short)31276));
        }
        for (unsigned short i_3 = 0; i_3 < 22; i_3 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned int i_4 = 1; i_4 < 19; i_4 += 1) 
            {
                /* LoopNest 2 */
                for (signed char i_5 = 3; i_5 < 21; i_5 += 3) 
                {
                    for (unsigned short i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)34248)) - (((/* implicit */int) (unsigned char)196)))))));
                            var_23 = ((/* implicit */signed char) arr_3 [i_1 + 1]);
                            var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((unsigned short) var_0)))));
                            var_25 |= ((/* implicit */signed char) arr_14 [i_1] [i_1 + 1] [i_1] [i_6] [i_4 + 3]);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned long long int i_7 = 0; i_7 < 22; i_7 += 1) 
                {
                    for (unsigned short i_8 = 0; i_8 < 22; i_8 += 2) 
                    {
                        {
                            var_26 += ((/* implicit */unsigned long long int) ((unsigned short) arr_24 [i_1 + 1] [i_8]));
                            var_27 = ((/* implicit */unsigned short) min((var_27), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((2229804568U) * (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34245)))))) ? (((/* implicit */unsigned long long int) arr_11 [i_4 - 1] [i_3] [i_4 - 1])) : (arr_18 [i_4]))))));
                            arr_25 [i_1] [i_3] [i_4] [i_1] [i_8] [i_1 - 1] [i_1] = ((/* implicit */signed char) ((long long int) ((((/* implicit */_Bool) (unsigned short)34230)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)29235)))));
                        }
                    } 
                } 
            }
            for (unsigned short i_9 = 0; i_9 < 22; i_9 += 4) 
            {
                arr_28 [i_1] [i_1] [i_1] [i_9] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_13 [i_1] [i_3] [i_9])) ? (((((/* implicit */int) arr_22 [i_1] [i_1] [i_1])) & (((/* implicit */int) arr_27 [i_1] [i_3])))) : (((/* implicit */int) ((unsigned short) (unsigned short)34226)))));
                var_28 = (signed char)8;
                var_29 += ((/* implicit */unsigned short) var_6);
            }
            var_30 |= 5133321941100936331ULL;
            var_31 = ((/* implicit */unsigned short) min((var_31), (((/* implicit */unsigned short) arr_3 [i_1 + 1]))));
            var_32 += ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_26 [i_1] [i_3] [i_1] [i_3]))) > (var_12)))) != (((/* implicit */int) ((unsigned short) (unsigned short)34228)))));
            arr_29 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((unsigned short) arr_3 [i_1]));
        }
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 1) 
        {
            var_33 &= ((((/* implicit */_Bool) arr_22 [i_1 + 1] [i_1 + 1] [i_1])) ? (var_0) : (3796128126480244090LL));
            /* LoopNest 3 */
            for (short i_11 = 0; i_11 < 22; i_11 += 3) 
            {
                for (unsigned short i_12 = 0; i_12 < 22; i_12 += 2) 
                {
                    for (unsigned short i_13 = 1; i_13 < 19; i_13 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */long long int) ((unsigned long long int) arr_24 [i_1 + 1] [i_1]));
                            arr_39 [i_1] = ((/* implicit */short) -5395381399692097630LL);
                        }
                    } 
                } 
            } 
            var_35 += ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [i_1] [i_1 + 1] [i_1])) ? (((/* implicit */int) arr_9 [i_1] [i_1 + 1] [i_10])) : (((/* implicit */int) arr_9 [i_10] [i_1 - 1] [i_10]))));
        }
        for (long long int i_14 = 2; i_14 < 19; i_14 += 3) 
        {
            var_36 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_1] [i_1] [i_1]))) : (arr_14 [i_14] [i_14] [(unsigned short)18] [(unsigned char)2] [i_14])))) ? (((((/* implicit */_Bool) arr_35 [i_1] [i_1] [i_1] [(unsigned short)0])) ? (arr_18 [i_14]) : (arr_34 [i_14] [i_14] [i_1]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)104)))));
            var_37 = ((/* implicit */short) arr_12 [i_1] [i_14] [i_1 - 1] [i_14]);
            var_38 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-98)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) var_3)))))) ? (((/* implicit */int) var_10)) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */int) (unsigned short)31310)) : (((/* implicit */int) (unsigned short)34228))))));
            arr_42 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_40 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_30 [i_14] [i_14 - 1] [i_14 - 1]))) : (arr_37 [i_14 + 1])));
            var_39 = ((/* implicit */int) min((var_39), (((/* implicit */int) ((signed char) arr_35 [i_1] [i_1] [(short)16] [(unsigned short)20])))));
        }
        var_40 -= ((/* implicit */unsigned short) -5395381399692097630LL);
    }
    for (signed char i_15 = 0; i_15 < 11; i_15 += 1) 
    {
        /* LoopNest 3 */
        for (unsigned short i_16 = 0; i_16 < 11; i_16 += 2) 
        {
            for (unsigned short i_17 = 2; i_17 < 9; i_17 += 4) 
            {
                for (long long int i_18 = 4; i_18 < 10; i_18 += 1) 
                {
                    {
                        arr_56 [i_15] [i_18] = ((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_48 [i_15]))) + (((((/* implicit */_Bool) arr_48 [i_18])) ? (((((/* implicit */_Bool) arr_15 [i_15] [i_18] [i_17] [i_18 - 3])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (signed char)-48)))) : (((/* implicit */int) (signed char)1))))));
                        arr_57 [i_18] [i_17] [i_15] [i_18] = ((/* implicit */unsigned short) var_5);
                        arr_58 [i_15] [i_18] [i_17 + 1] [i_18] [i_15] [i_18] = ((/* implicit */short) ((signed char) 2229804568U));
                    }
                } 
            } 
        } 
        arr_59 [i_15] |= ((/* implicit */short) var_2);
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_19 = 0; i_19 < 11; i_19 += 4) 
        {
            arr_63 [i_19] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_15] [i_19] [i_15])) ? (((/* implicit */int) (short)2520)) : (((/* implicit */int) (signed char)-104))))) ? (((((/* implicit */int) var_9)) / (((/* implicit */int) arr_20 [i_19] [i_19] [i_19] [i_19] [i_19])))) : (var_7)));
            /* LoopNest 2 */
            for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
            {
                for (signed char i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    {
                        arr_70 [i_15] [i_19] [i_19] = ((/* implicit */unsigned long long int) arr_54 [i_19]);
                        arr_71 [i_19] [i_19] [i_20] [i_19] [i_15] |= (unsigned short)7494;
                    }
                } 
            } 
            /* LoopNest 3 */
            for (long long int i_22 = 0; i_22 < 11; i_22 += 2) 
            {
                for (signed char i_23 = 3; i_23 < 10; i_23 += 2) 
                {
                    for (signed char i_24 = 1; i_24 < 7; i_24 += 3) 
                    {
                        {
                            arr_80 [i_15] [i_15] [i_22] [i_23] [i_24] [i_15] [i_23] = ((/* implicit */unsigned short) ((signed char) arr_79 [i_23 + 1] [i_24] [i_23 + 1] [i_24 + 3]));
                            var_41 *= arr_67 [i_15] [i_15] [i_15] [i_15];
                            arr_81 [i_22] [(short)10] [(signed char)0] [i_19] [i_22] |= ((/* implicit */unsigned short) arr_74 [i_15] [i_22] [i_22]);
                        }
                    } 
                } 
            } 
            arr_82 [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned int) arr_44 [i_15] [i_15]))) ? (((((/* implicit */int) var_8)) | (((/* implicit */int) var_8)))) : (((((/* implicit */_Bool) (signed char)75)) ? (((/* implicit */int) (unsigned short)38413)) : (((/* implicit */int) (signed char)5))))));
        }
        for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 2) 
        {
            var_42 += ((/* implicit */long long int) var_11);
            /* LoopNest 2 */
            for (signed char i_26 = 0; i_26 < 11; i_26 += 4) 
            {
                for (unsigned short i_27 = 0; i_27 < 11; i_27 += 1) 
                {
                    {
                        var_43 = ((/* implicit */signed char) max((var_43), (((/* implicit */signed char) arr_77 [i_25]))));
                        var_44 = ((/* implicit */unsigned long long int) max((var_44), (((/* implicit */unsigned long long int) ((int) ((((/* implicit */_Bool) (signed char)-103)) ? (arr_48 [i_15]) : (arr_48 [i_25])))))));
                    }
                } 
            } 
        }
        arr_91 [i_15] [i_15] |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_30 [i_15] [i_15] [i_15])) : (((/* implicit */int) var_13)))) : (((/* implicit */int) (signed char)90))))) ? (((/* implicit */long long int) ((/* implicit */int) arr_27 [8U] [i_15]))) : (((((/* implicit */_Bool) ((signed char) (unsigned short)58061))) ? (((/* implicit */long long int) var_6)) : (-2236663156077626129LL)))));
        var_45 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_15]))) : (var_12)))) ? (((((/* implicit */_Bool) 640511393U)) ? (var_12) : (((/* implicit */unsigned int) var_6)))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_45 [i_15]))))) - (4294967289U)));
    }
    var_46 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (signed char)-105)) : (((/* implicit */int) var_2))));
    var_47 |= ((/* implicit */unsigned long long int) var_4);
    /* LoopSeq 2 */
    for (unsigned short i_28 = 2; i_28 < 9; i_28 += 1) /* same iter space */
    {
        var_48 |= ((/* implicit */unsigned short) arr_92 [10LL]);
        /* LoopNest 3 */
        for (unsigned char i_29 = 0; i_29 < 12; i_29 += 2) 
        {
            for (unsigned short i_30 = 0; i_30 < 12; i_30 += 3) 
            {
                for (short i_31 = 0; i_31 < 12; i_31 += 3) 
                {
                    {
                        arr_104 [i_28] [i_28] [i_28] [i_31] = ((/* implicit */unsigned short) ((2236663156077626143LL) + (((/* implicit */long long int) ((/* implicit */int) (unsigned short)12)))));
                        arr_105 [i_28] [i_29] [i_29] [i_28] [i_28] &= ((/* implicit */unsigned short) var_0);
                        var_49 += ((/* implicit */long long int) arr_102 [i_28] [i_29] [i_30] [i_31]);
                    }
                } 
            } 
        } 
        arr_106 [i_28] = ((/* implicit */short) (unsigned short)12);
        var_50 += ((/* implicit */short) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)34227))) + (var_12)))) ? (((/* implicit */int) arr_9 [i_28] [i_28] [(signed char)9])) : (((/* implicit */int) var_3)))));
    }
    for (unsigned short i_32 = 2; i_32 < 9; i_32 += 1) /* same iter space */
    {
        var_51 = ((/* implicit */unsigned char) max((var_51), (((/* implicit */unsigned char) arr_1 [i_32]))));
        arr_109 [i_32] [5LL] = ((/* implicit */signed char) var_8);
        var_52 = ((/* implicit */long long int) min((var_52), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_27 [(signed char)14] [i_32])) ? (arr_93 [i_32]) : (((/* implicit */int) arr_22 [i_32] [i_32] [i_32])))))));
    }
}
