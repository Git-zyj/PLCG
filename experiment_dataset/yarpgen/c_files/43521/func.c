/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43521
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43521 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43521
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        var_17 += ((/* implicit */long long int) ((((((((/* implicit */int) var_1)) - ((+(((/* implicit */int) arr_0 [i_0])))))) + (2147483647))) << (((max((arr_1 [14LL]), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_1 [i_0 - 1]))))))) - (4671105324362040227ULL)))));
        arr_2 [i_0] &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) max((arr_0 [i_0 + 1]), (arr_0 [i_0 + 1])))) : ((~(((/* implicit */int) (_Bool)1))))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned int i_2 = 3; i_2 < 15; i_2 += 1) 
            {
                for (unsigned char i_3 = 1; i_3 < 14; i_3 += 2) 
                {
                    {
                        var_18 = ((/* implicit */long long int) min((var_18), (var_3)));
                        var_19 = ((/* implicit */long long int) max((var_19), ((~(((((arr_7 [11U]) + (9223372036854775807LL))) << (((/* implicit */int) var_1))))))));
                    }
                } 
            } 
            arr_11 [i_0] |= ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((((arr_7 [i_1]) + (9223372036854775807LL))) << (((((/* implicit */int) arr_0 [i_1])) - (122)))))) < (((var_10) << (((arr_8 [12LL] [i_1]) - (1599062947573794268LL)))))));
            var_20 &= ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)173))) == (var_7));
            var_21 += ((/* implicit */unsigned long long int) ((16242998960000541616ULL) == (2203745113709009985ULL)));
            var_22 = ((/* implicit */int) min((var_22), ((~(((/* implicit */int) ((((/* implicit */_Bool) 474950493U)) && (((/* implicit */_Bool) arr_3 [i_0 + 1] [i_0] [i_0 - 2])))))))));
        }
        for (int i_4 = 0; i_4 < 17; i_4 += 2) 
        {
            var_23 *= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) max((((/* implicit */long long int) arr_0 [i_0 + 1])), (min((arr_7 [i_0]), (((/* implicit */long long int) (_Bool)1))))))) ? (((((/* implicit */int) min((var_9), (((/* implicit */unsigned char) arr_4 [5LL]))))) >> ((((~(((/* implicit */int) arr_0 [(signed char)6])))) + (144))))) : ((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_4 [i_4])))))))));
            var_24 *= ((/* implicit */unsigned int) ((((unsigned long long int) ((var_14) * (((/* implicit */unsigned long long int) arr_10 [i_0 - 1] [(unsigned short)12] [i_4] [i_4] [i_4]))))) > (((/* implicit */unsigned long long int) ((/* implicit */int) var_4)))));
        }
    }
    for (short i_5 = 2; i_5 < 12; i_5 += 1) 
    {
        var_25 = ((/* implicit */_Bool) max((var_25), (((/* implicit */_Bool) (~(min((((/* implicit */unsigned long long int) arr_6 [i_5] [i_5 + 3] [i_5 + 3])), (var_10))))))));
        var_26 *= ((long long int) (((!(((/* implicit */_Bool) var_11)))) ? (16242998960000541616ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_5 - 1] [i_5]))))))));
        /* LoopNest 2 */
        for (short i_6 = 0; i_6 < 15; i_6 += 4) 
        {
            for (long long int i_7 = 1; i_7 < 12; i_7 += 2) 
            {
                {
                    /* LoopSeq 1 */
                    for (unsigned long long int i_8 = 0; i_8 < 15; i_8 += 4) 
                    {
                        var_27 = ((/* implicit */short) min((var_27), (((/* implicit */short) var_10))));
                        var_28 ^= ((/* implicit */unsigned int) ((((var_7) != (((/* implicit */unsigned int) ((/* implicit */int) arr_19 [i_5 + 3]))))) ? ((+(((/* implicit */int) arr_13 [i_6] [i_5])))) : (((/* implicit */int) (!(((_Bool) arr_1 [i_5 + 3])))))));
                        var_29 ^= ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_10), (((/* implicit */unsigned long long int) (short)1))))) ? (max((16242998960000541603ULL), (((/* implicit */unsigned long long int) 444365388U)))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_15 [i_6])) & (((/* implicit */int) arr_16 [i_6] [i_6])))))))) ? (arr_1 [i_6]) : (((/* implicit */unsigned long long int) max((arr_9 [(unsigned short)10] [i_6] [i_6] [10ULL] [(unsigned char)0] [i_8]), (((/* implicit */unsigned int) ((((/* implicit */int) arr_0 [i_7])) + (((/* implicit */int) arr_4 [i_8]))))))))));
                        var_30 *= ((/* implicit */unsigned int) (~((+(((((/* implicit */_Bool) 3850601918U)) ? (((/* implicit */int) arr_20 [i_8] [i_7] [i_7])) : (((/* implicit */int) arr_3 [i_5 - 2] [i_6] [i_5 - 2]))))))));
                    }
                    var_31 = ((/* implicit */int) arr_10 [i_7] [11U] [i_6] [i_5] [i_5]);
                    var_32 = ((/* implicit */unsigned char) max((var_32), (((/* implicit */unsigned char) max((((/* implicit */long long int) ((((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned int) 0)) : (22449391U))) << (max((((/* implicit */long long int) (_Bool)1)), (arr_7 [i_7])))))), (max((((/* implicit */long long int) (unsigned char)243)), (max((var_5), (((/* implicit */long long int) arr_23 [i_7 + 3] [i_6] [i_7])))))))))));
                    var_33 = ((/* implicit */unsigned short) max((var_33), (((/* implicit */unsigned short) ((int) (((!((_Bool)1))) ? (((/* implicit */int) arr_20 [i_6] [i_7 + 1] [i_7 + 3])) : (((/* implicit */int) arr_0 [i_7 - 1]))))))));
                }
            } 
        } 
    }
    var_34 &= ((/* implicit */short) ((int) min((((/* implicit */unsigned long long int) var_15)), (max((var_14), (var_12))))));
}
