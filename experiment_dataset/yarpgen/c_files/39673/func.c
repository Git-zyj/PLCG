/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39673
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39673 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39673
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
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) 1596291069U)) ? (507776361U) : (3787190924U)))) ? (arr_0 [i_0]) : (min((var_11), (arr_1 [i_0]))))) > (max((arr_1 [i_0]), (arr_1 [i_0])))));
        /* LoopSeq 2 */
        for (long long int i_1 = 0; i_1 < 12; i_1 += 2) 
        {
            /* LoopNest 3 */
            for (unsigned int i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 1) 
                {
                    for (int i_4 = 0; i_4 < 12; i_4 += 1) 
                    {
                        {
                            arr_13 [i_0] [i_1] [i_2] [i_2] = ((((/* implicit */_Bool) ((arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2]) + (((/* implicit */unsigned int) var_12))))) ? (((/* implicit */long long int) (-(arr_12 [i_2] [i_2 - 1] [i_2 + 1] [i_2])))) : (((long long int) arr_12 [i_2] [i_2 - 3] [i_2 + 1] [i_2])));
                            var_14 = ((/* implicit */long long int) arr_12 [i_2] [i_2] [i_3] [3]);
                            var_15 ^= ((/* implicit */unsigned int) ((((unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (arr_6 [i_1] [i_1] [i_2] [i_2]) : (var_11)))) << (((((((unsigned int) arr_7 [i_3] [i_3] [i_1] [i_0])) << (((((((/* implicit */int) var_6)) << (((arr_1 [11LL]) - (3468074734937409356ULL))))) - (834402))))) - (3173580759U)))));
                            arr_14 [i_0] [i_1] [i_2] [i_1] [i_4] &= ((/* implicit */short) ((((((/* implicit */_Bool) (~(arr_7 [i_0] [i_0] [i_2 - 3] [(short)1])))) || (((/* implicit */_Bool) min((arr_11 [i_0] [i_0] [i_0] [7] [i_0]), (((/* implicit */signed char) var_2))))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_12 [i_1] [(unsigned short)4] [i_2] [i_3]), (((/* implicit */unsigned int) arr_11 [i_0] [i_1] [i_0] [i_4] [(unsigned short)0]))))) ? (max((arr_3 [(_Bool)1]), (((/* implicit */int) arr_11 [i_0] [i_0] [i_0] [i_0] [i_0])))) : (((/* implicit */int) ((short) var_4)))))) : ((~(((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */unsigned int) 2147483647)) : (507776361U)))))));
                        }
                    } 
                } 
            } 
            /* LoopNest 2 */
            for (short i_5 = 2; i_5 < 11; i_5 += 2) 
            {
                for (long long int i_6 = 0; i_6 < 12; i_6 += 2) 
                {
                    {
                        arr_22 [i_6] [i_5] [i_5 - 2] [i_1] [i_0] [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((long long int) ((unsigned int) 4251524433U))))));
                        arr_23 [i_1] [(_Bool)1] [i_6] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */int) arr_11 [i_6] [i_6] [i_1] [i_1] [i_0])) + (2147483647))) << (((((arr_19 [i_0] [i_1] [i_5 + 1] [i_6]) + (1149317595066807030LL))) - (25LL)))))) ? (arr_1 [i_5 - 2]) : (min((((/* implicit */unsigned long long int) arr_4 [6ULL])), (arr_6 [i_0] [i_1] [4LL] [(short)0])))))) ? (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_5 [i_0] [i_1] [i_1])), (var_5))))) + (((((/* implicit */_Bool) var_10)) ? (arr_19 [i_0] [i_1] [i_5 - 2] [i_6]) : (((/* implicit */long long int) var_12)))))) : (((/* implicit */long long int) max(((((((((-2147483647 - 1)) + (2147483647))) + (2147483647))) << (((((/* implicit */int) (short)20559)) - (20559))))), (((/* implicit */int) (short)(-32767 - 1))))))));
                        /* LoopSeq 3 */
                        for (short i_7 = 0; i_7 < 12; i_7 += 3) 
                        {
                            arr_27 [i_0] [i_7] [i_5] [i_6] [i_7] = ((/* implicit */short) ((signed char) ((((/* implicit */_Bool) max((((/* implicit */unsigned short) arr_9 [i_0] [i_1] [i_5 - 1] [i_6] [i_7])), (var_5)))) ? (((/* implicit */int) max((var_8), ((short)-20560)))) : (((/* implicit */int) ((arr_7 [i_7] [i_6] [i_5] [i_1]) > (((/* implicit */int) arr_5 [i_7] [i_1] [i_7]))))))));
                            var_16 -= (+(min((((/* implicit */long long int) arr_20 [i_5 - 1] [11LL] [i_5 - 2])), (max((-2776480254554203520LL), (((/* implicit */long long int) (unsigned short)224)))))));
                        }
                        for (unsigned short i_8 = 2; i_8 < 9; i_8 += 1) 
                        {
                            arr_31 [i_0] [i_0] [i_5] [i_8] = ((/* implicit */unsigned short) min((arr_19 [i_5 - 1] [i_5] [i_8 - 1] [i_8 - 1]), (((/* implicit */long long int) (-(((/* implicit */int) arr_20 [i_8 - 2] [i_5 - 2] [i_8 - 2])))))));
                            arr_32 [i_0] [11] [10] [(short)9] [(short)2] [i_5] = ((/* implicit */long long int) (+(((((/* implicit */unsigned long long int) (-(var_3)))) / (min((((/* implicit */unsigned long long int) arr_12 [i_5] [i_5 - 1] [i_5] [i_6])), (arr_0 [i_0])))))));
                        }
                        for (int i_9 = 0; i_9 < 12; i_9 += 4) 
                        {
                            arr_35 [i_0] [i_1] [(short)0] [i_6] [i_9] = ((/* implicit */long long int) ((((/* implicit */int) (short)32767)) & (((/* implicit */int) (signed char)127))));
                            arr_36 [5LL] [i_1] [i_6] [i_6] |= ((/* implicit */unsigned long long int) var_8);
                            arr_37 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6] = ((/* implicit */short) ((var_3) == (((((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_28 [(short)9] [i_1] [i_9] [i_6] [i_9])), ((unsigned short)0))))) & (((((/* implicit */_Bool) arr_6 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (arr_19 [i_1] [i_5] [i_6] [i_9])))))));
                            var_17 ^= ((/* implicit */long long int) min((((((/* implicit */unsigned int) ((/* implicit */int) (signed char)127))) <= (43442892U))), ((!(((/* implicit */_Bool) arr_26 [i_0] [i_0] [i_0] [5ULL]))))));
                            arr_38 [i_0] [i_1] [i_0] [i_0] [7U] = ((/* implicit */short) ((((/* implicit */int) max((((/* implicit */unsigned short) arr_11 [i_5] [i_5 - 2] [i_5 - 2] [i_5 + 1] [i_5 - 2])), (arr_8 [i_5 - 2])))) / (max((((/* implicit */int) arr_11 [i_5] [(unsigned short)1] [i_5 + 1] [i_5 + 1] [i_5 + 1])), (var_12)))));
                        }
                    }
                } 
            } 
            var_18 = ((/* implicit */int) min((var_18), ((~((-((+(((/* implicit */int) arr_18 [i_0] [i_0] [i_0]))))))))));
        }
        for (unsigned long long int i_10 = 0; i_10 < 12; i_10 += 3) 
        {
            /* LoopNest 2 */
            for (signed char i_11 = 0; i_11 < 12; i_11 += 4) 
            {
                for (long long int i_12 = 2; i_12 < 11; i_12 += 2) 
                {
                    {
                        arr_47 [i_10] [i_11] [i_10] [i_10] = ((/* implicit */signed char) ((((((/* implicit */_Bool) (~(((/* implicit */int) (short)26394))))) ? (((/* implicit */int) ((unsigned short) 4251524433U))) : (((/* implicit */int) (signed char)127)))) / (((((/* implicit */_Bool) arr_42 [i_12 - 1] [i_10])) ? (((/* implicit */int) arr_30 [i_12] [i_12 - 1] [i_12 - 1] [i_12 - 2] [i_12] [i_12 - 1])) : (min((var_12), (((/* implicit */int) var_8))))))));
                        arr_48 [(short)3] [i_10] [i_10] = ((/* implicit */unsigned short) arr_25 [i_10]);
                        /* LoopSeq 4 */
                        /* vectorizable */
                        for (unsigned long long int i_13 = 0; i_13 < 12; i_13 += 1) /* same iter space */
                        {
                            var_19 = ((/* implicit */long long int) ((_Bool) arr_26 [i_12 - 2] [i_12 + 1] [i_12 + 1] [i_12 - 2]));
                            arr_51 [i_0] [i_10] [i_11] [i_12 - 2] [i_10] = ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [i_0] [5U] [i_0] [i_0])) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_13))) ^ (var_4))) : (var_4)));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_14 = 0; i_14 < 12; i_14 += 1) /* same iter space */
                        {
                            arr_55 [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((342637452U) != (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)1190)))));
                            var_20 *= arr_30 [i_0] [i_0] [i_0] [i_0] [i_0] [(signed char)5];
                        }
                        /* vectorizable */
                        for (long long int i_15 = 2; i_15 < 10; i_15 += 1) 
                        {
                            arr_59 [i_10] [i_10] [i_10] [i_10] [i_10] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_7 [i_15] [i_12] [8LL] [i_10])) ? (arr_10 [i_10]) : (((/* implicit */long long int) arr_7 [i_11] [i_11] [1U] [i_0]))));
                            arr_60 [i_0] [i_0] [i_11] [i_12] [i_12 - 1] [8ULL] &= ((((/* implicit */_Bool) arr_52 [6U] [i_12 - 2] [i_15] [i_15 - 2] [i_15])) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_53 [i_0] [i_10] [i_0] [i_12 - 1] [i_15] [i_11])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) arr_16 [(_Bool)1]))))) : (((((/* implicit */_Bool) var_7)) ? (arr_4 [i_0]) : (((/* implicit */long long int) var_9)))));
                            var_21 = ((/* implicit */unsigned long long int) arr_43 [i_10] [i_12 + 1] [i_15 - 2]);
                            var_22 -= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 4294967295U))));
                        }
                        /* vectorizable */
                        for (unsigned short i_16 = 3; i_16 < 9; i_16 += 4) 
                        {
                            arr_63 [i_10] [i_10] [3U] [3U] [2] [i_16] = ((/* implicit */unsigned int) (((_Bool)1) ? ((-2147483647 - 1)) : (((/* implicit */int) (signed char)-18))));
                            arr_64 [i_10] [i_16 + 3] [i_12] [i_12] [i_11] [i_10] [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_2))) < (arr_19 [i_10] [i_10] [i_10] [i_10])))) <= (((/* implicit */int) arr_20 [i_12 - 2] [i_10] [i_0]))));
                            arr_65 [i_10] [3LL] [i_11] [3LL] = ((/* implicit */int) (+(arr_29 [i_16 - 3] [i_16 - 3] [i_16 + 1] [i_12 - 1])));
                            var_23 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) : ((+(var_9)))));
                            arr_66 [(short)3] [i_0] [i_10] [i_11] [i_10] [i_12 - 2] [(short)9] = ((/* implicit */unsigned int) (+(-1346040987)));
                        }
                    }
                } 
            } 
            arr_67 [i_10] = ((/* implicit */long long int) ((((((/* implicit */int) (short)32767)) - (((/* implicit */int) (short)32767)))) < (((/* implicit */int) ((unsigned short) arr_43 [i_10] [i_0] [i_10])))));
            arr_68 [(unsigned short)11] [(short)3] [i_10] = ((arr_19 [i_0] [i_0] [i_0] [i_0]) / (((/* implicit */long long int) max((arr_44 [i_10]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_40 [i_10] [i_0])) / (((/* implicit */int) var_8)))))))));
        }
        /* LoopSeq 2 */
        /* vectorizable */
        for (signed char i_17 = 0; i_17 < 12; i_17 += 3) 
        {
            arr_71 [i_0] [i_17] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [5U] [i_0] [i_17])) ? (((/* implicit */int) arr_40 [(_Bool)0] [i_0])) : (((/* implicit */int) ((_Bool) 507776361U)))));
            var_24 = (~(arr_33 [i_0] [i_0] [i_17] [i_17] [i_0]));
        }
        for (unsigned short i_18 = 0; i_18 < 12; i_18 += 4) 
        {
            var_25 -= ((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)-20564)) ? (var_3) : (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_20 [i_18] [i_18] [i_18])), (4251524460U))))));
            /* LoopSeq 1 */
            for (short i_19 = 4; i_19 < 10; i_19 += 2) 
            {
                arr_79 [8LL] |= ((/* implicit */long long int) ((unsigned short) (~((~(((/* implicit */int) arr_78 [(signed char)10] [i_18] [i_18] [i_0])))))));
                arr_80 [(unsigned short)1] [10ULL] [(unsigned short)1] |= ((/* implicit */int) ((((/* implicit */_Bool) ((int) arr_78 [i_19 + 1] [i_19 + 1] [i_19 - 3] [i_18]))) ? (((unsigned long long int) arr_78 [i_19 - 2] [(_Bool)1] [i_19 + 2] [(_Bool)1])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)0) && (((/* implicit */_Bool) 1843548106U))))))));
                var_26 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), ((unsigned short)6730)))) ? (1519228443U) : (((/* implicit */unsigned int) 2147483647))));
            }
            arr_81 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (short)6))))));
            arr_82 [i_0] [i_0] = ((((/* implicit */_Bool) (~(((/* implicit */int) (_Bool)0))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((((/* implicit */_Bool) arr_15 [i_18])) || (((/* implicit */_Bool) arr_46 [i_0] [i_0] [i_18] [i_0] [i_18])))))))) : (min((min((((/* implicit */long long int) 0U)), (-2776480254554203520LL))), (((/* implicit */long long int) min((((/* implicit */unsigned short) arr_30 [4] [i_18] [i_18] [i_18] [i_18] [i_18])), (arr_54 [i_0] [i_0] [i_18] [i_18] [i_18] [(short)8] [i_18])))))));
        }
        arr_83 [i_0] = ((/* implicit */unsigned long long int) var_7);
    }
    var_27 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) (short)21045))));
    var_28 = ((/* implicit */unsigned long long int) (((!(((/* implicit */_Bool) -572981670)))) ? ((+(var_10))) : ((-(((var_10) | (((/* implicit */long long int) ((/* implicit */int) var_2)))))))));
    var_29 = ((/* implicit */unsigned int) max((((/* implicit */long long int) min((2510841891U), (32760U)))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_5)) ? (((/* implicit */long long int) ((/* implicit */int) var_0))) : (var_3))) : (((/* implicit */long long int) ((/* implicit */int) var_5)))))));
}
