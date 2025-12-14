/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 31547
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=31547 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/31547
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
    /* vectorizable */
    for (int i_0 = 1; i_0 < 9; i_0 += 2) /* same iter space */
    {
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 4) 
        {
            /* LoopNest 2 */
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                for (unsigned char i_3 = 0; i_3 < 11; i_3 += 3) 
                {
                    {
                        arr_10 [i_3] [i_0 + 2] [i_0 + 2] = ((/* implicit */long long int) (~(arr_3 [i_0] [(unsigned short)2])));
                        var_16 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_11))) : (var_7)));
                        arr_11 [(_Bool)1] = ((/* implicit */short) arr_1 [i_0]);
                    }
                } 
            } 
            var_17 = ((/* implicit */_Bool) ((arr_6 [i_0 + 2]) & (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_0 - 1] [i_0 - 1] [i_0 - 1])))));
            /* LoopSeq 3 */
            for (unsigned short i_4 = 2; i_4 < 10; i_4 += 3) 
            {
                var_18 = ((/* implicit */unsigned short) var_10);
                arr_15 [i_0 - 1] [i_4] [i_4] [i_4] = (~(((/* implicit */int) ((((/* implicit */int) (unsigned short)15227)) <= (((/* implicit */int) (unsigned short)28286))))));
                var_19 = ((arr_8 [i_0 + 2] [i_4 - 2] [i_4 - 2] [i_1] [(_Bool)1] [2ULL]) > (arr_8 [i_0 + 2] [i_4 + 1] [4ULL] [i_1] [i_0] [i_4]));
            }
            for (int i_5 = 0; i_5 < 11; i_5 += 2) 
            {
                /* LoopSeq 1 */
                for (short i_6 = 0; i_6 < 11; i_6 += 1) 
                {
                    arr_20 [i_0] [i_0] [i_0] [i_6] [i_0] = ((/* implicit */short) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_1))) >= (((((/* implicit */_Bool) arr_13 [(unsigned short)8] [i_6] [(unsigned short)8])) ? (arr_12 [i_0] [i_5] [(unsigned char)2]) : (((/* implicit */unsigned long long int) arr_6 [10ULL]))))));
                    var_20 = ((/* implicit */unsigned short) ((11993981654164606811ULL) / (((/* implicit */unsigned long long int) -7513983348015529422LL))));
                    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) ((unsigned short) var_0)))));
                    var_22 = ((/* implicit */_Bool) var_7);
                }
                /* LoopNest 2 */
                for (unsigned short i_7 = 0; i_7 < 11; i_7 += 1) 
                {
                    for (long long int i_8 = 0; i_8 < 11; i_8 += 4) 
                    {
                        {
                            arr_27 [i_0] [i_7] [i_1] [i_7] [i_0] = ((/* implicit */int) arr_17 [i_7] [i_5] [(unsigned char)4] [(unsigned char)4]);
                            var_23 = ((/* implicit */unsigned short) (+(arr_12 [i_0 - 1] [i_0 - 1] [i_0])));
                            var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (var_4) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_0] [i_0] [i_7])))))) ? (((/* implicit */int) var_13)) : (((/* implicit */int) ((arr_23 [i_5] [i_1] [i_5] [i_7]) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))))))))));
                            var_25 = ((((/* implicit */_Bool) 8417503617244195937LL)) && (((/* implicit */_Bool) 11993981654164606811ULL)));
                        }
                    } 
                } 
                /* LoopSeq 4 */
                for (int i_9 = 0; i_9 < 11; i_9 += 2) 
                {
                    arr_30 [i_0] = ((/* implicit */int) arr_18 [i_9] [i_5] [i_1] [i_0]);
                    var_26 |= ((/* implicit */unsigned short) var_10);
                    arr_31 [i_0] [i_0] [i_0] [(unsigned short)3] = ((/* implicit */long long int) arr_14 [i_9] [i_1] [i_0]);
                }
                for (signed char i_10 = 0; i_10 < 11; i_10 += 4) 
                {
                    var_27 = ((((/* implicit */_Bool) ((unsigned long long int) (unsigned short)28297))) ? (((((/* implicit */_Bool) var_13)) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_12))))));
                    var_28 = arr_14 [i_0] [i_10] [i_0 + 2];
                }
                for (unsigned long long int i_11 = 0; i_11 < 11; i_11 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned short i_12 = 0; i_12 < 11; i_12 += 2) 
                    {
                        arr_40 [(unsigned short)0] [i_11] [i_11] [i_11] [i_0] [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_39 [i_0] [i_0] [8] [i_0] [i_11] [i_0] [i_0]))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) arr_34 [i_1] [i_5] [i_11] [i_11])))));
                        var_29 = ((/* implicit */signed char) (+(var_15)));
                    }
                    arr_41 [i_11] = ((/* implicit */short) var_0);
                }
                for (unsigned long long int i_13 = 0; i_13 < 11; i_13 += 4) 
                {
                    arr_44 [i_0] [i_1] [i_5] [i_13] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_2 [(short)4] [i_0 - 1] [i_1])) ? (arr_12 [i_0 + 1] [7] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
                    arr_45 [i_1] [6] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 11993981654164606811ULL)) ? (((/* implicit */int) (unsigned short)17038)) : ((+(((/* implicit */int) (unsigned short)15))))));
                }
            }
            for (short i_14 = 0; i_14 < 11; i_14 += 4) 
            {
                var_30 = ((/* implicit */unsigned short) ((var_4) & (arr_26 [i_0] [i_0] [i_0 - 1] [i_0 + 1] [i_0 + 2])));
                /* LoopNest 2 */
                for (unsigned long long int i_15 = 0; i_15 < 11; i_15 += 2) 
                {
                    for (long long int i_16 = 0; i_16 < 11; i_16 += 2) 
                    {
                        {
                            arr_55 [0LL] [(unsigned short)9] [(unsigned short)9] [i_14] [i_14] [i_15] [i_14] = ((/* implicit */unsigned short) arr_46 [i_0 + 1] [i_1]);
                            var_31 = ((/* implicit */signed char) max((var_31), (((/* implicit */signed char) arr_16 [i_0] [i_16] [i_16] [i_16]))));
                            arr_56 [i_0 - 1] [i_0 - 1] [i_0 + 2] [i_0] [(signed char)10] [i_0] = ((/* implicit */_Bool) var_8);
                            arr_57 [i_16] [(unsigned char)9] [i_1] [i_1] [i_0 + 1] |= ((/* implicit */unsigned short) ((arr_51 [i_0] [(unsigned short)10] [7ULL] [i_0 + 2] [i_0] [i_0 + 1]) ? (((var_9) >> (((((/* implicit */int) var_6)) - (162))))) : (((arr_35 [i_16] [i_14] [i_14] [i_0] [i_0]) >> (((((/* implicit */int) var_2)) - (123)))))));
                        }
                    } 
                } 
                arr_58 [i_0] [i_0 + 2] [i_0] [i_0 + 2] = ((/* implicit */long long int) ((((/* implicit */int) arr_19 [i_14] [i_14] [i_1] [i_14])) & (((/* implicit */int) arr_19 [i_1] [i_1] [i_0 + 2] [i_14]))));
                arr_59 [i_14] = ((/* implicit */_Bool) ((arr_6 [i_0 + 2]) / (arr_6 [i_0 + 2])));
                var_32 = ((/* implicit */unsigned char) arr_42 [i_0] [i_0 - 1] [(unsigned short)3]);
            }
            arr_60 [i_0 - 1] = ((/* implicit */_Bool) ((var_15) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_1] [i_0 + 2] [i_0 + 2] [i_1])))));
            arr_61 [i_1] [(_Bool)1] [i_0] = ((/* implicit */unsigned short) arr_2 [i_1] [i_0] [i_0]);
        }
        var_33 -= ((/* implicit */short) arr_4 [i_0 + 2]);
        var_34 -= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) arr_37 [i_0]))))) > (((/* implicit */int) arr_2 [i_0] [i_0] [i_0]))));
        var_35 ^= ((/* implicit */short) (~(((((/* implicit */_Bool) 2044068278)) ? (((/* implicit */unsigned long long int) -2044068278)) : (arr_17 [(short)3] [i_0] [i_0] [i_0])))));
        var_36 = (_Bool)1;
    }
    for (int i_17 = 1; i_17 < 9; i_17 += 2) /* same iter space */
    {
        var_37 = ((/* implicit */unsigned long long int) min((((((/* implicit */int) var_2)) * (((/* implicit */int) arr_36 [(_Bool)1] [i_17 - 1] [i_17] [i_17] [i_17 + 1])))), (max((((/* implicit */int) var_11)), ((-(((/* implicit */int) var_6))))))));
        var_38 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)28286)) ? (8417503617244195937LL) : (((/* implicit */long long int) ((/* implicit */int) (short)10391)))))) || (((/* implicit */_Bool) 5347459831051694080ULL))));
        arr_64 [(signed char)6] |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) 8763333706641412456LL)))) ? (((/* implicit */int) ((_Bool) var_11))) : (((((/* implicit */_Bool) (signed char)66)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (_Bool)1))))));
        arr_65 [i_17] [i_17] = ((/* implicit */short) ((((/* implicit */_Bool) arr_38 [i_17] [i_17] [i_17 - 1] [i_17] [i_17] [i_17] [i_17])) ? (((long long int) arr_47 [i_17 + 2] [i_17 + 2] [i_17 - 1])) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)25857)) ? (var_15) : (((/* implicit */unsigned long long int) var_5)))))))))));
    }
    for (signed char i_18 = 0; i_18 < 21; i_18 += 3) 
    {
        var_39 = ((/* implicit */unsigned long long int) ((((arr_67 [i_18]) / (arr_67 [i_18]))) < (((((/* implicit */_Bool) arr_68 [i_18])) ? (arr_67 [i_18]) : (arr_67 [i_18])))));
        arr_69 [i_18] = ((/* implicit */unsigned short) arr_66 [i_18]);
    }
    var_40 = ((/* implicit */short) (!(((/* implicit */_Bool) var_14))));
}
