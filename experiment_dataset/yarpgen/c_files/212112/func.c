/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212112
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212112 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212112
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
    for (unsigned int i_0 = 2; i_0 < 12; i_0 += 4) 
    {
        var_12 |= ((/* implicit */short) ((((((/* implicit */int) (unsigned char)92)) >> (((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (19980))))))) >> (((((((/* implicit */_Bool) arr_1 [i_0 + 2])) ? (arr_1 [i_0 - 2]) : (1179669368))) - (124698967)))));
        /* LoopNest 2 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                    {
                        arr_10 [i_0] [i_0] [i_0] [i_2] [i_2] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_7 [(unsigned short)8] [i_1] [i_0 - 1] [i_0 - 1] [i_3])), ((-(var_3)))))) ? (((/* implicit */unsigned long long int) max((((/* implicit */int) ((_Bool) 1179669353))), (((arr_5 [i_0] [i_0] [i_2] [i_3]) ? (arr_1 [i_2]) : (((/* implicit */int) var_1))))))) : (14458203497545213044ULL)));
                        arr_11 [i_0] = ((/* implicit */unsigned int) min((max((arr_1 [i_0 + 2]), (((/* implicit */int) arr_5 [i_0 + 2] [i_0 - 1] [i_0 - 1] [i_0 + 1])))), (((/* implicit */int) var_7))));
                    }
                    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 4) 
                    {
                        arr_14 [i_0 - 1] [i_0 - 1] [i_2] [i_0 - 1] = ((/* implicit */_Bool) ((unsigned int) arr_7 [i_0 + 2] [i_0 + 2] [i_0 + 1] [i_0] [i_0 - 1]));
                        arr_15 [i_4] [i_4] [i_2] [i_1] [i_0] [i_0] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? ((-(((/* implicit */int) var_11)))) : (((/* implicit */int) var_5))))), (min((min((var_8), (((/* implicit */unsigned long long int) var_1)))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) var_5)), (arr_3 [i_0] [i_0] [2ULL]))))))));
                        var_13 = ((/* implicit */unsigned int) (-(3988540576164338591ULL)));
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (int i_5 = 0; i_5 < 14; i_5 += 1) 
                        {
                            var_14 = ((/* implicit */unsigned long long int) arr_5 [i_0 - 1] [i_0 - 1] [i_0 - 2] [i_0]);
                            var_15 = ((/* implicit */_Bool) ((arr_17 [i_0] [i_0] [i_0] [i_4] [7ULL] [i_0 + 2]) >> (((arr_17 [i_0] [i_5] [1ULL] [(unsigned char)1] [i_5] [i_0 - 2]) - (1818768474669995741ULL)))));
                        }
                        /* vectorizable */
                        for (unsigned char i_6 = 0; i_6 < 14; i_6 += 3) 
                        {
                            arr_21 [(_Bool)1] [(_Bool)1] [i_1] [i_2] [i_6] [i_2] [i_2] = 14458203497545213019ULL;
                            arr_22 [i_0] [(signed char)1] [(signed char)1] [(signed char)1] [i_6] = arr_17 [i_0 - 2] [i_0] [i_0] [i_0] [(_Bool)1] [i_0 - 1];
                        }
                        var_16 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_2 [i_0] [i_4]), (((/* implicit */unsigned long long int) arr_8 [i_1]))))) ? (min((((/* implicit */unsigned long long int) var_6)), (2097151ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) var_1))))))))) ? (max((((/* implicit */unsigned long long int) var_2)), (max((var_8), (arr_20 [i_4]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) arr_19 [i_4] [i_2] [i_0 - 1] [i_0 - 1] [i_0 - 1] [i_0 - 1])))))))))));
                    }
                    /* vectorizable */
                    for (unsigned long long int i_7 = 0; i_7 < 14; i_7 += 4) 
                    {
                        var_17 = arr_7 [i_0] [i_0] [i_2] [i_7] [i_7];
                        arr_26 [i_7] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0 - 1] [i_1])) ? (14458203497545213019ULL) : (((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (3988540576164338572ULL)))));
                    }
                    var_18 = ((/* implicit */int) var_0);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned char i_8 = 0; i_8 < 14; i_8 += 3) 
        {
            for (short i_9 = 0; i_9 < 14; i_9 += 3) 
            {
                {
                    var_19 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)51))) & (12288U)))) ? (((var_8) % (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 2]))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_18 [i_0 - 2] [i_0]))) : (max((((/* implicit */unsigned long long int) (unsigned char)182)), (9466581214791293118ULL)))))));
                    arr_33 [i_9] [i_8] [i_8] [i_0] = ((/* implicit */short) var_10);
                    arr_34 [i_8] [i_8] [i_9] = ((/* implicit */signed char) min((3558349675052927125ULL), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min((18446744073709551615ULL), (((/* implicit */unsigned long long int) (unsigned char)78))))) ? (((/* implicit */int) (short)32759)) : (((/* implicit */int) (signed char)-27)))))));
                }
            } 
        } 
        arr_35 [0U] = ((/* implicit */unsigned long long int) ((unsigned short) ((arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]) ? (((/* implicit */int) min((((/* implicit */unsigned char) var_7)), (var_9)))) : (((/* implicit */int) ((short) var_0))))));
        /* LoopNest 2 */
        for (unsigned long long int i_10 = 0; i_10 < 14; i_10 += 1) 
        {
            for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
            {
                {
                    var_20 = ((/* implicit */_Bool) max((var_20), (((/* implicit */_Bool) (-(((((((/* implicit */int) var_6)) * (((/* implicit */int) arr_16 [i_0] [i_10] [i_0] [i_11] [i_10])))) / (((((/* implicit */int) var_11)) / (((/* implicit */int) arr_37 [11LL] [i_10])))))))))));
                    var_21 = ((_Bool) (!(((/* implicit */_Bool) var_5))));
                    /* LoopNest 2 */
                    for (unsigned char i_12 = 1; i_12 < 13; i_12 += 4) 
                    {
                        for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
                        {
                            {
                                arr_44 [i_0] [i_11] [i_11] [i_11] [6U] [i_11] [i_0] = ((/* implicit */unsigned int) (~(max((((/* implicit */long long int) min((-1179669355), (((/* implicit */int) arr_19 [i_10] [i_12] [6] [i_10] [i_10] [i_0]))))), (min((((/* implicit */long long int) var_6)), (4194303LL)))))));
                                var_22 *= ((/* implicit */unsigned short) arr_36 [i_0] [i_0]);
                                var_23 = ((/* implicit */short) min((((/* implicit */int) ((((/* implicit */_Bool) arr_27 [i_0 - 1])) || (((/* implicit */_Bool) arr_27 [i_0 - 2]))))), (((((/* implicit */int) ((unsigned short) arr_31 [i_11] [i_13]))) / (((((/* implicit */int) arr_16 [i_0] [i_10] [i_11] [i_12] [i_0])) & (-1074467063)))))));
                                var_24 += ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_0))) % (max((((/* implicit */unsigned long long int) 32505856)), (3988540576164338588ULL)))));
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    /* LoopSeq 1 */
    for (unsigned long long int i_14 = 3; i_14 < 15; i_14 += 4) 
    {
        var_25 += ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)31)) ? (-4194303LL) : (((/* implicit */long long int) 593604250U))))) || (((/* implicit */_Bool) (unsigned short)0)));
        var_26 *= ((/* implicit */unsigned long long int) var_10);
    }
    var_27 = ((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)61189))) != (4194303LL)));
    var_28 = ((/* implicit */signed char) (-(((((/* implicit */int) var_4)) >> (((max((((/* implicit */int) (_Bool)1)), (1074467083))) - (1074467057)))))));
    var_29 += ((/* implicit */long long int) ((((unsigned long long int) (!(((/* implicit */_Bool) var_9))))) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))));
}
