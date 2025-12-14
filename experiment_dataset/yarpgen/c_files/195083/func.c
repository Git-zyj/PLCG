/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195083
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195083 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195083
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
    var_12 = ((/* implicit */short) var_9);
    var_13 = ((/* implicit */_Bool) var_11);
    var_14 = ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) (short)8292))))) ? (8337671813808729239ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 8337671813808729238ULL)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            for (unsigned int i_2 = 2; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_7 [i_0] [i_0] [i_0] [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (((+(((/* implicit */int) arr_5 [i_0] [i_1] [i_2] [i_2])))) >> (((arr_2 [i_2] [i_0]) ? (18390324721633441997ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_1])))))))) ? (((/* implicit */unsigned long long int) ((long long int) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) (unsigned char)109)))))) : (arr_6 [i_0])));
                    arr_8 [3ULL] [i_1] [i_2] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_0 [i_0] [i_2])))))), ((~(arr_4 [i_2 - 2])))));
                    arr_9 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_0] [i_2 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0] [i_2 + 1]))) : (18390324721633441993ULL))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)108)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) arr_0 [i_0] [i_2 + 1])))))));
                }
            } 
        } 
        var_15 = (((-((+(((/* implicit */int) arr_1 [i_0])))))) != (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)714))) * (56419352076109618ULL)))) ? (((/* implicit */int) arr_0 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)144)))));
        /* LoopNest 2 */
        for (unsigned short i_3 = 0; i_3 < 11; i_3 += 2) 
        {
            for (unsigned int i_4 = 2; i_4 < 9; i_4 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned char) ((((/* implicit */long long int) arr_10 [i_4] [(unsigned short)7] [(unsigned short)7])) | (max((var_2), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)148)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned char)109)))))))));
                    var_17 = ((/* implicit */unsigned short) min((var_17), (((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (unsigned char)169)) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (((/* implicit */int) (signed char)-1)))))))))));
                    arr_15 [i_0] [i_3] [i_4] [i_4] = ((/* implicit */long long int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_5 [i_4 + 2] [i_4 - 2] [i_4 - 1] [i_0])) ? (((/* implicit */int) (unsigned char)133)) : (((/* implicit */int) (unsigned char)197))))) < (max((((/* implicit */unsigned int) arr_5 [i_4 - 2] [i_4 + 1] [i_4 - 2] [i_4])), (arr_10 [i_4 + 2] [i_4 - 1] [(_Bool)1])))));
                    var_18 = ((/* implicit */unsigned long long int) min((var_18), (((/* implicit */unsigned long long int) var_10))));
                    /* LoopNest 2 */
                    for (signed char i_5 = 0; i_5 < 11; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                var_19 = max((arr_10 [i_0] [i_3] [i_4]), (((/* implicit */unsigned int) ((_Bool) (unsigned char)148))));
                                var_20 = ((/* implicit */short) ((2912512767U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) 571411626U)) != (8910712079776593022LL)))))));
                                var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) (signed char)29))));
                                var_22 -= ((/* implicit */unsigned short) ((12647928024052081851ULL) >> (((((/* implicit */int) (short)17870)) - (17822)))));
                                arr_20 [i_3] [i_4] [i_6] = ((/* implicit */unsigned long long int) arr_17 [i_0] [i_0]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_21 [(short)1] = ((/* implicit */short) 18390324721633441993ULL);
    }
    for (signed char i_7 = 0; i_7 < 12; i_7 += 2) 
    {
        arr_25 [5U] [i_7] = ((/* implicit */_Bool) 56419352076109620ULL);
        var_23 = ((/* implicit */signed char) (((_Bool)1) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)30748)) : (((/* implicit */int) var_1))))) ? (-8910712079776593023LL) : (((/* implicit */long long int) ((/* implicit */int) arr_23 [i_7]))))) : (((/* implicit */long long int) ((/* implicit */int) arr_22 [i_7] [i_7])))));
        /* LoopNest 3 */
        for (signed char i_8 = 3; i_8 < 8; i_8 += 3) 
        {
            for (unsigned char i_9 = 0; i_9 < 12; i_9 += 4) 
            {
                for (short i_10 = 0; i_10 < 12; i_10 += 3) 
                {
                    {
                        var_24 |= ((/* implicit */short) ((((/* implicit */_Bool) ((unsigned char) (+(((/* implicit */int) arr_32 [i_10] [i_10] [i_10] [i_10] [i_10])))))) && (((arr_26 [i_8 - 1]) && (((/* implicit */_Bool) ((((/* implicit */int) arr_24 [i_7])) >> (((((/* implicit */int) arr_34 [i_7] [i_7] [i_8] [i_8] [i_9] [3ULL])) - (84))))))))));
                        /* LoopSeq 1 */
                        for (short i_11 = 2; i_11 < 10; i_11 += 1) 
                        {
                            var_25 = ((/* implicit */unsigned char) (signed char)44);
                            arr_37 [i_7] [i_7] [i_9] [i_7] [i_11] = ((/* implicit */unsigned char) ((((-1LL) + (9223372036854775807LL))) >> (((/* implicit */int) ((short) 0ULL)))));
                            arr_38 [i_7] [i_8] [i_7] [i_9] [i_8] [i_11] [i_11] = ((/* implicit */short) ((((/* implicit */_Bool) 1155793242U)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (18446744073709551615ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ? (18367444370384337288ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_22 [i_11 + 1] [i_8])) ? (((/* implicit */long long int) 3360625883U)) : (0LL))))));
                        }
                        arr_39 [i_7] [i_7] [i_9] [i_10] = ((/* implicit */long long int) 2036006640U);
                    }
                } 
            } 
        } 
        var_26 = ((/* implicit */long long int) var_11);
    }
}
