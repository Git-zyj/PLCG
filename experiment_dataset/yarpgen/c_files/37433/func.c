/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37433
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37433 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37433
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
    for (int i_0 = 1; i_0 < 18; i_0 += 2) 
    {
        /* LoopSeq 3 */
        for (long long int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            var_15 = ((/* implicit */long long int) min((var_15), (((/* implicit */long long int) ((((((/* implicit */_Bool) -2076774602)) ? (((/* implicit */int) (short)7378)) : (-675562000))) == (((/* implicit */int) var_14)))))));
            /* LoopSeq 2 */
            for (long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                var_16 = ((/* implicit */short) ((((/* implicit */_Bool) arr_6 [(short)18] [9] [i_2])) ? (((/* implicit */int) arr_6 [17] [i_1] [17])) : (((/* implicit */int) arr_6 [i_0 + 2] [i_0 + 2] [(short)11]))));
                var_17 = ((/* implicit */long long int) 1595706196);
            }
            for (short i_3 = 2; i_3 < 20; i_3 += 2) 
            {
                /* LoopSeq 3 */
                for (int i_4 = 0; i_4 < 21; i_4 += 2) 
                {
                    arr_13 [1] [15] [1] [i_4] [5] = ((/* implicit */short) (((!(((/* implicit */_Bool) 0LL)))) ? (((/* implicit */int) arr_1 [(short)18])) : (((/* implicit */int) ((short) 32767)))));
                    var_18 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (-7) : (-2071640718)))) ? (((((/* implicit */_Bool) (short)-1)) ? (arr_2 [14LL] [20]) : (((/* implicit */long long int) var_0)))) : (((/* implicit */long long int) ((/* implicit */int) var_9)))));
                    var_19 += ((/* implicit */long long int) ((((/* implicit */int) arr_6 [(short)17] [19] [i_3 + 1])) & (((/* implicit */int) arr_6 [i_3] [(short)3] [i_3 + 1]))));
                    var_20 = ((/* implicit */int) max((var_20), (((/* implicit */int) ((((/* implicit */long long int) arr_0 [i_0 - 1])) | (((((/* implicit */_Bool) 511)) ? (-3425249120402651375LL) : (((/* implicit */long long int) -2127426992)))))))));
                }
                for (int i_5 = 0; i_5 < 21; i_5 += 2) 
                {
                    var_21 = ((/* implicit */int) min((var_21), ((+(((/* implicit */int) arr_12 [i_3 - 1] [i_3 - 1] [i_3 + 1] [i_3 - 1]))))));
                    arr_16 [1] [1] [1] [i_5] = ((/* implicit */long long int) (-(((/* implicit */int) var_3))));
                    var_22 = ((/* implicit */int) (+(arr_10 [i_0 + 1] [i_1] [i_1] [19LL])));
                }
                for (long long int i_6 = 0; i_6 < 21; i_6 += 2) 
                {
                    arr_20 [i_0] [i_0] = ((/* implicit */long long int) ((((/* implicit */int) arr_18 [i_0 + 3] [i_1] [i_3 - 2] [i_6] [i_6])) + (((/* implicit */int) arr_18 [i_1] [14] [i_6] [i_1] [i_1]))));
                    var_23 = ((((/* implicit */_Bool) ((int) (short)14834))) ? (((((/* implicit */_Bool) (short)-25209)) ? (((/* implicit */long long int) arr_11 [i_0] [(short)9] [i_3 + 1] [(short)10])) : (var_13))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_1)) ? (var_4) : (-511)))));
                    var_24 = ((/* implicit */short) max((var_24), (((/* implicit */short) (+(((long long int) arr_14 [i_3] [i_1] [11LL] [i_0 + 2])))))));
                    arr_21 [i_0] = (+((~(var_2))));
                    arr_22 [15LL] [15LL] [i_0] [i_0] = ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_15 [i_0] [(short)18])) || (((/* implicit */_Bool) arr_0 [i_0 + 3])))))) & (5LL));
                }
                var_25 = ((/* implicit */int) ((((/* implicit */_Bool) ((long long int) var_1))) ? (((((/* implicit */_Bool) 134217728)) ? (((/* implicit */long long int) arr_8 [i_3 - 1])) : (var_13))) : (((/* implicit */long long int) 184179847))));
                arr_23 [(short)11] [19LL] [(short)3] = -298761797;
                /* LoopNest 2 */
                for (long long int i_7 = 4; i_7 < 20; i_7 += 2) 
                {
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 2) 
                    {
                        {
                            var_26 = ((/* implicit */int) (~(arr_26 [i_0 + 1] [i_3 - 2] [(short)0] [7LL])));
                            var_27 ^= ((/* implicit */long long int) arr_11 [8] [17] [20] [i_7 + 1]);
                        }
                    } 
                } 
            }
            var_28 = -511;
        }
        for (short i_9 = 0; i_9 < 21; i_9 += 2) 
        {
            arr_30 [i_0] [5] = ((/* implicit */short) -576217119);
            /* LoopSeq 1 */
            for (int i_10 = 3; i_10 < 19; i_10 += 2) 
            {
                var_29 = ((/* implicit */short) ((int) arr_17 [13LL] [13LL] [14] [14] [i_10 - 2] [13]));
                var_30 |= arr_3 [i_0] [2LL];
            }
            /* LoopNest 3 */
            for (int i_11 = 0; i_11 < 21; i_11 += 2) 
            {
                for (long long int i_12 = 1; i_12 < 19; i_12 += 2) 
                {
                    for (int i_13 = 0; i_13 < 21; i_13 += 2) 
                    {
                        {
                            var_31 = (short)15273;
                            arr_43 [i_0 + 2] [9LL] [9LL] [10LL] [i_12] = (((+(159658220))) + (((((/* implicit */_Bool) arr_42 [i_9] [17LL] [i_9] [i_9] [10] [i_9] [i_0])) ? (-2147483647) : (820366300))));
                            arr_44 [2LL] [i_11] [i_11] [i_11] [i_13] |= ((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (short)1725)) : (arr_40 [i_9] [i_11] [i_9] [i_9] [i_11])));
                        }
                    } 
                } 
            } 
        }
        for (int i_14 = 0; i_14 < 21; i_14 += 2) 
        {
            arr_48 [i_0] = ((/* implicit */int) ((((-1128075921) >= (0))) ? (arr_7 [19] [i_0 + 3] [i_0 - 1] [i_0 + 2]) : (((/* implicit */long long int) 868676607))));
            var_32 = ((arr_42 [i_0 + 2] [i_0 + 3] [i_0 + 1] [(short)13] [i_0 + 3] [i_0 + 1] [i_14]) / (arr_42 [i_0] [i_0] [i_0] [16] [7] [i_14] [17]));
            arr_49 [1] = (~(var_4));
        }
        var_33 = ((/* implicit */short) min((var_33), (((/* implicit */short) (-(arr_42 [i_0 + 3] [i_0 + 3] [i_0 + 3] [i_0 + 2] [12] [i_0 + 3] [(short)15]))))));
    }
    for (int i_15 = 2; i_15 < 7; i_15 += 2) 
    {
        var_34 = ((int) ((((/* implicit */_Bool) ((int) arr_34 [i_15 + 3] [i_15 - 2] [i_15 + 3]))) ? (((/* implicit */int) ((short) 8611516079609707005LL))) : (min((-2048366025), (arr_39 [i_15 + 2] [i_15 - 1] [i_15 + 2] [i_15 - 1] [14])))));
        var_35 = ((/* implicit */long long int) min((var_35), (((((/* implicit */_Bool) max((1855990799), (((/* implicit */int) (short)30824))))) ? (((((/* implicit */_Bool) 0)) ? (arr_50 [i_15]) : (((/* implicit */long long int) -1137228296)))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (var_1) : (-2147483636))))))));
        var_36 ^= (~(arr_38 [i_15] [i_15] [20LL]));
    }
    var_37 = ((/* implicit */int) max((var_37), (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) 2147483647))) ? (max((-1901493494988507399LL), ((-9223372036854775807LL - 1LL)))) : (((/* implicit */long long int) ((int) var_13)))))) ? (((((/* implicit */_Bool) ((((/* implicit */int) (short)8697)) | (-269958362)))) ? (min((var_6), (((/* implicit */long long int) var_4)))) : (((-29LL) | (((/* implicit */long long int) ((/* implicit */int) var_3))))))) : (((/* implicit */long long int) ((((/* implicit */int) (short)26797)) >> (((((/* implicit */int) ((short) (short)21528))) - (21511)))))))))));
    /* LoopNest 2 */
    for (long long int i_16 = 2; i_16 < 10; i_16 += 2) 
    {
        for (int i_17 = 0; i_17 < 12; i_17 += 2) 
        {
            {
                /* LoopSeq 1 */
                /* vectorizable */
                for (long long int i_18 = 3; i_18 < 11; i_18 += 2) 
                {
                    var_38 = ((/* implicit */short) ((((/* implicit */_Bool) arr_34 [i_16] [i_16 + 1] [i_16 + 1])) ? (((/* implicit */int) arr_34 [i_16] [i_16 - 2] [1LL])) : (arr_0 [(short)14])));
                    var_39 = ((/* implicit */int) min((var_39), ((+(((620583846) / (255)))))));
                }
                /* LoopSeq 1 */
                /* vectorizable */
                for (int i_19 = 0; i_19 < 12; i_19 += 2) 
                {
                    var_40 = ((int) (short)-26001);
                    var_41 = ((/* implicit */int) max((var_41), (((/* implicit */int) ((arr_4 [i_16 + 1]) != (((/* implicit */int) (short)-17172)))))));
                }
                var_42 = ((/* implicit */int) -29LL);
            }
        } 
    } 
}
