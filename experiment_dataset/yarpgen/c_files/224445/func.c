/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224445
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224445 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224445
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
    var_12 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) 7993035210887509546ULL)) ? (3657747895690760914ULL) : (var_6))) == (((/* implicit */unsigned long long int) ((min((var_3), (((/* implicit */unsigned int) (signed char)112)))) & (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned char) (signed char)35)), (var_8))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 9; i_1 += 2) 
        {
            for (short i_2 = 3; i_2 < 9; i_2 += 1) 
            {
                {
                    arr_8 [i_0] [i_0] [i_2] [i_0] = ((/* implicit */unsigned short) (~((+(((((/* implicit */_Bool) -5824431634600117072LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) arr_2 [i_0]))))))));
                    arr_9 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((short) 1871325257))) ? (((/* implicit */int) ((unsigned char) arr_6 [i_0] [i_0] [i_0] [i_0]))) : (min((-1871325258), (-1)))));
                    arr_10 [i_0] [(short)1] [i_2] [8ULL] = ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_0] [(signed char)1])) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_2])) ? (max((((/* implicit */unsigned long long int) var_1)), (arr_5 [i_0] [i_0]))) : (((/* implicit */unsigned long long int) arr_4 [i_1] [(signed char)2])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) min((((/* implicit */unsigned long long int) (short)(-32767 - 1))), (15658195069586669810ULL))))))));
                    /* LoopSeq 4 */
                    for (signed char i_3 = 1; i_3 < 7; i_3 += 3) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_4 = 0; i_4 < 10; i_4 += 3) 
                        {
                            var_13 *= ((/* implicit */unsigned short) var_10);
                            arr_15 [i_2] [i_1] [i_2] [i_3] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) ((arr_7 [i_2] [i_2] [7U] [7ULL]) || (((/* implicit */_Bool) var_3))))) ^ (((((/* implicit */_Bool) 12876664518620929806ULL)) ? (((/* implicit */int) arr_12 [i_3])) : ((-2147483647 - 1))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) (short)-3111)))) : (min((10U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)73)) ? (((/* implicit */int) (signed char)-23)) : ((-2147483647 - 1)))))))));
                            var_14 = ((/* implicit */unsigned short) min((var_14), (((/* implicit */unsigned short) max((((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)127))))) ? (var_11) : (((/* implicit */long long int) ((/* implicit */int) var_2))))), (((/* implicit */long long int) arr_7 [i_1] [i_2] [4] [i_1])))))));
                            var_15 -= ((/* implicit */signed char) ((((/* implicit */int) (unsigned char)185)) >= (2147483647)));
                            arr_16 [i_2] [3U] [i_2] [i_3] [(short)5] [3U] [3U] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((var_6), (((/* implicit */unsigned long long int) var_3))))) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_2))));
                        }
                        arr_17 [i_0] [i_0] [(unsigned short)8] [i_1] [i_3] [i_3] &= ((/* implicit */unsigned char) (~(((/* implicit */int) var_10))));
                        var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_6)) ? (((arr_12 [i_2]) ? (-1714673507113714380LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [7U] [i_1] [i_1] [i_3]))))) : (((/* implicit */long long int) ((/* implicit */int) max((((unsigned char) -1730851587)), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) arr_13 [i_0] [i_2])))))))))));
                        var_17 = ((/* implicit */unsigned int) (((-(arr_5 [i_0] [i_0]))) >= (((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_7 [i_2] [i_2] [i_2] [i_2])) << (((/* implicit */int) arr_12 [i_0])))) >> (((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (arr_11 [(unsigned char)4] [i_1] [i_1] [i_2]))) - (124))))))));
                        var_18 = ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_14 [i_0] [i_2] [i_1] [i_0] [i_0]))))), (max((arr_13 [i_1] [i_2]), (((/* implicit */unsigned long long int) arr_0 [(signed char)0] [(signed char)0]))))))) ? (((/* implicit */int) ((unsigned char) var_2))) : (((/* implicit */int) max((((/* implicit */signed char) ((((/* implicit */unsigned long long int) arr_11 [i_0] [i_0] [i_0] [i_2])) <= (6442193216873072292ULL)))), (min(((signed char)-2), ((signed char)-11)))))));
                    }
                    /* vectorizable */
                    for (unsigned int i_5 = 2; i_5 < 8; i_5 += 2) /* same iter space */
                    {
                        var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned short) var_8))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_1]))) * (arr_4 [i_1] [i_1]))) : (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_0] [i_1 + 1] [i_2 - 1] [i_2] [i_2 - 1])))));
                        var_20 = ((/* implicit */unsigned long long int) var_7);
                        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((arr_12 [i_0]) ? (((/* implicit */int) arr_18 [4U])) : (((/* implicit */int) var_5))))) : ((~(arr_4 [(short)7] [i_2]))))))));
                    }
                    for (unsigned int i_6 = 2; i_6 < 8; i_6 += 2) /* same iter space */
                    {
                        var_22 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [i_0] [i_1 + 1])) >> (((536870896U) - (536870870U)))))) ? (max((((/* implicit */unsigned int) arr_1 [i_0] [i_1 - 2])), (3103378775U))) : (((/* implicit */unsigned int) ((/* implicit */int) min((arr_1 [i_1] [i_1 + 1]), (arr_1 [i_1] [i_1 + 1])))))));
                        var_23 &= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)46619)) * (((/* implicit */int) (short)-26072))));
                    }
                    for (unsigned int i_7 = 2; i_7 < 8; i_7 += 2) /* same iter space */
                    {
                        var_24 ^= ((/* implicit */unsigned char) min(((signed char)-81), ((signed char)47)));
                        arr_25 [i_2] = ((/* implicit */signed char) arr_7 [i_2] [i_1] [i_2] [i_2]);
                        var_25 += ((/* implicit */unsigned int) arr_13 [i_1 - 2] [i_7]);
                        arr_26 [i_2] [i_1] [i_1] [(short)9] = ((/* implicit */unsigned long long int) (-(((((/* implicit */_Bool) arr_21 [i_0] [i_1] [i_0] [i_7 - 2])) ? (((/* implicit */int) arr_12 [i_1])) : (((/* implicit */int) arr_12 [i_0]))))));
                        arr_27 [i_1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) min((arr_23 [i_0] [i_0] [(signed char)7] [i_0]), (((/* implicit */int) (unsigned short)0))))) ? (((((/* implicit */_Bool) arr_4 [(unsigned char)6] [(unsigned char)6])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_0))) : (arr_4 [i_0] [i_7 - 2]))) : (((/* implicit */unsigned int) ((((((/* implicit */int) (unsigned char)0)) % (((/* implicit */int) (unsigned char)181)))) * (((/* implicit */int) arr_14 [i_0] [i_1] [i_1] [i_2 - 1] [3])))))));
                    }
                    arr_28 [i_2] = ((/* implicit */long long int) arr_18 [i_2]);
                }
            } 
        } 
    } 
    var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((((short) var_11)), (((/* implicit */short) var_10))))) && (((/* implicit */_Bool) var_10))));
    var_27 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) var_7)) : (144115179485921280ULL)))) ? (((/* implicit */int) var_0)) : ((-(((/* implicit */int) var_8))))))) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */signed char) (_Bool)1))))) ? (((((/* implicit */_Bool) (unsigned char)61)) ? (15658195069586669810ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)10))))) : (((((/* implicit */_Bool) var_11)) ? (6443442590507024938ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0))))))) : (((/* implicit */unsigned long long int) ((var_3) * (((((/* implicit */_Bool) (unsigned char)82)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (var_3))))))));
}
