/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205073
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205073 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205073
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
    var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_15)) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) max((var_12), (((/* implicit */unsigned long long int) var_0))))) ? (((/* implicit */int) min((((/* implicit */short) var_15)), (var_2)))) : (((/* implicit */int) ((short) var_15)))))));
    var_17 = ((/* implicit */long long int) ((min((((((/* implicit */_Bool) var_7)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))) : (var_4))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_6))))))) ^ (((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_12))))))))));
    var_18 = ((/* implicit */signed char) ((((/* implicit */int) var_15)) >> ((((-((~(((/* implicit */int) var_9)))))) - (6594)))));
    /* LoopSeq 3 */
    for (unsigned int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        /* LoopSeq 3 */
        for (int i_1 = 1; i_1 < 17; i_1 += 2) /* same iter space */
        {
            arr_4 [i_0] [(short)11] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */long long int) 0)) : (-7666906712546494740LL)));
            arr_5 [i_1] [i_1] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((short) var_12)))));
            arr_6 [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((arr_3 [i_0]) ^ (((/* implicit */int) var_9)))), (((/* implicit */int) ((unsigned short) 6323182887871421417ULL)))))) ? (((((/* implicit */_Bool) ((unsigned short) -4426539865919162001LL))) ? (((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) arr_3 [i_1])) : (arr_2 [i_0] [i_1]))) : (((/* implicit */unsigned long long int) min((arr_3 [i_0]), (-1)))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_3 [i_1])) - (arr_2 [i_0] [i_0])))) ? (((/* implicit */int) ((arr_2 [i_0] [i_0]) <= (arr_2 [i_0] [i_0])))) : (((((/* implicit */_Bool) (unsigned short)59297)) ? (((/* implicit */int) (unsigned short)6252)) : (arr_3 [i_0]))))))));
        }
        for (int i_2 = 1; i_2 < 17; i_2 += 2) /* same iter space */
        {
            var_19 -= ((/* implicit */unsigned short) arr_8 [i_0] [i_0] [i_2]);
            var_20 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((unsigned long long int) max((arr_1 [(unsigned char)0]), (arr_1 [i_2 - 1]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (((-(((/* implicit */int) var_14)))) <= (((/* implicit */int) ((6323182887871421416ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0])))))))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7))) : (12123561185838130207ULL)))) ? (arr_2 [i_0] [i_2]) : (((/* implicit */unsigned long long int) arr_7 [(unsigned char)6] [(unsigned char)6]))))));
        }
        /* vectorizable */
        for (short i_3 = 0; i_3 < 19; i_3 += 4) 
        {
            var_21 = ((long long int) (unsigned char)0);
            arr_13 [i_0] [i_0] [(short)12] = ((/* implicit */short) ((arr_9 [i_0] [i_0]) / (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_0] [i_0])) ? (((/* implicit */int) (unsigned short)6247)) : (((/* implicit */int) arr_0 [i_3])))))));
            arr_14 [i_3] = ((/* implicit */unsigned long long int) ((unsigned short) ((((/* implicit */_Bool) 12123561185838130199ULL)) ? (((/* implicit */int) (signed char)127)) : (((/* implicit */int) arr_10 [2LL] [i_3] [i_3])))));
            /* LoopSeq 2 */
            for (unsigned short i_4 = 0; i_4 < 19; i_4 += 4) 
            {
                var_22 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_0] [18LL] [i_4])) ? (((/* implicit */int) arr_12 [i_0] [i_0] [i_0])) : (arr_8 [2LL] [i_3] [i_3])))) ? (((((/* implicit */_Bool) arr_7 [i_4] [i_3])) ? (arr_3 [10ULL]) : (((/* implicit */int) arr_0 [i_3])))) : (((/* implicit */int) arr_17 [i_3] [(unsigned char)1] [i_4] [i_3]))));
                arr_18 [i_4] = var_6;
            }
            for (unsigned short i_5 = 3; i_5 < 18; i_5 += 4) 
            {
                /* LoopNest 2 */
                for (long long int i_6 = 1; i_6 < 18; i_6 += 1) 
                {
                    for (int i_7 = 2; i_7 < 16; i_7 += 4) 
                    {
                        {
                            var_23 = ((/* implicit */unsigned short) ((unsigned long long int) (~(((/* implicit */int) (signed char)(-127 - 1))))));
                            arr_27 [i_0] [i_5] [i_5 - 1] [i_6] [i_6] = ((((/* implicit */_Bool) ((signed char) arr_24 [i_6] [i_3]))) ? (((/* implicit */int) arr_12 [i_5] [i_3] [i_5 + 1])) : (((/* implicit */int) arr_26 [i_7 + 2] [i_3] [i_6])));
                        }
                    } 
                } 
                var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((short) arr_9 [i_0] [i_0]))) ? (arr_22 [i_0]) : (((/* implicit */unsigned int) arr_25 [i_5 + 1] [i_3] [i_5] [i_0] [i_0]))));
            }
        }
        var_25 -= ((/* implicit */unsigned int) max((arr_16 [i_0] [i_0] [2LL] [i_0]), (((/* implicit */long long int) var_8))));
    }
    for (short i_8 = 0; i_8 < 16; i_8 += 3) 
    {
        arr_31 [i_8] [i_8] = ((/* implicit */long long int) max((((((/* implicit */_Bool) arr_15 [i_8] [i_8])) ? (arr_22 [(unsigned short)16]) : (((/* implicit */unsigned int) arr_15 [(unsigned char)2] [i_8])))), (((/* implicit */unsigned int) 1579196249))));
        /* LoopSeq 1 */
        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
        {
            var_26 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((arr_25 [i_8] [i_8] [i_8] [i_9] [i_9]) + (((/* implicit */int) arr_26 [8U] [(unsigned short)4] [i_9]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_8))))) : (((/* implicit */int) ((_Bool) arr_17 [(unsigned short)15] [i_8] [i_8] [i_9]))))), (((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) (short)(-32767 - 1)))))) ? (((/* implicit */int) ((unsigned short) arr_34 [i_8] [i_9] [i_8]))) : (((/* implicit */int) (!(((/* implicit */_Bool) (-9223372036854775807LL - 1LL))))))))));
            var_27 -= ((/* implicit */short) ((((/* implicit */_Bool) (~(max((((/* implicit */unsigned long long int) arr_23 [i_9] [i_8] [(unsigned char)17] [(unsigned char)17] [i_9] [3])), (arr_34 [i_8] [i_8] [i_8])))))) ? (min((((/* implicit */unsigned int) ((signed char) arr_8 [i_8] [i_8] [i_8]))), (((unsigned int) arr_21 [i_8] [i_8] [i_8] [i_8] [i_9])))) : (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) ((((/* implicit */_Bool) var_0)) ? (arr_16 [i_8] [(unsigned char)4] [i_9] [i_9]) : (((/* implicit */long long int) arr_15 [i_8] [3LL])))))))));
            arr_36 [i_9] = ((/* implicit */long long int) ((unsigned long long int) ((((/* implicit */_Bool) max((12123561185838130207ULL), (((/* implicit */unsigned long long int) arr_19 [i_8]))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) arr_23 [i_8] [i_9] [7LL] [i_9] [(_Bool)1] [i_8]))) <= (arr_33 [(short)5] [i_9] [i_9])))) : ((+(((/* implicit */int) arr_1 [i_8])))))));
        }
    }
    for (long long int i_10 = 2; i_10 < 10; i_10 += 1) 
    {
        var_28 = ((/* implicit */int) max((var_28), (var_8)));
        arr_41 [i_10] [i_10] = ((/* implicit */short) ((max(((-(9223372036854775778LL))), (((/* implicit */long long int) arr_1 [i_10 + 1])))) & (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_0 [i_10 - 1]))))))));
        var_29 = (-(arr_34 [i_10] [13ULL] [i_10 - 2]));
    }
}
