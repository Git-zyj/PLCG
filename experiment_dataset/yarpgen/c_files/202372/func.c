/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202372
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202372 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202372
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
    /* LoopNest 3 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 3; i_1 < 17; i_1 += 3) 
        {
            for (unsigned char i_2 = 0; i_2 < 21; i_2 += 3) 
            {
                {
                    var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) ((long long int) var_14))) || ((!(((/* implicit */_Bool) -322044434036764628LL)))))) ? (((((/* implicit */_Bool) arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1))) : (arr_5 [i_1 + 1] [i_1 - 3] [i_1 + 2]))) : (arr_5 [i_0] [i_1] [i_2])));
                    /* LoopNest 2 */
                    for (long long int i_3 = 2; i_3 < 20; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_20 = ((/* implicit */short) var_2);
                                var_21 = ((/* implicit */int) min((var_21), (((/* implicit */int) ((((/* implicit */_Bool) arr_6 [i_0] [i_0] [14] [4ULL] [i_0])) ? (min((arr_6 [i_3 - 1] [i_3] [10] [i_3] [i_3 + 1]), (((/* implicit */long long int) (_Bool)1)))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))))))));
                                var_22 = ((((/* implicit */_Bool) arr_5 [i_3 - 1] [i_3 - 2] [i_1 + 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) min(((unsigned char)26), ((unsigned char)152))))) : (arr_5 [i_3 - 1] [(unsigned char)15] [i_1 + 2]));
                                var_23 = ((/* implicit */long long int) min((var_23), (((/* implicit */long long int) max((((_Bool) 1439742930U)), ((!(((/* implicit */_Bool) (+(arr_7 [i_0] [i_0] [i_0])))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = ((/* implicit */short) var_3);
    /* LoopNest 2 */
    for (long long int i_5 = 3; i_5 < 21; i_5 += 3) 
    {
        for (unsigned char i_6 = 0; i_6 < 25; i_6 += 1) 
        {
            {
                var_25 = ((/* implicit */short) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)3)) ? (arr_16 [i_5] [i_5]) : (((/* implicit */unsigned long long int) var_7))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)127))) : (((unsigned int) max((((/* implicit */int) (unsigned char)127)), (var_4))))));
                var_26 = ((/* implicit */short) ((((/* implicit */_Bool) var_1)) ? (((long long int) arr_15 [i_5 + 3] [i_5])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_14 [i_5] [i_5 - 2])) ? (arr_14 [i_5] [i_5 - 2]) : (arr_14 [i_5] [i_5 - 2]))))));
                /* LoopNest 2 */
                for (unsigned int i_7 = 0; i_7 < 25; i_7 += 3) 
                {
                    for (long long int i_8 = 2; i_8 < 24; i_8 += 1) 
                    {
                        {
                            var_27 = ((/* implicit */unsigned char) min((var_12), (((unsigned int) max((((/* implicit */unsigned int) (unsigned char)42)), (1439742930U))))));
                            var_28 = ((/* implicit */int) ((((/* implicit */_Bool) var_17)) ? (((((/* implicit */_Bool) (unsigned char)129)) ? (arr_19 [i_8] [i_8 + 1] [i_8] [i_8]) : (arr_19 [i_8] [i_8 + 1] [i_8] [i_5]))) : (((arr_19 [10LL] [i_8 + 1] [i_8] [i_8 - 2]) * (arr_19 [i_8 + 1] [i_8 + 1] [i_7] [i_6])))));
                            var_29 = ((/* implicit */unsigned int) var_18);
                        }
                    } 
                } 
                var_30 = ((/* implicit */unsigned char) max((var_30), (max(((unsigned char)213), ((unsigned char)213)))));
            }
        } 
    } 
    /* LoopSeq 3 */
    for (short i_9 = 2; i_9 < 15; i_9 += 3) 
    {
        arr_24 [i_9] = (unsigned char)250;
        arr_25 [i_9] [i_9] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [14ULL] [i_9 - 1] [(unsigned char)20])) ? (((/* implicit */int) (unsigned char)111)) : (((/* implicit */int) arr_17 [(unsigned char)5] [i_9 - 1] [i_9]))))) ? (((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)213))) - (3548461177U)))) : (min((((/* implicit */long long int) arr_17 [i_9] [i_9 - 1] [i_9])), (var_16)))));
        /* LoopSeq 1 */
        for (unsigned int i_10 = 2; i_10 < 12; i_10 += 3) 
        {
            var_31 *= ((/* implicit */unsigned char) arr_2 [i_9] [i_10 + 3] [i_10]);
            var_32 = ((/* implicit */unsigned char) (((!(((var_13) < (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */long long int) arr_19 [i_10 + 2] [i_10] [i_9] [0LL])) : (min((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned char)185)) ? (((/* implicit */int) (_Bool)0)) : (var_4))))))));
            /* LoopNest 2 */
            for (long long int i_11 = 1; i_11 < 15; i_11 += 3) 
            {
                for (unsigned int i_12 = 0; i_12 < 16; i_12 += 3) 
                {
                    {
                        var_33 ^= ((/* implicit */long long int) (-(arr_5 [(short)9] [i_10 + 1] [(short)9])));
                        var_34 = ((/* implicit */unsigned int) ((short) var_6));
                    }
                } 
            } 
        }
    }
    /* vectorizable */
    for (unsigned int i_13 = 0; i_13 < 25; i_13 += 3) 
    {
        var_35 = ((/* implicit */short) ((long long int) var_11));
        var_36 = ((var_0) & (((/* implicit */unsigned int) ((/* implicit */int) ((short) arr_16 [(unsigned char)4] [i_13])))));
    }
    /* vectorizable */
    for (long long int i_14 = 1; i_14 < 15; i_14 += 1) 
    {
        var_37 = ((/* implicit */long long int) ((((unsigned int) var_10)) ^ (742292685U)));
        var_38 = ((/* implicit */unsigned int) max((var_38), (((/* implicit */unsigned int) ((((/* implicit */int) arr_35 [i_14 + 1])) << (((((arr_1 [i_14 - 1]) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)129))) : (arr_19 [i_14] [i_14 + 2] [i_14 + 2] [i_14]))) - (3020865677U))))))));
        var_39 = ((/* implicit */unsigned int) (unsigned char)153);
        var_40 = ((/* implicit */unsigned int) max((var_40), (((/* implicit */unsigned int) ((arr_36 [i_14 + 1]) & (((/* implicit */int) (unsigned char)187)))))));
    }
}
