/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 44840
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=44840 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/44840
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
    var_19 = ((/* implicit */_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_16) : (((((/* implicit */_Bool) var_15)) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))), (((/* implicit */long long int) var_4))));
    var_20 = ((/* implicit */_Bool) min((var_20), (((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) -507183765)), ((+(var_15)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (min((12287495521177495267ULL), (((((/* implicit */_Bool) 2055201602U)) ? (9822735334368589321ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))))))));
    /* LoopNest 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        for (unsigned int i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                arr_4 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((/* implicit */unsigned int) (!(((/* implicit */_Bool) (unsigned char)4))))), (((((/* implicit */_Bool) (unsigned char)160)) ? (arr_0 [i_0] [i_1]) : (arr_0 [i_0] [i_1])))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)25630))) : (arr_1 [i_0] [i_1])));
                var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) min(((~(arr_0 [6LL] [i_1]))), (((((/* implicit */_Bool) arr_3 [12U] [12U])) ? (arr_2 [i_0] [i_0] [4U]) : (arr_0 [10LL] [10LL]))))))));
                var_22 += ((/* implicit */signed char) (_Bool)1);
                /* LoopNest 2 */
                for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
                {
                    for (long long int i_3 = 0; i_3 < 16; i_3 += 3) 
                    {
                        {
                            var_23 ^= ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!((_Bool)1)))), ((((!(((/* implicit */_Bool) arr_8 [i_0] [(short)10])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : ((((_Bool)1) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) arr_2 [i_0] [i_1] [(signed char)12]))))))));
                            var_24 |= ((/* implicit */unsigned int) arr_5 [i_3]);
                            var_25 = ((/* implicit */short) (((_Bool)1) ? (((((/* implicit */_Bool) 3072LL)) ? (((arr_7 [i_0] [i_3]) ? (arr_2 [i_0] [i_2] [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_0] [i_1]))))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_0] [(unsigned char)15])) ? (((/* implicit */int) arr_7 [i_0] [i_3])) : (arr_3 [i_0] [i_1])))))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0] [i_1] [i_1] [i_3])))));
                            arr_9 [i_3] [(signed char)5] [i_0] [(unsigned short)15] [(signed char)3] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0])) ? (536838144U) : (arr_0 [i_0] [i_0])))) ? (min((((/* implicit */unsigned long long int) arr_0 [i_0] [i_1])), (arr_5 [i_0]))) : ((~(arr_5 [i_2])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)213)) ? (((/* implicit */int) (_Bool)1)) : (((((/* implicit */_Bool) (signed char)-126)) ? (((/* implicit */int) (unsigned short)7726)) : (((/* implicit */int) (_Bool)1))))))) : (arr_1 [i_3] [(_Bool)1]));
                        }
                    } 
                } 
            }
        } 
    } 
    /* LoopSeq 3 */
    for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
    {
        arr_12 [i_4] [i_4] = ((/* implicit */long long int) min(((~(arr_1 [i_4] [i_4]))), (((((/* implicit */_Bool) -501065433989721974LL)) ? (14U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)39)))))));
        /* LoopNest 2 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            for (unsigned char i_6 = 4; i_6 < 10; i_6 += 4) 
            {
                {
                    var_26 *= ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_4] [i_6 - 4])) ? (((/* implicit */int) arr_8 [i_4] [i_6])) : (arr_3 [i_6] [i_6])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [10ULL] [i_5] [i_6] [i_6])))))) : (min((281474976710655ULL), (((/* implicit */unsigned long long int) arr_17 [i_4]))))))));
                    arr_18 [i_5] [i_6 + 2] = ((/* implicit */short) arr_6 [i_4] [0ULL] [i_6] [i_6]);
                    arr_19 [i_4] [i_4] [i_5] [(_Bool)1] = ((/* implicit */long long int) (~(((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_14 [i_4] [i_5 + 1] [i_6]))))), ((unsigned char)142))))));
                    var_27 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) max((((/* implicit */unsigned int) (_Bool)1)), (arr_2 [i_4] [i_5 + 1] [i_6])))), (((((/* implicit */_Bool) (signed char)-93)) ? (-3202296367543996081LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)206)))))))) ? (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_6] [i_5 + 1])))))) : (arr_17 [i_6])));
                }
            } 
        } 
        var_28 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_15 [i_4] [i_4] [i_4]), (arr_15 [i_4] [i_4] [i_4])))) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) arr_15 [i_4] [i_4] [i_4]))));
        var_29 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((arr_13 [i_4]) ? (((/* implicit */int) arr_16 [i_4] [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_6 [i_4] [i_4] [(unsigned char)9] [(unsigned char)9])))))))) ? (((((/* implicit */_Bool) arr_17 [i_4])) ? (arr_17 [i_4]) : (arr_17 [i_4]))) : (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_2 [(_Bool)1] [i_4] [(_Bool)1])) ? (((/* implicit */int) arr_11 [i_4])) : (arr_15 [i_4] [i_4] [i_4]))), (arr_3 [8ULL] [i_4]))))));
    }
    for (signed char i_7 = 2; i_7 < 21; i_7 += 4) 
    {
        arr_22 [i_7 + 2] = ((/* implicit */signed char) ((arr_20 [i_7] [(_Bool)1]) ? (((((/* implicit */_Bool) arr_21 [(short)14])) ? (((/* implicit */int) min(((signed char)52), (((/* implicit */signed char) arr_20 [i_7] [i_7]))))) : (((/* implicit */int) arr_21 [i_7 + 2])))) : (((/* implicit */int) arr_21 [i_7]))));
        var_30 = ((/* implicit */long long int) (((_Bool)1) ? (((((/* implicit */_Bool) ((arr_20 [i_7] [(_Bool)1]) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) (short)18358))))) ? ((((_Bool)1) ? (((/* implicit */int) arr_21 [i_7])) : (((/* implicit */int) arr_21 [i_7])))) : (((((/* implicit */_Bool) (unsigned char)219)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_21 [i_7])))))) : (((/* implicit */int) arr_21 [i_7 + 1]))));
        /* LoopNest 2 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            for (short i_9 = 0; i_9 < 24; i_9 += 1) 
            {
                {
                    var_31 = ((/* implicit */_Bool) max((var_31), (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-70)) ? (9222246136947933184ULL) : (((/* implicit */unsigned long long int) 1555145404)))))));
                    /* LoopNest 2 */
                    for (signed char i_10 = 3; i_10 < 20; i_10 += 4) 
                    {
                        for (short i_11 = 0; i_11 < 24; i_11 += 1) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_23 [i_10 + 3])) ? (((/* implicit */int) arr_23 [i_11])) : (((((/* implicit */_Bool) arr_23 [i_8])) ? (((/* implicit */int) arr_23 [i_8])) : (((/* implicit */int) arr_23 [i_11]))))));
                                arr_32 [i_7] [i_8] |= ((/* implicit */_Bool) min((7572845680129236534ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned short)65535)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_31 [i_7] [i_8] [i_7 - 2] [i_7] [i_11] [i_7]))) : (max((4167692705U), (((/* implicit */unsigned int) (unsigned char)49)))))))));
                                arr_33 [i_7] [i_7] [i_9] [i_9] = ((/* implicit */unsigned short) arr_27 [i_9] [i_10 - 3] [i_9]);
                                var_33 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) arr_28 [i_7 + 1] [i_7 + 2] [i_10 - 2] [i_10 + 3] [i_11])), (((((/* implicit */_Bool) min((((/* implicit */short) arr_21 [i_8])), (arr_27 [i_7] [i_8] [i_9])))) ? (((((/* implicit */_Bool) arr_27 [i_7] [i_7] [i_9])) ? (9762054745499034848ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-8))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)19325)))))));
                                arr_34 [i_11] [i_7] [i_9] [i_8] [i_7] = (_Bool)1;
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (short i_12 = 2; i_12 < 23; i_12 += 3) 
                    {
                        for (short i_13 = 1; i_13 < 22; i_13 += 1) 
                        {
                            {
                                arr_40 [i_7] [i_8] [12LL] [i_9] [i_13] = ((/* implicit */unsigned short) (~((((_Bool)1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) : (arr_36 [i_7 + 1] [i_8] [i_9] [i_12] [i_13])))));
                                var_34 = ((/* implicit */unsigned int) arr_25 [i_7] [i_7] [i_7 + 2]);
                                var_35 = ((((/* implicit */_Bool) arr_37 [i_13 + 1] [i_13 + 2] [i_12 - 2] [i_12 + 1] [i_7 - 2] [i_7] [i_7 + 3])) ? ((((_Bool)1) ? (arr_37 [i_13] [i_13 + 2] [i_12 + 1] [i_12 - 1] [i_7 + 2] [i_7] [i_7]) : (arr_37 [i_13 + 2] [i_13 - 1] [i_12 - 1] [i_12 - 1] [i_7 + 2] [i_7] [(unsigned short)3]))) : (min((arr_37 [i_13] [i_13 + 2] [i_12 + 1] [i_12 - 2] [i_7 - 1] [i_7 - 2] [i_7]), (arr_37 [i_13] [i_13 + 2] [i_12 + 1] [i_12 - 1] [i_7 + 3] [i_7] [i_7]))));
                                var_36 = ((/* implicit */long long int) arr_26 [i_9] [i_8] [i_13]);
                                arr_41 [i_7 + 2] [i_8] [i_9] [i_7 + 2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((~(((/* implicit */int) arr_20 [i_7] [i_8]))))))) ? ((~(((((/* implicit */_Bool) arr_23 [i_8])) ? (4503599627370495ULL) : (((/* implicit */unsigned long long int) arr_37 [i_7] [i_7] [i_8] [i_9] [i_12] [i_13 - 1] [i_8])))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-19870)))));
                            }
                        } 
                    } 
                    var_37 = ((/* implicit */_Bool) ((((/* implicit */_Bool) min(((+(((/* implicit */int) arr_20 [i_8] [(short)7])))), (((/* implicit */int) (!((_Bool)1))))))) ? (((/* implicit */int) arr_38 [i_9] [i_9] [i_8] [i_8] [i_9] [i_7 + 2])) : (((/* implicit */int) arr_23 [i_8]))));
                }
            } 
        } 
        /* LoopNest 3 */
        for (_Bool i_14 = 0; i_14 < 0; i_14 += 1) 
        {
            for (unsigned long long int i_15 = 0; i_15 < 24; i_15 += 4) 
            {
                for (unsigned long long int i_16 = 0; i_16 < 24; i_16 += 1) 
                {
                    {
                        var_38 = ((((/* implicit */_Bool) (+((((_Bool)1) ? (((/* implicit */int) arr_43 [i_7] [i_15])) : (arr_45 [(short)20] [i_15] [i_14 + 1] [i_7])))))) ? (((/* implicit */int) (signed char)-1)) : (((/* implicit */int) (_Bool)1)));
                        var_39 = ((/* implicit */signed char) (_Bool)1);
                    }
                } 
            } 
        } 
    }
    for (signed char i_17 = 2; i_17 < 18; i_17 += 4) 
    {
        arr_52 [14LL] [14LL] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-1)) ? (((/* implicit */int) arr_39 [i_17] [i_17] [i_17])) : (((/* implicit */int) (!((!(((/* implicit */_Bool) 3277377259U)))))))));
        var_40 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) 281474976710655ULL)) ? (min((4294967295U), (((/* implicit */unsigned int) (signed char)13)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_35 [i_17])) ? (((/* implicit */int) max((arr_28 [i_17] [i_17 - 2] [i_17] [i_17 + 3] [i_17 - 2]), (((/* implicit */unsigned short) arr_51 [i_17 + 3]))))) : (((/* implicit */int) arr_21 [i_17])))))));
        /* LoopNest 2 */
        for (unsigned long long int i_18 = 0; i_18 < 21; i_18 += 1) 
        {
            for (unsigned long long int i_19 = 3; i_19 < 18; i_19 += 2) 
            {
                {
                    var_41 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) 519912534)) ? (((((/* implicit */_Bool) (+(arr_45 [i_19 + 2] [i_18] [i_17 + 1] [i_17])))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-72))) : (arr_48 [i_17] [i_17 + 1]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) 0ULL)) ? (((((/* implicit */_Bool) arr_39 [i_17 + 2] [i_17] [i_19])) ? (((/* implicit */int) arr_42 [i_17])) : (((/* implicit */int) arr_25 [(unsigned short)22] [i_18] [(unsigned short)22])))) : (((/* implicit */int) (_Bool)1)))))));
                    arr_57 [i_17] [i_18] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_31 [i_19 + 3] [(_Bool)0] [i_17] [i_17] [i_17 + 2] [i_17 + 2]), (arr_31 [i_17] [i_18] [i_19 + 1] [i_17] [i_18] [i_19])))) ? ((+(min((((/* implicit */long long int) 2691710805U)), (-5058956144244952549LL))))) : ((+(7680382687548562530LL)))));
                }
            } 
        } 
        var_42 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_28 [i_17 + 1] [i_17] [i_17] [i_17] [i_17])) ? (((arr_26 [i_17] [12ULL] [i_17 - 2]) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_55 [i_17] [i_17 + 1] [i_17]))))) : (arr_44 [i_17]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 3909821072138693460ULL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_42 [i_17]))) : (arr_36 [i_17] [(short)15] [i_17] [0U] [i_17])))) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)128)))))));
        var_43 = ((/* implicit */long long int) (-(((/* implicit */int) min((arr_50 [i_17 + 3] [i_17 + 3]), (((/* implicit */unsigned short) arr_25 [i_17 - 2] [i_17] [i_17 + 3])))))));
    }
}
