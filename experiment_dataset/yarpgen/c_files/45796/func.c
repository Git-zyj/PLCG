/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 45796
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=45796 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/45796
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
    var_12 = ((/* implicit */signed char) min((var_12), (((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned char)15)) << (((((/* implicit */int) (signed char)39)) - (36)))))) | (((((/* implicit */unsigned long long int) ((/* implicit */int) (short)1060))) | (1ULL))))) | (((/* implicit */unsigned long long int) ((((var_0) >> (((((/* implicit */int) var_2)) - (170))))) & (((/* implicit */unsigned int) ((((/* implicit */int) var_8)) | (((/* implicit */int) var_5)))))))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_13 = ((/* implicit */_Bool) ((((arr_1 [i_0]) >> (((-8967502498672683231LL) + (8967502498672683290LL))))) * (((/* implicit */long long int) ((var_0) % (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
        /* LoopSeq 4 */
        for (int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            var_14 = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned int) var_10)) != (4294967295U))))) <= (((((/* implicit */unsigned long long int) arr_1 [(unsigned char)11])) - (var_6)))));
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) var_4)) <= (((/* implicit */int) arr_4 [i_0] [i_0])))))) - (((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_0] [i_0]))) * (158884794U)))));
        }
        for (signed char i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
        {
            arr_8 [i_2] = ((/* implicit */_Bool) ((((4269786515963826084LL) / (((/* implicit */long long int) 158884794U)))) * (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
            var_15 = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_4 [i_0] [i_0])) <= (((/* implicit */int) (signed char)-6))))) < (((/* implicit */int) ((((/* implicit */unsigned long long int) var_11)) != (var_7))))));
            arr_9 [(signed char)21] [i_2] [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) 1738301893)) > (18446744073709551614ULL))))) ^ (((arr_1 [i_0]) | (var_11)))));
        }
        for (signed char i_3 = 0; i_3 < 24; i_3 += 2) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned int) ((((/* implicit */long long int) ((/* implicit */int) ((-1424004347127879357LL) <= (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0]))))))) / (((var_11) + (((/* implicit */long long int) 158884794U))))));
            /* LoopSeq 1 */
            for (long long int i_4 = 0; i_4 < 24; i_4 += 3) 
            {
                arr_15 [i_3] [i_3] &= ((/* implicit */int) ((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (short)(-32767 - 1)))))) * (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)0)) / (((/* implicit */int) arr_0 [i_0])))))));
                var_17 = ((/* implicit */unsigned long long int) ((((1558478396U) << (((((/* implicit */int) (signed char)-84)) + (114))))) ^ (4294967271U)));
            }
            var_18 |= ((((1558478384U) - (((/* implicit */unsigned int) ((/* implicit */int) arr_13 [i_0] [i_0] [(_Bool)1] [i_3]))))) * (((/* implicit */unsigned int) ((((/* implicit */int) (short)-1231)) - (((/* implicit */int) arr_6 [i_0]))))));
        }
        for (signed char i_5 = 0; i_5 < 24; i_5 += 2) /* same iter space */
        {
            var_19 = ((/* implicit */unsigned char) ((((18410715276690587648ULL) & (var_7))) << (((((var_1) & (var_0))) - (2182218006U)))));
            /* LoopSeq 1 */
            for (unsigned int i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                var_20 = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) ((608317225) <= (((/* implicit */int) (signed char)-104)))))) <= (((4294967295U) - (((/* implicit */unsigned int) ((/* implicit */int) (short)-29152)))))));
                arr_20 [i_5] [i_5] = ((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_5] [i_5]))) - (2736488931U))) != (((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-42)) % (((/* implicit */int) (signed char)-34)))))));
                /* LoopNest 2 */
                for (unsigned char i_7 = 0; i_7 < 24; i_7 += 1) 
                {
                    for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
                    {
                        {
                            var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_4 [i_6] [i_8]))) + (4136279163U)))) >= (((var_11) - (((/* implicit */long long int) ((/* implicit */int) (unsigned char)23)))))));
                            var_22 *= ((((/* implicit */int) ((((/* implicit */_Bool) -8967502498672683231LL)) && ((_Bool)1)))) < (((/* implicit */int) ((((/* implicit */_Bool) 8967502498672683231LL)) && (((/* implicit */_Bool) (-2147483647 - 1)))))));
                            arr_28 [(short)5] [i_0] = ((/* implicit */long long int) ((((((/* implicit */_Bool) 887246432)) || (((/* implicit */_Bool) -5964678090905903690LL)))) && (((((/* implicit */_Bool) arr_22 [i_0] [i_5] [(_Bool)1] [i_7] [(unsigned char)13])) && (arr_18 [i_0] [i_0])))));
                            arr_29 [i_0] [i_5] [i_5] [i_5] [17LL] [i_8] [i_5] = ((/* implicit */short) ((((var_7) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-27))))) < (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) var_1))))))));
                        }
                    } 
                } 
            }
            var_23 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) (short)16)) % (arr_22 [(unsigned char)6] [(unsigned char)6] [i_5] [i_5] [i_5])))) || (((((/* implicit */int) (short)13915)) != (((/* implicit */int) (unsigned short)64512))))));
        }
    }
    for (unsigned char i_9 = 0; i_9 < 22; i_9 += 4) 
    {
        var_24 = ((((/* implicit */long long int) ((((((/* implicit */int) arr_18 [i_9] [i_9])) >> (((arr_1 [20LL]) - (7028685907687167666LL))))) % (((((/* implicit */int) var_8)) << (((((/* implicit */int) var_4)) - (139)))))))) <= (((((var_11) | (((/* implicit */long long int) arr_24 [i_9] [i_9] [(_Bool)1] [i_9] [(_Bool)1] [(_Bool)1])))) / (((/* implicit */long long int) ((((/* implicit */int) (short)24352)) % (((/* implicit */int) var_4))))))));
        /* LoopNest 2 */
        for (unsigned char i_10 = 0; i_10 < 22; i_10 += 3) 
        {
            for (long long int i_11 = 1; i_11 < 21; i_11 += 4) 
            {
                {
                    var_25 = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) (signed char)74)) << (((/* implicit */int) (unsigned short)24))))) | (8967502498672683252LL))) != (((/* implicit */long long int) ((((((/* implicit */int) (_Bool)0)) + (((/* implicit */int) (short)-9)))) + (((/* implicit */int) ((((/* implicit */_Bool) arr_35 [i_9] [i_9] [i_9])) || (((/* implicit */_Bool) 158884794U))))))))));
                    var_26 = ((/* implicit */signed char) min((var_26), (((/* implicit */signed char) ((((/* implicit */int) ((((1384241857U) <= (((/* implicit */unsigned int) ((/* implicit */int) var_5))))) && (((/* implicit */_Bool) ((var_7) + (((/* implicit */unsigned long long int) 2147483647)))))))) + (((((/* implicit */int) ((-9223372036854775791LL) < (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_10])))))) * (((((/* implicit */int) arr_21 [i_10] [i_10] [23U] [23U])) * (((/* implicit */int) var_5)))))))))));
                }
            } 
        } 
        var_27 = ((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */int) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (signed char)-99))))) <= (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (short)16))) <= (arr_33 [i_9]))))))) * (((-404352861) + (((/* implicit */int) (signed char)117))))));
        arr_37 [i_9] [i_9] = ((/* implicit */unsigned long long int) ((((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) * (((/* implicit */int) arr_6 [23]))))) <= (((var_11) % (((/* implicit */long long int) ((/* implicit */int) (short)32767))))))) || (((/* implicit */_Bool) ((((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)255)))))) ^ (((((/* implicit */int) arr_4 [i_9] [i_9])) & (((/* implicit */int) arr_25 [i_9] [i_9] [(unsigned char)19] [i_9] [3U])))))))));
        arr_38 [i_9] = ((((/* implicit */_Bool) ((((/* implicit */long long int) ((287043821U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)255)))))) | (((-9223372036854775801LL) | (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))))))) || (((/* implicit */_Bool) ((((((/* implicit */int) (unsigned char)241)) * (0))) * (((/* implicit */int) (short)-32767))))));
    }
    var_28 -= ((158884797U) * (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */int) ((5964678090905903690LL) <= (((/* implicit */long long int) 1414499149))))) > (((/* implicit */int) (short)22432)))))));
}
