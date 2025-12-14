/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248763
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
    var_10 = ((/* implicit */short) var_5);
    var_11 = (-(min((((((/* implicit */_Bool) 3406326864919443040ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)45627)))), (((1886741011) ^ (((/* implicit */int) var_0)))))));
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        arr_2 [i_0] |= ((/* implicit */_Bool) ((var_8) + (((/* implicit */unsigned int) min((((((/* implicit */int) arr_0 [i_0])) & (((/* implicit */int) arr_1 [i_0] [i_0])))), ((+(((/* implicit */int) var_9)))))))));
        var_12 *= ((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) arr_0 [i_0])) - (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((signed char) arr_1 [i_0] [i_0]))) : (((/* implicit */int) var_6))))) - ((-9223372036854775807LL - 1LL))));
        var_13 = ((/* implicit */unsigned short) var_5);
        /* LoopSeq 4 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] [i_0] [i_0] = ((/* implicit */unsigned long long int) arr_3 [i_0] [21]);
            arr_6 [(unsigned char)17] [(unsigned char)17] = ((/* implicit */unsigned long long int) max(((~(((/* implicit */int) arr_0 [i_1])))), (((((/* implicit */_Bool) (unsigned char)0)) ? (((((/* implicit */_Bool) 1803237392176611031LL)) ? (((/* implicit */int) (unsigned char)0)) : (((/* implicit */int) var_0)))) : (((/* implicit */int) (signed char)-70))))));
        }
        for (unsigned char i_2 = 0; i_2 < 25; i_2 += 4) 
        {
            var_14 = ((/* implicit */unsigned long long int) max((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (0) : ((~(((/* implicit */int) (unsigned char)3)))))), ((~(((/* implicit */int) max((arr_3 [i_0] [i_2]), (((/* implicit */unsigned short) (signed char)-82)))))))));
            var_15 ^= ((/* implicit */long long int) (~(((/* implicit */int) (unsigned short)27239))));
        }
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            /* LoopNest 2 */
            for (signed char i_4 = 1; i_4 < 21; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
                {
                    {
                        arr_17 [(short)11] [i_3] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_9 [i_0] [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) arr_14 [i_0] [i_0] [i_5] [i_5])))) : (((4269404867U) & (((/* implicit */unsigned int) ((/* implicit */int) arr_7 [i_5])))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_15 [i_4 + 3] [i_3] [6LL] [i_5] [i_3]))))) : (((((/* implicit */_Bool) (short)7)) ? (((/* implicit */int) (unsigned short)49227)) : (((/* implicit */int) (signed char)-25))))));
                        var_16 = ((/* implicit */long long int) (((+(((/* implicit */int) min((((/* implicit */unsigned short) var_6)), (arr_15 [i_0] [i_0] [i_3] [(_Bool)1] [i_5])))))) & (((((((/* implicit */_Bool) arr_11 [19ULL] [i_4] [i_3])) ? (((/* implicit */int) var_9)) : (((/* implicit */int) (unsigned char)142)))) - (((/* implicit */int) ((((/* implicit */int) arr_7 [i_0])) == (((/* implicit */int) (short)3072)))))))));
                    }
                } 
            } 
            var_17 *= ((/* implicit */unsigned int) ((((/* implicit */_Bool) min((arr_9 [i_0] [i_3]), (arr_9 [i_0] [i_3])))) ? (((var_5) - (((/* implicit */unsigned long long int) arr_4 [i_0] [i_3])))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_3])) ? (arr_4 [i_0] [i_3]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_9 [i_0] [i_3]))))))));
            var_18 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((-1803237392176611032LL) ^ (((/* implicit */long long int) arr_4 [i_3] [i_0]))))) ? (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_3] [7ULL] [5]))) - (0ULL))) : (((/* implicit */unsigned long long int) ((int) 1803237392176611031LL))))) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_0] [i_0] [(signed char)19] [i_3])))));
            var_19 ^= ((/* implicit */unsigned long long int) (-(((unsigned int) ((signed char) 10604771350265433540ULL)))));
            arr_18 [i_0] [(short)21] = ((/* implicit */unsigned short) (short)-820);
        }
        for (unsigned short i_6 = 3; i_6 < 23; i_6 += 1) 
        {
            /* LoopSeq 3 */
            for (unsigned short i_7 = 0; i_7 < 25; i_7 += 3) /* same iter space */
            {
                arr_25 [(short)18] [i_7] [i_7] = arr_21 [i_0] [i_7];
                arr_26 [i_7] = ((/* implicit */unsigned int) ((short) min((((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0] [i_7]))) : (arr_11 [i_0] [i_6] [i_7]))), (((((/* implicit */_Bool) (unsigned short)49227)) ? (979894105U) : (((/* implicit */unsigned int) (-2147483647 - 1))))))));
            }
            for (unsigned short i_8 = 0; i_8 < 25; i_8 += 3) /* same iter space */
            {
                arr_29 [10ULL] [i_0] |= ((/* implicit */long long int) 1274081883U);
                arr_30 [i_8] = ((((/* implicit */_Bool) (short)24576)) ? (-1240170120) : (((/* implicit */int) (_Bool)1)));
            }
            for (unsigned short i_9 = 0; i_9 < 25; i_9 += 3) /* same iter space */
            {
                arr_33 [i_0] [i_0] [i_6] [i_9] = ((((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_9)))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) arr_9 [i_9] [i_6])))) : (((((/* implicit */_Bool) 1376764451198924760LL)) ? (arr_28 [i_0] [i_0] [i_9]) : (((/* implicit */int) (unsigned short)17))))))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_8))), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_5))))))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)16))));
                var_20 = ((/* implicit */unsigned short) max(((-((+(((/* implicit */int) (short)13)))))), (1131551171)));
                arr_34 [i_0] [i_6] [i_6] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) min((((/* implicit */int) arr_22 [i_9] [(signed char)3] [(unsigned short)14])), (((2139901224) >> (((/* implicit */int) var_4))))))), (min((((((/* implicit */unsigned long long int) var_8)) - (arr_10 [(_Bool)1] [(_Bool)1]))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_13 [i_0] [i_6 + 2] [i_9] [i_6 + 2])) : (((/* implicit */int) arr_23 [i_0])))))))));
            }
            var_21 = (~(((((/* implicit */_Bool) ((((/* implicit */int) (_Bool)0)) >> (((25562427U) - (25562406U)))))) ? (((int) (unsigned char)93)) : ((~(((/* implicit */int) var_4)))))));
            var_22 = ((/* implicit */short) ((unsigned int) arr_31 [i_6 + 2] [i_6 + 1]));
            var_23 |= ((/* implicit */short) min((1974215016), (max(((((_Bool)1) ? (((/* implicit */int) (short)(-32767 - 1))) : (((/* implicit */int) (unsigned short)45421)))), (((/* implicit */int) (_Bool)1))))));
        }
    }
    /* vectorizable */
    for (short i_10 = 0; i_10 < 16; i_10 += 4) 
    {
        var_24 ^= ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 6914172186438365999LL)) ? (((/* implicit */int) (unsigned short)40179)) : (((/* implicit */int) (short)-22014))))) ? (arr_37 [i_10]) : (((/* implicit */int) ((((/* implicit */int) (unsigned short)65519)) != (arr_28 [i_10] [i_10] [i_10]))))));
        arr_38 [11ULL] = ((/* implicit */unsigned short) ((_Bool) ((((/* implicit */_Bool) var_5)) ? (((/* implicit */unsigned long long int) (-2147483647 - 1))) : (var_7))));
    }
}
