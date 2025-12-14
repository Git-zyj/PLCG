/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226406
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226406 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226406
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
    /* vectorizable */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 3) /* same iter space */
    {
        /* LoopNest 2 */
        for (unsigned short i_1 = 2; i_1 < 12; i_1 += 3) 
        {
            for (long long int i_2 = 2; i_2 < 10; i_2 += 3) 
            {
                {
                    arr_9 [i_0] [i_1] [i_2] [i_2] = ((/* implicit */unsigned char) (short)6736);
                    arr_10 [i_1] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)20784)) * (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned char i_4 = 0; i_4 < 14; i_4 += 3) 
                        {
                            {
                                arr_16 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)249)) ? (((/* implicit */int) (short)32767)) : ((-(((/* implicit */int) (_Bool)1))))));
                                var_12 = ((/* implicit */unsigned char) (((_Bool)1) ? (((((/* implicit */_Bool) (short)-741)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)128))) : (15550521160106413544ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)32768)))));
                            }
                        } 
                    } 
                    arr_17 [i_0] [i_1] = ((/* implicit */short) var_10);
                }
            } 
        } 
        /* LoopSeq 1 */
        for (unsigned int i_5 = 0; i_5 < 14; i_5 += 4) 
        {
            /* LoopNest 3 */
            for (long long int i_6 = 1; i_6 < 11; i_6 += 4) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 3) 
                {
                    for (unsigned int i_8 = 1; i_8 < 13; i_8 += 4) 
                    {
                        {
                            var_13 = ((/* implicit */signed char) ((arr_20 [(unsigned char)6] [i_0] [i_0 - 1]) <= (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5])) ? (arr_11 [i_0] [(unsigned char)9] [i_6] [i_7] [(short)3]) : (((/* implicit */unsigned int) ((/* implicit */int) var_10))))))));
                            var_14 = ((/* implicit */_Bool) (((_Bool)0) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)7824)))));
                            arr_28 [i_0 - 1] [i_6] [i_6 + 2] [i_7] [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_5 [i_0] [i_5] [i_6] [i_5])) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)32786)))))));
                        }
                    } 
                } 
            } 
            var_15 = ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0 - 1])) ? (((/* implicit */int) arr_1 [i_0 - 1])) : (((/* implicit */int) arr_1 [i_0 + 1]))));
            /* LoopNest 2 */
            for (short i_9 = 0; i_9 < 14; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 14; i_10 += 2) 
                {
                    {
                        arr_33 [(_Bool)1] [(_Bool)1] [i_9] [(_Bool)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 3377699720527872ULL)) || ((_Bool)0)));
                        arr_34 [i_10] [(unsigned char)9] [13ULL] [(unsigned char)9] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) * (1636491016178699918ULL))) >> (((((((/* implicit */_Bool) (unsigned short)9639)) ? (18443366373989023743ULL) : (1636491016178699918ULL))) - (18443366373989023702ULL)))));
                        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) arr_13 [10ULL] [i_5] [i_5] [i_5])) ? (((/* implicit */unsigned long long int) 172398655)) : (18443366373989023743ULL))) != (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_10] [i_0] [i_5] [i_0])))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (short i_11 = 0; i_11 < 14; i_11 += 2) 
            {
                for (unsigned char i_12 = 0; i_12 < 14; i_12 += 2) 
                {
                    {
                        var_17 |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)-4))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) | (3489401224U)))) : (((((/* implicit */_Bool) (unsigned short)32791)) ? (((/* implicit */unsigned long long int) 80862127U)) : (3653563107214787039ULL)))));
                        arr_41 [i_11] [i_5] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((-465282670063570952LL) == (((/* implicit */long long int) ((/* implicit */int) (unsigned char)31)))))) >> (((arr_25 [i_0 - 2]) - (2932827839259629616ULL)))));
                        var_18 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((1554325089U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)703)))))) ? (((((/* implicit */int) arr_38 [1ULL] [i_11] [i_12])) & (((/* implicit */int) (short)16383)))) : (((/* implicit */int) arr_26 [i_12] [(unsigned char)4] [i_11] [i_12] [i_11] [i_11] [i_11]))));
                    }
                } 
            } 
        }
        arr_42 [i_0] = (_Bool)1;
    }
    for (unsigned int i_13 = 2; i_13 < 13; i_13 += 3) /* same iter space */
    {
        arr_46 [i_13 - 2] = ((/* implicit */unsigned long long int) arr_4 [i_13] [i_13]);
        var_19 ^= ((/* implicit */_Bool) ((((/* implicit */_Bool) (short)6750)) ? (((((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)120)))) >> (((3377699720527872ULL) - (3377699720527849ULL))))) : (((/* implicit */int) (_Bool)1))));
        /* LoopNest 2 */
        for (unsigned int i_14 = 0; i_14 < 14; i_14 += 3) 
        {
            for (short i_15 = 0; i_15 < 14; i_15 += 4) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) (((_Bool)1) ? (((((/* implicit */_Bool) (unsigned short)44069)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) (short)6754)))) : (((/* implicit */int) arr_50 [i_13 + 1] [i_13 - 2]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((var_5), ((short)6736))))) : (12827517995720453141ULL))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_16 = 4; i_16 < 12; i_16 += 2) /* same iter space */
                    {
                        arr_55 [i_16] [i_15] [(_Bool)1] [i_13] = ((/* implicit */_Bool) ((((/* implicit */_Bool) -5343120050213838496LL)) ? (var_11) : (((/* implicit */int) (_Bool)0))));
                        var_21 = ((/* implicit */unsigned char) arr_3 [i_13]);
                        var_22 *= ((/* implicit */unsigned long long int) arr_3 [i_13 - 1]);
                    }
                    for (short i_17 = 4; i_17 < 12; i_17 += 2) /* same iter space */
                    {
                        arr_58 [2ULL] [2ULL] [i_15] [i_17] = ((/* implicit */short) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (_Bool)1))));
                        arr_59 [(short)1] [i_14] [(short)1] [(short)1] [i_17] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? ((~(15ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 3537209979U)) ? (((/* implicit */int) (short)-6747)) : (((/* implicit */int) (_Bool)0))))) == (((((/* implicit */_Bool) 1976820607U)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_6))) : (4214105169U)))))))));
                    }
                    for (short i_18 = 4; i_18 < 12; i_18 += 2) /* same iter space */
                    {
                        var_23 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_2))) <= (3628811047310784830ULL))))) / (var_7)));
                        arr_62 [i_13] [i_13] [i_13] [13U] [i_13] [i_13] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned char)100), ((unsigned char)255))))) | (max((((/* implicit */long long int) 616057948U)), (549755813887LL)))));
                        arr_63 [i_13] [(_Bool)1] [i_15] [13LL] = ((/* implicit */short) max((max((var_7), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_57 [0] [i_14] [i_14] [i_18])) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))), (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (short)29509)) || (((/* implicit */_Bool) (unsigned short)24706)))))) : (2147483647LL))))));
                        arr_64 [i_13] = ((/* implicit */_Bool) ((unsigned long long int) max((((/* implicit */unsigned long long int) var_10)), (1947738468893056661ULL))));
                        arr_65 [i_13] [i_13] [i_14] [i_13] [i_13] = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))));
                    }
                }
            } 
        } 
    }
    var_24 = min((((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_8)) ? (5115713899482433579ULL) : (((/* implicit */unsigned long long int) var_11)))) <= (max((var_8), (((/* implicit */unsigned long long int) (_Bool)1))))))), (max((14490692072798991479ULL), (((/* implicit */unsigned long long int) 2147483654LL)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_19 = 0; i_19 < 1; i_19 += 1) 
    {
        /* LoopNest 2 */
        for (long long int i_20 = 0; i_20 < 13; i_20 += 2) 
        {
            for (unsigned char i_21 = 1; i_21 < 11; i_21 += 2) 
            {
                {
                    arr_73 [i_21] [(short)10] [i_20] [i_19] = ((/* implicit */long long int) 2219723204U);
                    arr_74 [i_19] [(short)11] [i_21] = ((/* implicit */_Bool) (-(((/* implicit */int) arr_2 [i_21 + 2] [i_21 - 1]))));
                    arr_75 [i_19] [i_20] [i_20] [i_19] = ((/* implicit */short) 80862127U);
                    var_25 &= ((/* implicit */unsigned short) (((_Bool)0) ? (6889671564292864205ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)1157)))));
                }
            } 
        } 
        var_26 = ((/* implicit */signed char) ((unsigned int) ((((/* implicit */int) (unsigned char)98)) < (((/* implicit */int) (unsigned char)137)))));
        arr_76 [i_19] [i_19] = ((/* implicit */short) ((((/* implicit */_Bool) var_4)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_26 [(_Bool)1] [i_19] [i_19] [i_19] [i_19] [i_19] [i_19])))));
    }
    for (unsigned char i_22 = 0; i_22 < 22; i_22 += 4) 
    {
        var_27 *= ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */int) (_Bool)0)) > (((/* implicit */int) (signed char)-121))))) < ((+(((/* implicit */int) var_4))))));
        var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 1819056258U)) ? (((/* implicit */int) (signed char)126)) : (((/* implicit */int) (_Bool)1))));
        var_29 = ((/* implicit */unsigned char) max((((((/* implicit */_Bool) max((((/* implicit */unsigned short) (unsigned char)80)), (var_1)))) ? (max((((/* implicit */unsigned long long int) 8645184825935762084LL)), (arr_77 [i_22]))) : (arr_77 [i_22]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)190)) ? (((/* implicit */int) (signed char)-93)) : (((/* implicit */int) (_Bool)0)))))));
        var_30 = ((/* implicit */unsigned long long int) 1797844262);
    }
}
