/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193204
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193204 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193204
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
    var_18 = ((/* implicit */int) ((unsigned char) var_12));
    var_19 = ((/* implicit */unsigned long long int) (_Bool)1);
    /* LoopSeq 2 */
    for (signed char i_0 = 0; i_0 < 16; i_0 += 1) 
    {
        var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((((/* implicit */unsigned long long int) max((4074352484U), (((/* implicit */unsigned int) var_7))))), (max((14045078546256430549ULL), (((/* implicit */unsigned long long int) arr_2 [8ULL]))))))) ? (((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_15)) : (((/* implicit */int) var_9)))) % (((/* implicit */int) (unsigned char)215)))) : (((/* implicit */int) ((unsigned char) var_16)))));
        arr_3 [i_0] = ((var_14) ? (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) ((short) (signed char)84))))) : (((/* implicit */int) ((_Bool) ((4401665527453121066ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_17))))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 1) 
    {
        var_21 = ((/* implicit */unsigned char) ((_Bool) arr_5 [i_1]));
        var_22 = ((/* implicit */unsigned char) arr_4 [i_1]);
        var_23 = ((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) min((var_9), (arr_6 [i_1])))) ? (max((18446744073709551615ULL), (((/* implicit */unsigned long long int) arr_6 [(unsigned short)17])))) : (12926998455233503889ULL))));
        arr_7 [i_1] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1]))) : (var_8)))) || (((/* implicit */_Bool) ((unsigned char) arr_4 [i_1])))));
    }
    /* LoopSeq 3 */
    for (unsigned char i_2 = 1; i_2 < 22; i_2 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_3 = 0; i_3 < 23; i_3 += 2) 
        {
            for (unsigned long long int i_4 = 0; i_4 < 23; i_4 += 4) 
            {
                {
                    var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min(((+(((/* implicit */int) var_7)))), (((/* implicit */int) arr_14 [i_2 - 1] [i_4]))))) ? (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (short)11367)) || (((/* implicit */_Bool) 1835322640789182164ULL))))), (min((((/* implicit */unsigned long long int) var_13)), (var_8))))) : ((-(max((16ULL), (((/* implicit */unsigned long long int) (short)29736))))))));
                    var_25 = ((/* implicit */short) min((var_25), (((/* implicit */short) (~(((((/* implicit */_Bool) arr_15 [i_2 + 1] [i_3] [i_4] [i_4])) ? (((/* implicit */unsigned long long int) var_13)) : (arr_15 [i_2 + 1] [i_3] [(short)5] [i_3]))))))));
                    arr_17 [i_2 - 1] [i_3] [i_4] = var_6;
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned int) max((var_26), (((/* implicit */unsigned int) (-(((max((arr_13 [i_2] [i_2]), (arr_4 [i_2]))) * ((+(arr_12 [i_2] [i_2]))))))))));
    }
    for (long long int i_5 = 0; i_5 < 22; i_5 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned char i_6 = 2; i_6 < 20; i_6 += 4) 
        {
            for (long long int i_7 = 4; i_7 < 19; i_7 += 1) 
            {
                {
                    /* LoopNest 2 */
                    for (_Bool i_8 = 1; i_8 < 1; i_8 += 1) 
                    {
                        for (unsigned long long int i_9 = 1; i_9 < 18; i_9 += 2) 
                        {
                            {
                                var_27 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_27 [i_5])) ? (((/* implicit */int) var_15)) : (((/* implicit */int) max((arr_16 [i_7] [i_6 - 1] [i_6 - 1] [(unsigned short)16]), (((/* implicit */short) var_2)))))))) && ((!(((/* implicit */_Bool) 18446744073709551602ULL))))));
                                var_28 = ((/* implicit */short) (+(18446744073709551615ULL)));
                                var_29 = ((/* implicit */unsigned long long int) 9223372036854775807LL);
                                arr_30 [i_5] [i_5] [i_7] [i_5] [i_5] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((arr_6 [i_5]), (arr_10 [i_8 - 1] [i_9 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)7))) : (((((/* implicit */_Bool) (unsigned char)0)) ? (max((((/* implicit */unsigned long long int) arr_10 [(_Bool)1] [i_7])), (var_6))) : (((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned short)11)))))))));
                                var_30 = ((/* implicit */unsigned char) (short)29736);
                            }
                        } 
                    } 
                    var_31 = ((/* implicit */long long int) (~(((((/* implicit */int) arr_6 [i_7 - 4])) << (((((/* implicit */int) arr_10 [i_5] [i_6 + 1])) - (183)))))));
                    /* LoopNest 2 */
                    for (long long int i_10 = 0; i_10 < 22; i_10 += 4) 
                    {
                        for (int i_11 = 4; i_11 < 20; i_11 += 2) 
                        {
                            {
                                var_32 = ((/* implicit */unsigned long long int) max((var_32), (((/* implicit */unsigned long long int) ((unsigned char) var_5)))));
                                var_33 = ((/* implicit */_Bool) 13ULL);
                            }
                        } 
                    } 
                    var_34 = ((/* implicit */unsigned int) var_5);
                }
            } 
        } 
        /* LoopNest 2 */
        for (unsigned int i_12 = 0; i_12 < 22; i_12 += 1) 
        {
            for (_Bool i_13 = 0; i_13 < 1; i_13 += 1) 
            {
                {
                    var_35 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) var_17))))) ? (max((arr_20 [i_5] [i_12]), (arr_20 [i_5] [i_5]))) : ((-(((unsigned long long int) arr_9 [i_5] [i_13]))))));
                    arr_41 [i_5] [i_12] [i_13] = ((/* implicit */signed char) min((max((((/* implicit */unsigned long long int) (unsigned short)11)), (var_6))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_4 [i_5])) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_4)))))));
                    var_36 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_39 [i_5] [(unsigned char)14])) : (((/* implicit */int) arr_26 [(unsigned char)12] [(signed char)0] [8ULL] [19ULL]))))) ? (((/* implicit */int) (unsigned char)198)) : (((/* implicit */int) var_1)))) | ((((~(((/* implicit */int) (short)0)))) ^ ((~(var_12)))))));
                }
            } 
        } 
    }
    for (short i_14 = 0; i_14 < 13; i_14 += 3) 
    {
        var_37 = ((/* implicit */unsigned int) arr_26 [10] [i_14] [i_14] [i_14]);
        var_38 *= ((/* implicit */unsigned long long int) min(((((((-(((/* implicit */int) (unsigned char)120)))) + (2147483647))) << ((((~(var_10))) - (4804989850523966246ULL))))), (((/* implicit */int) (short)-29737))));
    }
}
