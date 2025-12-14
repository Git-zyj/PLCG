/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4588
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
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_13 = ((/* implicit */short) min((var_13), (((/* implicit */short) ((((/* implicit */_Bool) ((signed char) arr_1 [(signed char)8]))) ? (((/* implicit */unsigned int) (-(1790480832)))) : (min((var_5), (arr_1 [(short)2]))))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (short i_1 = 2; i_1 < 11; i_1 += 4) 
        {
            var_14 &= ((/* implicit */unsigned char) (-(arr_4 [i_1] [i_1 + 2])));
            var_15 = ((/* implicit */_Bool) ((((/* implicit */_Bool) 1790480832)) ? (((/* implicit */int) (_Bool)1)) : (-977865166)));
            /* LoopNest 3 */
            for (long long int i_2 = 0; i_2 < 15; i_2 += 3) 
            {
                for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
                {
                    for (int i_4 = 1; i_4 < 12; i_4 += 3) 
                    {
                        {
                            var_16 |= ((/* implicit */unsigned int) ((1790480832) >= (((((/* implicit */_Bool) var_3)) ? (1790480850) : (((/* implicit */int) (short)-9587))))));
                            var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (short)-9578))));
                        }
                    } 
                } 
            } 
            arr_13 [i_0] [i_0] [i_0] = -1871443626;
            var_18 = (+(((/* implicit */int) (!(((/* implicit */_Bool) var_7))))));
        }
    }
    for (unsigned char i_5 = 2; i_5 < 24; i_5 += 2) 
    {
        arr_17 [i_5 + 1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_15 [i_5 - 2])) : (((/* implicit */int) arr_15 [i_5 - 1]))))) ? (((arr_15 [i_5 - 1]) ? (((/* implicit */unsigned int) 1790480810)) : (var_0))) : (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) (unsigned char)222)), ((short)-9582)))))));
        var_19 = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-69))));
        var_20 += ((/* implicit */long long int) ((((/* implicit */_Bool) -1579924703)) ? (min((((/* implicit */int) arr_16 [i_5 - 2] [i_5])), ((-(((/* implicit */int) (short)-9592)))))) : ((-(((/* implicit */int) ((var_1) >= (((/* implicit */long long int) 1790480832)))))))));
    }
    for (int i_6 = 0; i_6 < 24; i_6 += 2) 
    {
        /* LoopSeq 1 */
        for (short i_7 = 0; i_7 < 24; i_7 += 2) 
        {
            var_21 += ((/* implicit */unsigned long long int) ((signed char) ((((/* implicit */_Bool) max((var_9), (((/* implicit */unsigned long long int) (signed char)66))))) ? (arr_21 [i_7]) : (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_6] [i_6]))))));
            var_22 *= ((/* implicit */unsigned long long int) var_5);
            var_23 = ((/* implicit */unsigned long long int) max((var_23), (((/* implicit */unsigned long long int) arr_21 [i_6]))));
            var_24 |= ((/* implicit */short) ((((/* implicit */int) var_8)) / (((/* implicit */int) (signed char)-66))));
            var_25 = ((/* implicit */unsigned char) max((var_25), (((/* implicit */unsigned char) (-(((/* implicit */int) (signed char)-20)))))));
        }
        var_26 = ((/* implicit */_Bool) min((var_26), (((/* implicit */_Bool) (((!(((/* implicit */_Bool) min((var_0), (var_5)))))) ? (((/* implicit */int) min((arr_20 [i_6] [i_6]), (((/* implicit */unsigned char) arr_16 [i_6] [i_6]))))) : (((/* implicit */int) ((((/* implicit */int) (signed char)98)) >= (((/* implicit */int) (signed char)-66))))))))));
        var_27 *= ((/* implicit */_Bool) (+(((/* implicit */int) (signed char)-8))));
    }
    /* vectorizable */
    for (signed char i_8 = 4; i_8 < 9; i_8 += 2) 
    {
        arr_25 [i_8 - 4] [i_8 - 4] = ((/* implicit */long long int) ((_Bool) (signed char)-113));
        arr_26 [i_8] = ((/* implicit */signed char) var_2);
        var_28 = ((((/* implicit */_Bool) arr_11 [i_8 - 3] [i_8 - 4])) || (((/* implicit */_Bool) var_8)));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned char i_9 = 0; i_9 < 11; i_9 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_29 [i_9] [i_9]))));
        arr_31 [i_9] |= ((/* implicit */unsigned int) ((((/* implicit */_Bool) -948679033)) && (((/* implicit */_Bool) 1790480832))));
    }
    for (unsigned char i_10 = 0; i_10 < 11; i_10 += 4) /* same iter space */
    {
        var_30 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) var_10)) ? (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) (signed char)-113)) && (((/* implicit */_Bool) var_6)))))) : (((arr_2 [i_10]) ? (2847265404582125793LL) : (((/* implicit */long long int) ((/* implicit */int) (short)9577)))))))));
        arr_35 [i_10] = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)109)) + (max(((-(((/* implicit */int) var_10)))), (((/* implicit */int) max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)222))))))));
    }
    var_31 = ((/* implicit */signed char) ((long long int) (+(((/* implicit */int) (_Bool)1)))));
    var_32 = ((/* implicit */long long int) (((-(((/* implicit */int) (signed char)109)))) ^ (((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (_Bool)1))))))))));
}
