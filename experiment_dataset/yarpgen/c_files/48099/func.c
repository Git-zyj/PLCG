/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48099
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48099 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48099
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
    for (signed char i_0 = 4; i_0 < 22; i_0 += 3) 
    {
        for (unsigned short i_1 = 0; i_1 < 23; i_1 += 1) 
        {
            for (short i_2 = 0; i_2 < 23; i_2 += 1) 
            {
                {
                    var_12 ^= ((/* implicit */short) (-((+(var_0)))));
                    arr_6 [i_2] [i_1] [i_2] = ((/* implicit */_Bool) max(((+(-6709780784166333143LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_4 [i_0] [i_2] [i_2])) ? (((/* implicit */int) max(((_Bool)0), ((_Bool)1)))) : ((~(arr_5 [i_2] [i_1]))))))));
                    arr_7 [i_0] [i_2] [i_2] = (((_Bool)1) ? (2849893896432227096ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-95))));
                }
            } 
        } 
    } 
    /* LoopSeq 3 */
    for (unsigned long long int i_3 = 0; i_3 < 24; i_3 += 4) 
    {
        arr_11 [i_3] = ((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) arr_10 [i_3])) ? (2087145231) : (((/* implicit */int) min((arr_9 [i_3]), (arr_9 [i_3])))))), (((/* implicit */int) (_Bool)1))));
        arr_12 [i_3] [i_3] = ((/* implicit */signed char) (!(((/* implicit */_Bool) (-(max((var_0), (((/* implicit */unsigned long long int) arr_9 [i_3])))))))));
    }
    for (unsigned long long int i_4 = 0; i_4 < 14; i_4 += 1) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_5 = 1; i_5 < 13; i_5 += 4) 
        {
            for (unsigned short i_6 = 0; i_6 < 14; i_6 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) arr_17 [i_5 + 1] [(short)5] [i_4] [i_6]);
                    /* LoopSeq 4 */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_21 [i_4] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((12430309023486461208ULL) + (16777215ULL)))) ? (((/* implicit */int) arr_1 [i_4])) : (((/* implicit */int) (!(((/* implicit */_Bool) arr_16 [i_5 - 1])))))));
                        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) ((unsigned short) min((arr_15 [i_5 - 1] [i_7 - 1] [i_5 - 1]), (arr_15 [i_5 - 1] [i_7 - 1] [i_5 - 1])))))));
                    }
                    for (short i_8 = 4; i_8 < 13; i_8 += 3) 
                    {
                        var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) min((((/* implicit */int) ((signed char) arr_19 [i_5] [i_5 + 1] [(unsigned short)10] [(unsigned short)10]))), (((((/* implicit */_Bool) var_1)) ? (((/* implicit */int) arr_19 [(signed char)9] [i_5 - 1] [i_6] [i_6])) : (((/* implicit */int) arr_17 [i_4] [i_5 + 1] [0] [i_6])))))))));
                        arr_24 [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max(((-(((/* implicit */int) (_Bool)1)))), (((/* implicit */int) arr_9 [i_4]))))) ? (max((((/* implicit */int) ((unsigned short) var_1))), ((~(((/* implicit */int) arr_0 [i_6] [i_8 + 1])))))) : (((/* implicit */int) arr_19 [i_4] [i_4] [i_4] [i_4]))));
                        var_16 ^= ((/* implicit */unsigned short) (-((+(((/* implicit */int) (!(((/* implicit */_Bool) arr_18 [i_4])))))))));
                        arr_25 [i_4] [i_8] = ((/* implicit */long long int) (((-(((var_6) | (((/* implicit */int) var_9)))))) + ((~(((/* implicit */int) arr_22 [i_4] [i_4] [i_4] [0ULL]))))));
                    }
                    /* vectorizable */
                    for (short i_9 = 2; i_9 < 13; i_9 += 2) 
                    {
                        var_17 = ((/* implicit */unsigned char) max((var_17), (((/* implicit */unsigned char) (-(arr_4 [i_5] [i_9] [i_9 - 2]))))));
                        var_18 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_14 [i_9 - 2])) ? (arr_14 [i_6]) : (arr_14 [i_4])));
                    }
                    for (unsigned int i_10 = 0; i_10 < 14; i_10 += 2) 
                    {
                        var_19 = ((/* implicit */short) ((((/* implicit */_Bool) ((1ULL) & (((/* implicit */unsigned long long int) ((/* implicit */int) arr_28 [i_5 - 1])))))) ? (((/* implicit */int) arr_28 [i_5 + 1])) : (((((/* implicit */int) arr_28 [i_5 + 1])) - (((/* implicit */int) arr_28 [i_5 + 1]))))));
                        var_20 = ((/* implicit */short) (((!(((/* implicit */_Bool) (-(((/* implicit */int) arr_19 [i_10] [(short)5] [(_Bool)1] [i_4]))))))) ? (min((arr_16 [i_5 - 1]), (((/* implicit */unsigned long long int) min((arr_3 [19ULL] [i_6] [i_10]), (((/* implicit */int) var_2))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) arr_5 [i_6] [i_10])) && (((/* implicit */_Bool) ((signed char) arr_29 [1ULL] [(short)5] [(unsigned char)11] [i_4])))))))));
                    }
                }
            } 
        } 
        arr_30 [i_4] [i_4] = arr_14 [i_4];
        arr_31 [i_4] = ((/* implicit */short) arr_3 [i_4] [i_4] [i_4]);
        arr_32 [i_4] = arr_16 [i_4];
    }
    for (signed char i_11 = 0; i_11 < 18; i_11 += 2) 
    {
        arr_35 [i_11] = ((/* implicit */signed char) max((max((arr_33 [i_11]), (arr_33 [i_11]))), (arr_33 [i_11])));
        var_21 ^= ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_8 [i_11])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_11]))) : (arr_34 [i_11] [i_11]))) ^ (((((/* implicit */_Bool) arr_34 [i_11] [i_11])) ? (arr_34 [i_11] [i_11]) : (arr_34 [17LL] [i_11])))));
        var_22 = ((/* implicit */int) min((var_22), ((+((-((-(((/* implicit */int) arr_1 [i_11]))))))))));
        arr_36 [i_11] [i_11] = ((/* implicit */_Bool) (~(((((/* implicit */int) (unsigned short)41857)) * (((/* implicit */int) (signed char)23))))));
    }
    var_23 += var_1;
}
