/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217403
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217403 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217403
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
    var_16 = ((/* implicit */int) min((((/* implicit */unsigned long long int) (~(max((((/* implicit */long long int) var_6)), (var_14)))))), (((((/* implicit */_Bool) max((var_14), (((/* implicit */long long int) var_10))))) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_1)))))));
    /* LoopSeq 2 */
    for (short i_0 = 0; i_0 < 10; i_0 += 2) 
    {
        var_17 += arr_0 [i_0] [i_0];
        var_18 |= arr_2 [i_0];
    }
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 3) 
    {
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_14)) ? (((((/* implicit */_Bool) max((((/* implicit */short) (_Bool)1)), (arr_5 [i_1] [i_1])))) ? (((/* implicit */int) ((((/* implicit */int) arr_5 [i_1] [i_1])) >= (arr_4 [i_1])))) : (((/* implicit */int) min((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))))) : ((+(arr_4 [i_1])))));
        /* LoopNest 3 */
        for (short i_2 = 0; i_2 < 11; i_2 += 4) 
        {
            for (unsigned short i_3 = 0; i_3 < 11; i_3 += 3) 
            {
                for (int i_4 = 0; i_4 < 11; i_4 += 2) 
                {
                    {
                        var_20 = ((/* implicit */unsigned short) (((!(((/* implicit */_Bool) (signed char)-67)))) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_8 [i_1] [i_3] [i_3] [i_3])) < (((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_10 [i_1] [i_2] [i_3])) : (((/* implicit */int) arr_9 [i_1] [i_2] [i_3])))))))) : (((((var_14) ^ (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1] [i_2] [i_3]))))) % (((/* implicit */long long int) ((/* implicit */int) ((short) arr_9 [i_1] [i_3] [i_3]))))))));
                        var_21 = ((/* implicit */signed char) max((max((1083373542), (((/* implicit */int) (_Bool)0)))), (max((((/* implicit */int) arr_11 [i_3] [i_4])), ((-(((/* implicit */int) (_Bool)1))))))));
                        /* LoopSeq 3 */
                        for (short i_5 = 1; i_5 < 9; i_5 += 3) 
                        {
                            arr_18 [i_1] [i_1] [i_1] [(_Bool)1] [i_1] [i_3] = ((/* implicit */_Bool) arr_14 [i_2] [i_2] [i_4] [i_3] [i_2] [(unsigned char)2]);
                            var_22 ^= ((/* implicit */unsigned char) arr_17 [i_1] [i_1] [i_1] [i_1] [i_5 - 1]);
                            arr_19 [i_1] [i_2] [i_3] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) var_12)) ? (((((/* implicit */_Bool) arr_15 [i_1] [i_1] [i_1] [i_3] [i_3] [i_4] [i_1])) ? (max((var_15), (((/* implicit */unsigned long long int) arr_16 [i_3])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_7 [i_2]))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_14 [i_1] [i_2] [i_3] [i_3] [i_4] [i_5 - 1]))))));
                            var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) (~(((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) (unsigned char)0)) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_2] [i_2] [i_2]))))))))))));
                        }
                        for (short i_6 = 2; i_6 < 9; i_6 += 3) 
                        {
                            arr_24 [i_2] [i_2] [i_3] [i_2] [i_6 + 1] [i_6 + 1] [i_3] = ((/* implicit */unsigned long long int) arr_22 [i_3] [(signed char)6] [i_3] [i_3] [(signed char)6]);
                            arr_25 [i_1] [8ULL] [i_3] [i_2] [i_3] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_15 [i_6] [i_6] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 - 1] [i_6]) > (((arr_17 [i_1] [3ULL] [i_1] [i_1] [i_1]) | (arr_15 [i_4] [i_4] [i_4] [i_4] [i_4] [i_4] [i_4]))))))) > (((unsigned long long int) (!(((/* implicit */_Bool) arr_10 [i_1] [i_2] [i_3])))))));
                            arr_26 [i_1] [i_1] [i_3] [i_1] [i_1] = ((/* implicit */signed char) 1015808U);
                            var_24 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [(unsigned short)10] [i_3] [i_2] [i_2])) ? (((/* implicit */int) arr_8 [i_1] [i_3] [i_4] [i_6])) : (((/* implicit */int) arr_6 [i_4]))))) ? (((unsigned long long int) (~(9007199221186560LL)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255))));
                        }
                        for (unsigned int i_7 = 4; i_7 < 10; i_7 += 3) 
                        {
                            var_25 = (i_3 % 2 == zero) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [i_3] [4LL] [(_Bool)1] [i_7 - 3])) >> (((((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_4] [i_7 - 3])) - (44)))))) ? (((/* implicit */int) max((arr_20 [i_7] [i_3] [i_3] [i_4] [i_7 + 1]), (arr_20 [i_2] [i_3] [i_3] [i_7] [i_7 - 2])))) : (((/* implicit */int) ((_Bool) arr_20 [i_1] [i_3] [i_4] [i_4] [i_7 - 4])))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_20 [i_2] [i_3] [4LL] [(_Bool)1] [i_7 - 3])) >> (((((((/* implicit */int) arr_20 [i_3] [i_3] [i_3] [i_4] [i_7 - 3])) - (44))) - (37)))))) ? (((/* implicit */int) max((arr_20 [i_7] [i_3] [i_3] [i_4] [i_7 + 1]), (arr_20 [i_2] [i_3] [i_3] [i_7] [i_7 - 2])))) : (((/* implicit */int) ((_Bool) arr_20 [i_1] [i_3] [i_4] [i_4] [i_7 - 4]))))));
                            var_26 *= ((/* implicit */unsigned char) max(((-(((/* implicit */int) (short)-32605)))), (((/* implicit */int) arr_21 [i_1] [i_1] [i_1] [i_1] [i_4]))));
                            var_27 = ((/* implicit */short) arr_13 [(short)3] [(short)3] [i_2] [i_4]);
                        }
                        arr_30 [i_3] [i_4] [i_3] [i_4] [i_3] |= ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) arr_5 [i_3] [i_3])), (arr_12 [i_1] [i_2] [i_2] [i_3] [i_2] [i_2])))), (var_9)));
                    }
                } 
            } 
        } 
    }
    var_28 = ((/* implicit */int) (signed char)32);
    var_29 = ((/* implicit */unsigned long long int) max((var_29), (((/* implicit */unsigned long long int) min(((+(((/* implicit */int) (_Bool)1)))), (min((((/* implicit */int) (short)32767)), (4161536))))))));
    var_30 |= ((/* implicit */unsigned char) max((((((/* implicit */unsigned long long int) var_3)) | (((((/* implicit */_Bool) 1689686495)) ? (((/* implicit */unsigned long long int) 588132070U)) : (var_15))))), (((/* implicit */unsigned long long int) var_6))));
}
