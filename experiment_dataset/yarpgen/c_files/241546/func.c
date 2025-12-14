/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241546
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241546 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241546
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
    for (long long int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        /* LoopSeq 2 */
        for (short i_1 = 0; i_1 < 24; i_1 += 1) 
        {
            arr_7 [i_0] [i_1] [i_1] = ((/* implicit */long long int) min(((+(((/* implicit */int) ((arr_6 [i_0] [i_1]) <= (((/* implicit */int) var_2))))))), (((/* implicit */int) ((((/* implicit */int) var_8)) > ((~(((/* implicit */int) var_3)))))))));
            var_12 = ((/* implicit */unsigned short) min((min((arr_2 [i_1]), (((/* implicit */long long int) 389688719)))), (((/* implicit */long long int) ((((/* implicit */int) var_1)) << (((arr_2 [i_0]) + (5327927864632557528LL))))))));
            /* LoopNest 2 */
            for (long long int i_2 = 2; i_2 < 23; i_2 += 3) 
            {
                for (signed char i_3 = 4; i_3 < 22; i_3 += 2) 
                {
                    {
                        arr_13 [i_1] = ((/* implicit */long long int) min(((_Bool)1), ((!(arr_12 [i_0] [i_0] [i_1] [i_3 - 4] [1])))));
                        var_13 |= ((/* implicit */long long int) ((((/* implicit */_Bool) ((389688719) + (((/* implicit */int) ((-1LL) == (-4508158902706847981LL))))))) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) 6404633165910255198LL)) ? (((/* implicit */int) (_Bool)0)) : (((/* implicit */int) (unsigned char)255)))), (((/* implicit */int) (_Bool)0))))) : (4294967295U)));
                        var_14 -= ((/* implicit */int) max(((short)-1991), (((/* implicit */short) ((((((/* implicit */_Bool) 41439446)) ? (-1LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) == (((/* implicit */long long int) ((/* implicit */int) ((1) <= (((/* implicit */int) var_7)))))))))));
                        arr_14 [i_0] [i_0] [i_0] [i_1] [i_1] [i_3 + 2] = ((/* implicit */signed char) ((((/* implicit */int) arr_1 [i_0])) == (((/* implicit */int) ((arr_5 [i_3 + 2] [i_3 - 4]) != (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_1)))))))));
                        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) (+(((/* implicit */int) var_7)))))) ? (max((((/* implicit */int) var_7)), (1))) : (((/* implicit */int) min(((unsigned char)5), (arr_4 [i_3 - 1] [i_3] [i_3 - 4])))))))));
                    }
                } 
            } 
            /* LoopSeq 2 */
            for (unsigned int i_4 = 0; i_4 < 24; i_4 += 2) 
            {
                var_16 &= ((/* implicit */unsigned long long int) ((long long int) max((((/* implicit */long long int) (-(((/* implicit */int) arr_1 [i_4]))))), (-9LL))));
                var_17 = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_10)), (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1] [i_1] [i_4]))))), (max((((/* implicit */unsigned long long int) 1747239764607366649LL)), (18446744073709551615ULL)))))));
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((min((((((/* implicit */_Bool) arr_1 [i_1])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned long long int) ((arr_15 [i_1] [i_1] [i_0] [i_1]) ? (((/* implicit */int) (unsigned short)41877)) : (((/* implicit */int) arr_4 [i_0] [i_1] [i_1]))))))), (((/* implicit */unsigned long long int) ((arr_5 [i_0] [i_1]) > (((/* implicit */int) var_2))))))))));
            }
            for (unsigned char i_5 = 0; i_5 < 24; i_5 += 3) 
            {
                var_19 *= ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) + (max((7406856606855759034ULL), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)1)))))))));
                var_20 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0] [i_0])) + (((/* implicit */int) arr_11 [18]))))) && (arr_15 [i_0] [i_0] [i_1] [(unsigned short)8]))))));
            }
            var_21 &= (~(((((/* implicit */int) min((((/* implicit */unsigned short) var_5)), ((unsigned short)48178)))) % (((((/* implicit */_Bool) (unsigned char)255)) ? (var_0) : (((/* implicit */int) var_4)))))));
        }
        for (unsigned char i_6 = 0; i_6 < 24; i_6 += 2) 
        {
            arr_22 [i_0] [i_0] [(unsigned short)10] = ((/* implicit */int) ((((/* implicit */_Bool) ((41439446) & (((/* implicit */int) var_2))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_21 [i_0] [i_6] [i_6]))) : (min((10373214624866726710ULL), (((/* implicit */unsigned long long int) (unsigned short)56811))))));
            arr_23 [i_6] [i_6] = ((/* implicit */unsigned long long int) ((unsigned int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 1889162320822195415LL))))))));
            var_22 = ((/* implicit */int) (unsigned short)65535);
        }
        arr_24 [i_0] |= ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_18 [i_0] [i_0] [i_0] [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (arr_18 [i_0] [i_0] [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (long long int i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            for (unsigned int i_8 = 2; i_8 < 23; i_8 += 2) 
            {
                {
                    arr_30 [i_8] [i_8 - 1] [i_8] = ((/* implicit */_Bool) max((max((((long long int) 41439455)), (((/* implicit */long long int) var_8)))), (((/* implicit */long long int) (short)7))));
                    var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) ((((/* implicit */int) max((var_5), (((/* implicit */unsigned char) arr_12 [i_0] [(unsigned char)10] [i_8 - 2] [i_0] [i_7]))))) <= (((/* implicit */int) ((((/* implicit */int) arr_12 [i_0] [i_0] [i_8 - 2] [i_0] [i_7])) <= (((/* implicit */int) var_7))))))))));
                }
            } 
        } 
        arr_31 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) >= (((/* implicit */int) var_3)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0])) ? (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0])) : (((/* implicit */int) arr_16 [i_0] [i_0] [i_0] [i_0]))))) : ((~(358887041U)))));
    }
    var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((((/* implicit */int) var_11)) >> (((/* implicit */int) var_8)))) << (((((/* implicit */int) min((((/* implicit */signed char) var_7)), (var_2)))) + (97)))))) ? ((+(((/* implicit */int) var_6)))) : (((((/* implicit */_Bool) (+((-9223372036854775807LL - 1LL))))) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1))))));
}
