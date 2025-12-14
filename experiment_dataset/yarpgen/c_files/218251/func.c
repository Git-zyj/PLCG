/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218251
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218251 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218251
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 11; i_1 += 3) 
        {
            for (long long int i_2 = 0; i_2 < 11; i_2 += 3) 
            {
                {
                    var_12 = ((/* implicit */signed char) ((_Bool) (unsigned short)65535));
                    /* LoopSeq 1 */
                    for (unsigned short i_3 = 0; i_3 < 11; i_3 += 4) 
                    {
                        var_13 = ((/* implicit */_Bool) (unsigned short)65535);
                        var_14 = ((/* implicit */unsigned int) (!((!(((/* implicit */_Bool) 12284957564082307188ULL))))));
                        var_15 = ((/* implicit */unsigned long long int) ((long long int) (~(((/* implicit */int) arr_2 [i_1])))));
                        var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) 9524226464474707050ULL))));
                    }
                    var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 9524226464474707050ULL)) || (((/* implicit */_Bool) 8922517609234844574ULL)))) && (((/* implicit */_Bool) min((9524226464474707033ULL), (((/* implicit */unsigned long long int) arr_10 [i_0] [i_1] [i_1] [i_2])))))));
                    /* LoopSeq 3 */
                    for (unsigned int i_4 = 3; i_4 < 7; i_4 += 3) 
                    {
                        arr_17 [i_0] [(short)8] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((signed char) arr_1 [i_1])))) : (((9524226464474707052ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_2)))))))) || (((/* implicit */_Bool) ((unsigned short) 632418997)))));
                        var_18 = ((/* implicit */long long int) ((signed char) ((((/* implicit */long long int) var_7)) - (((arr_13 [i_0] [1U] [i_2]) / (arr_1 [i_0]))))));
                    }
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 3) 
                    {
                        var_19 = ((/* implicit */unsigned short) (!(((2147483647) != (((/* implicit */int) (unsigned short)16937))))));
                        var_20 = ((/* implicit */unsigned int) ((unsigned short) (!(((/* implicit */_Bool) arr_8 [(signed char)8] [i_1] [i_1])))));
                        var_21 = ((/* implicit */long long int) ((signed char) (+(9524226464474707030ULL))));
                        var_22 = ((/* implicit */long long int) 9524226464474707033ULL);
                        var_23 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_19 [i_0] [i_0] [i_0] [i_0])) * (var_11))))));
                    }
                    /* vectorizable */
                    for (unsigned char i_6 = 0; i_6 < 11; i_6 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 1573950866U)) && (((/* implicit */_Bool) var_1))));
                        var_25 = ((/* implicit */signed char) ((((/* implicit */_Bool) 8922517609234844554ULL)) ? (6412587996901526465ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)15)))));
                    }
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                    {
                        var_26 = ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_27 = ((/* implicit */unsigned int) (signed char)-16);
                        arr_26 [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (8922517609234844585ULL) : (var_10)));
                        var_28 = ((/* implicit */_Bool) ((8922517609234844597ULL) % (var_10)));
                        arr_27 [i_0] [i_1] [i_1] = ((/* implicit */unsigned char) ((_Bool) var_10));
                    }
                    /* vectorizable */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        /* LoopSeq 2 */
                        for (long long int i_9 = 4; i_9 < 10; i_9 += 3) 
                        {
                            var_29 = ((/* implicit */long long int) (+(((/* implicit */int) arr_21 [2LL] [i_9 + 1] [i_9 - 1] [i_9] [i_9 + 1]))));
                            var_30 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_33 [i_0] [i_1] [i_0] [i_2] [i_2] [i_8] [i_1]))) ^ (209338105973440812LL)))) ? ((-(9524226464474707050ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9 - 4] [i_9 - 2] [i_9] [i_9 + 1] [i_9 + 1])))));
                            var_31 = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_14 [i_9 - 1] [i_9 - 2] [i_9] [i_9] [i_9 + 1]))) + (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_32 [8U] [i_1] [i_2] [i_8] [i_9 - 1]))) ^ (12815008425706831013ULL)))));
                            var_32 = ((/* implicit */unsigned int) ((long long int) arr_24 [i_9] [(unsigned char)3] [i_9] [i_9] [i_9 - 2] [i_9 - 2]));
                        }
                        for (_Bool i_10 = 0; i_10 < 1; i_10 += 1) 
                        {
                            var_33 = ((/* implicit */unsigned short) (~(arr_0 [i_0])));
                            var_34 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_34 [i_0] [i_0] [(signed char)4] [(short)2] [(unsigned short)0])) ? (9524226464474707061ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (short)10495)))));
                            var_35 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) -4985706673041280822LL)) ? (((/* implicit */int) arr_34 [i_2] [i_2] [i_2] [i_2] [i_2])) : (var_7)));
                        }
                        var_36 = ((/* implicit */unsigned char) var_8);
                        var_37 = ((/* implicit */unsigned int) var_10);
                    }
                    for (short i_11 = 1; i_11 < 8; i_11 += 4) 
                    {
                        var_38 = ((/* implicit */unsigned char) ((8922517609234844583ULL) - (((/* implicit */unsigned long long int) ((long long int) max((10244398458117335569ULL), (((/* implicit */unsigned long long int) var_9))))))));
                        var_39 = ((/* implicit */unsigned short) (~((+(arr_22 [i_11 - 1])))));
                    }
                    /* vectorizable */
                    for (long long int i_12 = 0; i_12 < 11; i_12 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_44 [i_1] [i_1] [i_1] [i_12] [(_Bool)1] [i_12] [i_12] = ((/* implicit */unsigned char) arr_35 [i_0] [i_13] [i_2] [i_12] [(signed char)5] [i_13] [i_12]);
                            arr_45 [i_0] [i_1] [i_1] [i_12] = ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) + (8922517609234844568ULL)));
                        }
                        var_40 = ((/* implicit */long long int) 9524226464474707049ULL);
                        var_41 = ((((/* implicit */_Bool) 8202345615592216046ULL)) && (((/* implicit */_Bool) (unsigned char)229)));
                        arr_46 [i_0] [i_1] [(unsigned short)6] [7] [10] = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_15 [i_12] [i_2] [i_1] [i_1] [10] [i_0]))))) ? (((/* implicit */int) arr_43 [i_12] [i_2] [i_1] [(unsigned char)9] [i_0] [i_0])) : (((/* implicit */int) (!(((/* implicit */_Bool) 8922517609234844554ULL)))))));
                    }
                }
            } 
        } 
    } 
    var_42 = ((/* implicit */unsigned long long int) var_1);
}
