/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221561
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221561 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221561
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
    for (unsigned int i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            arr_5 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)73)) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)95))))))) ? (min((((/* implicit */unsigned int) ((((/* implicit */int) arr_2 [i_0] [i_0])) ^ (((/* implicit */int) arr_2 [i_0 - 1] [i_0]))))), (arr_1 [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (signed char)-36)) : (((/* implicit */int) (unsigned char)182))))) ? (var_7) : (((((/* implicit */int) arr_0 [i_0] [i_1])) - (((/* implicit */int) var_1)))))))));
            arr_6 [i_0] [(unsigned short)6] [i_1] = ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */short) (unsigned char)87)), (var_5))))))) - (((/* implicit */int) arr_2 [i_1] [(unsigned short)1])));
        }
        for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
            {
                for (signed char i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    {
                        var_12 = ((((/* implicit */_Bool) min(((-9223372036854775807LL - 1LL)), (-12LL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_2 [i_0 - 1] [i_3 - 1]))))) : (((((/* implicit */_Bool) -5513403196503623894LL)) ? (arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]) : (arr_15 [i_0 - 1] [i_0 - 1] [i_0] [i_0 - 1]))));
                        var_13 = ((/* implicit */unsigned long long int) min((var_13), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned int) (-(arr_4 [i_2] [i_3] [i_4]))))) ? (((/* implicit */int) var_4)) : (((((((/* implicit */_Bool) var_9)) || (var_10))) ? (((((/* implicit */_Bool) (unsigned char)189)) ? (((/* implicit */int) (unsigned char)138)) : (731619545))) : (((/* implicit */int) arr_7 [(_Bool)1] [i_0] [i_3 - 1])))))))));
                    }
                } 
            } 
            var_14 = ((/* implicit */unsigned long long int) min((arr_11 [i_0] [i_0] [(unsigned char)4] [i_2]), (((/* implicit */int) var_11))));
            arr_17 [i_0] [i_0] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_2]);
        }
        arr_18 [i_0] = ((/* implicit */unsigned char) ((unsigned long long int) min((((/* implicit */int) arr_12 [(signed char)8] [i_0] [i_0 + 1] [i_0])), ((-(((/* implicit */int) var_10)))))));
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0 - 1] [i_0] [2]))) : (var_9)));
        /* LoopSeq 1 */
        for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
        {
            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) arr_9 [i_0] [i_5]))));
            var_17 = ((/* implicit */_Bool) var_1);
        }
    }
    for (unsigned int i_6 = 0; i_6 < 17; i_6 += 2) 
    {
        arr_23 [i_6] = ((/* implicit */long long int) max(((+(((/* implicit */int) arr_22 [i_6])))), (((((/* implicit */int) arr_22 [7U])) - (((/* implicit */int) arr_22 [i_6]))))));
        arr_24 [5] &= ((/* implicit */unsigned char) var_10);
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */int) var_3)), (((((/* implicit */int) arr_22 [i_6])) ^ (((/* implicit */int) var_10))))))) ? (((/* implicit */unsigned int) (~(((/* implicit */int) arr_21 [i_6]))))) : (((unsigned int) -1317087987)))))));
        arr_25 [i_6] [(unsigned short)14] = ((/* implicit */int) min(((unsigned char)154), (((/* implicit */unsigned char) arr_21 [i_6]))));
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((min(((!(((/* implicit */_Bool) (signed char)0)))), ((!((_Bool)1))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_21 [i_6]))))) : (((((((/* implicit */_Bool) 2576959841U)) && (((/* implicit */_Bool) (unsigned char)195)))) ? (max((((/* implicit */int) var_2)), (var_7))) : (((((/* implicit */_Bool) arr_22 [i_6])) ? (((/* implicit */int) arr_22 [i_6])) : (((/* implicit */int) arr_21 [i_6]))))))));
    }
    for (unsigned int i_7 = 0; i_7 < 17; i_7 += 3) 
    {
        var_19 -= ((/* implicit */signed char) ((((((/* implicit */_Bool) min((((/* implicit */unsigned short) (_Bool)1)), (arr_22 [7])))) ? (((/* implicit */int) arr_21 [(_Bool)1])) : (-522979302))) - (((((/* implicit */_Bool) ((var_10) ? (((/* implicit */int) (unsigned char)182)) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) (!(var_11)))) : (((/* implicit */int) var_2))))));
        var_20 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_21 [i_7])), (-593909313251551109LL)))) ? (((/* implicit */int) arr_27 [i_7])) : (((((/* implicit */int) ((signed char) arr_28 [i_7]))) | (((((/* implicit */_Bool) arr_21 [i_7])) ? (((/* implicit */int) arr_27 [i_7])) : (((/* implicit */int) (unsigned char)61))))))));
        /* LoopSeq 1 */
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            var_21 ^= ((/* implicit */signed char) ((unsigned long long int) (+(((((/* implicit */int) (unsigned char)199)) - (((/* implicit */int) var_3)))))));
            arr_32 [i_8] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_22 [i_7])) : (((/* implicit */int) arr_22 [i_7]))))) ? (((((/* implicit */int) arr_22 [i_7])) / (((/* implicit */int) arr_22 [i_8])))) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_8])))))));
            var_22 = ((/* implicit */unsigned int) ((short) ((signed char) arr_21 [i_8])));
        }
        var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_30 [i_7]))));
        var_24 = ((/* implicit */int) max((var_24), (((/* implicit */int) min((((/* implicit */long long int) (signed char)83)), (((((/* implicit */_Bool) (signed char)-80)) ? (((/* implicit */long long int) 4163446772U)) : (-9223372036854775796LL))))))));
    }
    var_25 ^= ((/* implicit */unsigned long long int) var_0);
    var_26 = ((/* implicit */short) (~(((/* implicit */int) (signed char)68))));
    var_27 ^= ((/* implicit */long long int) ((signed char) min((((/* implicit */short) var_0)), (var_5))));
}
