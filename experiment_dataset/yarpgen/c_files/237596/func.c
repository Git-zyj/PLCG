/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237596
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237596 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237596
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
    var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned short) ((unsigned int) var_4)))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_6)))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0])));
        var_14 *= ((/* implicit */_Bool) (~(((((arr_1 [i_0]) + (9223372036854775807LL))) >> (((((/* implicit */int) (unsigned short)511)) - (466)))))));
        /* LoopSeq 2 */
        for (unsigned short i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)-17)) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)65025))));
            var_16 -= ((/* implicit */short) (((~(((/* implicit */int) (signed char)-27)))) != (((/* implicit */int) ((((/* implicit */int) (unsigned short)65039)) != (((/* implicit */int) (_Bool)0)))))));
            var_17 = ((/* implicit */short) arr_0 [i_0]);
        }
        for (long long int i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            var_18 += ((/* implicit */unsigned short) arr_0 [i_0]);
            var_19 = ((/* implicit */short) max((var_19), (((/* implicit */short) (+(arr_3 [i_2]))))));
            /* LoopNest 2 */
            for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
            {
                for (short i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */long long int) var_3);
                        var_21 -= ((/* implicit */short) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)488)) : (((/* implicit */int) (unsigned short)19526)))) : (((/* implicit */int) arr_7 [i_0] [3ULL] [i_3]))));
                        var_22 = ((/* implicit */long long int) max((var_22), (((/* implicit */long long int) arr_14 [i_4] [(short)1] [i_3] [i_2] [i_0]))));
                        /* LoopSeq 1 */
                        for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                        {
                            var_23 = ((/* implicit */unsigned short) (+(((((arr_0 [i_0]) + (9223372036854775807LL))) << (((/* implicit */int) arr_16 [i_0] [i_0] [i_2] [i_3] [i_4] [0LL]))))));
                            var_24 = ((/* implicit */long long int) ((arr_5 [i_0] [i_0]) > (var_7)));
                            var_25 = ((/* implicit */unsigned int) max((var_25), (((/* implicit */unsigned int) (-(((/* implicit */int) arr_15 [i_0] [i_2] [i_0])))))));
                        }
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                /* LoopNest 2 */
                for (long long int i_7 = 0; i_7 < 11; i_7 += 2) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */short) min((var_26), (((/* implicit */short) ((((/* implicit */_Bool) (+(-9)))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_26 [i_7])) >> (((((/* implicit */int) (unsigned short)19529)) - (19503)))))) : (arr_14 [i_0] [i_2] [i_6] [i_7] [i_8]))))));
                            var_27 ^= ((/* implicit */signed char) arr_7 [i_8] [i_7] [9LL]);
                            var_28 = ((/* implicit */short) var_5);
                            arr_27 [6LL] [i_2] [i_6] [i_7] [(signed char)5] [i_7] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned char)145))))) ? (((/* implicit */int) ((signed char) var_2))) : (((((/* implicit */_Bool) 3158297268U)) ? (-1844298963) : (((/* implicit */int) (short)1221))))));
                        }
                    } 
                } 
                /* LoopSeq 3 */
                for (int i_9 = 0; i_9 < 11; i_9 += 1) /* same iter space */
                {
                    var_29 += ((/* implicit */signed char) (~(((/* implicit */int) arr_19 [(_Bool)1] [i_2] [i_6] [i_9]))));
                    var_30 = ((/* implicit */short) ((((/* implicit */unsigned int) ((/* implicit */int) arr_17 [i_6] [i_6] [i_2] [i_2] [i_2] [i_0]))) & (((((/* implicit */_Bool) (unsigned short)33850)) ? (arr_12 [i_0] [i_2]) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
                    arr_30 [i_0] [i_2] [i_6] [i_2] |= ((/* implicit */unsigned char) ((arr_1 [(_Bool)1]) % (((/* implicit */long long int) ((/* implicit */int) (short)-1222)))));
                    /* LoopSeq 2 */
                    for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                    {
                        var_31 = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_9])) % (((((/* implicit */int) arr_34 [i_2] [(unsigned short)8] [i_2] [i_9] [i_9] [i_9])) + (((/* implicit */int) (_Bool)0))))));
                        arr_35 [i_10] [i_10] = ((arr_8 [i_0] [i_2]) ^ (((/* implicit */long long int) ((/* implicit */int) (short)-15915))));
                        arr_36 [i_10] = ((((/* implicit */_Bool) arr_29 [i_2] [i_6] [i_2] [i_10])) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_18 [i_0] [i_2] [i_0] [i_10] [(_Bool)1]))))) : ((-9223372036854775807LL - 1LL)));
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 2) 
                    {
                        var_32 = ((/* implicit */unsigned char) arr_31 [(short)7] [i_2] [i_2] [i_9] [i_11]);
                        arr_39 [i_0] = ((/* implicit */signed char) var_11);
                    }
                }
                for (int i_12 = 0; i_12 < 11; i_12 += 1) /* same iter space */
                {
                    var_33 = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (short)15915))) % (var_3)));
                    var_34 = arr_34 [2LL] [i_0] [(unsigned short)6] [4ULL] [i_0] [6LL];
                    var_35 = ((/* implicit */int) ((((/* implicit */_Bool) arr_19 [i_0] [i_2] [i_6] [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_12] [i_6] [i_2] [i_0]))) : (3158297259U)));
                }
                for (long long int i_13 = 0; i_13 < 11; i_13 += 1) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_14 = 0; i_14 < 11; i_14 += 4) 
                    {
                        var_36 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (~(arr_29 [i_14] [i_14] [i_14] [i_14]))))));
                        var_37 = ((/* implicit */short) ((((/* implicit */_Bool) arr_3 [i_14])) ? (((3445617542611628011ULL) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_24 [i_0] [6LL] [0LL] [i_13]))))) : (((/* implicit */unsigned long long int) arr_11 [i_14] [i_14] [i_14] [i_0]))));
                        var_38 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_37 [i_2] [i_0]))) : (arr_10 [i_0] [i_6] [i_6])));
                        var_39 = 5398604153659474523LL;
                        var_40 ^= ((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_45 [i_0] [i_2] [i_6] [1LL] [i_14] [i_2])) ? (arr_43 [2LL] [i_6] [i_14]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_26 [i_0]))))) % (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_38 [(short)9] [8U] [i_13])) ? (((/* implicit */int) (signed char)110)) : (((/* implicit */int) arr_7 [i_14] [i_2] [3LL])))))));
                    }
                    var_41 += ((/* implicit */_Bool) var_12);
                    /* LoopSeq 2 */
                    for (short i_15 = 3; i_15 < 8; i_15 += 3) 
                    {
                        var_42 = ((/* implicit */long long int) arr_37 [i_15 - 2] [i_15 - 2]);
                        var_43 = ((/* implicit */short) arr_45 [i_0] [i_0] [i_0] [9LL] [(_Bool)1] [(short)4]);
                    }
                    for (long long int i_16 = 4; i_16 < 9; i_16 += 1) 
                    {
                        var_44 = ((/* implicit */long long int) max((var_44), (((/* implicit */long long int) (signed char)107))));
                        arr_51 [i_16] [i_2] [i_6] [i_13] [i_16 - 2] [i_16] = ((/* implicit */unsigned char) (signed char)-102);
                    }
                    var_45 = ((/* implicit */unsigned int) (signed char)110);
                    arr_52 [i_2] = ((/* implicit */unsigned short) (_Bool)1);
                }
                var_46 = ((/* implicit */unsigned int) (~(arr_5 [i_0] [i_2])));
            }
            var_47 = (_Bool)1;
        }
        /* LoopSeq 2 */
        for (signed char i_17 = 0; i_17 < 11; i_17 += 1) 
        {
            var_48 = ((/* implicit */unsigned int) ((short) (((_Bool)1) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_50 [(short)8] [i_17] [i_17] [(short)8] [i_0] [(_Bool)1] [i_0]))) : (528482304U))));
            arr_56 [i_17] = ((/* implicit */_Bool) (~(((/* implicit */int) ((short) 1714804122)))));
            arr_57 [i_17] [i_17] = ((/* implicit */long long int) (-(-20)));
        }
        for (unsigned short i_18 = 0; i_18 < 11; i_18 += 2) 
        {
            /* LoopSeq 1 */
            for (unsigned char i_19 = 0; i_19 < 11; i_19 += 1) 
            {
                var_49 += ((/* implicit */short) (-(((/* implicit */int) arr_42 [i_0] [i_18]))));
                var_50 = ((short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_19] [i_19])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_47 [i_19]))));
                /* LoopSeq 1 */
                for (signed char i_20 = 0; i_20 < 11; i_20 += 1) 
                {
                    arr_67 [i_19] [(short)7] [i_19] = ((/* implicit */_Bool) (~(arr_12 [i_0] [i_20])));
                    var_51 -= ((long long int) -1LL);
                }
                /* LoopNest 2 */
                for (long long int i_21 = 0; i_21 < 11; i_21 += 2) 
                {
                    for (signed char i_22 = 0; i_22 < 11; i_22 += 3) 
                    {
                        {
                            var_52 = ((/* implicit */long long int) (~(((/* implicit */int) (signed char)-81))));
                            arr_74 [i_0] [(signed char)8] [i_19] [i_19] [i_22] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_18 [i_22] [i_19] [i_19] [i_19] [1]))));
                        }
                    } 
                } 
                var_53 = ((/* implicit */signed char) min((var_53), (((/* implicit */signed char) ((long long int) arr_14 [i_0] [i_0] [i_0] [(_Bool)1] [i_19])))));
            }
            /* LoopSeq 1 */
            for (_Bool i_23 = 0; i_23 < 1; i_23 += 1) 
            {
                arr_78 [i_18] [(signed char)0] |= arr_13 [i_0] [i_18] [(signed char)4] [i_0];
                /* LoopNest 2 */
                for (unsigned char i_24 = 3; i_24 < 9; i_24 += 4) 
                {
                    for (unsigned long long int i_25 = 0; i_25 < 11; i_25 += 3) 
                    {
                        {
                            var_54 = (signed char)-117;
                            arr_84 [i_0] [i_24] [i_24] [i_25] [i_25] [i_24] [i_25] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) arr_77 [(unsigned char)1] [i_18] [i_18]))))));
                            arr_85 [i_0] [i_0] [i_25] = (signed char)3;
                            arr_86 [i_25] [i_18] [i_23] = ((/* implicit */short) (!(((/* implicit */_Bool) var_8))));
                        }
                    } 
                } 
                var_55 ^= ((/* implicit */short) 19);
                var_56 = ((/* implicit */_Bool) ((14596934054539885966ULL) % (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-106)))));
            }
        }
        arr_87 [i_0] = ((/* implicit */long long int) (-((+(((/* implicit */int) (signed char)-76))))));
    }
    var_57 = max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) max((((/* implicit */long long int) var_4)), (var_7)))) ? (((/* implicit */int) ((((/* implicit */_Bool) 1136670025U)) && (((/* implicit */_Bool) (signed char)3))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) (short)18993)) : (var_12))))));
}
