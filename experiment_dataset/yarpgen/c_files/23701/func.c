/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23701
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23701 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23701
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
    var_17 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_8)), (var_14)))) ? (((/* implicit */long long int) var_0)) : (min((((/* implicit */long long int) (~(var_0)))), (((var_6) | (((/* implicit */long long int) ((/* implicit */int) var_9)))))))));
    var_18 = ((/* implicit */long long int) (-(((/* implicit */int) (_Bool)1))));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 16; i_1 += 4) 
        {
            for (short i_2 = 4; i_2 < 16; i_2 += 3) 
            {
                {
                    /* LoopNest 2 */
                    for (int i_3 = 0; i_3 < 17; i_3 += 2) 
                    {
                        for (signed char i_4 = 1; i_4 < 15; i_4 += 2) 
                        {
                            {
                                var_19 = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8192))))) || (((/* implicit */_Bool) 9223372036854775807LL))));
                                var_20 = ((/* implicit */_Bool) ((int) min((arr_7 [i_4 - 1] [i_1] [i_1 + 1] [i_2 - 4]), (arr_7 [i_4 + 1] [i_1 - 1] [i_1 - 1] [i_2 - 3]))));
                                var_21 = ((/* implicit */_Bool) min(((+(((/* implicit */int) ((((/* implicit */int) (short)-8174)) <= (((/* implicit */int) arr_0 [i_0]))))))), (((((/* implicit */_Bool) ((var_7) & (((/* implicit */unsigned long long int) ((/* implicit */int) (short)8195)))))) ? (((((/* implicit */_Bool) 12022284801279828248ULL)) ? (((/* implicit */int) arr_11 [i_0] [(signed char)10] [i_2 - 3] [i_2 + 1] [(signed char)10] [i_4] [i_4])) : (((/* implicit */int) arr_0 [i_4 + 1])))) : (((/* implicit */int) max(((short)-8169), (arr_2 [i_3]))))))));
                                var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((long long int) arr_1 [i_1 + 1] [i_2 - 1]))) ? (((((/* implicit */_Bool) (short)-8165)) ? (arr_1 [i_1 - 1] [i_2 - 4]) : (var_7))) : (((((/* implicit */_Bool) var_5)) ? (arr_1 [i_1 + 1] [i_2 - 1]) : (arr_1 [i_1 + 1] [i_2 - 4])))));
                            }
                        } 
                    } 
                    var_23 = ((arr_9 [i_1] [i_2] [i_1 - 1] [i_1]) <= (((/* implicit */unsigned int) (~(((/* implicit */int) (short)8192))))));
                    var_24 = ((/* implicit */int) arr_9 [4] [i_2] [i_1] [i_2]);
                }
            } 
        } 
    } 
    var_25 = ((/* implicit */unsigned long long int) var_10);
    /* LoopNest 3 */
    for (unsigned long long int i_5 = 0; i_5 < 21; i_5 += 4) 
    {
        for (short i_6 = 0; i_6 < 21; i_6 += 4) 
        {
            for (unsigned short i_7 = 3; i_7 < 20; i_7 += 3) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_8 = 1; i_8 < 18; i_8 += 4) 
                    {
                        var_26 = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3])) ? (arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3]) : (((/* implicit */unsigned long long int) var_15)))), (((((/* implicit */_Bool) arr_22 [i_7 - 3] [i_7] [i_7 - 1] [i_7 - 3])) ? (1250257215225283724ULL) : (((/* implicit */unsigned long long int) -671752162))))));
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 21; i_9 += 1) 
                        {
                            var_27 ^= ((/* implicit */int) max((((/* implicit */short) (_Bool)1)), ((short)8165)));
                            var_28 = ((/* implicit */_Bool) max((((long long int) ((int) 2048U))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_22 [i_7 - 3] [i_7] [i_8 + 1] [16ULL])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_9))) : (((((/* implicit */_Bool) arr_18 [i_5] [i_6] [i_8 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [(short)12]))) : (var_15))))))));
                            var_29 = ((/* implicit */signed char) ((((/* implicit */int) (short)1536)) != (((/* implicit */int) arr_13 [i_9]))));
                        }
                        /* vectorizable */
                        for (unsigned long long int i_10 = 1; i_10 < 20; i_10 += 4) 
                        {
                            var_30 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_29 [i_10] [(signed char)18] [i_10 - 1] [i_7] [(_Bool)1] [i_5] [(unsigned short)13]))));
                            var_31 = ((/* implicit */long long int) max((var_31), (((/* implicit */long long int) (+(((/* implicit */int) arr_27 [i_5] [i_5] [1U] [i_10 + 1] [i_10])))))));
                            var_32 = ((/* implicit */long long int) (~(arr_18 [i_8 + 3] [i_7 + 1] [i_10 - 1])));
                        }
                        for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                        {
                            var_33 = ((/* implicit */short) max((max((var_15), (((/* implicit */unsigned int) (short)-8198)))), (((/* implicit */unsigned int) ((var_14) <= (((/* implicit */long long int) 1765646485)))))));
                            var_34 = ((/* implicit */_Bool) (~(((/* implicit */int) (short)-8205))));
                            var_35 = ((/* implicit */short) (-(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 214544595)) ? (((/* implicit */int) (short)4095)) : (((/* implicit */int) (unsigned short)16214))))) * (min((((/* implicit */unsigned long long int) 262142LL)), (13663295536419110306ULL)))))));
                        }
                    }
                    for (short i_12 = 0; i_12 < 21; i_12 += 2) 
                    {
                        var_36 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-65)) >= (arr_32 [(unsigned short)15] [(unsigned short)15] [i_12])));
                        var_37 = ((/* implicit */_Bool) (signed char)-78);
                    }
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned int i_13 = 0; i_13 < 21; i_13 += 3) 
                    {
                        var_38 = ((/* implicit */unsigned long long int) ((short) (unsigned short)13372));
                        var_39 = ((/* implicit */unsigned long long int) max((var_39), (((/* implicit */unsigned long long int) (((-(1629248977U))) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)240)) <= (((/* implicit */int) var_12)))))))))));
                    }
                    var_40 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_35 [i_7] [(short)6] [i_6] [i_6] [i_7]) ? (((/* implicit */int) arr_27 [i_7 - 3] [(_Bool)1] [i_5] [(signed char)4] [i_5])) : (((/* implicit */int) arr_27 [i_7 - 2] [i_6] [(signed char)13] [(signed char)20] [i_7]))))) && (((arr_29 [i_5] [i_7 + 1] [18U] [i_5] [i_7 - 3] [6ULL] [i_6]) < (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-1)))))));
                    var_41 ^= ((/* implicit */int) ((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_7 - 1]))) - (arr_22 [i_7] [i_5] [i_7 - 2] [i_6]))) <= (((/* implicit */unsigned long long int) ((((/* implicit */int) (short)8165)) | (((/* implicit */int) (_Bool)0)))))));
                }
            } 
        } 
    } 
}
