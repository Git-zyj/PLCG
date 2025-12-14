/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248712
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248712 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248712
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
    /* LoopSeq 4 */
    for (signed char i_0 = 0; i_0 < 18; i_0 += 2) 
    {
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) ((int) var_15))) ? (((/* implicit */int) (unsigned short)29882)) : (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))))) * (((unsigned int) ((unsigned int) (_Bool)0)))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 2; i_1 < 17; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 2) 
            {
                {
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 3; i_3 < 17; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 18; i_4 += 4) 
                        {
                            {
                                var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) ((((((/* implicit */int) (_Bool)1)) >> (((unsigned long long int) (signed char)0)))) < (((/* implicit */int) (unsigned char)75)))))));
                                var_19 = ((/* implicit */unsigned long long int) min((var_19), (((/* implicit */unsigned long long int) arr_0 [i_2]))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 18; i_5 += 1) 
                    {
                        for (short i_6 = 0; i_6 < 18; i_6 += 4) 
                        {
                            {
                                arr_20 [i_1] [i_1 - 2] [i_2] [i_5] [i_6] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (signed char)-19)) ? (((((/* implicit */_Bool) var_1)) ? (1518542781U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-2))))) : (((/* implicit */unsigned int) ((/* implicit */int) ((arr_19 [i_6] [i_6] [i_1]) <= (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))))))))) ^ (((((/* implicit */unsigned int) ((((/* implicit */int) arr_15 [i_1 + 1] [i_2] [i_2] [i_1 + 1] [i_0])) % (((/* implicit */int) var_5))))) & (((16383U) + (((/* implicit */unsigned int) ((/* implicit */int) arr_15 [i_6] [i_1 - 2] [i_5] [i_6] [i_6])))))))));
                                var_20 = ((/* implicit */short) 0U);
                                var_21 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((((/* implicit */_Bool) var_14)) ? (var_16) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-69))))) <= (((/* implicit */unsigned long long int) min((1206275092U), (((/* implicit */unsigned int) var_12))))))))) + (min((min((2091689395U), (((/* implicit */unsigned int) arr_15 [i_2] [i_1] [i_0] [i_0] [i_6])))), (((((/* implicit */_Bool) (short)-23907)) ? (((/* implicit */unsigned int) arr_10 [i_6] [i_6] [i_1] [i_1] [i_1 + 1] [i_0])) : (var_14)))))));
                            }
                        } 
                    } 
                    var_22 = ((/* implicit */unsigned short) min((var_22), (((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_15 [4U] [i_1] [i_0] [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_2))) : (2203277900U))))));
                }
            } 
        } 
    }
    /* vectorizable */
    for (unsigned int i_7 = 0; i_7 < 10; i_7 += 1) 
    {
        arr_23 [i_7] = ((arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]) + (arr_12 [i_7] [i_7] [i_7] [i_7] [i_7]));
        var_23 = ((/* implicit */unsigned char) (+(((/* implicit */int) var_7))));
    }
    for (unsigned short i_8 = 1; i_8 < 16; i_8 += 2) 
    {
        var_24 *= ((/* implicit */short) ((((/* implicit */int) (unsigned short)255)) - ((+(((/* implicit */int) var_13))))));
        arr_27 [i_8 + 2] [i_8] = ((/* implicit */unsigned char) max((((((/* implicit */int) arr_26 [i_8 + 3] [i_8 + 4])) / (((/* implicit */int) arr_26 [i_8 + 3] [i_8 - 1])))), (((/* implicit */int) min((((/* implicit */short) arr_26 [i_8 - 1] [i_8 + 1])), (var_7))))));
        var_25 *= ((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) arr_25 [(_Bool)1])) : (((/* implicit */int) (signed char)0)))) : (((/* implicit */int) max((arr_24 [i_8]), (((/* implicit */short) (unsigned char)31))))))), (((/* implicit */int) ((unsigned short) max((((/* implicit */unsigned long long int) arr_25 [i_8])), (var_16)))))));
        arr_28 [i_8 + 4] = ((/* implicit */short) ((((/* implicit */_Bool) min((268435455ULL), (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_26 [i_8] [i_8 + 1])))))))) ? (((((/* implicit */_Bool) arr_26 [i_8 + 4] [i_8 - 1])) ? ((+(var_11))) : (((unsigned int) arr_26 [i_8] [(unsigned char)9])))) : (((/* implicit */unsigned int) (+(((/* implicit */int) max((((/* implicit */short) arr_26 [i_8] [i_8])), (var_12)))))))));
    }
    for (signed char i_9 = 1; i_9 < 9; i_9 += 3) 
    {
        /* LoopNest 3 */
        for (short i_10 = 1; i_10 < 10; i_10 += 1) 
        {
            for (unsigned int i_11 = 0; i_11 < 11; i_11 += 1) 
            {
                for (int i_12 = 0; i_12 < 11; i_12 += 4) 
                {
                    {
                        arr_41 [i_11] = ((/* implicit */signed char) ((var_16) <= (((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) 3249498753U)) ? (arr_34 [i_9] [i_10 - 1] [i_11]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [14ULL] [i_10 - 1] [i_11] [i_12]))))), (((/* implicit */unsigned int) ((arr_8 [i_9] [i_9] [i_9 + 1] [i_11]) - (((/* implicit */int) (short)31563))))))))));
                        /* LoopSeq 1 */
                        for (short i_13 = 0; i_13 < 11; i_13 += 2) 
                        {
                            arr_45 [i_9] [i_10 - 1] [i_10 + 1] [i_9] [i_13] [i_11] [i_9] = ((/* implicit */unsigned int) (_Bool)1);
                            var_26 = ((/* implicit */short) ((_Bool) ((unsigned char) (+(((/* implicit */int) arr_40 [i_9] [i_9] [i_9 + 1] [i_9 + 1]))))));
                            arr_46 [i_9 + 2] [i_11] [i_11] [i_9 + 2] [i_13] = ((((/* implicit */_Bool) min((arr_24 [i_9 + 2]), (((/* implicit */short) arr_17 [i_13] [i_11] [i_11] [i_9]))))) ? ((-(((((/* implicit */_Bool) -1)) ? (var_14) : (((/* implicit */unsigned int) var_17)))))) : (((((((/* implicit */_Bool) (unsigned char)104)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)26))) : (var_14))) << (((((((/* implicit */_Bool) (short)4095)) ? (var_16) : (((/* implicit */unsigned long long int) var_6)))) - (15601327430250898387ULL))))));
                            var_27 = ((/* implicit */int) ((((((/* implicit */_Bool) arr_16 [i_9 - 1] [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_16 [i_9 + 2] [i_11]))) : (arr_14 [i_11] [i_10 - 1] [i_12] [i_12]))) / (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_16 [i_11] [i_11])) * (((/* implicit */int) (signed char)-12)))))));
                        }
                        var_28 = ((/* implicit */short) arr_34 [i_10] [i_11] [i_10]);
                    }
                } 
            } 
        } 
        arr_47 [i_9 + 2] = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */_Bool) arr_44 [i_9] [i_9 + 1] [(unsigned short)6] [i_9 + 1] [i_9 - 1])) && (((/* implicit */_Bool) arr_44 [i_9 + 1] [i_9] [(unsigned short)6] [4U] [i_9])))))));
    }
    var_29 = ((/* implicit */short) var_15);
    var_30 = ((/* implicit */_Bool) max(((+(((/* implicit */int) var_3)))), (((/* implicit */int) var_10))));
    var_31 = ((/* implicit */short) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) 14697002485054500610ULL)) ? (((/* implicit */int) (short)6588)) : (((/* implicit */int) (short)-28174))))) / (4294967295U)));
    var_32 = ((/* implicit */unsigned short) min((((((/* implicit */int) (unsigned char)255)) | (((/* implicit */int) (_Bool)0)))), ((~(((/* implicit */int) var_9))))));
}
