/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218321
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218321 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218321
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
    for (long long int i_0 = 2; i_0 < 13; i_0 += 2) 
    {
        for (long long int i_1 = 2; i_1 < 12; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 14; i_2 += 4) 
            {
                {
                    arr_6 [i_1] = ((/* implicit */unsigned long long int) max(((-(((((/* implicit */_Bool) 18389867866860654475ULL)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_0)))))), (((/* implicit */int) ((arr_2 [i_0] [i_1]) == (arr_0 [i_0 - 1] [i_1 + 2]))))));
                    /* LoopSeq 1 */
                    /* vectorizable */
                    for (unsigned char i_3 = 4; i_3 < 13; i_3 += 2) 
                    {
                        arr_11 [i_3] [(signed char)6] [i_2] [i_3] &= ((/* implicit */unsigned char) ((arr_9 [i_0] [13U] [5U] [0U] [i_2] [i_3 - 1]) ? (((/* implicit */int) arr_9 [i_0 + 1] [i_1 - 1] [i_2] [i_2] [i_2] [i_0])) : (((/* implicit */int) (signed char)29))));
                        var_14 *= ((/* implicit */signed char) ((((/* implicit */_Bool) arr_4 [i_0] [4ULL] [i_2])) ? (23ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 - 1] [i_3] [i_1] [i_1])))));
                        /* LoopSeq 1 */
                        for (long long int i_4 = 1; i_4 < 12; i_4 += 3) 
                        {
                            var_15 = ((/* implicit */_Bool) ((int) var_4));
                            var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) arr_4 [i_4] [i_3] [i_2]))));
                            arr_16 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */_Bool) ((-8232252273588942381LL) / (((/* implicit */long long int) ((/* implicit */int) (_Bool)1)))));
                            var_17 = ((/* implicit */unsigned char) ((arr_15 [11U] [i_1] [i_2] [i_2] [1LL] [i_4 - 1] [10ULL]) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)82)))));
                        }
                    }
                }
            } 
        } 
    } 
    /* LoopSeq 1 */
    for (signed char i_5 = 0; i_5 < 23; i_5 += 4) 
    {
        var_18 = ((/* implicit */int) (_Bool)0);
        /* LoopSeq 3 */
        /* vectorizable */
        for (unsigned char i_6 = 0; i_6 < 23; i_6 += 1) 
        {
            var_19 = ((/* implicit */long long int) (~(((/* implicit */int) arr_17 [i_5] [7LL]))));
            arr_21 [(_Bool)1] [i_6] = ((/* implicit */unsigned int) 469492995);
        }
        for (unsigned int i_7 = 1; i_7 < 21; i_7 += 3) 
        {
            var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) min((((unsigned int) arr_20 [i_7] [i_7])), (((/* implicit */unsigned int) ((short) arr_19 [i_5] [i_5]))))))));
            var_21 = ((/* implicit */unsigned short) min((((/* implicit */long long int) ((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (unsigned char)200)) : (-1974234727))) == (((/* implicit */int) arr_18 [i_7 + 1] [i_7 - 1]))))), (((((((/* implicit */long long int) ((/* implicit */int) var_7))) > (2199023255520LL))) ? (min((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) (short)32767)) ? (((/* implicit */int) arr_19 [i_5] [i_7])) : (469492995))))))));
            var_22 = ((/* implicit */unsigned int) (+(((/* implicit */int) ((((/* implicit */int) (unsigned char)236)) <= (((/* implicit */int) arr_17 [i_7 + 1] [i_7 + 2])))))));
        }
        /* vectorizable */
        for (unsigned int i_8 = 3; i_8 < 20; i_8 += 3) 
        {
            var_23 = ((/* implicit */unsigned int) ((arr_26 [i_5] [i_5]) & (((/* implicit */long long int) 194327712))));
            arr_27 [2U] [i_8 + 2] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) -8472370377008946370LL)) ? (((/* implicit */unsigned long long int) 1013004118608819956LL)) : (16100429005490372714ULL)))) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-46))) : (((((/* implicit */_Bool) (signed char)-52)) ? (1744746257U) : (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))))));
            /* LoopNest 2 */
            for (unsigned long long int i_9 = 2; i_9 < 21; i_9 += 3) 
            {
                for (unsigned char i_10 = 3; i_10 < 20; i_10 += 3) 
                {
                    {
                        arr_33 [i_5] [i_8] [i_8] [i_10] = ((/* implicit */unsigned long long int) arr_31 [i_5] [i_5] [i_9 - 1] [i_5] [i_10]);
                        var_24 &= ((unsigned int) ((arr_26 [(_Bool)1] [i_8]) & (arr_26 [i_9] [i_10])));
                        var_25 = ((/* implicit */unsigned int) ((((/* implicit */unsigned int) 194327712)) > (((2025589051U) >> (((arr_24 [9] [i_8]) - (6488386750317993535LL)))))));
                    }
                } 
            } 
            arr_34 [i_5] [i_5] = ((/* implicit */_Bool) 10542035499978330404ULL);
        }
        var_26 = ((/* implicit */long long int) max((var_0), (((/* implicit */signed char) var_13))));
    }
}
