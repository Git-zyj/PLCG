/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198688
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198688 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198688
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
    for (short i_0 = 3; i_0 < 22; i_0 += 3) 
    {
        var_20 = ((/* implicit */short) min((var_20), (((/* implicit */short) (((!(((/* implicit */_Bool) arr_0 [i_0 - 3] [i_0])))) ? (((((/* implicit */_Bool) arr_0 [(unsigned short)11] [(unsigned short)11])) ? (13709008174716874386ULL) : (13709008174716874371ULL))) : (((/* implicit */unsigned long long int) (+(1339891647120447884LL)))))))));
        var_21 = ((/* implicit */unsigned long long int) max((var_21), (((/* implicit */unsigned long long int) ((long long int) 3803584134U)))));
    }
    var_22 = ((/* implicit */unsigned short) min((((/* implicit */int) var_14)), (var_5)));
    /* LoopSeq 2 */
    for (int i_1 = 4; i_1 < 9; i_1 += 2) 
    {
        arr_4 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) ((arr_3 [i_1] [i_1]) / (arr_2 [i_1])))) ? (((long long int) ((((/* implicit */_Bool) 1614759660U)) ? (((/* implicit */unsigned long long int) 70368744177663LL)) : (17492785565121017405ULL)))) : (((/* implicit */long long int) ((int) 13827684369573166338ULL)))));
        var_23 = 6649958432866779540LL;
    }
    for (unsigned short i_2 = 0; i_2 < 24; i_2 += 4) 
    {
        var_24 = ((/* implicit */int) ((((((/* implicit */_Bool) 2394412110U)) ? (arr_6 [i_2]) : (arr_6 [i_2]))) >= (min((arr_5 [i_2]), (((/* implicit */long long int) ((unsigned short) 13827684369573166338ULL)))))));
        var_25 = ((/* implicit */short) (!((!(((/* implicit */_Bool) (unsigned short)0))))));
        arr_7 [i_2] = ((/* implicit */unsigned long long int) arr_6 [(signed char)21]);
    }
    /* LoopNest 3 */
    for (signed char i_3 = 1; i_3 < 13; i_3 += 3) 
    {
        for (long long int i_4 = 0; i_4 < 15; i_4 += 4) 
        {
            for (int i_5 = 1; i_5 < 13; i_5 += 2) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (int i_6 = 1; i_6 < 14; i_6 += 3) 
                    {
                        arr_19 [i_3] [i_3] [i_3] = (+(arr_18 [i_3] [i_4] [i_6 - 1] [i_6] [i_3 - 1] [i_6]));
                        var_26 = ((/* implicit */int) arr_18 [i_6] [i_3 - 1] [i_5 + 1] [i_6 - 1] [4LL] [i_3 + 1]);
                        arr_20 [5ULL] [i_3] [i_3] [3U] = ((long long int) 4619059704136385282ULL);
                        var_27 = ((/* implicit */int) ((short) arr_17 [i_3] [i_3 + 1] [i_6 - 1] [i_3 + 1]));
                    }
                    for (unsigned long long int i_7 = 3; i_7 < 11; i_7 += 1) 
                    {
                        var_28 = min((((((/* implicit */_Bool) arr_14 [i_4] [i_7] [i_3])) ? (((/* implicit */long long int) 2680207644U)) : (arr_14 [14U] [i_5] [i_3]))), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_14 [i_4] [i_4] [i_3]))))));
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (int i_8 = 2; i_8 < 14; i_8 += 1) 
                        {
                            var_29 = ((/* implicit */signed char) (short)32767);
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_17 [i_3] [i_4] [i_4] [i_7 + 1])) ? (((/* implicit */unsigned long long int) (+(989372027)))) : (((((/* implicit */_Bool) 3384438495U)) ? (((/* implicit */unsigned long long int) arr_17 [11LL] [i_5 - 1] [11LL] [(short)3])) : (arr_11 [i_3] [i_8 - 1])))));
                            arr_27 [i_3] = ((/* implicit */long long int) arr_21 [i_3] [i_4]);
                        }
                    }
                    for (int i_9 = 0; i_9 < 15; i_9 += 1) 
                    {
                        /* LoopSeq 1 */
                        /* vectorizable */
                        for (long long int i_10 = 3; i_10 < 13; i_10 += 2) 
                        {
                            var_31 = arr_25 [i_3] [i_4] [i_10] [i_4] [i_10 - 2];
                            var_32 = ((unsigned long long int) 2191113732U);
                        }
                        var_33 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_12 [i_4] [i_4] [i_5 - 1])) ? (((/* implicit */unsigned long long int) arr_18 [i_3 + 1] [i_3 + 1] [i_3 - 1] [i_3 + 2] [i_3] [i_5 + 2])) : (18446744073709551599ULL)));
                        var_34 = ((/* implicit */short) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */unsigned long long int) (-9223372036854775807LL - 1LL))) : (8ULL)));
                        arr_33 [i_3] [i_4] [8U] [i_9] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned short)49152))))) ? (min((arr_11 [i_3 + 1] [i_3 + 1]), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)43))) >= (arr_12 [i_3] [i_3] [i_5])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */long long int) arr_23 [i_3] [i_4] [i_5] [i_3] [i_9])) : (min((((/* implicit */long long int) arr_16 [i_3] [i_3] [i_3 + 1] [i_3] [i_5] [i_9])), (arr_5 [i_9]))))))));
                    }
                    for (unsigned int i_11 = 0; i_11 < 15; i_11 += 2) 
                    {
                        var_35 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */signed char) (!(((/* implicit */_Bool) 10585078898328793728ULL))))), (arr_1 [i_3 - 1] [i_3 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))) : (((((/* implicit */_Bool) arr_13 [i_3 + 1] [i_5 + 2] [i_5 + 1])) ? (arr_21 [i_3] [i_3]) : (((/* implicit */unsigned long long int) arr_29 [i_3] [i_3 - 1] [i_5 + 2] [1ULL] [i_4]))))));
                        var_36 = ((unsigned short) arr_34 [i_3] [i_4] [i_5] [i_11]);
                        var_37 = ((/* implicit */short) ((((((/* implicit */_Bool) 137438945280ULL)) ? (8826104902741500416ULL) : (((/* implicit */unsigned long long int) 9223372036854775783LL)))) - (((/* implicit */unsigned long long int) arr_23 [i_3] [i_3 - 1] [i_3] [i_3] [i_3 - 1]))));
                    }
                    var_38 = arr_25 [i_3] [i_3] [i_3 + 2] [i_4] [i_5];
                    /* LoopNest 2 */
                    for (unsigned short i_12 = 4; i_12 < 14; i_12 += 1) 
                    {
                        for (int i_13 = 0; i_13 < 15; i_13 += 2) 
                        {
                            {
                                var_39 = (~(((((arr_38 [i_5] [i_5 - 1] [i_12] [i_12] [i_12] [i_12 - 3]) + (2147483647))) >> ((((+(2460715570U))) - (2460715567U))))));
                                var_40 = ((/* implicit */signed char) min((((/* implicit */unsigned long long int) arr_22 [i_3] [i_3] [i_13])), (max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_25 [i_3] [i_4] [i_3] [i_12] [i_12]))))), (max((13827684369573166314ULL), (((/* implicit */unsigned long long int) (short)-10794))))))));
                            }
                        } 
                    } 
                    var_41 = ((/* implicit */short) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) arr_28 [i_4] [i_4]))) ? (((/* implicit */long long int) arr_38 [(short)9] [i_4] [(short)9] [(short)9] [i_5] [(short)9])) : (31LL)))), (min((((((/* implicit */unsigned long long int) 6U)) - (6308741330721693406ULL))), (((/* implicit */unsigned long long int) arr_38 [i_3] [i_3 + 2] [i_3] [i_3 + 2] [i_3 - 1] [i_5 + 2]))))));
                }
            } 
        } 
    } 
}
