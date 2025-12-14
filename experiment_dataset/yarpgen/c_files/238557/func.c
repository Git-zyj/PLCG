/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 238557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=238557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/238557
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
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 1) 
    {
        var_13 = ((/* implicit */signed char) min((var_13), (((/* implicit */signed char) (~(((/* implicit */int) ((arr_1 [i_0]) || (arr_0 [i_0])))))))));
        var_14 &= ((/* implicit */long long int) ((((/* implicit */_Bool) (+(min((arr_2 [i_0]), (((/* implicit */long long int) var_0))))))) ? (((/* implicit */int) ((_Bool) max((arr_2 [i_0]), (arr_2 [11LL]))))) : (((/* implicit */int) arr_0 [i_0]))));
        /* LoopNest 2 */
        for (short i_1 = 0; i_1 < 18; i_1 += 1) 
        {
            for (long long int i_2 = 0; i_2 < 18; i_2 += 3) 
            {
                {
                    /* LoopSeq 4 */
                    /* vectorizable */
                    for (long long int i_3 = 3; i_3 < 17; i_3 += 4) 
                    {
                        var_15 = ((/* implicit */unsigned short) max((var_15), (((/* implicit */unsigned short) (+(((/* implicit */int) arr_6 [2])))))));
                        arr_12 [i_1] [i_1] [i_1] [i_1] = ((/* implicit */short) ((((/* implicit */int) (!(((/* implicit */_Bool) var_11))))) == (((/* implicit */int) ((((/* implicit */unsigned long long int) 35175782154240LL)) == (arr_7 [(short)11] [14ULL] [(short)7] [14ULL]))))));
                    }
                    for (int i_4 = 0; i_4 < 18; i_4 += 2) 
                    {
                        arr_16 [i_1] [i_1] [i_1] [i_1] = max((var_12), (((/* implicit */unsigned long long int) ((long long int) 131071ULL))));
                        arr_17 [(short)6] [i_1] [i_1] [i_4] = ((/* implicit */short) ((((/* implicit */_Bool) (short)-21710)) ? (1303659402U) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)8192)))));
                        var_16 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_7 [(short)5] [5] [i_2] [i_4])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((432345564227567616LL) ^ (((/* implicit */long long int) arr_14 [0] [i_4] [i_2] [i_1] [i_4] [i_0]))))) ? (((/* implicit */long long int) (~(((/* implicit */int) var_7))))) : (35175782154237LL))))));
                        arr_18 [i_0] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 9223372036854775806LL)) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_8)) + (((arr_1 [i_0]) ? (((/* implicit */int) (unsigned char)15)) : (((/* implicit */int) arr_4 [i_2] [i_2]))))))) : (70334384439296ULL)));
                    }
                    for (unsigned short i_5 = 0; i_5 < 18; i_5 += 3) /* same iter space */
                    {
                        var_17 ^= ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */int) arr_6 [(short)10])) <= (((((/* implicit */int) (unsigned short)53589)) + (((/* implicit */int) var_2))))))) == (((((/* implicit */int) arr_0 [i_1])) + (((/* implicit */int) arr_0 [i_0]))))));
                        arr_22 [i_5] [i_5] [i_1] [i_1] [i_1] [i_0] = (unsigned char)255;
                        var_18 = ((/* implicit */long long int) min((var_18), (((/* implicit */long long int) min((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)55))))));
                    }
                    for (unsigned short i_6 = 0; i_6 < 18; i_6 += 3) /* same iter space */
                    {
                        var_19 ^= ((/* implicit */int) ((_Bool) 0));
                        var_20 = ((/* implicit */long long int) min((var_20), (((/* implicit */long long int) arr_7 [(unsigned short)5] [i_1] [(unsigned char)10] [i_6]))));
                        arr_27 [i_6] [10LL] [i_1] [i_0] [10LL] [i_0] &= ((/* implicit */unsigned int) arr_6 [6U]);
                    }
                    var_21 = (_Bool)1;
                    var_22 = ((/* implicit */short) 1125899905794048LL);
                    arr_28 [i_0] [i_0] [i_0] [i_1] = (-((+(min((-35175782154238LL), (((/* implicit */long long int) (unsigned short)240)))))));
                    var_23 &= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) (unsigned short)4088)) || (((/* implicit */_Bool) arr_19 [i_0] [i_0] [i_1] [i_1] [i_2] [i_0])))) ? (((arr_19 [i_2] [i_2] [i_2] [(short)5] [i_2] [(unsigned short)15]) + (16376))) : (((/* implicit */int) ((unsigned char) var_5)))));
                }
            } 
        } 
    }
    for (short i_7 = 0; i_7 < 23; i_7 += 1) 
    {
        var_24 &= ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) arr_30 [9] [i_7])))));
        /* LoopNest 3 */
        for (unsigned short i_8 = 0; i_8 < 23; i_8 += 2) 
        {
            for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
            {
                for (unsigned char i_10 = 2; i_10 < 22; i_10 += 1) 
                {
                    {
                        arr_39 [i_8] |= ((/* implicit */unsigned char) arr_31 [(short)14]);
                        var_25 = ((/* implicit */int) arr_38 [i_8] [i_8] [(signed char)16]);
                    }
                } 
            } 
        } 
    }
    var_26 = ((/* implicit */unsigned int) ((262140) <= (((/* implicit */int) var_3))));
    var_27 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) var_8))))) || (((/* implicit */_Bool) ((((var_6) + (((/* implicit */int) var_7)))) ^ (((/* implicit */int) var_3)))))));
}
