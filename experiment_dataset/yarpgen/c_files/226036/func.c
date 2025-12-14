/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226036
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226036 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226036
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        for (long long int i_1 = 3; i_1 < 8; i_1 += 1) 
        {
            {
                /* LoopSeq 1 */
                for (unsigned int i_2 = 0; i_2 < 10; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned int) max((max(((~(((/* implicit */int) (unsigned short)65521)))), ((~(((/* implicit */int) var_7)))))), (((/* implicit */int) arr_1 [(unsigned char)3]))));
                    var_14 = ((/* implicit */signed char) ((708199626) ^ (((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) <= (arr_4 [i_0] [1U] [i_0]))))));
                }
                /* LoopNest 2 */
                for (short i_3 = 4; i_3 < 8; i_3 += 3) 
                {
                    for (short i_4 = 0; i_4 < 10; i_4 += 1) 
                    {
                        {
                            var_15 = ((/* implicit */signed char) max((1670183049U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4] [i_1] [(signed char)5] [i_1] [i_0])) ? (arr_10 [i_0] [i_0] [i_3 + 2] [i_1] [i_0]) : (((/* implicit */unsigned long long int) 1542185178U))))) && ((!(((/* implicit */_Bool) (short)23471)))))))));
                            var_16 = arr_1 [i_0];
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (long long int i_5 = 4; i_5 < 8; i_5 += 3) 
                {
                    var_17 = ((/* implicit */long long int) ((max((((/* implicit */long long int) (signed char)-112)), (((((/* implicit */long long int) -2029278826)) & (6339916280579240566LL))))) > (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -1854256665310580350LL)) || (((/* implicit */_Bool) 4220762069U))))))));
                    var_18 = ((/* implicit */int) ((short) ((((/* implicit */int) (unsigned short)24576)) < (((/* implicit */int) (_Bool)1)))));
                }
                /* vectorizable */
                for (signed char i_6 = 3; i_6 < 9; i_6 += 3) 
                {
                    /* LoopSeq 2 */
                    for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 3) 
                    {
                        var_19 *= ((/* implicit */unsigned char) (!(((((/* implicit */_Bool) var_6)) && (((/* implicit */_Bool) arr_5 [i_0]))))));
                        /* LoopSeq 3 */
                        for (long long int i_8 = 0; i_8 < 10; i_8 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) 4331065360140537187LL))));
                            arr_21 [i_0] [(_Bool)1] [i_1] [i_7] [7LL] = ((/* implicit */int) arr_18 [i_1 - 2] [i_1] [i_1 + 2] [i_1] [i_1 - 3] [8LL]);
                            var_21 += ((/* implicit */short) ((((/* implicit */_Bool) arr_19 [(short)0] [i_0] [i_6 - 1] [(unsigned char)8] [i_7] [(signed char)5])) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0] [i_8]))))) : ((~(((/* implicit */int) (_Bool)1))))));
                            arr_22 [i_1] [i_1] [i_1] [i_1] [i_1 - 3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (short)-6967)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)24))) : (-8679782307079921062LL)));
                            var_22 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_19 [(short)3] [i_1] [i_1 - 2] [i_1] [4ULL] [i_1 - 3])) && (((/* implicit */_Bool) (~(arr_4 [(unsigned char)8] [i_6] [i_7]))))));
                        }
                        for (unsigned char i_9 = 1; i_9 < 9; i_9 += 2) 
                        {
                            var_23 = ((/* implicit */unsigned long long int) arr_19 [i_0] [3U] [3U] [(_Bool)1] [(_Bool)1] [i_7]);
                            var_24 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_6] [i_1] [i_9])) ? (var_6) : (((/* implicit */unsigned int) ((/* implicit */int) (short)-11492)))))) ? (((((/* implicit */unsigned int) ((/* implicit */int) (short)5174))) ^ (2270296209U))) : (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_6 - 2])) / (var_8))))));
                        }
                        for (int i_10 = 0; i_10 < 10; i_10 += 2) 
                        {
                            var_25 = ((/* implicit */unsigned int) ((((/* implicit */long long int) 2055653015U)) <= (-6339916280579240567LL)));
                            arr_29 [i_0] [i_1] [i_0] [i_7] [i_1] [i_10] = ((/* implicit */short) arr_6 [i_1 - 3] [i_1 - 3] [i_1 + 2]);
                            var_26 -= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_17 [i_1] [i_1 + 2] [(unsigned char)8] [i_0])) ? (((((/* implicit */_Bool) 17U)) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) arr_7 [i_1])))) : (((/* implicit */int) ((((/* implicit */unsigned long long int) arr_5 [i_6])) > (13779608379901767108ULL))))));
                            var_27 = ((/* implicit */_Bool) max((var_27), (((/* implicit */_Bool) ((unsigned int) ((_Bool) arr_5 [i_0]))))));
                            arr_30 [(unsigned short)1] [i_1 - 2] [i_1] [i_0] [i_10] = ((/* implicit */long long int) (-(((/* implicit */int) arr_16 [i_1] [i_1] [(signed char)4]))));
                        }
                        arr_31 [i_1] [i_6] = ((((/* implicit */_Bool) ((unsigned char) 20))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_10))))) : (((((/* implicit */_Bool) arr_12 [3] [i_6] [i_6])) ? (((/* implicit */int) (signed char)-17)) : (((/* implicit */int) (short)6948)))));
                    }
                    for (int i_11 = 0; i_11 < 10; i_11 += 3) 
                    {
                        var_28 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_1)) && (((-9223372036854775792LL) != (((/* implicit */long long int) ((/* implicit */int) arr_25 [i_11] [i_6] [i_1] [i_1 - 2] [i_0])))))));
                        /* LoopSeq 3 */
                        for (unsigned int i_12 = 0; i_12 < 10; i_12 += 4) 
                        {
                            var_29 = ((/* implicit */unsigned short) ((arr_10 [i_0] [i_0] [i_0] [i_1] [i_12]) <= (arr_15 [i_1 + 2] [i_6 - 2] [i_6 - 2] [7ULL])));
                            var_30 = arr_4 [i_1] [i_11] [(_Bool)1];
                            var_31 = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (unsigned char)131)) > (((/* implicit */int) arr_25 [i_0] [i_1] [i_1] [i_0] [i_0])))))) / ((~(arr_9 [i_1] [i_1] [i_12]))));
                            arr_37 [i_1] [i_1] [i_1] [i_11] [i_12] [i_12] = ((/* implicit */unsigned short) (-(-422865662)));
                            var_32 += ((/* implicit */unsigned char) ((((((/* implicit */int) arr_7 [(unsigned char)4])) | (var_1))) % (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]))));
                        }
                        for (long long int i_13 = 0; i_13 < 10; i_13 += 1) 
                        {
                            var_33 = ((/* implicit */int) ((unsigned char) (~(((/* implicit */int) arr_16 [i_1] [i_6 - 3] [i_13])))));
                            var_34 = ((/* implicit */unsigned long long int) ((((/* implicit */int) arr_34 [i_0] [i_1 - 2] [i_6] [0ULL] [i_6 - 3] [i_11])) > (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned char)178)))))));
                        }
                        for (signed char i_14 = 0; i_14 < 10; i_14 += 2) 
                        {
                            arr_43 [(short)2] [3ULL] [i_1] [3ULL] [i_14] = ((/* implicit */long long int) ((7U) == (((/* implicit */unsigned int) ((/* implicit */int) (short)-15583)))));
                            var_35 = ((/* implicit */unsigned char) arr_2 [i_1] [3LL]);
                        }
                        arr_44 [i_0] [6ULL] [i_1] [i_11] [i_1 + 2] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) var_8)) : (var_0))) ^ (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) 1139926918))))));
                    }
                    var_36 = ((/* implicit */_Bool) ((((11319979010878844354ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (short)4263))))) ? (var_8) : (((((/* implicit */int) arr_26 [1] [(_Bool)1] [i_1] [i_6] [(_Bool)1])) ^ (((/* implicit */int) var_2))))));
                    arr_45 [7U] [i_1] [i_1 - 1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 5383404414088098389ULL)) ? (((/* implicit */int) (short)-17645)) : (-929140546)))) != (3270654960U)));
                    var_37 = ((/* implicit */unsigned int) ((short) 1097364144128ULL));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_15 = 0; i_15 < 10; i_15 += 1) 
                    {
                        var_38 ^= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_40 [i_1 - 1] [i_1 + 2])) ? (((/* implicit */int) arr_24 [i_1 + 1] [i_1 - 1] [i_0] [i_1 - 1] [i_6 + 1])) : (((/* implicit */int) ((((/* implicit */int) (short)-4269)) < (((/* implicit */int) (unsigned char)221)))))));
                        var_39 = ((/* implicit */unsigned int) (-(((/* implicit */int) arr_12 [i_1 - 2] [i_6 - 2] [i_6 + 1]))));
                    }
                    for (short i_16 = 0; i_16 < 10; i_16 += 2) 
                    {
                        var_40 *= ((/* implicit */_Bool) ((signed char) (-(768))));
                        arr_50 [i_16] [(unsigned short)2] [i_16] [i_16] [i_1] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_32 [1ULL] [i_1 + 1]))) > ((~(52721242U)))));
                        /* LoopSeq 3 */
                        for (int i_17 = 0; i_17 < 10; i_17 += 2) 
                        {
                            arr_53 [i_17] [3] [5ULL] [i_1] [5ULL] [i_0] [i_0] = ((/* implicit */int) ((signed char) ((((/* implicit */unsigned int) ((/* implicit */int) (signed char)-28))) + (725662768U))));
                            var_41 += var_0;
                        }
                        for (long long int i_18 = 0; i_18 < 10; i_18 += 1) 
                        {
                            var_42 = ((/* implicit */unsigned char) max((var_42), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_7 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned char)75)))))));
                            var_43 = ((/* implicit */signed char) (!(((/* implicit */_Bool) arr_13 [i_1 + 1]))));
                        }
                        for (unsigned int i_19 = 1; i_19 < 6; i_19 += 2) 
                        {
                            var_44 = ((/* implicit */int) 3153530678U);
                            var_45 = ((/* implicit */unsigned long long int) min((var_45), (((/* implicit */unsigned long long int) (signed char)(-127 - 1)))));
                            var_46 -= ((/* implicit */short) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) arr_33 [i_6 + 1] [i_16] [i_16] [i_16] [i_19]))));
                        }
                    }
                }
                var_47 = ((((/* implicit */_Bool) ((((((/* implicit */_Bool) 2328141272U)) ? (((/* implicit */unsigned int) arr_4 [i_0] [i_1] [i_1])) : (603070405U))) & (((/* implicit */unsigned int) min((((/* implicit */int) (signed char)-28)), (1978045049))))))) || (((/* implicit */_Bool) max((arr_6 [i_1 + 2] [6LL] [i_1 + 2]), (((/* implicit */unsigned long long int) arr_57 [i_1 - 1] [i_1 - 1]))))));
            }
        } 
    } 
    var_48 = ((/* implicit */unsigned char) (((!(((/* implicit */_Bool) var_11)))) && (((/* implicit */_Bool) (((~(-7301380975664445379LL))) / (((/* implicit */long long int) ((/* implicit */int) var_11))))))));
}
