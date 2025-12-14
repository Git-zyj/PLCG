/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207341
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207341 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207341
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
    for (signed char i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        for (unsigned char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                arr_6 [i_1] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0] [(short)20] [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : (arr_3 [i_0] [i_0] [i_1])))) ? (((/* implicit */long long int) ((arr_4 [i_0] [i_0] [i_1]) << (((arr_4 [i_1] [i_0] [i_0]) - (2173090860U)))))) : (((((/* implicit */_Bool) ((arr_4 [i_0] [i_0] [i_0]) >> (((arr_1 [i_1]) + (1818096691)))))) ? (((arr_2 [i_0]) * (((/* implicit */long long int) ((/* implicit */int) var_10))))) : (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_10))) - (var_9))))))));
                var_11 = ((/* implicit */unsigned long long int) (!(((5) != (((/* implicit */int) (short)26302))))));
                arr_7 [i_0] [i_0] [i_0] = ((((var_9) * (((/* implicit */unsigned int) (-(((/* implicit */int) (unsigned short)42929))))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)20039)) / (267140275)))));
                arr_8 [i_0] [i_1] = ((((642651832U) | (((/* implicit */unsigned int) -934130091)))) % (((/* implicit */unsigned int) ((/* implicit */int) var_5))));
                arr_9 [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((((arr_0 [i_1]) >> (((var_0) - (15242836))))) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [13])) ? (arr_1 [i_0]) : (((/* implicit */int) arr_5 [2] [i_0]))))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) ((var_9) >= (min((((/* implicit */unsigned int) arr_1 [i_0])), (arr_4 [i_0] [i_1] [i_0])))))))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (unsigned char i_2 = 2; i_2 < 23; i_2 += 2) 
    {
        for (unsigned int i_3 = 0; i_3 < 24; i_3 += 1) 
        {
            {
                /* LoopSeq 4 */
                for (long long int i_4 = 0; i_4 < 24; i_4 += 1) 
                {
                    /* LoopNest 2 */
                    for (unsigned long long int i_5 = 4; i_5 < 23; i_5 += 2) 
                    {
                        for (unsigned int i_6 = 0; i_6 < 24; i_6 += 1) 
                        {
                            {
                                var_12 = ((/* implicit */signed char) max((var_12), (((/* implicit */signed char) ((((/* implicit */int) (signed char)-105)) == (((/* implicit */int) (unsigned char)187)))))));
                                arr_22 [i_2] [(unsigned short)3] [i_4] [i_5] [i_2] = ((/* implicit */_Bool) arr_21 [i_2] [i_2] [i_4] [i_4] [i_6]);
                            }
                        } 
                    } 
                    var_13 += ((/* implicit */_Bool) (~(((((/* implicit */_Bool) var_2)) ? ((-(((/* implicit */int) arr_17 [i_2 + 1] [i_3] [i_4] [i_2])))) : (((/* implicit */int) var_8))))));
                    arr_23 [i_2] [i_4] [i_2] = ((/* implicit */unsigned int) max(((+(arr_21 [i_3] [i_3] [i_3] [3U] [i_2 + 1]))), (((arr_21 [i_2] [i_3] [i_2 - 1] [i_4] [i_4]) | (arr_21 [i_2] [i_3] [i_2 - 1] [15LL] [i_3])))));
                    var_14 = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (!(((/* implicit */_Bool) (signed char)105)))))))) ? (((/* implicit */unsigned int) (-(arr_21 [i_2 - 2] [i_2 + 1] [(_Bool)1] [i_2 - 1] [i_2])))) : ((~(arr_11 [i_2 + 1] [i_2 - 1])))));
                }
                for (long long int i_7 = 0; i_7 < 24; i_7 += 3) 
                {
                    var_15 += ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(arr_11 [i_2 - 2] [i_7])))) ? (((((/* implicit */unsigned int) ((/* implicit */int) var_4))) & (var_9))) : (((/* implicit */unsigned int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_6)))))))) ^ (((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_5))) ^ (arr_11 [i_2 - 1] [8])))) & (arr_13 [i_2 - 1]))));
                    var_16 = ((/* implicit */unsigned short) min((((arr_21 [16] [i_3] [(signed char)0] [16] [i_2 - 2]) ^ (arr_21 [i_7] [i_7] [i_3] [i_3] [0U]))), (((((/* implicit */int) arr_19 [(_Bool)1])) | (((/* implicit */int) var_3))))));
                    /* LoopNest 2 */
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        for (long long int i_9 = 2; i_9 < 21; i_9 += 4) 
                        {
                            {
                                var_17 = ((/* implicit */long long int) min((var_17), (((/* implicit */long long int) (~(((((/* implicit */int) arr_28 [i_2 - 2] [i_2 - 2] [i_2 + 1] [i_9 + 2] [i_9 - 2])) & (((/* implicit */int) arr_28 [i_2 - 2] [i_2 - 1] [i_2 + 1] [i_9 + 1] [i_9 + 3])))))))));
                                var_18 &= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_26 [i_2 - 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_24 [i_2 - 1] [i_9] [i_9] [i_9 + 3]))) : (var_9)))) ? ((~(((/* implicit */int) arr_24 [i_2 + 1] [(unsigned char)8] [i_2 + 1] [i_9 + 2])))) : (((((/* implicit */int) var_2)) << (((((/* implicit */int) arr_26 [i_2 - 1])) - (241)))))));
                                var_19 = ((arr_10 [i_2]) ? (((/* implicit */unsigned int) ((arr_28 [i_2 - 2] [i_9 + 2] [i_2 - 1] [i_2] [i_2 - 2]) ? (((/* implicit */int) arr_12 [i_2 - 1] [i_9 - 2])) : (arr_31 [i_2 - 2] [i_3] [i_9 - 1] [i_8] [i_8])))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_30 [i_8])) ? (arr_16 [i_2] [i_9]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_9 + 1])))))) ? (((/* implicit */unsigned int) var_0)) : (var_9))));
                                arr_33 [2U] [i_3] [i_8] [i_8] [(unsigned char)19] = ((/* implicit */_Bool) var_8);
                            }
                        } 
                    } 
                }
                for (signed char i_10 = 0; i_10 < 24; i_10 += 2) 
                {
                    var_20 += ((/* implicit */signed char) (+(arr_25 [i_2] [2] [i_10])));
                    /* LoopNest 2 */
                    for (signed char i_11 = 2; i_11 < 22; i_11 += 4) 
                    {
                        for (unsigned short i_12 = 0; i_12 < 24; i_12 += 4) 
                        {
                            {
                                var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) arr_29 [i_11] [i_2] [i_2 - 2])) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (arr_31 [i_2] [i_2] [i_10] [i_11] [i_11]) : (((/* implicit */int) var_2))))) || (((/* implicit */_Bool) (-(arr_27 [i_3] [i_10] [i_11 - 1] [i_12]))))))) : ((-(((/* implicit */int) var_8))))));
                                arr_41 [i_2] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))));
                                arr_42 [i_11 - 1] = ((/* implicit */signed char) ((((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)247))) <= (67108862U))) ? (((/* implicit */int) ((arr_21 [i_2] [i_2 - 2] [i_2] [i_11 + 2] [i_12]) != (arr_21 [i_2] [i_2 - 1] [i_10] [i_11 + 1] [(_Bool)1])))) : (((/* implicit */int) ((((/* implicit */int) arr_30 [i_11])) == (((/* implicit */int) arr_30 [i_12])))))));
                                var_22 = ((/* implicit */signed char) (((!(((/* implicit */_Bool) arr_30 [i_11])))) ? (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_30 [i_11])) : (((/* implicit */int) arr_30 [i_2])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_30 [i_10])))))));
                                arr_43 [i_12] [(_Bool)1] [22U] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_40 [i_11 - 2] [i_11] [i_11] [(short)5] [(short)5]))))), (((((/* implicit */_Bool) arr_40 [i_11 - 2] [i_11] [i_11 + 2] [i_11 + 1] [i_11 - 1])) ? (var_1) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_34 [i_2 - 2] [i_11 - 2] [i_11 + 1])))))));
                            }
                        } 
                    } 
                    /* LoopSeq 1 */
                    for (unsigned int i_13 = 0; i_13 < 24; i_13 += 2) 
                    {
                        var_23 = ((/* implicit */long long int) ((((((/* implicit */int) arr_14 [i_2 + 1])) | (((/* implicit */int) arr_14 [i_2 - 1])))) - ((+(((/* implicit */int) arr_14 [i_2 - 1]))))));
                        arr_46 [i_2 - 1] [i_2 + 1] [i_3] [i_10] [i_10] [i_3] = ((/* implicit */signed char) (-(((/* implicit */int) min((((/* implicit */signed char) arr_10 [i_2 + 1])), (arr_40 [i_13] [i_10] [i_2 - 1] [(short)9] [i_2 - 1]))))));
                        arr_47 [i_3] [i_10] = ((/* implicit */unsigned long long int) var_7);
                    }
                    /* LoopNest 2 */
                    for (unsigned int i_14 = 0; i_14 < 24; i_14 += 4) 
                    {
                        for (short i_15 = 1; i_15 < 20; i_15 += 4) 
                        {
                            {
                                var_24 = ((/* implicit */_Bool) max((var_24), (((/* implicit */_Bool) (-(((/* implicit */int) ((arr_25 [i_2] [i_2 - 1] [i_15 + 3]) > (((/* implicit */long long int) arr_16 [i_2 - 2] [i_2 - 2]))))))))));
                                var_25 += ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((((/* implicit */int) arr_53 [i_2] [i_3] [i_10] [i_14] [i_15])) >> (((((/* implicit */int) arr_14 [i_2 + 1])) - (128)))))) | ((-(arr_39 [i_2 - 1] [i_2 - 1] [i_2 + 1] [i_2] [i_2] [i_2] [i_2])))))) ? (((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 141227571U)) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (unsigned char)120))))) || (((/* implicit */_Bool) ((((/* implicit */int) (signed char)1)) ^ (((/* implicit */int) (signed char)35)))))))) : (((arr_10 [i_2 + 1]) ? (((/* implicit */int) arr_10 [i_2 - 2])) : (((/* implicit */int) arr_10 [i_2 - 1]))))));
                                arr_54 [i_14] [i_3] [i_10] [i_10] [i_15] = ((/* implicit */unsigned int) (~((-(((/* implicit */int) (signed char)59))))));
                                var_26 = ((/* implicit */signed char) (~(min((arr_16 [i_2 - 2] [i_2 - 1]), (141227587U)))));
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_38 [i_2 + 1] [i_2 - 1] [i_2])) || (((/* implicit */_Bool) arr_38 [i_2] [i_2 - 2] [i_2]))))) >> (((/* implicit */int) ((arr_44 [i_2] [i_2] [i_2] [i_2] [i_2 - 2] [i_2]) && (((/* implicit */_Bool) arr_34 [i_2] [i_2] [i_2 - 2])))))));
                }
                for (unsigned int i_16 = 2; i_16 < 22; i_16 += 1) 
                {
                    /* LoopSeq 1 */
                    for (short i_17 = 4; i_17 < 23; i_17 += 3) 
                    {
                        arr_61 [i_16] [i_16] [i_2 - 1] [i_16] = ((/* implicit */signed char) min((((/* implicit */int) (!(((/* implicit */_Bool) var_9))))), (((arr_31 [i_2] [i_3] [i_16 + 2] [i_17] [i_16]) ^ (((/* implicit */int) arr_60 [i_2] [i_3] [i_16] [i_17]))))));
                        arr_62 [i_16] [(_Bool)1] [i_3] [i_16] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_53 [i_17] [i_17] [19LL] [(_Bool)1] [i_17 - 3])) ? (var_0) : (((/* implicit */int) var_5))))) ? (arr_51 [i_2] [i_3] [i_16 - 1] [i_17 - 3]) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_4))))))) ^ (((/* implicit */long long int) max((((/* implicit */unsigned int) arr_21 [i_2] [i_3] [2] [i_17 + 1] [i_17])), (max((((/* implicit */unsigned int) (unsigned short)20027)), (33554400U))))))));
                        arr_63 [i_2] [i_16] [i_2] [i_16] [i_2] [20LL] = max((((((/* implicit */int) arr_12 [i_2 - 2] [i_2])) - (((/* implicit */int) arr_12 [i_2 - 2] [i_2])))), (((/* implicit */int) (!(((/* implicit */_Bool) var_5))))));
                        arr_64 [i_16] [i_16 + 2] [i_2 - 1] [i_16] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_2 - 1] [i_16 + 2] [i_17 - 4] [i_17 - 4])) * (((/* implicit */int) arr_24 [i_2 - 2] [i_16 + 1] [i_17 - 3] [i_16 + 1])))))));
                    }
                    var_28 = ((/* implicit */short) arr_11 [i_2] [16U]);
                    arr_65 [i_2 - 2] [i_16] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */int) (!(arr_20 [i_16 - 2] [i_3] [i_16 - 1] [i_2] [i_2 + 1])))) <= (((/* implicit */int) ((4261412896U) != (((/* implicit */unsigned int) ((/* implicit */int) (short)20396))))))));
                }
                arr_66 [i_2 - 2] [i_3] [i_3] = ((/* implicit */unsigned int) ((arr_38 [i_2 - 1] [i_2 + 1] [i_2 - 1]) / (((/* implicit */long long int) ((/* implicit */int) arr_60 [i_2] [15U] [i_2 - 2] [i_2 - 1])))));
                var_29 ^= ((/* implicit */signed char) ((((/* implicit */int) (!(var_6)))) + (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_55 [i_3])))))))));
                arr_67 [i_2] [i_2] [i_3] = ((/* implicit */_Bool) (+(((/* implicit */int) (!(arr_57 [i_2 + 1] [i_2 - 1] [i_2] [i_2]))))));
            }
        } 
    } 
}
