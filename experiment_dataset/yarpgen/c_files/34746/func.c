/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34746
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34746 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34746
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
    for (int i_0 = 4; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 17; i_1 += 3) 
        {
            var_11 = ((/* implicit */unsigned char) ((((/* implicit */long long int) min((((((/* implicit */_Bool) 1346378132)) ? (511) : (((/* implicit */int) (signed char)109)))), (((/* implicit */int) ((arr_4 [(unsigned short)4] [(unsigned short)4]) > (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))))) > (((((/* implicit */_Bool) ((arr_3 [i_0] [13] [(unsigned short)8]) ? (2128265967172431014LL) : (((/* implicit */long long int) -550617760))))) ? (((arr_3 [5LL] [5LL] [19U]) ? (arr_4 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0]))))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_3 [i_0] [3ULL] [3ULL])))))))));
            var_12 = ((/* implicit */signed char) (+(((((/* implicit */int) arr_2 [i_0 - 3])) / (((/* implicit */int) arr_2 [i_0 + 1]))))));
            arr_6 [i_0] [2LL] = ((/* implicit */unsigned short) (((~(2128265967172431014LL))) + (((/* implicit */long long int) ((/* implicit */int) ((short) ((((/* implicit */_Bool) arr_4 [i_0] [1LL])) ? (arr_1 [13LL] [(_Bool)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [18ULL]))))))))));
            var_13 = min((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */unsigned long long int) arr_4 [i_0 - 1] [i_1 - 1])) : (((arr_3 [i_0] [(signed char)8] [(signed char)8]) ? (6168615371448857197ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0] [13ULL]))))))), (((/* implicit */unsigned long long int) arr_2 [i_0])));
            /* LoopSeq 3 */
            for (unsigned short i_2 = 1; i_2 < 18; i_2 += 4) 
            {
                var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) ((max((((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [(unsigned char)18] [(short)1] [i_0]))) - (arr_4 [13LL] [12LL])))), (max((arr_1 [i_2] [(signed char)4]), (((/* implicit */unsigned long long int) arr_0 [(_Bool)1])))))) - (((((/* implicit */_Bool) arr_0 [i_2])) ? (((/* implicit */unsigned long long int) arr_5 [i_0 - 2])) : ((-(17179869184ULL))))))))));
                var_15 *= ((/* implicit */signed char) (~(((/* implicit */int) (((~(-498098860))) <= (((/* implicit */int) min((arr_7 [12ULL] [i_0] [12ULL] [i_0]), (arr_3 [i_0] [i_0] [i_0])))))))));
                arr_9 [i_0] [i_0] [i_0] |= ((/* implicit */unsigned long long int) arr_3 [i_0] [i_0] [i_0]);
                arr_10 [i_2] = ((/* implicit */short) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) -2128265967172431015LL)) ? (((/* implicit */int) (unsigned short)36152)) : (((/* implicit */int) (unsigned char)201))))) ? ((~(((/* implicit */int) arr_2 [14LL])))) : (((/* implicit */int) arr_3 [i_0] [0] [i_0])))), (((((/* implicit */int) (signed char)31)) | (((/* implicit */int) (_Bool)1))))));
            }
            /* vectorizable */
            for (unsigned char i_3 = 1; i_3 < 17; i_3 += 2) 
            {
                var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (signed char)117)) || ((_Bool)1)));
                arr_13 [17] [17] [(_Bool)1] [17] = ((/* implicit */signed char) ((((/* implicit */_Bool) 498098859)) ? (((/* implicit */long long int) ((/* implicit */int) ((unsigned char) 18446744073709551615ULL)))) : (arr_11 [i_1] [i_3 - 1] [i_1])));
            }
            for (long long int i_4 = 1; i_4 < 19; i_4 += 3) 
            {
                var_17 -= ((/* implicit */unsigned short) max((((/* implicit */long long int) max((((/* implicit */int) arr_7 [i_4 + 1] [i_0] [i_1 + 2] [i_4 + 1])), (((((/* implicit */int) arr_8 [0] [0])) | (((/* implicit */int) (_Bool)1))))))), (((((/* implicit */_Bool) arr_11 [i_0] [(unsigned short)18] [(unsigned short)10])) ? (max((((/* implicit */long long int) (_Bool)1)), (-2128265967172430999LL))) : (((/* implicit */long long int) ((/* implicit */int) max((((/* implicit */unsigned char) (signed char)-101)), ((unsigned char)4)))))))));
                arr_16 [15ULL] [15] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) ((((arr_15 [12ULL]) + (9223372036854775807LL))) >> (((/* implicit */int) arr_0 [i_0]))))), (min((((/* implicit */unsigned long long int) (short)-14428)), (18446744073709551615ULL)))))) ? ((~(arr_14 [i_0] [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) ((arr_2 [i_1 + 1]) || (((/* implicit */_Bool) -2128265967172430999LL))))))));
                var_18 = ((/* implicit */signed char) max((var_18), (((/* implicit */signed char) (~(arr_14 [i_0] [(short)11] [(signed char)18] [(signed char)17]))))));
                var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) ((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_3 [i_0 - 2] [i_1 - 1] [i_4 + 1]))))) / (((unsigned long long int) arr_5 [i_0])))))));
            }
        }
        arr_17 [(unsigned short)14] = min((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)0))) / (17713218191732841970ULL))), (((/* implicit */unsigned long long int) (((+(((/* implicit */int) arr_3 [(_Bool)1] [(_Bool)1] [(_Bool)1])))) - (min((arr_5 [i_0]), (arr_5 [10])))))));
        var_20 = ((/* implicit */long long int) (((((~(((/* implicit */int) (signed char)48)))) + (2147483647))) >> ((((-(511))) + (524)))));
        var_21 = max((((arr_7 [(_Bool)1] [i_0] [i_0 - 2] [16]) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)-3))))) : (max((0ULL), (((/* implicit */unsigned long long int) (unsigned char)192)))))), (((/* implicit */unsigned long long int) (_Bool)1)));
    }
    var_22 += ((/* implicit */unsigned short) var_2);
    var_23 = max((((/* implicit */unsigned int) (+(var_8)))), (4294967295U));
}
