/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 197084
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=197084 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/197084
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
    for (unsigned int i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) ((short) var_10)))))) & (min((min((((/* implicit */unsigned long long int) (unsigned char)63)), (10716282989274310463ULL))), (((/* implicit */unsigned long long int) min(((signed char)-64), ((signed char)(-127 - 1)))))))));
        arr_2 [18ULL] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_7))));
    }
    for (unsigned char i_1 = 0; i_1 < 20; i_1 += 1) 
    {
        arr_6 [i_1] = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_3 [i_1] [i_1])))) || (((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (((/* implicit */int) arr_1 [i_1] [i_1])) : (((/* implicit */int) var_4)))))))));
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) min((((((/* implicit */int) arr_0 [i_1])) ^ (var_3))), (((((/* implicit */int) arr_0 [i_1])) ^ (((/* implicit */int) arr_0 [i_1])))))))));
        arr_7 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) && (((/* implicit */_Bool) arr_5 [i_1])))))) - (((((/* implicit */_Bool) arr_4 [(signed char)10] [i_1])) ? (var_8) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))))) ? (((/* implicit */int) ((unsigned short) max((var_5), (((/* implicit */unsigned long long int) arr_4 [i_1] [i_1])))))) : (((((((/* implicit */int) arr_0 [i_1])) + (2147483647))) >> (((min((((/* implicit */int) (signed char)-64)), (var_10))) + (347033831)))))));
        var_19 ^= ((/* implicit */short) -2147483633);
    }
    for (short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_20 = ((/* implicit */_Bool) var_10);
        arr_10 [i_2] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (short)17463))));
        var_21 = ((((((/* implicit */_Bool) arr_9 [i_2])) && (((/* implicit */_Bool) arr_8 [i_2])))) && (((/* implicit */_Bool) (-(((/* implicit */int) arr_9 [i_2]))))));
        arr_11 [2] &= ((((/* implicit */_Bool) ((unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_0)) : (((/* implicit */int) var_0)))))) ? (max((max((1610612736), (var_15))), (((((/* implicit */int) arr_3 [i_2] [i_2])) + (((/* implicit */int) arr_4 [i_2] [i_2])))))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_15) : (((/* implicit */int) var_4)))))))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
    {
        arr_14 [i_3] = ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_3] [i_3])) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) var_13)));
        var_22 = ((/* implicit */signed char) ((unsigned short) ((((/* implicit */int) (signed char)63)) & (((/* implicit */int) (short)29378)))));
    }
    for (long long int i_4 = 0; i_4 < 21; i_4 += 3) 
    {
        arr_19 [i_4] = ((/* implicit */_Bool) (+(((((((/* implicit */int) arr_15 [i_4])) & (var_10))) & ((~(((/* implicit */int) (unsigned short)32768))))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned char i_5 = 0; i_5 < 21; i_5 += 1) /* same iter space */
        {
            var_23 = ((/* implicit */unsigned int) (+(arr_16 [i_4])));
            var_24 = ((/* implicit */unsigned short) max((var_24), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_20 [i_5])) ? (((/* implicit */int) arr_20 [i_5])) : (1844150939))))));
            /* LoopNest 2 */
            for (signed char i_6 = 0; i_6 < 21; i_6 += 1) 
            {
                for (unsigned short i_7 = 0; i_7 < 21; i_7 += 1) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned int i_8 = 0; i_8 < 21; i_8 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned short) ((signed char) (!(((/* implicit */_Bool) var_4)))));
                            var_26 = ((/* implicit */long long int) max((var_26), (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_8])))))));
                        }
                        /* LoopSeq 1 */
                        for (signed char i_9 = 4; i_9 < 20; i_9 += 2) 
                        {
                            var_27 = ((/* implicit */short) max((var_27), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_15 [i_4])))) ? (((/* implicit */int) arr_28 [i_9 + 1] [i_9 - 4] [i_9 + 1] [i_9 - 4] [i_9 - 4])) : ((-(((/* implicit */int) var_13)))))))));
                            arr_33 [i_4] [i_5] [(_Bool)1] [i_7] [(_Bool)1] = ((((/* implicit */_Bool) arr_29 [i_4] [i_5] [i_6] [i_9] [i_9 - 3])) ? ((~(((/* implicit */int) (unsigned short)32776)))) : ((~(((/* implicit */int) arr_15 [i_4])))));
                            arr_34 [i_4] [i_4] [i_4] [i_7] [(short)6] [(short)6] = ((/* implicit */long long int) ((arr_32 [i_4] [i_5] [(unsigned char)12] [i_4] [i_9 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((~(31744U)))));
                            var_28 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)256)) ? (((((/* implicit */int) var_2)) - (((/* implicit */int) (_Bool)0)))) : (((/* implicit */int) var_0))));
                        }
                        /* LoopSeq 1 */
                        for (int i_10 = 0; i_10 < 21; i_10 += 4) 
                        {
                            arr_38 [i_4] [i_4] [i_4] [i_4] [i_4] = (~((-(((/* implicit */int) var_2)))));
                            arr_39 [8] [i_6] = ((/* implicit */unsigned char) (-(((/* implicit */int) arr_35 [i_4] [i_5] [2] [i_7] [18]))));
                            var_29 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? ((~(arr_25 [(unsigned short)19]))) : (((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) (short)-32765))))));
                        }
                    }
                } 
            } 
            arr_40 [i_5] [i_4] = ((/* implicit */int) (_Bool)1);
        }
        for (unsigned char i_11 = 0; i_11 < 21; i_11 += 1) /* same iter space */
        {
            /* LoopSeq 1 */
            for (short i_12 = 0; i_12 < 21; i_12 += 1) 
            {
                var_30 += ((/* implicit */unsigned long long int) ((((arr_18 [12ULL]) + (2147483647))) >> (((((/* implicit */int) var_7)) + (117)))));
                arr_45 [i_4] [2LL] = ((/* implicit */short) -416570356);
                var_31 = var_7;
            }
            var_32 = ((/* implicit */unsigned short) var_14);
            /* LoopSeq 2 */
            for (short i_13 = 0; i_13 < 21; i_13 += 4) 
            {
                var_33 = ((/* implicit */unsigned long long int) max((min((((/* implicit */long long int) ((unsigned short) var_2))), (min((((/* implicit */long long int) var_4)), (arr_48 [(short)2] [19] [i_13] [i_13]))))), (((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1)))))));
                var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned long long int) (!(((/* implicit */_Bool) arr_18 [i_4])))))) && (((/* implicit */_Bool) min((((/* implicit */short) (signed char)-1)), ((short)(-32767 - 1)))))));
            }
            for (short i_14 = 0; i_14 < 21; i_14 += 1) 
            {
                var_35 -= ((/* implicit */unsigned int) min((min((((/* implicit */unsigned long long int) ((var_0) ? (var_10) : (((/* implicit */int) arr_28 [i_4] [i_4] [i_4] [i_4] [i_4]))))), (((((/* implicit */_Bool) (signed char)72)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_43 [2] [i_11] [i_11] [2])) ? (arr_43 [i_14] [i_11] [i_11] [i_4]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)16))))))));
                var_36 = ((/* implicit */short) ((signed char) ((((/* implicit */int) arr_49 [i_4] [i_4])) + (var_3))));
            }
            arr_52 [(_Bool)1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((arr_37 [i_11] [i_11] [i_11] [i_11] [i_11]) & (max((((/* implicit */unsigned int) var_1)), (arr_37 [i_4] [i_4] [i_4] [(unsigned char)20] [i_4])))))) ? (((((-1311276718) != (((/* implicit */int) (short)3174)))) ? (((/* implicit */int) min(((signed char)55), (var_4)))) : (((/* implicit */int) ((unsigned char) arr_48 [i_4] [i_4] [i_4] [(unsigned short)4]))))) : ((-(((/* implicit */int) min((((/* implicit */unsigned short) (short)32)), ((unsigned short)32768))))))));
            arr_53 [(unsigned char)3] &= ((/* implicit */int) min(((+(((unsigned long long int) arr_35 [(signed char)9] [i_11] [i_11] [i_11] [i_11])))), (min((((/* implicit */unsigned long long int) max((((/* implicit */long long int) (short)9433)), (arr_48 [i_4] [i_11] [(short)20] [i_4])))), (((((/* implicit */_Bool) (signed char)24)) ? (arr_21 [3] [3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_29 [i_4] [i_11] [i_4] [(unsigned short)2] [i_4])))))))));
        }
        var_37 = ((/* implicit */int) min((((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4] [i_4])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (arr_43 [i_4] [i_4] [i_4] [i_4]))), (((((/* implicit */_Bool) arr_43 [i_4] [i_4] [i_4] [i_4])) ? (arr_43 [11U] [7LL] [i_4] [i_4]) : (arr_43 [i_4] [i_4] [i_4] [i_4])))));
        arr_54 [(short)15] = arr_46 [i_4] [i_4] [i_4];
    }
}
