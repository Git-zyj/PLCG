/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49469
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49469 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49469
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            {
                /* LoopNest 2 */
                for (int i_2 = 0; i_2 < 11; i_2 += 3) 
                {
                    for (unsigned int i_3 = 0; i_3 < 11; i_3 += 1) 
                    {
                        {
                            var_16 -= ((/* implicit */unsigned short) (~(((((/* implicit */_Bool) arr_1 [i_3] [i_1])) ? (arr_2 [(_Bool)0] [i_1]) : (((/* implicit */int) arr_1 [i_0] [i_1]))))));
                            var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+((-(var_1)))))) && (((/* implicit */_Bool) (+(var_4))))));
                            arr_9 [(_Bool)0] [i_1] [i_2] [0U] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) (short)256)), (var_4)))) ? (((((/* implicit */unsigned int) 1954973610)) ^ (3931669445U))) : (((/* implicit */unsigned int) ((arr_2 [(_Bool)1] [i_3]) ^ (((/* implicit */int) (short)272)))))));
                        }
                    } 
                } 
                var_18 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_1 [i_0] [i_1]), (var_9)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) -2122801003235526571LL)))))) : ((((!(((/* implicit */_Bool) var_15)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))) : ((+(var_6)))))));
                /* LoopSeq 2 */
                for (unsigned int i_4 = 3; i_4 < 10; i_4 += 2) 
                {
                    arr_14 [i_0] [i_1] [i_0] = ((/* implicit */short) (~((-(((/* implicit */int) (unsigned short)65535))))));
                    arr_15 [i_0] [1] [i_4] = ((/* implicit */short) (!(((/* implicit */_Bool) (~(var_0))))));
                    arr_16 [i_0] [i_0] [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_10 [i_4 + 1] [4LL] [i_4 - 2] [i_4])))))) - ((~((~(var_11)))))));
                }
                for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                {
                    /* LoopNest 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        for (unsigned short i_7 = 1; i_7 < 10; i_7 += 3) 
                        {
                            {
                                var_19 = ((/* implicit */_Bool) (~(524287ULL)));
                                arr_24 [i_0] [(signed char)9] [2U] [i_6] [4U] [i_0] = ((/* implicit */unsigned int) (~(((arr_20 [i_7 + 1] [(unsigned short)1] [i_7] [2] [4] [i_7]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_9)))))));
                            }
                        } 
                    } 
                    arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */int) min((((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!((_Bool)0))))) <= (((((/* implicit */_Bool) (short)-26843)) ? (9599049441357683906ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))))), (((((/* implicit */_Bool) (-(arr_22 [i_0] [i_1] [(short)10] [i_0] [2] [i_0])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) (short)-292)))))) : (min((((/* implicit */unsigned int) (short)-292)), (arr_7 [i_0] [i_1] [i_1] [i_1])))))));
                }
            }
        } 
    } 
    /* LoopSeq 3 */
    /* vectorizable */
    for (signed char i_8 = 4; i_8 < 20; i_8 += 1) 
    {
        var_20 += ((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)1))));
        /* LoopSeq 1 */
        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 3) 
        {
            var_21 = ((/* implicit */unsigned int) ((((/* implicit */int) var_9)) + (((/* implicit */int) var_2))));
            /* LoopNest 2 */
            for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
            {
                for (unsigned long long int i_11 = 0; i_11 < 21; i_11 += 3) 
                {
                    {
                        var_22 = ((/* implicit */_Bool) (~(((/* implicit */int) arr_28 [i_8 - 1]))));
                        arr_37 [i_8] [i_10] [(_Bool)1] [i_8] = ((153246061) - ((~(186770559))));
                    }
                } 
            } 
            arr_38 [i_8] [17LL] [i_9] = ((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) var_2))) == (var_15)));
            arr_39 [i_8] [7U] = ((/* implicit */signed char) (+(var_6)));
        }
        var_23 = ((/* implicit */_Bool) ((((/* implicit */int) var_12)) & (((/* implicit */int) (short)-6655))));
        /* LoopSeq 2 */
        for (unsigned short i_12 = 3; i_12 < 19; i_12 += 3) 
        {
            /* LoopNest 3 */
            for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
            {
                for (long long int i_14 = 0; i_14 < 21; i_14 += 4) 
                {
                    for (_Bool i_15 = 0; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_51 [(short)14] [i_14] &= ((((/* implicit */_Bool) (short)306)) ? (((/* implicit */unsigned long long int) var_11)) : (arr_50 [i_8] [3LL] [i_8 - 1] [18ULL] [i_8] [i_8] [i_12 + 2]));
                            arr_52 [i_8] = ((/* implicit */_Bool) (~(((/* implicit */int) arr_45 [i_8] [i_12] [i_8] [i_14]))));
                            var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_6)) ? (arr_40 [i_8 - 2] [i_12 - 3]) : (var_3)));
                            var_25 = (~(((/* implicit */int) (short)-3897)));
                        }
                    } 
                } 
            } 
            var_26 = (+(((/* implicit */int) (!(((/* implicit */_Bool) arr_34 [3ULL] [16ULL]))))));
            var_27 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) 134217472)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-287)))))));
        }
        for (unsigned long long int i_16 = 0; i_16 < 21; i_16 += 4) 
        {
            /* LoopNest 2 */
            for (signed char i_17 = 0; i_17 < 21; i_17 += 3) 
            {
                for (short i_18 = 0; i_18 < 21; i_18 += 4) 
                {
                    {
                        arr_61 [i_8] = (~(18446744073709551615ULL));
                        var_28 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned char)20))));
                        var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) (!((!(((/* implicit */_Bool) (short)6648)))))))));
                    }
                } 
            } 
            arr_62 [i_8] [7LL] [i_8] = ((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)31)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (3004776439U)))));
            /* LoopNest 2 */
            for (int i_19 = 0; i_19 < 21; i_19 += 4) 
            {
                for (short i_20 = 1; i_20 < 17; i_20 += 1) 
                {
                    {
                        arr_69 [i_19] [14LL] &= ((/* implicit */_Bool) (-((~(arr_47 [i_8] [i_8] [i_8] [i_19] [i_20 + 4])))));
                        var_30 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_9))) == (0LL)));
                    }
                } 
            } 
            var_31 = ((/* implicit */short) (!(((/* implicit */_Bool) var_3))));
            arr_70 [(_Bool)1] [i_8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_10)) ? (var_4) : (((/* implicit */int) var_10))));
        }
    }
    for (signed char i_21 = 1; i_21 < 24; i_21 += 1) 
    {
        var_32 = ((/* implicit */_Bool) min((var_32), (((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? ((~(arr_73 [i_21]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (short)-26848))))))))))));
        /* LoopNest 2 */
        for (signed char i_22 = 0; i_22 < 25; i_22 += 3) 
        {
            for (int i_23 = 0; i_23 < 25; i_23 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (long long int i_24 = 0; i_24 < 25; i_24 += 1) 
                    {
                        for (long long int i_25 = 0; i_25 < 25; i_25 += 1) 
                        {
                            {
                                var_33 = ((/* implicit */short) min((((((/* implicit */_Bool) -215654987)) ? (((/* implicit */unsigned long long int) (-(var_14)))) : (arr_82 [i_21 - 1] [i_21 + 1] [i_21 - 1]))), (min((var_6), (((/* implicit */unsigned long long int) arr_73 [i_21 - 1]))))));
                                arr_85 [i_21 - 1] [i_22] [i_21 - 1] [4ULL] [4ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) 18446744073709551602ULL)) ? (((/* implicit */int) (unsigned short)41448)) : (((/* implicit */int) (short)16))));
                                arr_86 [(signed char)1] [i_22] [i_21] [i_22] = ((/* implicit */long long int) (!(((/* implicit */_Bool) (unsigned short)39521))));
                                var_34 -= ((/* implicit */long long int) (~(((/* implicit */int) min((arr_72 [i_21 + 1]), ((_Bool)1))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned int i_26 = 2; i_26 < 24; i_26 += 1) 
                    {
                        for (unsigned long long int i_27 = 1; i_27 < 23; i_27 += 4) 
                        {
                            {
                                arr_91 [(signed char)7] [(signed char)7] [i_22] [i_26 - 1] [i_27] = ((/* implicit */short) (~(((-9223372036854775805LL) + (((/* implicit */long long int) (~(var_0))))))));
                                var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+((~(2147483647)))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)236)) != (((/* implicit */int) (short)-31087))))), (min((arr_83 [i_21] [8] [i_23]), (((/* implicit */unsigned long long int) arr_71 [i_21 + 1])))))) : (((/* implicit */unsigned long long int) (~(var_14))))));
                                var_36 += ((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))));
                                arr_92 [i_21] [i_21] [i_22] [(unsigned short)7] [i_27] = ((/* implicit */unsigned int) (!(((((/* implicit */int) (!(((/* implicit */_Bool) var_15))))) < (((arr_77 [i_21] [i_22] [i_21] [5]) ? (((/* implicit */int) (signed char)21)) : (((/* implicit */int) (_Bool)0))))))));
                                var_37 = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) 4908181400266959559LL)) != (12692200856735514813ULL)));
                            }
                        } 
                    } 
                    var_38 = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) max((arr_73 [i_21]), (arr_73 [i_23])))) ? (var_7) : (((/* implicit */int) var_8))))));
                    var_39 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(var_15)))) ? ((-(((((/* implicit */_Bool) arr_84 [i_21] [i_22] [9] [i_22] [i_21] [9] [i_23])) ? (arr_81 [6U] [i_22] [i_22] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_22] [i_23]))))))) : (((/* implicit */unsigned long long int) max((-9223372036854775805LL), (((/* implicit */long long int) (_Bool)0)))))));
                    var_40 |= ((/* implicit */unsigned long long int) (!((!(((((/* implicit */_Bool) arr_73 [i_21 - 1])) || (((/* implicit */_Bool) arr_89 [i_23] [i_22] [i_22] [i_21] [i_21]))))))));
                }
            } 
        } 
    }
    for (long long int i_28 = 0; i_28 < 16; i_28 += 4) 
    {
        var_41 = ((/* implicit */unsigned int) min((var_41), (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)3669)))))))));
        arr_97 [i_28] = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) (+(((/* implicit */int) var_9))))))) ? ((((_Bool)1) ? (arr_88 [(signed char)8] [i_28] [i_28] [i_28] [i_28]) : (8714344023459389473LL))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) 2314543698U)), (6411863930930560954LL))))))))));
    }
    var_42 += ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(var_0))))));
}
