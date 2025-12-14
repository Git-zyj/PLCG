/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215624
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215624 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215624
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
    for (long long int i_0 = 0; i_0 < 22; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */int) min((((/* implicit */long long int) (unsigned char)255)), (-1LL)));
        /* LoopSeq 1 */
        for (unsigned char i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) var_3))));
            var_20 = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */int) (short)32767)) * (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 4294967295U)) ? (4294967292U) : (4294967292U)))) : (arr_3 [(unsigned char)16]))), (((/* implicit */unsigned long long int) 15U))));
            /* LoopNest 2 */
            for (short i_2 = 1; i_2 < 19; i_2 += 2) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    {
                        var_21 &= ((/* implicit */unsigned long long int) min((arr_11 [i_3] [(short)10] [(short)10] [i_1 - 1]), (((((/* implicit */_Bool) arr_11 [i_3] [10U] [10U] [i_1 - 1])) ? (arr_11 [i_1 - 1] [12U] [12U] [i_1 - 1]) : (((/* implicit */int) (unsigned char)252))))));
                        var_22 = ((/* implicit */signed char) ((((arr_11 [i_0] [i_1] [i_2] [i_1 + 1]) != (arr_11 [i_0] [i_1 + 1] [i_2] [i_1 - 1]))) ? (((/* implicit */int) ((signed char) arr_11 [i_3] [(unsigned short)6] [i_2] [i_1 - 1]))) : (arr_11 [i_0] [i_0] [i_2] [i_1 - 1])));
                        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) arr_1 [i_3]))));
                    }
                } 
            } 
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 22; i_4 += 4) 
            {
                /* LoopNest 2 */
                for (unsigned char i_5 = 0; i_5 < 22; i_5 += 2) 
                {
                    for (unsigned int i_6 = 0; i_6 < 22; i_6 += 4) 
                    {
                        {
                            var_24 &= ((/* implicit */int) (+((~(((((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [18LL] [i_0] [i_6]))) % (3U)))))));
                            arr_19 [i_0] [i_1] [i_4] [i_6] = ((/* implicit */unsigned int) var_5);
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_7 = 3; i_7 < 18; i_7 += 2) 
                {
                    for (short i_8 = 1; i_8 < 21; i_8 += 3) 
                    {
                        {
                            var_25 = ((/* implicit */long long int) (~(((/* implicit */int) var_12))));
                            arr_25 [i_8] [6U] [i_1] [i_1] [i_8] = ((((/* implicit */_Bool) ((unsigned short) arr_17 [i_1] [i_1 - 1] [i_1] [i_7 + 3] [i_8 + 1]))) ? ((((_Bool)1) ? (0U) : (4294967295U))) : (((/* implicit */unsigned int) (-(((/* implicit */int) (_Bool)0))))));
                            arr_26 [8] [(signed char)18] [i_8] = ((/* implicit */long long int) ((((/* implicit */_Bool) min(((short)5313), (arr_22 [i_1 + 1] [i_8 + 1])))) ? (((((/* implicit */_Bool) arr_22 [i_1 - 1] [i_8 - 1])) ? (((/* implicit */int) arr_22 [i_1 + 1] [i_8 + 1])) : (((/* implicit */int) arr_22 [i_1 - 1] [i_8 + 1])))) : (((/* implicit */int) ((((/* implicit */int) arr_22 [i_1 + 1] [i_8 - 1])) >= (((/* implicit */int) arr_22 [i_1 + 1] [i_8 - 1])))))));
                            var_26 = ((/* implicit */signed char) (short)16383);
                            var_27 = ((/* implicit */short) ((((((/* implicit */_Bool) arr_18 [3ULL] [i_1 + 1])) ? (((/* implicit */long long int) 3338944279U)) : (arr_18 [i_1] [i_1 - 1]))) | (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (short)-1)) : (var_6)))), (((arr_6 [(_Bool)1]) | (((/* implicit */long long int) ((/* implicit */int) (short)0)))))))));
                        }
                    } 
                } 
            }
        }
        arr_27 [i_0] [(unsigned char)13] = min((((/* implicit */long long int) min((((/* implicit */unsigned int) (+(-997956943)))), (1720882019U)))), (((((/* implicit */_Bool) ((unsigned int) arr_22 [i_0] [i_0]))) ? (((/* implicit */long long int) ((int) var_5))) : (-2866447684169276568LL))));
    }
    for (long long int i_9 = 0; i_9 < 22; i_9 += 3) /* same iter space */
    {
        /* LoopSeq 3 */
        for (unsigned short i_10 = 3; i_10 < 18; i_10 += 1) 
        {
            /* LoopSeq 1 */
            /* vectorizable */
            for (short i_11 = 0; i_11 < 22; i_11 += 4) 
            {
                arr_36 [i_9] = ((/* implicit */short) (+(arr_14 [i_10 + 3] [i_10 - 2] [i_10 - 3] [i_10 + 3])));
                /* LoopNest 2 */
                for (long long int i_12 = 0; i_12 < 22; i_12 += 4) 
                {
                    for (unsigned short i_13 = 0; i_13 < 22; i_13 += 4) 
                    {
                        {
                            arr_41 [i_9] [i_9] [i_9] [i_11] [i_12] [i_13] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)111))));
                            arr_42 [i_9] [10] [i_12] [10] [i_10 + 4] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) % (((/* implicit */int) (unsigned short)65509))))) ? (7655381680105383226ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)111)))));
                            arr_43 [i_9] [(_Bool)1] [i_11] [i_12] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_12 [i_10 - 2] [i_10 - 3] [i_10 - 2] [i_10 - 3])) ? (((/* implicit */int) arr_9 [i_13] [i_10] [(_Bool)1] [i_10 + 1] [i_12] [i_10])) : (arr_0 [i_10 + 3])));
                        }
                    } 
                } 
                arr_44 [i_9] [(signed char)17] [i_10] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned short) 1720882019U))) ? (336277131) : (((/* implicit */int) (unsigned char)15))));
                /* LoopNest 2 */
                for (signed char i_14 = 0; i_14 < 22; i_14 += 1) 
                {
                    for (unsigned short i_15 = 0; i_15 < 22; i_15 += 4) 
                    {
                        {
                            var_28 = ((/* implicit */signed char) (~(((/* implicit */int) var_9))));
                            var_29 |= ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_22 [i_10] [i_14]))) != (10791362393604168389ULL))) ? (((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_21 [i_9] [i_10] [3ULL] [16LL] [i_15]))) : (956022989U))) : (((/* implicit */unsigned int) arr_17 [(_Bool)1] [i_10] [i_11] [i_14] [i_10 + 3]))));
                            var_30 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_47 [i_10] [i_10 + 2] [i_10 + 4] [i_15] [i_10])) ? (((/* implicit */int) (short)-25582)) : (((/* implicit */int) arr_47 [i_10] [i_10 + 1] [i_10 + 4] [i_10 + 4] [i_10]))));
                            var_31 -= ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) 0LL)) ? (32767) : (-1))));
                        }
                    } 
                } 
            }
            /* LoopNest 2 */
            for (unsigned short i_16 = 0; i_16 < 22; i_16 += 3) 
            {
                for (int i_17 = 0; i_17 < 22; i_17 += 3) 
                {
                    {
                        var_32 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) ((unsigned short) -6587603867129177611LL)))));
                        var_33 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 0ULL))));
                    }
                } 
            } 
        }
        for (unsigned short i_18 = 2; i_18 < 20; i_18 += 1) 
        {
            var_34 -= (!(((/* implicit */_Bool) (short)-1)));
            var_35 *= ((/* implicit */short) ((((/* implicit */_Bool) 4294967295U)) ? ((((_Bool)1) ? (286319774U) : (((/* implicit */unsigned int) (~(var_3)))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535)))));
        }
        for (long long int i_19 = 1; i_19 < 18; i_19 += 1) 
        {
            var_36 = ((/* implicit */_Bool) -13LL);
            /* LoopNest 2 */
            for (short i_20 = 0; i_20 < 22; i_20 += 2) 
            {
                for (short i_21 = 1; i_21 < 21; i_21 += 1) 
                {
                    {
                        arr_67 [i_9] = ((/* implicit */unsigned char) min((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)(-127 - 1)))))), (((((/* implicit */_Bool) ((((/* implicit */_Bool) 0LL)) ? (((/* implicit */int) arr_54 [(short)21] [(short)7] [i_20] [i_21])) : (((/* implicit */int) var_1))))) ? (var_6) : (((((/* implicit */_Bool) arr_4 [i_21] [i_21] [i_21])) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1))))))));
                        arr_68 [i_9] [i_9] = ((/* implicit */short) ((((/* implicit */_Bool) 18446744073709551615ULL)) ? (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */short) (signed char)-110)), ((short)32767))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_1)) ? (var_14) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)255)))))) ? (((/* implicit */long long int) max((arr_59 [i_9] [17ULL]), (((/* implicit */unsigned int) -224433377))))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (((/* implicit */long long int) -1738275489)) : (-8LL)))))));
                        var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */_Bool) min((-1738275489), (((/* implicit */int) (unsigned char)113))))) ? ((+(((/* implicit */int) (signed char)-44)))) : (((/* implicit */int) arr_7 [i_19] [i_20] [i_19] [i_9]))))) | (((((/* implicit */_Bool) 9223372036854775807LL)) ? (((/* implicit */long long int) max((0), (((/* implicit */int) (signed char)-27))))) : (((long long int) -9223372036854775807LL)))))))));
                    }
                } 
            } 
            /* LoopNest 2 */
            for (signed char i_22 = 2; i_22 < 18; i_22 += 4) 
            {
                for (long long int i_23 = 0; i_23 < 22; i_23 += 3) 
                {
                    {
                        arr_73 [i_9] [i_23] [(short)15] [(unsigned short)5] = ((/* implicit */unsigned short) max(((~(arr_69 [i_19] [i_19 - 1] [(signed char)19] [i_22 - 2]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) var_10)))))));
                        var_38 = ((unsigned short) (signed char)-66);
                    }
                } 
            } 
            var_39 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) 6587603867129177610LL)) ? (arr_20 [i_9] [i_9] [i_9] [(unsigned char)13] [i_19]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_9] [i_9] [i_9] [i_9] [(unsigned short)8] [(unsigned char)12])))));
        }
        var_40 = ((0U) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_17 [8U] [i_9] [i_9] [i_9] [i_9])) ? (arr_17 [i_9] [i_9] [i_9] [13] [i_9]) : (arr_17 [i_9] [(_Bool)1] [i_9] [2U] [i_9])))));
    }
    /* LoopNest 2 */
    for (unsigned short i_24 = 0; i_24 < 20; i_24 += 3) 
    {
        for (short i_25 = 2; i_25 < 19; i_25 += 2) 
        {
            {
                /* LoopNest 2 */
                for (unsigned short i_26 = 0; i_26 < 20; i_26 += 4) 
                {
                    for (unsigned int i_27 = 0; i_27 < 20; i_27 += 2) 
                    {
                        {
                            var_41 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_14))))) - ((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)64))))));
                            arr_85 [i_24] [i_24] = 4;
                            arr_86 [i_27] [i_26] [5ULL] [3ULL] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)22)) ? (1048575) : (((/* implicit */int) (short)32767))))) ? (((((/* implicit */_Bool) (unsigned char)237)) ? (((/* implicit */int) (unsigned short)2)) : (((/* implicit */int) (signed char)127)))) : (((134217727) & (((/* implicit */int) (unsigned char)255))))));
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_28 = 0; i_28 < 20; i_28 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    for (int i_29 = 0; i_29 < 20; i_29 += 3) 
                    {
                        var_42 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)16365)) ? (12U) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-13655)))));
                        var_43 = ((/* implicit */_Bool) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_91 [i_24])) ? (-1782319644) : (((/* implicit */int) arr_35 [i_24] [7U] [i_24]))))) : (var_4)))));
                    }
                    var_44 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (arr_59 [i_25] [i_25 + 1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (((((/* implicit */_Bool) (short)-32759)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32743))))) : ((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_74 [i_25 - 2] [i_25 - 2]))) : (5627579985159565137ULL)))));
                    /* LoopSeq 1 */
                    for (unsigned short i_30 = 1; i_30 < 19; i_30 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (signed char i_31 = 0; i_31 < 20; i_31 += 1) 
                        {
                            var_45 = ((/* implicit */signed char) max((((arr_34 [i_31] [i_25 - 2] [5LL]) % (arr_34 [i_28] [i_25 - 1] [i_24]))), (((/* implicit */unsigned long long int) (~(arr_60 [i_31]))))));
                            var_46 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 2147483647)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (short)29251))));
                        }
                        var_47 = ((/* implicit */signed char) (~(max((arr_76 [i_25 - 2] [i_25 + 1] [i_25 - 1]), (((/* implicit */unsigned long long int) ((int) var_13)))))));
                        var_48 = ((/* implicit */unsigned char) min((4294967295U), (((/* implicit */unsigned int) (~(((/* implicit */int) var_9)))))));
                    }
                    var_49 *= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) arr_10 [i_25 - 1] [(unsigned short)10] [i_25] [i_25] [i_25 - 1] [(unsigned char)19])))) ? (((((/* implicit */_Bool) (unsigned char)235)) ? (((/* implicit */unsigned long long int) 9223372036854775807LL)) : (16188373335276787478ULL))) : (((/* implicit */unsigned long long int) (~(1657264655))))));
                }
                for (long long int i_32 = 0; i_32 < 20; i_32 += 3) /* same iter space */
                {
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (_Bool i_33 = 0; i_33 < 1; i_33 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (signed char i_34 = 1; i_34 < 17; i_34 += 3) 
                        {
                            var_50 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (~(((/* implicit */int) var_11))))) ? (((((/* implicit */_Bool) (unsigned char)255)) ? (((/* implicit */int) (_Bool)1)) : (8388604))) : (((/* implicit */int) arr_101 [i_25 + 1] [i_34 + 3] [i_32] [(unsigned short)17]))));
                            var_51 = ((/* implicit */long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)13))) / (arr_102 [i_25 - 2] [i_25 + 1] [i_34 + 3])));
                            var_52 ^= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) var_8)) * (((/* implicit */int) arr_78 [(signed char)18] [i_33] [(signed char)18]))))) ? (((((/* implicit */_Bool) arr_34 [i_34 + 1] [i_33] [(unsigned char)20])) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_24] [i_25] [(unsigned char)18] [i_33] [i_34]))))) : (((/* implicit */unsigned long long int) ((9223372036854775807LL) - (((/* implicit */long long int) ((/* implicit */int) (unsigned short)39477))))))));
                        }
                        for (unsigned short i_35 = 0; i_35 < 20; i_35 += 3) 
                        {
                            var_53 = ((/* implicit */unsigned long long int) min((var_53), (((/* implicit */unsigned long long int) var_5))));
                            arr_107 [i_24] [18LL] [(unsigned char)1] [i_32] [(short)19] [i_24] [(short)4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_93 [i_33] [i_32] [i_25])) ? (((/* implicit */unsigned int) var_3)) : (14U)));
                        }
                        var_54 = (-(567983845U));
                    }
                    var_55 = -923161549992762639LL;
                }
            }
        } 
    } 
}
