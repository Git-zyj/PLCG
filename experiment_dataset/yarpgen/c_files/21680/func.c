/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 21680
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=21680 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/21680
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
    var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)161))))) ? ((+(-1LL))) : (((((/* implicit */long long int) ((/* implicit */int) var_9))) - (var_1))))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)89))))) ? (((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)209)))) : (((/* implicit */int) (unsigned char)57)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_1);
        var_11 = ((/* implicit */_Bool) (+((+(((/* implicit */int) var_8))))));
    }
    for (short i_1 = 2; i_1 < 15; i_1 += 4) 
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) (unsigned char)198);
        /* LoopSeq 3 */
        for (unsigned int i_2 = 0; i_2 < 16; i_2 += 2) 
        {
            /* LoopNest 2 */
            for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) 
            {
                for (unsigned char i_4 = 2; i_4 < 15; i_4 += 3) 
                {
                    {
                        var_12 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)204)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_3 [i_1 + 1])))) ? (min((((/* implicit */long long int) arr_7 [i_1 + 1] [i_4 - 1])), (arr_3 [i_1 - 2]))) : (((/* implicit */long long int) ((/* implicit */int) arr_13 [i_4 - 2] [i_4] [i_4 - 2] [i_1 - 1])))));
                        arr_14 [i_1] [i_2] [(short)8] &= ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) var_0)) != (min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_9 [i_1] [8U] [i_1]))))), (((((/* implicit */_Bool) 15991617308442498313ULL)) ? (((/* implicit */unsigned long long int) -1)) : (15991617308442498313ULL)))))));
                        var_13 = ((/* implicit */short) max((var_1), (((/* implicit */long long int) (+(((((/* implicit */_Bool) (short)(-32767 - 1))) ? (((/* implicit */int) (unsigned char)79)) : (((/* implicit */int) var_2)))))))));
                        var_14 = ((/* implicit */int) arr_13 [i_1] [i_1] [i_1] [(short)14]);
                    }
                } 
            } 
            arr_15 [i_1 - 1] [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)42)) % (((/* implicit */int) (unsigned char)235))));
        }
        for (long long int i_5 = 3; i_5 < 13; i_5 += 3) 
        {
            arr_19 [i_1 - 2] [i_1] [(unsigned char)13] = ((/* implicit */unsigned char) (+(((/* implicit */int) min(((unsigned char)48), (arr_13 [i_5] [i_5] [i_5 + 2] [i_5]))))));
            arr_20 [(short)4] [i_5 + 2] = ((/* implicit */unsigned long long int) (+(((((/* implicit */_Bool) (+(((/* implicit */int) arr_7 [i_1] [(unsigned char)11]))))) ? (((/* implicit */int) (unsigned char)181)) : (((/* implicit */int) min((var_4), (var_4))))))));
        }
        for (unsigned char i_6 = 1; i_6 < 15; i_6 += 4) 
        {
            var_15 += ((unsigned char) (+(((/* implicit */int) var_4))));
            arr_24 [i_6 - 1] = ((/* implicit */int) ((unsigned long long int) ((int) arr_13 [(unsigned char)11] [(unsigned char)11] [(unsigned char)11] [i_6 - 1])));
            var_16 *= ((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1 + 1] [i_1]);
        }
        /* LoopSeq 1 */
        for (unsigned long long int i_7 = 0; i_7 < 16; i_7 += 1) 
        {
            arr_27 [9] = ((/* implicit */unsigned char) (+(((((/* implicit */_Bool) 72057594037927935ULL)) ? (((/* implicit */int) arr_17 [i_1 - 2] [i_1 - 1])) : (((/* implicit */int) arr_17 [i_1 + 1] [i_1 - 2]))))));
            var_17 = ((/* implicit */short) ((((/* implicit */int) arr_9 [i_1 - 1] [i_1 - 2] [i_1 - 2])) / ((+((+(arr_6 [10ULL] [i_7])))))));
            arr_28 [i_1] [i_1 + 1] = ((unsigned char) (unsigned char)214);
            var_18 = ((/* implicit */short) ((unsigned char) (+(((/* implicit */int) min((((/* implicit */short) var_2)), (var_3)))))));
        }
        arr_29 [i_1] [i_1 - 2] = ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) max(((unsigned char)166), (((/* implicit */unsigned char) (signed char)82))))) : (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) var_7)) : (1779145749)))))));
        var_19 = ((/* implicit */short) ((((((/* implicit */_Bool) 4493594066364877150ULL)) || (((/* implicit */_Bool) (unsigned char)166)))) ? (((/* implicit */int) arr_7 [i_1] [i_1])) : (((int) max((arr_12 [14ULL] [i_1 - 1]), ((unsigned char)221))))));
    }
    for (unsigned char i_8 = 0; i_8 < 13; i_8 += 2) 
    {
        /* LoopNest 2 */
        for (unsigned char i_9 = 4; i_9 < 9; i_9 += 2) 
        {
            for (unsigned int i_10 = 0; i_10 < 13; i_10 += 1) 
            {
                {
                    var_20 *= ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned char)206))));
                    arr_37 [i_9] [i_10] = ((/* implicit */long long int) ((((/* implicit */_Bool) 1935918916)) ? (2455126765267053302ULL) : (2701101330087335692ULL)));
                }
            } 
        } 
        /* LoopSeq 1 */
        /* vectorizable */
        for (signed char i_11 = 0; i_11 < 13; i_11 += 2) 
        {
            var_21 = ((/* implicit */int) (unsigned char)178);
            var_22 &= ((((/* implicit */int) arr_33 [(signed char)2] [(signed char)3] [i_11])) << (((/* implicit */int) ((((/* implicit */long long int) 1935918906)) <= (var_1)))));
            var_23 = ((/* implicit */long long int) (+((+(((/* implicit */int) arr_35 [i_11]))))));
        }
    }
}
