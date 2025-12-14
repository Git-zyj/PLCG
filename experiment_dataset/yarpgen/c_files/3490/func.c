/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3490
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3490 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3490
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
    var_12 = ((/* implicit */short) var_7);
    var_13 = ((/* implicit */unsigned int) var_1);
    var_14 = ((/* implicit */unsigned char) max((var_14), (((/* implicit */unsigned char) min((var_9), (var_10))))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 4; i_1 < 9; i_1 += 4) 
        {
            {
                var_15 = ((/* implicit */short) (~(var_1)));
                arr_5 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_3 [i_0] [i_0] [i_0])) ? (((/* implicit */int) var_7)) : ((~(((/* implicit */int) min(((unsigned short)18324), (((/* implicit */unsigned short) var_2)))))))));
                var_16 -= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_1 [i_1] [i_1])) ? (max((var_6), (min((((/* implicit */unsigned long long int) (unsigned short)47235)), (var_6))))) : (((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_0 [i_1])) : (((/* implicit */int) var_5)))) << (((((((/* implicit */int) arr_0 [(_Bool)1])) * (((/* implicit */int) var_10)))) - (91433449))))))));
                /* LoopSeq 4 */
                for (unsigned short i_2 = 0; i_2 < 11; i_2 += 4) 
                {
                    arr_8 [i_0] [i_1 - 4] [(unsigned short)4] = arr_4 [(unsigned short)7] [(unsigned short)9] [i_1];
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 11; i_3 += 3) 
                    {
                        var_17 += ((/* implicit */signed char) ((((((((/* implicit */int) var_8)) != (arr_3 [i_2] [(short)0] [i_0]))) ? (arr_7 [i_0 + 1] [i_1 - 1] [5U]) : (((/* implicit */unsigned int) arr_3 [i_1 + 1] [i_1 + 2] [i_0 + 1])))) < (((/* implicit */unsigned int) max((((/* implicit */int) ((((/* implicit */_Bool) var_7)) || (((/* implicit */_Bool) var_9))))), (arr_3 [i_1 - 3] [i_0 + 1] [i_0 + 1]))))));
                        var_18 = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)47211))) % (2590880285U)))), ((((+(18446744073709551615ULL))) * (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_9)) : (arr_3 [i_2] [(short)0] [i_0]))))))));
                        arr_11 [(signed char)10] [(unsigned short)5] [i_2] [i_2] = ((/* implicit */unsigned long long int) arr_1 [i_3] [i_0]);
                        arr_12 [5ULL] [i_1] [i_1 - 2] [i_1] = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_9)) : ((+(((/* implicit */int) (unsigned short)1824)))))) & ((-(((/* implicit */int) arr_6 [i_0 + 1]))))));
                    }
                }
                for (unsigned int i_4 = 0; i_4 < 11; i_4 += 4) 
                {
                    var_19 = ((/* implicit */unsigned long long int) (~(1279273023U)));
                    arr_16 [i_0] [i_1] = ((/* implicit */unsigned short) (~(((/* implicit */int) var_2))));
                    var_20 = ((/* implicit */unsigned short) var_3);
                }
                for (unsigned int i_5 = 0; i_5 < 11; i_5 += 1) 
                {
                    /* LoopSeq 2 */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        var_21 = ((/* implicit */long long int) var_4);
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(unsigned short)2] [(_Bool)1])) ? (((/* implicit */int) var_8)) : (((/* implicit */int) arr_13 [i_1] [i_5] [i_1] [1LL]))))) ? (((((/* implicit */_Bool) (unsigned short)18332)) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_5] [i_6])) : (((/* implicit */int) arr_0 [i_0])))) : ((+(((/* implicit */int) arr_10 [i_0] [i_0] [(unsigned char)0] [4U]))))))) : (((((/* implicit */_Bool) arr_3 [i_0 + 1] [i_1] [i_5])) ? (min((((/* implicit */long long int) arr_22 [i_0] [3U] [i_5] [i_6])), (var_3))) : (((/* implicit */long long int) ((((/* implicit */_Bool) 4124024277U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_6 [i_0]))) : (arr_7 [(_Bool)1] [0U] [i_0]))))))));
                        arr_23 [i_0] [(signed char)5] [i_5] [i_6] [3LL] [(short)8] = ((/* implicit */signed char) ((((/* implicit */_Bool) var_3)) ? (((((/* implicit */_Bool) arr_22 [i_0 - 1] [3ULL] [i_5] [2LL])) ? (((/* implicit */int) arr_22 [i_0 + 1] [(unsigned short)7] [(_Bool)1] [i_6])) : (((/* implicit */int) arr_22 [i_0 + 1] [i_1 + 1] [(_Bool)1] [(unsigned char)4])))) : (((/* implicit */int) (unsigned short)20372))));
                        var_23 = ((/* implicit */short) max((min((((/* implicit */unsigned long long int) (_Bool)1)), (4871023948789984048ULL))), (((/* implicit */unsigned long long int) max((((arr_6 [i_0]) ? (((/* implicit */int) (unsigned short)65535)) : (((/* implicit */int) (unsigned short)18323)))), (((/* implicit */int) var_11)))))));
                    }
                    for (short i_7 = 0; i_7 < 11; i_7 += 4) 
                    {
                        var_24 = ((/* implicit */unsigned int) max((var_24), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((arr_7 [(_Bool)1] [i_5] [(_Bool)1]) < (((/* implicit */unsigned int) var_0)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) var_2)), (arr_14 [i_0 + 1] [i_1] [i_5] [i_7])))) : ((-(((/* implicit */int) var_10))))))) ? ((~(((/* implicit */int) ((var_6) <= (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))) : (((/* implicit */int) min((((/* implicit */short) var_2)), (arr_24 [i_0] [i_0 + 1] [i_5] [i_1 + 2])))))))));
                        /* LoopSeq 1 */
                        for (signed char i_8 = 1; i_8 < 9; i_8 += 1) 
                        {
                            arr_28 [i_0] [i_0 - 1] [i_0] [i_0] [5U] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) arr_7 [i_8 + 2] [i_8] [i_8 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) : (arr_20 [i_8 + 1] [i_1 + 2] [i_0 - 1]))));
                            var_25 += ((/* implicit */_Bool) min((7553941717581029412LL), (((/* implicit */long long int) var_0))));
                        }
                        var_26 = ((/* implicit */int) (signed char)-47);
                        var_27 -= ((/* implicit */long long int) min((min(((~(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) ((18446744073709551615ULL) >= (var_6)))))), (((var_0) >> ((((~(((/* implicit */int) (signed char)101)))) + (117)))))));
                        arr_29 [(_Bool)1] [i_5] [(signed char)0] [(_Bool)1] = ((/* implicit */unsigned char) var_3);
                    }
                    var_28 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((arr_20 [i_0] [i_0 + 1] [i_0 - 1]) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_25 [(signed char)6] [i_0 + 1] [i_0 - 1] [i_0 + 1] [i_0 - 1] [i_0 + 1]) <= (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) : (((((/* implicit */_Bool) arr_20 [i_0] [i_0 - 1] [i_0 - 1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) : (arr_20 [i_0] [i_0 + 1] [i_0 + 1])))));
                }
                for (unsigned char i_9 = 0; i_9 < 11; i_9 += 1) 
                {
                    var_29 = ((/* implicit */int) min((((((/* implicit */int) arr_13 [(_Bool)1] [i_1] [i_1] [i_1 - 4])) <= (((/* implicit */int) (unsigned short)47193)))), (var_2)));
                    var_30 = ((/* implicit */unsigned char) arr_9 [i_0] [i_1] [i_9] [(_Bool)1]);
                    var_31 *= ((/* implicit */int) ((min((((/* implicit */unsigned long long int) var_7)), (((((/* implicit */_Bool) var_7)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7))))))) >> (((((min((arr_25 [i_0] [2ULL] [(unsigned char)10] [i_0 - 1] [i_0] [i_0]), (((/* implicit */unsigned long long int) 3612116325U)))) * (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_11))))))) - (162545234608ULL)))));
                }
            }
        } 
    } 
}
