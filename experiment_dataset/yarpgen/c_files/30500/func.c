/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30500
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30500 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30500
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
    var_10 ^= ((/* implicit */short) (+(var_9)));
    var_11 = ((/* implicit */signed char) min((var_1), (((/* implicit */unsigned long long int) var_5))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            for (signed char i_2 = 2; i_2 < 7; i_2 += 1) 
            {
                {
                    arr_8 [i_1] [i_1] [i_2] = ((/* implicit */unsigned long long int) (short)3072);
                    /* LoopSeq 3 */
                    for (short i_3 = 1; i_3 < 9; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_1] [5] [(short)4] [i_1] [i_0] = ((/* implicit */signed char) ((((/* implicit */int) max(((signed char)-34), ((signed char)-34)))) - (((((/* implicit */_Bool) min((9463937742471527817ULL), (((/* implicit */unsigned long long int) (short)-32764))))) ? (max((-4194304), (((/* implicit */int) (signed char)116)))) : (arr_11 [i_0] [i_1 - 1] [i_2 - 2] [i_3 - 1])))));
                        var_12 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) (short)-9300)) ? (((/* implicit */int) (signed char)-51)) : (((/* implicit */int) arr_10 [i_1])))), (((((/* implicit */int) (signed char)-119)) + (((/* implicit */int) (signed char)-51))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_3 - 1]))))) : (min((((/* implicit */int) (signed char)-51)), ((~(1412640853)))))));
                    }
                    /* vectorizable */
                    for (int i_4 = 0; i_4 < 10; i_4 += 3) /* same iter space */
                    {
                        var_13 -= ((/* implicit */signed char) ((((/* implicit */int) (signed char)20)) << (((/* implicit */int) (signed char)20))));
                        var_14 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_1 [i_2 + 2] [i_1 + 1]))));
                        var_15 = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */int) (signed char)127)) >= (1512785026))))));
                        arr_15 [i_1] [i_1] = ((/* implicit */short) (signed char)127);
                    }
                    /* vectorizable */
                    for (int i_5 = 0; i_5 < 10; i_5 += 3) /* same iter space */
                    {
                        arr_20 [i_1] = (+((+(((/* implicit */int) (signed char)31)))));
                        arr_21 [(signed char)4] [i_1] [i_1] [i_5] [i_5] [i_5] = ((/* implicit */short) 9463937742471527808ULL);
                        arr_22 [i_1] [i_1 + 1] = ((/* implicit */unsigned long long int) ((((((/* implicit */int) (short)16095)) / (-1073741824))) - (((/* implicit */int) (((-2147483647 - 1)) <= (((/* implicit */int) (signed char)15)))))));
                        var_16 = ((/* implicit */signed char) ((((/* implicit */int) (signed char)15)) * (((/* implicit */int) (short)4358))));
                    }
                    /* LoopSeq 2 */
                    for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                    {
                        var_17 = ((/* implicit */int) (!(((/* implicit */_Bool) 8982806331238023798ULL))));
                        arr_25 [i_0] [i_0] [i_1] [i_0] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) 9683992304225687527ULL))))) <= (((/* implicit */int) (signed char)5))))) + (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (short)-9300)) == (((/* implicit */int) (signed char)-126)))))) != (arr_5 [i_1] [i_1 + 1] [i_1]))))));
                    }
                    for (int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        arr_30 [(short)9] [i_1] [i_2] [i_2] [2] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 9463937742471527790ULL)) ? (arr_2 [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)14)))))));
                        arr_31 [i_0] [i_1] [i_2] [i_2 + 2] = ((/* implicit */short) ((((/* implicit */int) min((min((((/* implicit */short) (signed char)93)), ((short)9299))), ((short)-1)))) | (((/* implicit */int) ((((/* implicit */int) min((((/* implicit */short) (signed char)-104)), ((short)9284)))) == (((/* implicit */int) (short)5408)))))));
                    }
                    arr_32 [i_1] [i_1 - 1] [i_2 + 1] = ((/* implicit */int) min((max((arr_28 [(signed char)5] [i_1]), (((/* implicit */unsigned long long int) ((arr_13 [i_1] [i_1]) != (((/* implicit */int) (short)5403))))))), (((/* implicit */unsigned long long int) -302440383))));
                    /* LoopSeq 4 */
                    for (unsigned long long int i_8 = 0; i_8 < 10; i_8 += 4) /* same iter space */
                    {
                        var_18 ^= ((/* implicit */short) ((((/* implicit */_Bool) (((~(16124538466546802954ULL))) * (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_28 [i_0] [i_0]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (short)21652)))))))))) ? (1113843676494549470ULL) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_10 [i_1 - 1])))))));
                        arr_35 [i_0] [i_1] [(short)3] = ((/* implicit */short) min((((/* implicit */int) (!(((/* implicit */_Bool) max(((short)21665), (((/* implicit */short) (signed char)-16)))))))), (arr_6 [i_8] [i_1])));
                        var_19 = (((~((+(((/* implicit */int) (signed char)15)))))) + (max(((~(((/* implicit */int) (short)-3173)))), (((/* implicit */int) (signed char)83)))));
                        var_20 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_8] [i_2] [i_0]))) & (arr_28 [i_0] [i_8])))) ? (((/* implicit */int) max(((short)-9303), ((short)-9309)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 9019236793592768922ULL))))))), (((/* implicit */int) (!(((/* implicit */_Bool) (short)-9298)))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_9 = 0; i_9 < 10; i_9 += 4) /* same iter space */
                    {
                        var_21 = ((/* implicit */short) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9] [i_2] [i_0]))) == (4185457705641725536ULL))) ? ((+(arr_6 [i_2] [i_9]))) : (((((/* implicit */int) (signed char)1)) >> (((18446744073709551615ULL) - (18446744073709551605ULL)))))));
                        arr_38 [i_0] [i_0] [i_1] [i_0] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) 14261286368067826079ULL)) ? (((/* implicit */int) (short)-3148)) : (((/* implicit */int) (short)9309))))));
                        arr_39 [i_0] [i_0] [i_0] [i_0] [i_1] = ((/* implicit */signed char) (~(((/* implicit */int) (short)-9308))));
                        /* LoopSeq 1 */
                        for (int i_10 = 1; i_10 < 8; i_10 += 3) 
                        {
                            arr_42 [i_0] [i_1] [i_1] [i_9] [i_10] [i_10] = ((/* implicit */int) ((((9427507280116782714ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)-9294))))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_10 + 2] [i_1 + 1])))));
                            arr_43 [i_0] [i_0] [i_0] [i_0] [i_0] [i_1] [7] = ((/* implicit */signed char) 4185457705641725536ULL);
                            var_22 *= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) (short)3042))) % (arr_7 [i_2 - 2] [i_1] [i_2]))) == (((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)10)) % (((/* implicit */int) arr_17 [i_0] [i_0] [i_0] [i_0])))))));
                            arr_44 [i_1] [i_1] [i_1 + 1] [i_1 - 1] = ((/* implicit */signed char) ((((/* implicit */int) arr_10 [i_10 - 1])) | (((/* implicit */int) (short)21652))));
                        }
                    }
                    for (unsigned long long int i_11 = 0; i_11 < 10; i_11 += 4) /* same iter space */
                    {
                        var_23 -= ((/* implicit */unsigned long long int) ((((/* implicit */int) ((((/* implicit */int) (signed char)14)) == (((/* implicit */int) (signed char)-123))))) - (((/* implicit */int) (signed char)-122))));
                        arr_47 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) 9427507280116782714ULL)) ? (((/* implicit */int) min(((signed char)(-127 - 1)), ((signed char)-70)))) : (((/* implicit */int) (!(((/* implicit */_Bool) 933316495))))))) > (((/* implicit */int) (signed char)97))));
                        arr_48 [i_0] [i_1] [i_2] [i_11] = ((/* implicit */signed char) ((((min((6476474251845211330ULL), (((/* implicit */unsigned long long int) (signed char)106)))) == (9019236793592768901ULL))) && (((((/* implicit */_Bool) 30786325577728ULL)) && (((/* implicit */_Bool) arr_41 [i_0] [i_1 + 1] [i_1] [i_2 - 2] [i_2 - 2]))))));
                    }
                    for (unsigned long long int i_12 = 0; i_12 < 10; i_12 += 4) /* same iter space */
                    {
                        var_24 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 6476474251845211310ULL)) ? (arr_34 [i_0] [i_0] [i_0]) : (-1699725931)))) != ((+(9883185580024341258ULL))))) ? (min((((/* implicit */int) (signed char)50)), (arr_26 [i_1 - 1] [i_2 - 1] [i_2] [i_12]))) : (((/* implicit */int) arr_3 [i_0] [(short)9] [2ULL]))));
                        arr_51 [i_0] [i_1] [i_0] [i_0] [i_0] = ((/* implicit */short) ((-1) - (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -128951727)) ? (5613229271335600792ULL) : (11994579966825669791ULL)))) && (((/* implicit */_Bool) arr_19 [i_0] [i_1 - 1] [i_2] [i_12])))))));
                        var_25 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (~(((((/* implicit */_Bool) (short)-9301)) ? (arr_26 [i_0] [i_0] [i_0] [i_0]) : (((/* implicit */int) arr_46 [i_0] [i_0] [i_0] [i_0])))))))));
                        var_26 = ((/* implicit */unsigned long long int) max((min((((/* implicit */int) (!(((/* implicit */_Bool) -933316496))))), (((((/* implicit */int) (short)-24714)) % (-1))))), ((+(((/* implicit */int) (short)-26397))))));
                        var_27 = ((/* implicit */short) (!(((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (short)24714)), (arr_33 [i_0] [i_1] [i_1] [i_2 - 2] [i_12]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_9 [i_12] [i_1 + 1] [i_2] [i_0]))))))))));
                    }
                }
            } 
        } 
    } 
}
