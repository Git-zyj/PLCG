/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242088
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242088 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242088
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
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_1 = 0; i_1 < 16; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (unsigned long long int i_2 = 0; i_2 < 16; i_2 += 2) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned int i_4 = 2; i_4 < 14; i_4 += 1) /* same iter space */
                        {
                            var_18 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned char)15))));
                            var_19 = ((/* implicit */unsigned short) var_6);
                            var_20 |= ((/* implicit */unsigned char) (~(((/* implicit */int) (unsigned char)0))));
                            var_21 *= ((/* implicit */_Bool) ((((/* implicit */int) var_9)) | (((/* implicit */int) var_15))));
                            arr_14 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) (unsigned short)4313)) < (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_13))))));
                        }
                        for (unsigned int i_5 = 2; i_5 < 14; i_5 += 1) /* same iter space */
                        {
                            arr_17 [i_1] [(unsigned char)5] [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_0))))));
                            var_22 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)73))) != (576460752303423487LL)));
                            arr_18 [i_1] [i_1] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)1003)) ? (((/* implicit */int) (unsigned short)4794)) : (((/* implicit */int) (unsigned short)60752))));
                            var_23 ^= ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)127))) : (4194303U)))) ? (33554431U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (signed char)-12)) : ((-2147483647 - 1))))));
                        }
                        for (unsigned int i_6 = 2; i_6 < 14; i_6 += 1) /* same iter space */
                        {
                            arr_22 [i_3] [i_6] = ((/* implicit */long long int) 1524218833);
                            var_24 = ((/* implicit */signed char) (!((_Bool)1)));
                        }
                        arr_23 [i_0] [i_1] [i_0] [i_1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) : (16855711468125322964ULL)));
                    }
                } 
            } 
            arr_24 [i_1] [i_1] = ((/* implicit */_Bool) (((_Bool)1) ? (4629808010635985886ULL) : (((/* implicit */unsigned long long int) var_8))));
            /* LoopNest 2 */
            for (unsigned int i_7 = 2; i_7 < 13; i_7 += 4) 
            {
                for (unsigned int i_8 = 1; i_8 < 13; i_8 += 4) 
                {
                    {
                        var_25 = ((/* implicit */unsigned long long int) max((var_25), (((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) var_9)) == (((/* implicit */int) (signed char)89))))) >= (((/* implicit */int) (unsigned short)48324)))))));
                        var_26 = ((/* implicit */signed char) ((var_11) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)-7)))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (unsigned short i_9 = 1; i_9 < 12; i_9 += 3) 
            {
                for (unsigned int i_10 = 1; i_10 < 13; i_10 += 4) 
                {
                    {
                        var_27 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)64)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)(-127 - 1)))) : (var_11)))) * (var_3)));
                        var_28 |= ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) var_1)) ^ (((/* implicit */int) var_9))))) ? (((/* implicit */unsigned long long int) var_14)) : (((((/* implicit */unsigned long long int) var_11)) % (13628777782357351022ULL)))));
                        var_29 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2442321355U)) ? (((/* implicit */int) (signed char)64)) : (((/* implicit */int) var_5))))) ? (2974406509U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
                        /* LoopSeq 4 */
                        for (unsigned long long int i_11 = 0; i_11 < 16; i_11 += 2) /* same iter space */
                        {
                            var_30 = ((((/* implicit */_Bool) (~(3393702219U)))) ? (((/* implicit */unsigned int) (~(134217727)))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)768))) * (var_8))));
                            arr_35 [(unsigned char)8] [i_10] [i_10] = ((/* implicit */unsigned short) (_Bool)1);
                        }
                        for (unsigned long long int i_12 = 0; i_12 < 16; i_12 += 2) /* same iter space */
                        {
                            var_31 = ((/* implicit */int) min((var_31), (((/* implicit */int) -576460752303423491LL))));
                            var_32 = ((/* implicit */unsigned char) (~((+(((/* implicit */int) var_5))))));
                            arr_38 [i_10] [i_10] [i_10] = ((/* implicit */long long int) (~(134217727)));
                        }
                        for (long long int i_13 = 3; i_13 < 13; i_13 += 1) /* same iter space */
                        {
                            var_33 -= ((/* implicit */short) ((var_14) - (((/* implicit */long long int) 3363331347U))));
                            var_34 = var_1;
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_1)) : ((-(((/* implicit */int) (_Bool)1))))));
                            var_36 = ((/* implicit */signed char) (unsigned char)254);
                            var_37 = ((/* implicit */short) min((var_37), (((/* implicit */short) 4294967295U))));
                        }
                        for (long long int i_14 = 3; i_14 < 13; i_14 += 1) /* same iter space */
                        {
                            var_38 = ((/* implicit */long long int) (~(((/* implicit */int) var_4))));
                            arr_43 [i_0] [i_10] [i_9] [i_10 - 1] [i_0] [i_14 + 2] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_4))));
                        }
                        var_39 = ((/* implicit */int) var_14);
                    }
                } 
            } 
            var_40 = ((/* implicit */int) (unsigned char)7);
        }
        /* vectorizable */
        for (unsigned long long int i_15 = 3; i_15 < 14; i_15 += 4) 
        {
            var_41 = ((/* implicit */unsigned char) max((var_41), (((/* implicit */unsigned char) var_4))));
            var_42 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_17)) * (0U)));
        }
        var_43 = ((/* implicit */long long int) max((((((/* implicit */_Bool) (unsigned short)65535)) ? (max((((/* implicit */unsigned int) var_5)), (4294967278U))) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)41))))), (var_11)));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_16 = 0; i_16 < 16; i_16 += 2) 
        {
            var_44 = ((/* implicit */_Bool) var_0);
            var_45 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) -4269960065702983144LL)) ? (((/* implicit */int) (short)7)) : (((/* implicit */int) (unsigned char)21)))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_17 = 0; i_17 < 19; i_17 += 3) 
    {
        /* LoopSeq 3 */
        for (unsigned char i_18 = 0; i_18 < 19; i_18 += 3) /* same iter space */
        {
            var_46 ^= ((/* implicit */signed char) (!(((/* implicit */_Bool) var_13))));
            var_47 = ((/* implicit */unsigned long long int) min((var_47), (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_6)))))));
            /* LoopSeq 2 */
            for (unsigned int i_19 = 0; i_19 < 19; i_19 += 1) 
            {
                /* LoopNest 2 */
                for (short i_20 = 2; i_20 < 18; i_20 += 2) 
                {
                    for (long long int i_21 = 0; i_21 < 19; i_21 += 2) 
                    {
                        {
                            arr_59 [i_17] [i_20] [i_19] [i_17] [i_17] [i_21] [i_17] = ((/* implicit */signed char) (~(((/* implicit */int) var_13))));
                            arr_60 [(signed char)12] |= ((/* implicit */_Bool) var_0);
                        }
                    } 
                } 
                /* LoopSeq 1 */
                for (unsigned char i_22 = 0; i_22 < 19; i_22 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_23 = 0; i_23 < 19; i_23 += 4) 
                    {
                        var_48 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_16)) ? (4194294U) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))));
                        var_49 = (!(((/* implicit */_Bool) var_7)));
                    }
                    var_50 &= ((/* implicit */unsigned short) (+(6917529027641081856ULL)));
                }
                var_51 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))));
                var_52 -= ((/* implicit */unsigned char) 134217727);
            }
            for (unsigned int i_24 = 1; i_24 < 17; i_24 += 4) 
            {
                var_53 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned int) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) >> (((((/* implicit */int) (signed char)-48)) + (75)))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_15))) : (var_11)))));
                arr_69 [i_18] [i_18] [i_17] = ((/* implicit */long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_9)) : (((/* implicit */int) var_15))));
                var_54 = ((/* implicit */int) (!(((/* implicit */_Bool) (~(((/* implicit */int) var_7)))))));
            }
        }
        for (unsigned char i_25 = 0; i_25 < 19; i_25 += 3) /* same iter space */
        {
            var_55 *= ((/* implicit */unsigned short) (-(((/* implicit */int) var_7))));
            var_56 = ((/* implicit */short) 15035288621338015101ULL);
            /* LoopNest 2 */
            for (unsigned long long int i_26 = 0; i_26 < 19; i_26 += 2) 
            {
                for (unsigned long long int i_27 = 0; i_27 < 19; i_27 += 3) 
                {
                    {
                        /* LoopSeq 3 */
                        for (unsigned char i_28 = 3; i_28 < 16; i_28 += 4) 
                        {
                            arr_78 [i_17] [i_26] [i_26] [i_17] [i_17] [(short)18] |= ((/* implicit */short) ((((/* implicit */_Bool) var_16)) ? ((+(((/* implicit */int) (signed char)-112)))) : (((/* implicit */int) (unsigned short)16090))));
                            var_57 = ((/* implicit */unsigned int) min((var_57), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (_Bool)0)))))));
                        }
                        for (short i_29 = 2; i_29 < 17; i_29 += 3) 
                        {
                            var_58 = ((/* implicit */unsigned int) var_10);
                            var_59 -= ((/* implicit */unsigned short) (signed char)-45);
                        }
                        for (int i_30 = 0; i_30 < 19; i_30 += 2) 
                        {
                            var_60 = ((/* implicit */unsigned short) ((((/* implicit */unsigned int) var_17)) != (((((/* implicit */_Bool) (unsigned char)2)) ? (((/* implicit */unsigned int) var_12)) : (924578466U)))));
                            var_61 = ((/* implicit */_Bool) (+(4611686018427387903LL)));
                            var_62 = ((/* implicit */unsigned short) min((var_62), (((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (_Bool)0)) : (((((/* implicit */_Bool) (signed char)105)) ? (((/* implicit */int) (unsigned char)149)) : (((/* implicit */int) (_Bool)1)))))))));
                        }
                        var_63 = ((/* implicit */unsigned short) (+(((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)109))) - (var_8)))));
                        var_64 = ((/* implicit */unsigned int) min((var_64), (((/* implicit */unsigned int) var_3))));
                        var_65 = ((/* implicit */unsigned short) min((var_65), (((/* implicit */unsigned short) var_10))));
                    }
                } 
            } 
        }
        for (unsigned int i_31 = 0; i_31 < 19; i_31 += 2) 
        {
            arr_89 [i_17] [(unsigned char)5] [i_31] = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)24)) ? (var_8) : (((/* implicit */unsigned int) 1734609793)))))));
            var_66 &= ((/* implicit */unsigned int) var_17);
        }
        /* LoopSeq 2 */
        for (unsigned short i_32 = 4; i_32 < 16; i_32 += 4) 
        {
            var_67 *= ((/* implicit */unsigned long long int) var_16);
            var_68 = ((/* implicit */unsigned int) (~(3835226159126192531LL)));
        }
        for (int i_33 = 1; i_33 < 18; i_33 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_34 = 0; i_34 < 19; i_34 += 3) 
            {
                for (_Bool i_35 = 0; i_35 < 1; i_35 += 1) 
                {
                    {
                        /* LoopSeq 2 */
                        for (unsigned char i_36 = 0; i_36 < 19; i_36 += 3) 
                        {
                            arr_106 [i_17] [i_17] [i_17] [i_35] [2U] |= ((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)64))))) | (((/* implicit */int) var_10))));
                            arr_107 [i_17] [i_33] [i_33 + 1] [(unsigned short)14] [i_34] [i_35] [i_36] &= ((/* implicit */signed char) ((((/* implicit */_Bool) (short)31)) ? (((/* implicit */int) (signed char)26)) : (((/* implicit */int) (unsigned char)255))));
                            arr_108 [i_17] [i_35] [i_35] [i_35] [i_36] = ((/* implicit */unsigned int) var_17);
                            arr_109 [(short)18] [i_33] [2U] [(short)18] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(var_12)))) ? (((((/* implicit */_Bool) (short)39)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_4))) : (14916981428209671494ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) (signed char)-25)))))));
                        }
                        for (short i_37 = 1; i_37 < 16; i_37 += 2) 
                        {
                            var_69 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)-64)) ? ((~(var_12))) : (((/* implicit */int) (signed char)-110))));
                            var_70 = ((/* implicit */unsigned int) var_12);
                            var_71 = ((/* implicit */unsigned char) (~(var_14)));
                        }
                        arr_112 [i_35] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) (unsigned short)1)) : (((/* implicit */int) (signed char)0))));
                        /* LoopSeq 1 */
                        for (int i_38 = 0; i_38 < 19; i_38 += 1) 
                        {
                            arr_116 [i_35] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -3835226159126192531LL)) ? (10764142822880209749ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-46)))));
                            var_72 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (var_8) : (1331172931U))) : (((((/* implicit */unsigned int) var_12)) % (var_8)))));
                        }
                    }
                } 
            } 
            arr_117 [(unsigned char)15] = ((/* implicit */unsigned long long int) var_7);
            var_73 ^= ((/* implicit */long long int) (!(((/* implicit */_Bool) var_17))));
        }
        arr_118 [i_17] &= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)29709)))));
        var_74 &= ((/* implicit */signed char) (~(((/* implicit */int) var_6))));
    }
    var_75 = ((/* implicit */int) var_7);
    var_76 = ((/* implicit */unsigned int) (~(((/* implicit */int) var_16))));
    var_77 = ((/* implicit */signed char) ((((/* implicit */_Bool) var_14)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-38)))));
}
