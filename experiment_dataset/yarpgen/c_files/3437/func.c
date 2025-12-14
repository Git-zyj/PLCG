/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3437
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3437 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3437
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) min((var_12), (((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) -288230376151711744LL))) ? (arr_0 [15U] [i_0]) : (arr_0 [i_0] [(unsigned short)0]))))));
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)222)) ? (3051467482U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)46)))));
    }
    var_14 = ((/* implicit */_Bool) var_6);
    var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (short)28313)) : (((/* implicit */int) (!(((/* implicit */_Bool) -635382058))))))) : ((((!(((/* implicit */_Bool) var_3)))) ? (((/* implicit */int) ((_Bool) (signed char)(-127 - 1)))) : (((/* implicit */int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) var_9)))))))));
    /* LoopSeq 4 */
    for (unsigned char i_1 = 0; i_1 < 24; i_1 += 1) 
    {
        /* LoopNest 2 */
        for (int i_2 = 0; i_2 < 24; i_2 += 1) 
        {
            for (short i_3 = 1; i_3 < 22; i_3 += 1) 
            {
                {
                    arr_10 [i_1] [i_2] [i_2] [(unsigned short)15] = ((unsigned char) (!(((/* implicit */_Bool) ((unsigned int) arr_9 [i_3] [i_2] [i_1])))));
                    /* LoopNest 2 */
                    for (short i_4 = 0; i_4 < 24; i_4 += 3) 
                    {
                        for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((int) (+(arr_2 [18LL])))))));
                                var_17 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_18 [i_3] [i_3 + 1] [i_3] [(short)4] [i_3 + 2])) | (var_4)))) ? (((((/* implicit */_Bool) max(((short)-8297), (((/* implicit */short) (signed char)30))))) ? (((/* implicit */long long int) ((/* implicit */int) max((arr_4 [i_1]), (((/* implicit */unsigned short) (unsigned char)209)))))) : (((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) ^ (var_6))))) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                    {
                        var_18 = ((/* implicit */unsigned short) (signed char)-40);
                        /* LoopSeq 2 */
                        for (unsigned int i_7 = 0; i_7 < 24; i_7 += 1) 
                        {
                            arr_25 [i_7] [i_6] [i_3] [11U] [i_1] [i_1] = ((/* implicit */int) var_6);
                            arr_26 [(signed char)21] [i_6] [i_3] [(unsigned char)20] [2U] [i_1] = ((/* implicit */long long int) max((max((((((/* implicit */int) (short)3968)) >> (((4063232U) - (4063207U))))), (((/* implicit */int) (short)-4096)))), (((/* implicit */int) var_2))));
                            var_19 = ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)33)) << (((arr_12 [i_7] [0] [i_3] [i_2] [i_1]) + (1367053924664461194LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) 779850202U)) || (((/* implicit */_Bool) (signed char)10)))))) : (5447175296918066349LL))))));
                            var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_2)), (arr_3 [i_6])))) ? (((/* implicit */int) arr_5 [i_3] [i_2])) : (((((/* implicit */int) (unsigned short)49012)) >> (((((/* implicit */int) (unsigned short)6262)) - (6236)))))))) ? (((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (signed char)-23)) ? (6845596107660316476LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)182))))))) : (max((((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_1] [i_2] [i_3] [(_Bool)1] [i_7] [i_7]))))), (((((/* implicit */_Bool) var_6)) ? (var_4) : (((/* implicit */int) (unsigned char)226))))))));
                        }
                        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                        {
                            var_21 = ((/* implicit */_Bool) max((-5447175296918066326LL), (((/* implicit */long long int) (~((~(8388608))))))));
                            var_22 = ((/* implicit */unsigned short) ((((/* implicit */int) arr_13 [i_1] [i_2] [i_2] [i_6] [i_8])) / (var_4)));
                        }
                        var_23 = ((/* implicit */int) min((((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned char) (signed char)-120)))))), (max((((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_5))))), ((unsigned short)65535)))));
                        /* LoopSeq 1 */
                        for (unsigned char i_9 = 0; i_9 < 24; i_9 += 1) 
                        {
                            var_24 = (-(((/* implicit */int) arr_5 [i_1] [i_1])));
                            var_25 = max((((/* implicit */long long int) (~(0)))), (((var_5) ^ (((/* implicit */long long int) (~(((/* implicit */int) var_1))))))));
                        }
                    }
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((var_7) >= (((((/* implicit */_Bool) (+(((/* implicit */int) (unsigned char)0))))) ? (((((/* implicit */long long int) ((/* implicit */int) arr_24 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))) * (var_7))) : (((/* implicit */long long int) max((var_4), (((/* implicit */int) var_2)))))))));
    }
    for (unsigned short i_10 = 2; i_10 < 18; i_10 += 3) 
    {
        arr_35 [6U] = arr_4 [i_10];
        var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) max((((((/* implicit */_Bool) -281522968)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)34))) : (11U))), (((/* implicit */unsigned int) 2064384)))))));
        var_28 = ((/* implicit */unsigned int) var_6);
        arr_36 [i_10] [(short)2] = ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned char)34)) * (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_10 - 2] [(short)0] [i_10 - 2] [(short)15] [i_10 + 3] [i_10 + 2])))))));
    }
    /* vectorizable */
    for (unsigned short i_11 = 0; i_11 < 13; i_11 += 2) 
    {
        var_29 = ((/* implicit */short) ((-6658081813721230879LL) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (3335804973U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-28313))))))));
        /* LoopSeq 2 */
        for (long long int i_12 = 0; i_12 < 13; i_12 += 1) /* same iter space */
        {
            var_30 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_30 [11LL] [11LL] [i_12] [i_12] [i_12] [i_12])) && (((/* implicit */_Bool) 3335804973U))));
            var_31 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 2220984289U)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_31 [10LL])))) ? (((/* implicit */int) ((unsigned char) var_10))) : (((/* implicit */int) (_Bool)1))));
        }
        for (long long int i_13 = 0; i_13 < 13; i_13 += 1) /* same iter space */
        {
            arr_47 [i_13] [i_13] = ((/* implicit */unsigned char) var_3);
            var_32 = ((/* implicit */long long int) (!(((/* implicit */_Bool) (signed char)-31))));
        }
        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((long long int) arr_24 [i_11] [(unsigned char)10] [i_11] [i_11] [(short)19] [i_11])))));
    }
    /* vectorizable */
    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 3) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_15 = 0; i_15 < 24; i_15 += 1) 
        {
            /* LoopSeq 1 */
            for (unsigned short i_16 = 0; i_16 < 24; i_16 += 1) 
            {
                var_34 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned short)65535)) & (((/* implicit */int) arr_18 [i_14] [i_15] [i_16] [i_14] [i_14]))));
                var_35 = ((/* implicit */signed char) ((unsigned short) 4294967277U));
            }
            /* LoopSeq 2 */
            for (int i_17 = 1; i_17 < 23; i_17 += 3) 
            {
                var_36 = ((/* implicit */unsigned int) var_0);
                arr_57 [i_14] [i_17] [i_15] [i_14] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1478228332239887613LL)) ? (var_0) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)0)))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (short)13442)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_2)))))));
            }
            for (int i_18 = 2; i_18 < 22; i_18 += 3) 
            {
                var_37 = ((/* implicit */signed char) (short)-23952);
                var_38 = ((arr_15 [i_15] [i_18 - 1] [i_18] [1U] [i_14]) & (((/* implicit */long long int) ((/* implicit */int) arr_55 [i_14] [i_18 - 1] [i_14]))));
            }
            /* LoopSeq 1 */
            for (_Bool i_19 = 0; i_19 < 0; i_19 += 1) 
            {
                var_39 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) var_3))));
                /* LoopSeq 2 */
                for (int i_20 = 0; i_20 < 24; i_20 += 1) 
                {
                    /* LoopSeq 1 */
                    for (long long int i_21 = 0; i_21 < 24; i_21 += 1) 
                    {
                        var_40 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)222)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)251)))));
                        var_41 = ((/* implicit */_Bool) var_0);
                    }
                    var_42 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 736363752)) ? (var_0) : (((/* implicit */long long int) 1155110745U))));
                }
                for (long long int i_22 = 1; i_22 < 23; i_22 += 1) 
                {
                    var_43 = ((/* implicit */signed char) 2518807456U);
                    /* LoopSeq 3 */
                    for (unsigned int i_23 = 0; i_23 < 24; i_23 += 1) 
                    {
                        var_44 = ((/* implicit */unsigned int) ((((/* implicit */int) (short)24316)) + (((/* implicit */int) (unsigned char)18))));
                        var_45 = ((/* implicit */_Bool) ((var_0) - (((-9223372036854775791LL) - (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_14] [i_14] [i_14] [6U] [i_23] [6])))))));
                    }
                    for (unsigned short i_24 = 0; i_24 < 24; i_24 += 1) /* same iter space */
                    {
                        var_46 += ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)237))) & (var_7))));
                        var_47 = ((/* implicit */unsigned char) ((int) arr_19 [i_19 + 1] [i_19 + 1] [i_19] [i_19] [i_19 + 1] [19]));
                        var_48 = ((/* implicit */signed char) (~(((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) & (7241032365799054576LL)))));
                        arr_77 [i_14] [i_22] [i_19] [5] [i_14] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_60 [i_19 + 1] [i_19 + 1]))));
                    }
                    for (unsigned short i_25 = 0; i_25 < 24; i_25 += 1) /* same iter space */
                    {
                        arr_82 [i_14] [i_14] [i_14] [i_14] = ((/* implicit */int) ((((/* implicit */_Bool) 532676608U)) ? (-9223372036854775786LL) : (((/* implicit */long long int) (~(((/* implicit */int) arr_14 [i_19 + 1] [i_15])))))));
                        var_49 = ((/* implicit */short) max((var_49), (((/* implicit */short) ((((/* implicit */_Bool) var_3)) ? (((int) arr_73 [(short)14] [i_15] [i_19] [i_15] [i_14] [2LL])) : (((((/* implicit */int) (short)-3981)) + (((/* implicit */int) (short)14650)))))))));
                        var_50 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)18))) / (var_8)));
                    }
                }
            }
        }
        var_51 = ((/* implicit */long long int) var_10);
        var_52 = ((/* implicit */long long int) (!(((/* implicit */_Bool) 991177478))));
    }
}
