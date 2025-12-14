/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52174
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52174 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52174
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
    for (unsigned int i_0 = 1; i_0 < 9; i_0 += 3) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 1; i_2 < 7; i_2 += 4) 
            {
                for (int i_3 = 0; i_3 < 11; i_3 += 2) 
                {
                    {
                        arr_10 [(short)6] [i_0] [i_0] [i_0 + 2] = ((/* implicit */signed char) max((((/* implicit */int) ((unsigned short) arr_7 [i_0] [i_2 + 1] [i_0] [i_0]))), (arr_7 [i_0] [i_2 + 3] [i_2 - 1] [i_0])));
                        var_12 ^= ((/* implicit */_Bool) max((((5957039673507608131ULL) ^ (((/* implicit */unsigned long long int) var_4)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_4 [4]))) && (((arr_6 [i_3] [i_3]) && (((/* implicit */_Bool) var_6)))))))));
                    }
                } 
            } 
            var_13 += arr_3 [i_0];
        }
        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) var_0))));
        /* LoopSeq 4 */
        /* vectorizable */
        for (unsigned long long int i_4 = 0; i_4 < 11; i_4 += 2) 
        {
            arr_13 [i_4] &= ((/* implicit */signed char) arr_8 [i_0 + 1] [i_0 + 2]);
            var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) (_Bool)0))));
            arr_14 [i_0] [i_4] |= ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
        }
        for (unsigned int i_5 = 1; i_5 < 10; i_5 += 1) 
        {
            var_16 = ((/* implicit */signed char) ((max((((12489704400201943484ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10))))), (5957039673507608132ULL))) > (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((((/* implicit */int) var_7)) + (2147483647))) >> (((/* implicit */int) arr_6 [i_0] [i_5 - 1])))))))))));
            var_17 = ((/* implicit */unsigned short) ((unsigned int) arr_6 [i_0] [i_0]));
            /* LoopSeq 3 */
            for (short i_6 = 0; i_6 < 11; i_6 += 1) 
            {
                arr_22 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [(short)0])) || (((/* implicit */_Bool) arr_11 [i_0] [i_5] [i_6]))));
                arr_23 [(signed char)2] [i_5 + 1] |= ((/* implicit */signed char) var_9);
                var_18 = ((/* implicit */int) (((!(((/* implicit */_Bool) 12489704400201943468ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_19 [i_0 + 2] [i_0] [i_5 + 1] [(_Bool)0]))))) : (5957039673507608131ULL)));
                /* LoopNest 2 */
                for (_Bool i_7 = 0; i_7 < 0; i_7 += 1) 
                {
                    for (unsigned long long int i_8 = 0; i_8 < 11; i_8 += 3) 
                    {
                        {
                            arr_28 [i_0] [i_5] [i_0] [i_7] [i_8] = (i_0 % 2 == zero) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5957039673507608131ULL) >> (((((/* implicit */int) arr_0 [i_0])) + (16566)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_5] [i_6]))) : (5957039673507608132ULL)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_7))))) + (var_3))))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((5957039673507608131ULL) >> (((((((/* implicit */int) arr_0 [i_0])) + (16566))) - (48397)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [i_5] [i_6]))) : (5957039673507608132ULL)))) || (((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) max((var_5), (var_7))))) + (var_3)))))));
                            var_19 |= ((/* implicit */unsigned int) (~(max(((-(5957039673507608132ULL))), (((/* implicit */unsigned long long int) arr_5 [0ULL] [i_0 + 1]))))));
                            var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_19 [i_0] [4ULL] [i_0] [(_Bool)1])), (max((12489704400201943485ULL), (((/* implicit */unsigned long long int) 0U))))))) && (((/* implicit */_Bool) ((unsigned long long int) min((5957039673507608131ULL), (((/* implicit */unsigned long long int) (signed char)93)))))))))));
                            arr_29 [i_0] = ((/* implicit */long long int) 3267465589U);
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned short i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    var_21 &= ((/* implicit */_Bool) (unsigned short)566);
                    var_22 += ((/* implicit */short) (_Bool)1);
                }
                for (unsigned long long int i_10 = 3; i_10 < 10; i_10 += 2) 
                {
                    var_23 += ((/* implicit */int) ((unsigned short) ((long long int) arr_5 [2LL] [2U])));
                    arr_34 [i_0] [i_6] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) arr_9 [i_0] [i_6] [i_5] [i_0])))));
                }
            }
            for (short i_11 = 0; i_11 < 11; i_11 += 4) /* same iter space */
            {
                arr_39 [(_Bool)1] [i_0] [i_11] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (5957039673507608150ULL)))) ? (12489704400201943484ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) ^ (((/* implicit */int) (unsigned short)2486))))))))));
                var_24 = ((/* implicit */unsigned long long int) min((var_24), (((/* implicit */unsigned long long int) (~((~(((/* implicit */int) arr_35 [i_5 + 1] [i_11] [i_11] [i_0 - 1])))))))));
            }
            for (short i_12 = 0; i_12 < 11; i_12 += 4) /* same iter space */
            {
                /* LoopSeq 4 */
                for (long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                {
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (unsigned short i_14 = 0; i_14 < 11; i_14 += 1) 
                    {
                        var_25 = (!(var_9));
                        var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) ((_Bool) (unsigned short)26924)))));
                        var_27 -= ((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)10539))));
                    }
                    for (unsigned int i_15 = 0; i_15 < 11; i_15 += 4) 
                    {
                        var_28 = ((min((((/* implicit */unsigned long long int) (unsigned short)1948)), (5957039673507608150ULL))) ^ (((/* implicit */unsigned long long int) max((arr_4 [(signed char)1]), (((/* implicit */int) var_10))))));
                        var_29 = ((/* implicit */short) (((~(((/* implicit */int) arr_30 [i_0] [i_5] [i_0 + 2] [i_13] [i_15] [i_15])))) == (((/* implicit */int) ((((/* implicit */int) var_7)) > (((/* implicit */int) (signed char)-1)))))));
                        arr_48 [i_5 - 1] [i_0] [i_12] = ((/* implicit */signed char) ((((((((/* implicit */int) ((((/* implicit */int) var_11)) < (((/* implicit */int) arr_17 [i_0] [i_5] [i_12]))))) ^ ((~(((/* implicit */int) var_5)))))) + (2147483647))) << (((((((/* implicit */_Bool) arr_25 [3U] [i_0 + 1] [i_5 - 1] [i_15])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : ((~(var_4))))) - (4294967210U)))));
                        var_30 *= ((/* implicit */unsigned int) ((((unsigned long long int) arr_46 [i_5 - 1] [i_5] [i_0 - 1] [i_0 + 2] [i_0 - 1] [i_0 - 1])) >> (((max((((/* implicit */unsigned long long int) ((arr_7 [i_0] [(unsigned short)2] [i_15] [i_13]) & (((/* implicit */int) arr_0 [i_12]))))), (max((arr_16 [(_Bool)1] [i_13] [i_5]), (((/* implicit */unsigned long long int) arr_35 [(_Bool)1] [8U] [i_12] [i_15])))))) - (18446744073709550999ULL)))));
                        arr_49 [i_0] = ((/* implicit */signed char) (~((~(((((/* implicit */_Bool) 1090627182340793513LL)) ? (var_4) : (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))))));
                    }
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 3) 
                    {
                        arr_52 [i_16] [i_0] [i_12] [i_0] [i_0] = ((/* implicit */_Bool) (-(max((var_3), (arr_21 [i_0 + 2] [i_16] [i_16])))));
                        var_31 *= ((/* implicit */unsigned short) (!(((/* implicit */_Bool) min((((((/* implicit */long long int) 2002982040)) % (-1075630158055182812LL))), (((/* implicit */long long int) ((((/* implicit */long long int) ((/* implicit */int) (signed char)97))) >= (-1075630158055182812LL)))))))));
                    }
                    var_32 = ((/* implicit */unsigned int) (~(((/* implicit */int) ((_Bool) 5957039673507608150ULL)))));
                    arr_53 [i_0] [i_5 + 1] [(_Bool)0] [i_12] [(signed char)7] = ((/* implicit */signed char) max((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_37 [i_13] [i_12] [i_5] [i_0])) ? (((/* implicit */int) (signed char)-8)) : (((/* implicit */int) arr_33 [i_13] [i_0] [i_0] [(signed char)0]))))) - (((((/* implicit */_Bool) arr_11 [i_0] [i_5] [3ULL])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-37))) : (arr_27 [i_0] [(unsigned short)3]))))), (((/* implicit */unsigned long long int) (~(((((/* implicit */int) arr_51 [1ULL] [(signed char)1] [i_12] [i_0] [i_13])) | (((/* implicit */int) (signed char)72)))))))));
                    var_33 *= ((/* implicit */signed char) min((((/* implicit */unsigned long long int) (((~(14LL))) | (((1075630158055182811LL) << (((((/* implicit */int) (unsigned short)41460)) - (41459)))))))), (12489704400201943465ULL)));
                }
                for (unsigned short i_17 = 0; i_17 < 11; i_17 += 2) 
                {
                    /* LoopSeq 2 */
                    for (int i_18 = 3; i_18 < 7; i_18 += 3) 
                    {
                        arr_61 [i_0] = ((/* implicit */short) (~(((/* implicit */int) (signed char)-25))));
                        arr_62 [(unsigned short)5] [i_0] [i_17] [i_18] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((_Bool) arr_27 [i_0] [i_0]))))));
                    }
                    for (unsigned int i_19 = 0; i_19 < 11; i_19 += 4) 
                    {
                        var_34 = ((/* implicit */long long int) min((var_34), (((/* implicit */long long int) (((-(((/* implicit */int) max((arr_33 [i_0] [2U] [i_12] [i_17]), (((/* implicit */short) arr_36 [i_0]))))))) & (((/* implicit */int) arr_50 [i_0 - 1] [i_5 - 1] [i_12] [(short)2] [i_19])))))));
                        var_35 -= ((/* implicit */short) (~(((((/* implicit */unsigned int) (~(((/* implicit */int) var_5))))) & ((~(arr_59 [i_19] [8ULL] [i_17] [i_19])))))));
                        arr_66 [i_0] [i_0] [2LL] [i_17] [i_19] [i_0] = ((/* implicit */signed char) var_0);
                    }
                    arr_67 [i_17] [i_0] [i_0] [i_0] = ((/* implicit */short) (((((~(1075630158055182811LL))) + (9223372036854775807LL))) >> ((((~(((/* implicit */int) ((short) var_4))))) - (6966)))));
                    var_36 = max((((/* implicit */unsigned int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) arr_42 [i_0 - 1] [i_0 - 1] [i_5 + 1]))))), (((unsigned int) arr_42 [i_0 + 1] [i_0 + 2] [i_5 + 1])));
                    arr_68 [i_0 + 2] [2] [i_0] [i_17] = ((/* implicit */short) (~(arr_16 [i_0 + 1] [i_0] [i_12])));
                    arr_69 [i_0] [i_0] = ((/* implicit */unsigned int) ((short) ((unsigned int) (((_Bool)1) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-82))) : (var_0)))));
                }
                for (short i_20 = 0; i_20 < 11; i_20 += 3) 
                {
                    arr_72 [i_0] [i_5] [i_0] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) arr_63 [i_20] [i_20] [i_12] [(unsigned short)2] [i_0]))));
                    var_37 = 726588370479796793ULL;
                }
                for (_Bool i_21 = 0; i_21 < 1; i_21 += 1) 
                {
                    var_38 = ((/* implicit */unsigned long long int) min((var_38), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */int) arr_56 [i_0 + 2] [i_5 - 1] [i_0 + 1] [i_0 + 2])) < (((/* implicit */int) arr_56 [i_0 + 1] [i_5 - 1] [i_0 + 1] [i_0 + 1]))))))))));
                    arr_77 [i_5] [i_0] [i_0] [i_0] = ((/* implicit */short) ((unsigned int) ((signed char) max((((/* implicit */short) var_1)), ((short)1989)))));
                }
                arr_78 [(_Bool)1] [i_0] [6] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_0 [i_0]))));
                var_39 -= ((/* implicit */unsigned int) (((((((~(((/* implicit */int) (unsigned short)26924)))) + (2147483647))) << ((((~(((/* implicit */int) (short)(-32767 - 1))))) - (32767))))) << (((((var_0) & (((/* implicit */long long int) arr_7 [i_12] [i_0] [i_0 + 1] [i_12])))) - (698484890LL)))));
                arr_79 [i_0] [i_12] [(unsigned short)3] [i_0] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((((/* implicit */_Bool) arr_58 [i_0] [i_0])) && (((/* implicit */_Bool) 991362122U)))) ? (((((/* implicit */_Bool) 1135970325U)) ? (arr_60 [i_0] [i_5 + 1] [10ULL] [i_0]) : (((/* implicit */unsigned long long int) arr_4 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0)))))) ? (var_0) : (1075630158055182811LL)));
            }
            var_40 -= ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) ((_Bool) arr_71 [i_5 - 1] [i_5] [i_5 + 1] [i_0 - 1] [i_0 - 1] [i_0 + 1])))) != (((arr_71 [i_5 + 1] [i_0] [(short)10] [i_0 + 1] [i_0 + 1] [i_0]) / (((/* implicit */unsigned int) ((/* implicit */int) var_5)))))));
        }
        for (unsigned long long int i_22 = 1; i_22 < 10; i_22 += 4) 
        {
            var_41 |= ((/* implicit */unsigned short) var_0);
            arr_82 [i_0] [i_0] [i_22] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)-14788))) & (9507743798566040207ULL)));
            var_42 = ((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-2)), ((unsigned short)63043)));
        }
        for (int i_23 = 0; i_23 < 11; i_23 += 2) 
        {
            var_43 = ((/* implicit */short) (~(max((max((((/* implicit */unsigned long long int) 1135970319U)), (var_2))), (((/* implicit */unsigned long long int) ((unsigned int) arr_1 [i_0])))))));
            /* LoopNest 2 */
            for (unsigned int i_24 = 3; i_24 < 8; i_24 += 2) 
            {
                for (signed char i_25 = 0; i_25 < 11; i_25 += 4) 
                {
                    {
                        arr_93 [i_25] [i_0] [i_0] [i_0 + 1] = ((/* implicit */unsigned short) max((((/* implicit */long long int) (((!(((/* implicit */_Bool) (short)-14786)))) ? (((((/* implicit */int) var_9)) ^ (((/* implicit */int) arr_51 [10LL] [7U] [i_23] [i_0] [i_25])))) : (((((/* implicit */int) arr_33 [i_0] [i_23] [i_0] [i_25])) % (((/* implicit */int) arr_51 [(_Bool)1] [i_23] [i_24 + 3] [i_0] [i_25]))))))), (var_3)));
                        arr_94 [(unsigned short)5] [i_0] [i_23] [i_24 - 3] [(signed char)2] = ((/* implicit */int) var_4);
                    }
                } 
            } 
            var_44 ^= (-((-(((unsigned long long int) 4171603463U)))));
        }
        arr_95 [i_0] = ((/* implicit */signed char) max((arr_16 [i_0 + 2] [i_0] [i_0]), (((/* implicit */unsigned long long int) ((unsigned int) arr_70 [i_0] [i_0])))));
    }
    /* vectorizable */
    for (_Bool i_26 = 0; i_26 < 1; i_26 += 1) 
    {
        var_45 = ((((/* implicit */_Bool) ((int) arr_87 [i_26] [i_26] [i_26]))) ? ((~(-1075630158055182812LL))) : (((/* implicit */long long int) ((/* implicit */int) ((_Bool) arr_84 [i_26] [i_26] [i_26])))));
        arr_98 [i_26] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_80 [i_26] [i_26])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_37 [i_26] [i_26] [i_26] [3]))) : (7193325774338255181ULL)));
        var_46 = ((/* implicit */signed char) (~(((/* implicit */int) (_Bool)1))));
    }
    for (_Bool i_27 = 0; i_27 < 1; i_27 += 1) 
    {
        var_47 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) (short)-2262)) ? (((/* implicit */int) (short)14812)) : (((/* implicit */int) (!(((/* implicit */_Bool) 3158996960U)))))));
        arr_101 [i_27] = ((/* implicit */short) ((unsigned long long int) (!(((/* implicit */_Bool) arr_100 [i_27])))));
    }
    var_48 = ((/* implicit */signed char) var_4);
}
