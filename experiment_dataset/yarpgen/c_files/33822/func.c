/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33822
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33822 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33822
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
    for (unsigned long long int i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) ((unsigned char) -6558135675121551257LL));
        var_12 = var_9;
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) (unsigned short)2017))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (short)-18313))));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_13 = ((/* implicit */long long int) (((~(33554432U))) << (((((((((/* implicit */int) (short)29774)) >> (((((/* implicit */int) var_2)) - (11727))))) ^ (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (short)29794)) : (((/* implicit */int) (unsigned char)179)))))) - (30646)))));
        var_14 = ((/* implicit */unsigned long long int) var_7);
        /* LoopNest 2 */
        for (unsigned int i_2 = 1; i_2 < 15; i_2 += 3) 
        {
            for (unsigned int i_3 = 3; i_3 < 14; i_3 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_4 = 1; i_4 < 13; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 2; i_5 < 14; i_5 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */unsigned int) max((((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))) / (9152303693526401654ULL))), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_8)), (var_1)))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_7))))))));
                                var_16 = ((/* implicit */unsigned long long int) (short)-18317);
                            }
                        } 
                    } 
                    arr_20 [i_2] [i_2] = ((/* implicit */_Bool) var_7);
                    var_17 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) var_9)) / (var_0)))) ? (((/* implicit */unsigned long long int) var_9)) : (((min((9696184740344561026ULL), (((/* implicit */unsigned long long int) var_7)))) + (((/* implicit */unsigned long long int) ((/* implicit */int) var_6)))))));
                }
            } 
        } 
        /* LoopSeq 3 */
        for (short i_6 = 0; i_6 < 16; i_6 += 3) 
        {
            arr_25 [i_6] [i_6] = var_10;
            var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) var_7))) ^ (((((/* implicit */_Bool) var_5)) ? (8447167464527341911LL) : (((/* implicit */long long int) ((/* implicit */int) (short)-18313))))))))));
            /* LoopNest 2 */
            for (unsigned char i_7 = 4; i_7 < 15; i_7 += 3) 
            {
                for (signed char i_8 = 2; i_8 < 14; i_8 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (int i_9 = 0; i_9 < 16; i_9 += 3) 
                        {
                            arr_32 [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (((_Bool)1) ? (((((((/* implicit */int) var_3)) + (2147483647))) >> (((((/* implicit */int) var_3)) + (15804))))) : (((((/* implicit */int) var_7)) | (((/* implicit */int) var_7))))))) != (max((((/* implicit */long long int) (_Bool)1)), (((6436172764725326869LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))));
                            var_19 = ((/* implicit */unsigned int) min((((((((/* implicit */long long int) ((/* implicit */int) var_4))) / (var_1))) - (((-1LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)8618))))))), (((/* implicit */long long int) (_Bool)1))));
                            arr_33 [i_1] [(signed char)3] [i_1] [i_1] [i_6] = ((/* implicit */unsigned short) ((((/* implicit */long long int) (-(((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)8184))) <= (var_1))))))) * (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)65528))) / (2305843009213693951LL)))));
                            arr_34 [i_1] [(unsigned char)8] [i_7 - 1] [(signed char)0] [i_1] [i_6] [(signed char)0] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_2)) && ((_Bool)1))) && (((/* implicit */_Bool) max((((/* implicit */short) (unsigned char)255)), (var_10))))));
                        }
                        arr_35 [i_8] [(signed char)6] [i_6] [i_1] [4U] = ((/* implicit */unsigned long long int) (unsigned short)57370);
                    }
                } 
            } 
            /* LoopSeq 1 */
            /* vectorizable */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                var_20 = ((/* implicit */long long int) ((((/* implicit */int) (unsigned short)4162)) ^ ((~(((/* implicit */int) var_7))))));
                arr_39 [i_6] [11ULL] [i_6] [i_6] = ((/* implicit */unsigned int) ((var_9) & (((/* implicit */long long int) ((/* implicit */int) (unsigned short)60472)))));
                arr_40 [i_6] [i_6] [i_10] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)8178)) >= (((/* implicit */int) var_8))));
                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((10611244950790346162ULL) >= (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)8184)) || ((_Bool)1))))))))));
                arr_41 [i_6] [i_6] = ((/* implicit */long long int) ((((((/* implicit */int) (unsigned short)48950)) - (((/* implicit */int) (unsigned short)38386)))) >= (((/* implicit */int) var_4))));
            }
        }
        /* vectorizable */
        for (long long int i_11 = 0; i_11 < 16; i_11 += 3) 
        {
            var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((unsigned char) -6402848447364816091LL)))));
            arr_44 [i_11] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_6)) / (((/* implicit */int) var_2))));
            arr_45 [i_11] = ((/* implicit */signed char) (short)29797);
        }
        for (_Bool i_12 = 0; i_12 < 1; i_12 += 1) 
        {
            arr_49 [(signed char)2] &= ((/* implicit */unsigned short) ((max((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) (unsigned char)32)) : (((/* implicit */int) var_3)))), (((/* implicit */int) var_2)))) / (((/* implicit */int) var_6))));
            var_23 = ((/* implicit */unsigned int) (unsigned char)224);
        }
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_13 = 2; i_13 < 8; i_13 += 3) 
    {
        /* LoopSeq 2 */
        for (unsigned char i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            var_24 = ((/* implicit */short) ((((/* implicit */int) var_10)) / (((/* implicit */int) var_10))));
            /* LoopSeq 3 */
            for (unsigned short i_15 = 0; i_15 < 11; i_15 += 3) 
            {
                arr_56 [i_13] [i_13] [i_13] = ((((/* implicit */long long int) ((/* implicit */int) var_2))) & (((long long int) var_7)));
                arr_57 [i_13] [i_13] [i_13] [(signed char)3] = ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) 324269240)) : (((((/* implicit */_Bool) var_0)) ? (7809737317990916071ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))));
                var_25 = ((/* implicit */unsigned char) -656154245);
            }
            for (short i_16 = 0; i_16 < 11; i_16 += 3) 
            {
                arr_60 [(signed char)9] [i_14] [i_13] [(signed char)9] = ((/* implicit */unsigned int) var_5);
                /* LoopNest 2 */
                for (int i_17 = 0; i_17 < 11; i_17 += 3) 
                {
                    for (unsigned char i_18 = 2; i_18 < 8; i_18 += 3) 
                    {
                        {
                            arr_67 [i_13] [i_13] [i_16] [5LL] [i_16] = ((/* implicit */unsigned int) -2088520596817337235LL);
                            var_26 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) var_5)) % (((/* implicit */int) (unsigned char)205))))) ? (((((/* implicit */_Bool) 2138509541U)) ? (((/* implicit */int) (unsigned char)72)) : (((/* implicit */int) (short)1629)))) : (((/* implicit */int) ((((/* implicit */_Bool) 15954427173812389422ULL)) || ((_Bool)1))))));
                            arr_68 [(_Bool)1] [i_14] [i_13] [i_16] [i_16] [(_Bool)1] [i_13] = ((/* implicit */unsigned char) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (int i_19 = 0; i_19 < 11; i_19 += 3) 
                {
                    for (unsigned char i_20 = 0; i_20 < 11; i_20 += 3) 
                    {
                        {
                            var_27 ^= ((/* implicit */short) var_4);
                            arr_75 [i_13 + 2] [i_13] [i_16] [(short)9] [i_20] = ((/* implicit */short) ((signed char) var_1));
                        }
                    } 
                } 
                var_28 ^= ((/* implicit */short) ((((var_1) + (9223372036854775807LL))) >> (((/* implicit */int) ((var_9) != (((/* implicit */long long int) ((/* implicit */int) var_7))))))));
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 11; i_21 += 3) 
                {
                    for (signed char i_22 = 3; i_22 < 9; i_22 += 3) 
                    {
                        {
                            var_29 = ((/* implicit */long long int) 1448631711U);
                            arr_82 [i_13] [8ULL] [8ULL] [i_13] = ((/* implicit */long long int) (unsigned short)36192);
                        }
                    } 
                } 
            }
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                var_30 = ((/* implicit */short) 2558872456377904655LL);
                arr_85 [i_13 + 2] [i_14] [i_13] = ((/* implicit */short) ((unsigned long long int) var_5));
            }
        }
        for (unsigned int i_24 = 0; i_24 < 11; i_24 += 3) 
        {
            var_31 ^= ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_2))));
            arr_89 [i_13] [(_Bool)1] = ((/* implicit */unsigned char) ((((var_0) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_0)));
        }
        var_32 = ((/* implicit */_Bool) 3013049773U);
        var_33 = ((/* implicit */signed char) min((var_33), (((/* implicit */signed char) (+((((_Bool)0) ? (((/* implicit */int) (unsigned short)37226)) : (((/* implicit */int) var_6)))))))));
        arr_90 [i_13] [i_13 + 1] = ((/* implicit */long long int) ((((/* implicit */int) var_4)) & (((/* implicit */int) var_8))));
    }
}
