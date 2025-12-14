/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245855
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245855 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245855
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
    var_11 = ((((/* implicit */_Bool) min((((/* implicit */int) min((var_9), (var_2)))), (((((/* implicit */int) var_0)) >> (((/* implicit */int) var_6))))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) (_Bool)0))))) : (((unsigned long long int) min(((signed char)-93), (((/* implicit */signed char) var_7))))));
    var_12 = (signed char)7;
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 15; i_0 += 4) 
    {
        var_13 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(0ULL)))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) ((18446744073709551615ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))))))))) : ((~(8568033699149732079ULL)))));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_4 [14ULL] [i_0] = ((/* implicit */short) arr_1 [i_0]);
            /* LoopSeq 3 */
            /* vectorizable */
            for (_Bool i_2 = 0; i_2 < 0; i_2 += 1) 
            {
                var_14 ^= ((/* implicit */short) (~(-253888682)));
                arr_8 [i_0] [1] [i_2] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) -253888682)) ? (((/* implicit */int) arr_7 [i_2 + 1] [i_2 + 1] [i_2 + 1])) : ((~(((/* implicit */int) (short)0))))));
                var_15 = ((/* implicit */unsigned int) ((unsigned char) 0));
            }
            for (unsigned long long int i_3 = 2; i_3 < 14; i_3 += 4) /* same iter space */
            {
                var_16 = ((/* implicit */_Bool) max((var_16), (((/* implicit */_Bool) var_8))));
                /* LoopSeq 1 */
                for (unsigned char i_4 = 0; i_4 < 15; i_4 += 4) 
                {
                    arr_14 [2ULL] [i_1] [i_3] [(short)7] [i_4] [i_3 - 1] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((arr_7 [i_0] [i_1] [i_3 - 2]), (arr_7 [i_0] [i_1] [i_3 - 2])))), (((((((/* implicit */_Bool) arr_11 [i_0] [i_0] [(short)8] [i_0] [i_0] [(signed char)3])) ? (((/* implicit */unsigned long long int) var_5)) : (var_1))) * (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_4] [i_3] [i_3 - 2] [i_3 - 2] [i_3 - 1])))))));
                    /* LoopSeq 2 */
                    /* vectorizable */
                    for (unsigned char i_5 = 0; i_5 < 15; i_5 += 1) /* same iter space */
                    {
                        arr_17 [i_0] [i_0] [i_1] [i_1] [i_3] [i_4] [i_3] = ((/* implicit */unsigned short) (+(((/* implicit */int) ((unsigned char) arr_9 [i_4] [i_3 - 2] [i_1] [i_0])))));
                        arr_18 [i_0] [i_3 + 1] [i_5] [i_0] [i_5] [(unsigned char)13] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_0 [i_3 - 2] [i_3 + 1])) ? (((/* implicit */int) arr_0 [i_3 + 1] [i_3 + 1])) : (((/* implicit */int) arr_0 [i_3 - 1] [i_3 + 1]))));
                        arr_19 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] [(_Bool)1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [5ULL])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (signed char)97))))) ? (((/* implicit */int) (short)-1)) : ((+(((/* implicit */int) (_Bool)0))))));
                        arr_20 [i_0] = ((/* implicit */unsigned short) (~(((((/* implicit */int) var_2)) & (((/* implicit */int) (unsigned char)0))))));
                        var_17 = ((/* implicit */int) var_5);
                    }
                    for (unsigned char i_6 = 0; i_6 < 15; i_6 += 1) /* same iter space */
                    {
                        arr_23 [i_3 + 1] [i_1] [4] [(unsigned char)9] [i_6] = ((/* implicit */signed char) min((((/* implicit */int) arr_7 [i_1] [i_1] [i_6])), (((((/* implicit */int) arr_13 [i_3 - 1] [i_3 - 1])) - (((/* implicit */int) ((signed char) arr_3 [i_0] [i_3] [i_4])))))));
                        arr_24 [i_0] [(_Bool)1] [i_3 - 2] [(_Bool)1] [i_6] |= ((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_7))) <= (arr_6 [i_0] [i_3 - 1] [i_3 - 1]))));
                        arr_25 [i_0] [i_0] [i_0] [i_0] = ((/* implicit */unsigned short) arr_16 [i_3 + 1] [i_3] [i_3 + 1] [i_3 - 1] [i_3 - 1] [i_3 - 2] [i_3]);
                        arr_26 [i_6] [i_1] [i_6] [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-(1582977820814272001LL)))) ? (arr_2 [i_0]) : (((/* implicit */unsigned long long int) (((_Bool)0) ? (((/* implicit */int) arr_15 [i_0] [i_0] [i_0] [i_0] [i_0] [(short)13])) : (((/* implicit */int) (_Bool)1)))))))) ? ((~(10002061667408525059ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) ((((/* implicit */_Bool) (short)-17)) ? (0ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_3 - 2] [11LL]))))))))));
                    }
                    arr_27 [i_0] [i_1] [i_3 - 2] [i_4] [i_0] = ((/* implicit */unsigned short) (+(((((/* implicit */_Bool) 254632830906164683ULL)) ? (((/* implicit */int) arr_12 [i_3 + 1] [i_3] [i_3] [i_3 - 1] [i_3 + 1])) : (((/* implicit */int) arr_5 [i_3] [i_4] [i_3 - 2]))))));
                }
            }
            for (unsigned long long int i_7 = 2; i_7 < 14; i_7 += 4) /* same iter space */
            {
                var_18 = (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (3396637113U) : (((/* implicit */unsigned int) ((/* implicit */int) var_7)))))) ? (((/* implicit */int) (unsigned char)255)) : (((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (arr_5 [(signed char)12] [i_0] [i_7 - 1])))))));
                var_19 -= ((/* implicit */long long int) (((~(((/* implicit */int) ((arr_6 [i_0] [10] [i_7]) < (((/* implicit */unsigned long long int) ((/* implicit */int) var_10)))))))) ^ ((~(((((/* implicit */_Bool) arr_11 [i_7 - 2] [i_7 + 1] [i_7 - 1] [i_7 - 1] [7U] [i_0])) ? (((/* implicit */int) var_2)) : (((/* implicit */int) (_Bool)0))))))));
            }
            var_20 = ((((/* implicit */_Bool) var_3)) ? ((+(((arr_2 [(_Bool)1]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)3))))))) : (((/* implicit */unsigned long long int) ((int) ((unsigned long long int) (_Bool)1)))));
        }
        arr_30 [(_Bool)1] = ((/* implicit */short) ((var_7) ? (((/* implicit */int) ((short) var_0))) : (((((/* implicit */_Bool) arr_3 [i_0] [i_0] [(_Bool)1])) ? (((/* implicit */int) min(((unsigned char)255), (((/* implicit */unsigned char) arr_29 [i_0]))))) : (((/* implicit */int) (!(arr_29 [i_0]))))))));
    }
    var_21 = ((/* implicit */short) ((((/* implicit */_Bool) var_0)) ? ((~(((/* implicit */int) var_0)))) : (((/* implicit */int) var_10))));
    var_22 = ((short) var_3);
}
