/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218706
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218706 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218706
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
    var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_10))));
    /* LoopSeq 4 */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */_Bool) (-(arr_1 [i_0])));
        /* LoopNest 3 */
        for (int i_1 = 0; i_1 < 24; i_1 += 3) 
        {
            for (int i_2 = 2; i_2 < 21; i_2 += 3) 
            {
                for (unsigned int i_3 = 0; i_3 < 24; i_3 += 4) 
                {
                    {
                        var_14 += ((/* implicit */unsigned long long int) max((((/* implicit */int) ((((/* implicit */int) (short)-10627)) <= (((/* implicit */int) arr_6 [i_0] [i_2] [10U] [i_0]))))), (((((/* implicit */int) arr_6 [i_3] [i_1] [i_2] [i_3])) ^ (((/* implicit */int) arr_6 [i_0] [i_0] [i_0] [i_3]))))));
                        var_15 = ((/* implicit */signed char) max((var_15), (((/* implicit */signed char) (((((_Bool)1) ? (arr_8 [i_0] [i_0] [i_2] [i_2] [i_2 - 2]) : (arr_8 [i_1] [i_1] [i_1] [i_2 - 2] [i_2 - 1]))) != (((/* implicit */unsigned int) ((/* implicit */int) ((arr_8 [7ULL] [i_1] [7ULL] [7ULL] [i_2 - 1]) == (((/* implicit */unsigned int) ((/* implicit */int) (short)10619))))))))))));
                        /* LoopSeq 2 */
                        for (unsigned long long int i_4 = 0; i_4 < 24; i_4 += 2) 
                        {
                            var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) 2354720660U)) < (min((arr_9 [i_0] [(unsigned char)10] [i_2 + 3] [i_3] [i_4] [i_4] [i_3]), (arr_9 [i_0] [i_1] [i_2] [i_2 + 2] [i_3] [i_3] [i_4]))))))));
                            var_17 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((2348858466U) * (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-88)))))) ? (((/* implicit */int) arr_0 [i_0] [i_2 - 2])) : (((/* implicit */int) (unsigned char)2))))) ? (max((arr_5 [i_0] [i_1] [i_2 + 1] [i_2 + 3]), (((/* implicit */unsigned long long int) (unsigned short)55446)))) : (((((arr_9 [i_0] [i_1] [i_2] [i_2] [(_Bool)1] [i_4] [i_4]) >> (((3848886782825935238LL) - (3848886782825935200LL))))) | (((/* implicit */unsigned long long int) max((1946108822U), (((/* implicit */unsigned int) (signed char)-87)))))))));
                            var_18 = ((/* implicit */long long int) (short)17859);
                        }
                        /* vectorizable */
                        for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                        {
                            arr_13 [i_0] [i_1] [i_0] [19LL] [19LL] = ((/* implicit */long long int) arr_3 [i_0] [i_5]);
                            arr_14 [i_0] [i_1] [i_2] [i_3] [(short)1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (signed char)-99)) ? (1203694335) : ((+(((/* implicit */int) arr_12 [i_0] [i_1] [10U] [10U] [i_5] [9LL]))))));
                        }
                    }
                } 
            } 
        } 
    }
    for (unsigned long long int i_6 = 2; i_6 < 13; i_6 += 3) 
    {
        arr_19 [i_6] = ((/* implicit */unsigned int) (+(((((/* implicit */int) arr_12 [i_6] [i_6 - 2] [i_6 - 1] [i_6 + 1] [i_6 + 1] [i_6 - 2])) ^ (((((/* implicit */_Bool) arr_10 [i_6] [i_6] [i_6] [i_6] [i_6])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (short)-8188))))))));
        /* LoopNest 3 */
        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
        {
            for (long long int i_8 = 0; i_8 < 14; i_8 += 1) 
            {
                for (unsigned char i_9 = 0; i_9 < 14; i_9 += 4) 
                {
                    {
                        /* LoopSeq 1 */
                        for (unsigned char i_10 = 2; i_10 < 12; i_10 += 4) 
                        {
                            var_19 = ((/* implicit */_Bool) ((((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (signed char)-88)) ? (((/* implicit */int) (short)-8170)) : (((/* implicit */int) (unsigned char)168))))))) % (min((18446744073709551615ULL), (18446744073709551599ULL)))));
                            arr_30 [i_6] [i_7] [i_6] [i_9] [i_10] = ((((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) (short)8169)) : (((/* implicit */int) arr_7 [21LL] [21LL] [i_8] [(signed char)16] [i_10])))) << (((max((16897038061169851528ULL), (((/* implicit */unsigned long long int) arr_7 [i_7] [i_7] [i_8] [i_9] [i_7])))) - (16897038061169851519ULL))));
                        }
                        arr_31 [i_6 - 1] [i_7] [i_9] [i_9] |= ((/* implicit */short) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */unsigned long long int) arr_1 [i_6 - 1])) : (10811218896699631523ULL)))) ? (min((arr_1 [i_6 - 1]), (((/* implicit */unsigned int) (_Bool)1)))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)43))) == (arr_1 [i_6 - 2])))))));
                        arr_32 [i_6] = ((/* implicit */signed char) arr_9 [i_6 - 1] [19ULL] [i_6 - 1] [(unsigned char)7] [i_6 - 1] [i_6] [i_6 - 1]);
                        arr_33 [i_6] [i_9] [i_8] [i_7] [i_6] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) >= (((((/* implicit */_Bool) -1203694360)) ? (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(_Bool)1] [(_Bool)1]))))) : (((int) arr_12 [i_6 - 2] [i_7] [i_7] [i_9] [i_9] [i_7]))))));
                    }
                } 
            } 
        } 
    }
    for (signed char i_11 = 0; i_11 < 11; i_11 += 1) 
    {
        arr_38 [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-51)) ? (((/* implicit */int) arr_10 [i_11] [i_11] [i_11] [i_11] [19U])) : (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) arr_37 [i_11])) ? (((/* implicit */int) (unsigned char)122)) : (((/* implicit */int) (short)-8178))))) : (-1829420958777555031LL))) != (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) arr_15 [i_11])) <= (((/* implicit */int) arr_15 [i_11]))))))));
        arr_39 [4U] [i_11] = ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_0 [i_11] [i_11])) ? (((/* implicit */int) arr_28 [i_11] [i_11] [i_11] [i_11] [i_11] [8ULL])) : (((/* implicit */int) (_Bool)1))))) < (min((8585717627949547769ULL), (((/* implicit */unsigned long long int) (signed char)116))))));
        arr_40 [i_11] [i_11] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((arr_18 [i_11]) - (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)246)))))) ? (arr_18 [i_11]) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_11]))))))));
    }
    /* vectorizable */
    for (short i_12 = 3; i_12 < 20; i_12 += 4) 
    {
        var_20 -= ((/* implicit */_Bool) ((((/* implicit */unsigned int) (-(((/* implicit */int) arr_7 [i_12] [i_12] [i_12] [i_12] [8LL]))))) ^ (((((/* implicit */unsigned int) arr_11 [i_12] [(short)18] [i_12] [(signed char)6] [i_12] [i_12])) - (4294967292U)))));
        var_21 |= ((/* implicit */unsigned char) (+(((/* implicit */int) ((unsigned char) (unsigned char)142)))));
    }
    /* LoopNest 2 */
    for (short i_13 = 0; i_13 < 11; i_13 += 3) 
    {
        for (unsigned int i_14 = 0; i_14 < 11; i_14 += 3) 
        {
            {
                var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((/* implicit */_Bool) (short)-29143)) && (((/* implicit */_Bool) (short)-28679)))))));
                var_23 = ((/* implicit */_Bool) (unsigned char)246);
            }
        } 
    } 
}
