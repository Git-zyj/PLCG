/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 42312
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=42312 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/42312
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
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 3; i_0 < 20; i_0 += 1) 
    {
        var_14 = ((/* implicit */signed char) var_11);
        var_15 ^= ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_1 [i_0 - 3]))));
    }
    /* vectorizable */
    for (short i_1 = 2; i_1 < 12; i_1 += 4) 
    {
        arr_7 [i_1] &= ((/* implicit */int) (~(arr_3 [i_1 - 2])));
        var_16 = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 2]))) - ((-(var_4)))));
        /* LoopSeq 2 */
        for (signed char i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            var_17 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (arr_8 [i_1] [i_2 - 1] [(signed char)1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [8ULL])))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((unsigned char) var_8)))));
            var_18 |= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)65531)) != (arr_2 [i_1])));
        }
        for (unsigned long long int i_3 = 1; i_3 < 10; i_3 += 3) 
        {
            /* LoopNest 3 */
            for (short i_4 = 2; i_4 < 13; i_4 += 1) 
            {
                for (long long int i_5 = 0; i_5 < 14; i_5 += 3) 
                {
                    for (unsigned int i_6 = 4; i_6 < 13; i_6 += 2) 
                    {
                        {
                            arr_20 [i_6] [i_6] [i_3] |= ((/* implicit */int) arr_3 [i_1]);
                            var_19 *= ((/* implicit */signed char) (-(arr_11 [(short)8] [i_4 + 1] [i_4 - 1])));
                            var_20 ^= ((/* implicit */unsigned short) arr_4 [i_3 + 3]);
                            var_21 ^= ((/* implicit */int) (+((~(var_9)))));
                        }
                    } 
                } 
            } 
            var_22 = ((/* implicit */unsigned long long int) arr_0 [13]);
            arr_21 [i_3] [i_3] = ((/* implicit */short) var_4);
            var_23 *= ((/* implicit */unsigned int) ((arr_19 [i_1] [(short)9] [(short)9]) % (arr_19 [i_1 + 1] [i_1 - 1] [i_1 + 1])));
            arr_22 [i_3] = ((/* implicit */unsigned int) (((+(var_2))) % (((var_4) % (((/* implicit */unsigned long long int) arr_2 [i_3]))))));
        }
    }
    /* vectorizable */
    for (int i_7 = 1; i_7 < 23; i_7 += 4) 
    {
        /* LoopSeq 3 */
        for (long long int i_8 = 2; i_8 < 21; i_8 += 2) 
        {
            arr_27 [i_7] = ((/* implicit */short) ((((/* implicit */_Bool) (+(var_6)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_24 [(_Bool)1] [i_8])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) arr_23 [i_8]))))) : (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_23 [i_7]))) - (var_8)))));
            arr_28 [i_7] = ((/* implicit */signed char) arr_24 [i_7 - 1] [i_7 + 1]);
            var_24 = ((/* implicit */signed char) (~((+(((/* implicit */int) (short)0))))));
            var_25 ^= ((/* implicit */_Bool) ((arr_26 [i_8] [i_8 + 1]) % (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_23 [i_7 - 1])))))));
        }
        for (signed char i_9 = 0; i_9 < 24; i_9 += 2) /* same iter space */
        {
            arr_32 [i_7] = arr_30 [i_7];
            arr_33 [i_7] [i_9] = ((/* implicit */signed char) ((arr_26 [i_7] [i_7]) != (((/* implicit */unsigned long long int) arr_29 [i_7]))));
            var_26 = ((/* implicit */int) (signed char)68);
        }
        for (signed char i_10 = 0; i_10 < 24; i_10 += 2) /* same iter space */
        {
            var_27 -= ((/* implicit */_Bool) arr_35 [i_7] [i_7 + 1] [i_7]);
            arr_37 [i_10] &= ((/* implicit */short) (((_Bool)0) ? (((unsigned long long int) arr_30 [i_10])) : (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))));
            var_28 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_24 [i_7 - 1] [i_10])) ? (((/* implicit */int) arr_30 [i_10])) : (((/* implicit */int) (signed char)-68))));
            var_29 = ((/* implicit */unsigned short) (+((-(arr_29 [i_10])))));
        }
        arr_38 [i_7] [i_7] = ((((/* implicit */_Bool) arr_25 [i_7 - 1] [i_7 + 1] [i_7 - 1])) ? (var_6) : (((/* implicit */int) (_Bool)1)));
    }
    var_30 *= min((((((/* implicit */_Bool) ((((/* implicit */_Bool) 10)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))) : (var_3)))) ? (((/* implicit */unsigned long long int) var_9)) : (max((((/* implicit */unsigned long long int) (_Bool)1)), (var_10))))), (((/* implicit */unsigned long long int) var_6)));
    var_31 ^= ((/* implicit */long long int) var_11);
    var_32 = ((/* implicit */unsigned int) var_5);
}
