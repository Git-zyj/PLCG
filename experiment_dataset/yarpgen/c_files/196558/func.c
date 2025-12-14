/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196558
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
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 12; i_1 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned short) ((short) ((signed char) arr_1 [i_0 + 1])));
                /* LoopSeq 2 */
                for (unsigned long long int i_2 = 0; i_2 < 12; i_2 += 3) 
                {
                    /* LoopNest 2 */
                    for (long long int i_3 = 1; i_3 < 10; i_3 += 2) 
                    {
                        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 3) 
                        {
                            {
                                var_16 = ((/* implicit */signed char) (!(((/* implicit */_Bool) ((arr_9 [i_3] [i_1] [(unsigned char)8] [i_3] [i_4]) ? (((/* implicit */int) arr_9 [i_0] [i_1] [i_4] [i_0] [i_4])) : (((/* implicit */int) arr_9 [3LL] [i_1] [i_2] [i_3 - 1] [i_4])))))));
                                var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) / (((((/* implicit */_Bool) 2234207627640832ULL)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (6774733683012936063LL))))) + (((/* implicit */long long int) ((((/* implicit */int) max((((/* implicit */signed char) (_Bool)1)), (arr_12 [i_0] [9U] [i_0] [i_3] [i_0] [9U])))) + (((int) 1476780103804881774ULL))))))))));
                                var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((unsigned char) arr_9 [i_3] [i_1] [i_0 + 1] [i_0] [i_3]))) ? (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned int) arr_12 [i_0] [i_1] [i_1] [i_0] [i_3] [i_4])))))) : (((((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)105))))) >> (((/* implicit */int) arr_9 [i_3 - 1] [i_1] [i_1] [7U] [i_1]))))));
                                var_19 = ((/* implicit */unsigned long long int) ((long long int) arr_4 [i_1]));
                            }
                        } 
                    } 
                    var_20 = ((/* implicit */long long int) arr_13 [i_2] [i_1] [(signed char)11] [i_0] [i_0]);
                    var_21 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_8 [i_2] [i_1] [i_2] [i_2]))))) ? (((/* implicit */int) (_Bool)1)) : (max(((-(((/* implicit */int) (_Bool)1)))), (((((/* implicit */_Bool) arr_10 [i_0] [i_1] [i_1] [i_1] [10U])) ? (((/* implicit */int) arr_8 [7U] [i_1] [i_2] [i_2])) : (((/* implicit */int) (unsigned short)13701))))))));
                }
                for (signed char i_5 = 0; i_5 < 12; i_5 += 4) 
                {
                    var_22 = ((/* implicit */unsigned int) ((((arr_13 [i_0 + 1] [i_0] [i_0 + 1] [i_0 + 1] [i_0 + 1]) ? (((/* implicit */int) max(((_Bool)1), (arr_9 [i_1] [i_1] [i_5] [i_1] [i_0])))) : ((-(((/* implicit */int) (_Bool)1)))))) - (min((((/* implicit */int) arr_3 [(short)3])), (arr_10 [i_0 + 1] [i_1] [i_0 + 1] [i_0 + 1] [i_0 + 1])))));
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        var_23 = ((/* implicit */unsigned char) -3735041753912625985LL);
                        var_24 += max((arr_10 [i_0] [i_5] [i_5] [i_0] [(signed char)8]), (min((arr_10 [i_6] [i_6] [i_6] [i_6] [i_6]), (((/* implicit */int) arr_12 [i_1] [i_1] [i_0] [i_6] [i_6] [4])))));
                        arr_19 [i_1] [i_1] [i_0] [i_0] [10ULL] [i_6] = ((/* implicit */long long int) ((((/* implicit */unsigned int) max((arr_18 [i_1] [i_1]), (((/* implicit */int) ((-2145953487) <= (((/* implicit */int) (short)1351)))))))) >= (((unsigned int) arr_2 [i_0 + 1]))));
                    }
                    arr_20 [i_0] [i_1] [11ULL] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_2 [i_0])) ? (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-83))))) : (((/* implicit */int) arr_0 [i_0] [i_1]))));
                }
                /* LoopSeq 2 */
                for (signed char i_7 = 0; i_7 < 12; i_7 += 4) 
                {
                    var_25 = ((/* implicit */short) ((((unsigned int) (unsigned short)14)) + (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_0 + 1] [i_0 + 1])))))));
                    arr_24 [i_0] [i_1] = ((/* implicit */unsigned int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned char) arr_13 [i_0] [i_0] [7U] [i_7] [i_7])), (arr_0 [i_1] [i_7])))))));
                    var_26 = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) min(((unsigned short)5102), (((/* implicit */unsigned short) arr_23 [i_1] [i_1]))))), (((((/* implicit */_Bool) arr_6 [(unsigned char)1] [i_1])) ? (((/* implicit */int) arr_2 [(unsigned short)1])) : (((/* implicit */int) arr_17 [i_1]))))))) ? (((((/* implicit */_Bool) max((((/* implicit */int) arr_8 [i_0] [(_Bool)1] [(_Bool)1] [i_7])), (-2145953503)))) ? ((-(((/* implicit */int) arr_23 [i_1] [i_1])))) : (min((arr_15 [i_1] [i_1] [i_0]), (((/* implicit */int) arr_6 [i_7] [i_1])))))) : (min((((((/* implicit */int) arr_11 [i_0] [i_1] [i_7] [i_1] [i_1])) | (((/* implicit */int) (unsigned short)65535)))), (arr_18 [i_1] [i_1])))));
                    var_27 = ((/* implicit */int) min((var_27), (((((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (signed char)48)) : (((/* implicit */int) (signed char)-126))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_9 [i_0] [i_7] [i_1] [i_1] [i_1])), (arr_7 [i_7] [i_0 + 1] [i_7] [i_7])))))) ? (((/* implicit */int) ((unsigned short) arr_16 [i_7] [10] [i_7]))) : (max(((~(((/* implicit */int) arr_5 [i_0] [8ULL])))), (((((/* implicit */_Bool) arr_23 [i_7] [i_1])) ? (-536870912) : (-2145953487)))))))));
                }
                /* vectorizable */
                for (short i_8 = 0; i_8 < 12; i_8 += 1) 
                {
                    /* LoopNest 2 */
                    for (int i_9 = 4; i_9 < 10; i_9 += 1) 
                    {
                        for (unsigned int i_10 = 0; i_10 < 12; i_10 += 1) 
                        {
                            {
                                var_28 += ((/* implicit */signed char) arr_4 [(short)6]);
                                var_29 = ((/* implicit */_Bool) (-(((/* implicit */int) arr_30 [i_1] [i_0 + 1] [i_0 + 1]))));
                            }
                        } 
                    } 
                    var_30 &= ((/* implicit */long long int) ((_Bool) arr_10 [(_Bool)1] [(short)6] [i_1] [(short)6] [i_0]));
                    var_31 = ((/* implicit */unsigned long long int) ((arr_18 [i_1] [i_0 + 1]) - (arr_18 [i_1] [i_0 + 1])));
                    var_32 = ((/* implicit */signed char) arr_17 [i_1]);
                    var_33 = ((/* implicit */unsigned int) ((short) arr_18 [i_1] [i_0 + 1]));
                }
                /* LoopNest 2 */
                for (unsigned int i_11 = 2; i_11 < 11; i_11 += 3) 
                {
                    for (unsigned char i_12 = 2; i_12 < 10; i_12 += 2) 
                    {
                        {
                            var_34 = ((/* implicit */unsigned char) max((((/* implicit */long long int) min(((~(((/* implicit */int) (signed char)23)))), (((/* implicit */int) ((((/* implicit */_Bool) (signed char)-1)) || (((/* implicit */_Bool) -20)))))))), (arr_21 [(_Bool)1])));
                            var_35 ^= ((/* implicit */signed char) ((((arr_33 [i_0] [i_0] [i_11]) % (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_0] [i_1] [i_0] [i_12 - 2] [i_11 - 1]))))) << (min((0ULL), (((/* implicit */unsigned long long int) (_Bool)1))))));
                            var_36 -= ((/* implicit */signed char) max((((/* implicit */unsigned long long int) min((arr_21 [i_12]), (((/* implicit */long long int) max((((/* implicit */int) arr_25 [i_1] [i_1] [i_11] [i_12])), (arr_10 [(short)4] [i_12] [i_12 + 1] [i_12 + 1] [8U]))))))), (max((((/* implicit */unsigned long long int) arr_22 [i_0 + 1])), (((unsigned long long int) (unsigned char)7))))));
                        }
                    } 
                } 
            }
        } 
    } 
    var_37 = ((((var_13) % (((/* implicit */long long int) ((2145953493) | (((/* implicit */int) var_12))))))) | (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_12))) : (((((/* implicit */long long int) ((/* implicit */int) (unsigned short)51805))) & (var_4))))));
    var_38 = ((/* implicit */unsigned char) var_7);
    /* LoopSeq 2 */
    for (unsigned char i_13 = 2; i_13 < 18; i_13 += 2) 
    {
        var_39 -= ((/* implicit */int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -458995175))))), ((unsigned char)185)));
        var_40 = ((/* implicit */int) arr_38 [i_13]);
    }
    for (unsigned short i_14 = 1; i_14 < 18; i_14 += 2) 
    {
        var_41 = ((/* implicit */unsigned long long int) -6774733683012936063LL);
        var_42 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) (unsigned char)43))));
        var_43 *= ((/* implicit */short) (~((-9223372036854775807LL - 1LL))));
        var_44 *= ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_37 [i_14] [i_14])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [i_14] [i_14]))) : (((((/* implicit */_Bool) arr_39 [(unsigned short)2] [(unsigned short)2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_37 [(_Bool)1] [i_14]))) : (arr_39 [i_14 + 1] [10ULL]))))))));
    }
    var_45 ^= ((/* implicit */unsigned long long int) var_10);
}
