/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239016
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239016 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239016
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
    for (unsigned long long int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_16 = ((/* implicit */unsigned char) min((((/* implicit */unsigned short) (_Bool)0)), ((unsigned short)65507)));
        var_17 += ((/* implicit */signed char) ((max((((arr_1 [i_0 + 3]) ? (var_2) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65507))))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) (unsigned short)28))))))) >> ((((-(var_8))) - (645161933U)))));
    }
    for (unsigned char i_1 = 1; i_1 < 23; i_1 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (unsigned long long int i_2 = 2; i_2 < 22; i_2 += 4) 
        {
            /* LoopSeq 4 */
            for (unsigned int i_3 = 4; i_3 < 24; i_3 += 1) 
            {
                arr_8 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) var_1)) ? (((((/* implicit */long long int) ((/* implicit */int) arr_5 [i_1]))) ^ (arr_6 [i_1]))) : (arr_6 [i_1])));
                arr_9 [i_1] [i_2] [i_1] [i_1] = ((/* implicit */short) arr_3 [i_3]);
                var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) (unsigned short)29))));
            }
            for (int i_4 = 0; i_4 < 25; i_4 += 3) 
            {
                var_19 += ((/* implicit */unsigned short) var_2);
                var_20 = ((/* implicit */_Bool) max((var_20), (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1] [i_1])) ? (((/* implicit */unsigned long long int) var_7)) : (var_4)))) || (((/* implicit */_Bool) ((arr_3 [i_1]) ? (arr_2 [i_1 - 1] [i_1 - 1]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_10 [i_4]))))))))));
            }
            for (long long int i_5 = 0; i_5 < 25; i_5 += 3) 
            {
                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_2 [i_1] [i_1 + 1])) ? (((arr_3 [i_1]) ? (((/* implicit */int) (unsigned short)65514)) : (((/* implicit */int) (unsigned short)65514)))) : (((/* implicit */int) ((var_4) != (((/* implicit */unsigned long long int) ((/* implicit */int) var_15))))))));
                /* LoopSeq 3 */
                for (long long int i_6 = 0; i_6 < 25; i_6 += 3) 
                {
                    var_22 *= ((/* implicit */unsigned int) ((int) ((((/* implicit */int) (unsigned short)16801)) / (((/* implicit */int) arr_3 [i_6])))));
                    arr_19 [i_1] [i_1] [i_5] [i_6] = ((/* implicit */unsigned short) (-(((/* implicit */int) arr_14 [i_2 - 2] [i_1 - 1] [i_1 + 1] [i_1 + 1]))));
                }
                for (int i_7 = 3; i_7 < 24; i_7 += 1) 
                {
                    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967295U)) ? (((/* implicit */int) arr_20 [i_1] [i_1] [i_1] [i_5] [i_7] [i_7])) : (((/* implicit */int) var_14))))))))));
                    arr_22 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_13 [i_1] [i_2 + 2] [i_2 - 2])) ? (((/* implicit */int) arr_5 [i_1])) : (((((((/* implicit */int) arr_18 [i_1] [i_1] [i_1] [i_1 - 1])) + (2147483647))) >> (((((/* implicit */int) arr_13 [i_1] [0U] [i_7])) - (216)))))));
                }
                for (unsigned int i_8 = 0; i_8 < 25; i_8 += 3) 
                {
                    /* LoopSeq 1 */
                    for (unsigned int i_9 = 0; i_9 < 25; i_9 += 3) 
                    {
                        var_24 -= ((/* implicit */unsigned long long int) (+((~(((/* implicit */int) (unsigned short)29))))));
                        arr_27 [i_1] [i_1] [i_5] [i_2] [i_1] = ((/* implicit */unsigned char) (+(var_2)));
                    }
                    var_25 = ((/* implicit */long long int) max((var_25), (((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_5] [i_2 - 1] [i_1] [i_1 + 1] [i_2] [i_5])) && (((/* implicit */_Bool) arr_26 [i_1] [i_1] [i_2 - 2] [i_5] [i_1 - 1] [i_2] [i_1])))))));
                    arr_28 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) arr_14 [i_1] [i_1 - 1] [i_1 + 2] [i_2 + 2])) ? (arr_23 [i_8] [i_5] [i_5] [i_2] [i_1] [i_1]) : (((/* implicit */unsigned int) arr_4 [i_1] [i_1] [i_1]))));
                    var_26 = ((/* implicit */unsigned int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (unsigned short)65502)) : (((/* implicit */int) arr_3 [i_1]))))));
                    arr_29 [i_1] [i_1] [i_1] = var_6;
                }
                arr_30 [i_1] [i_1] = ((/* implicit */unsigned short) ((_Bool) arr_18 [i_1 + 1] [i_2 + 2] [i_2 + 3] [i_2 + 3]));
                arr_31 [i_1] = ((/* implicit */unsigned char) (~((+(((/* implicit */int) (_Bool)1))))));
            }
            for (unsigned long long int i_10 = 0; i_10 < 25; i_10 += 1) 
            {
                var_27 = ((/* implicit */unsigned int) (!(var_15)));
                var_28 = ((/* implicit */unsigned long long int) (_Bool)1);
                arr_34 [i_1] [i_2 + 1] [i_1] = ((/* implicit */unsigned int) (unsigned short)22);
            }
            var_29 = ((/* implicit */long long int) (-(((/* implicit */int) arr_26 [i_1 - 1] [i_1 - 1] [i_1 - 1] [i_1 + 1] [i_1 + 2] [i_1] [i_1 - 1]))));
            var_30 = ((/* implicit */_Bool) arr_12 [i_2] [i_2 + 3] [i_1] [i_1]);
            var_31 = var_4;
            arr_35 [i_1] [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_20 [i_1] [i_1] [i_1 - 1] [i_2] [i_2] [i_2]))) : (arr_15 [i_2] [i_1 - 1] [i_1])))) ? (arr_15 [i_1] [i_2] [i_2]) : (((/* implicit */unsigned int) (~(((/* implicit */int) var_11)))))));
        }
        for (unsigned char i_11 = 1; i_11 < 21; i_11 += 3) 
        {
            var_32 = ((/* implicit */long long int) (+(((/* implicit */int) (_Bool)1))));
            arr_39 [i_1] [i_1] = ((/* implicit */unsigned char) max(((+(arr_16 [i_1 - 1] [i_11 + 3] [i_11 - 1] [i_11] [i_11]))), (((((/* implicit */_Bool) (unsigned short)16371)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-32))) : (arr_16 [i_1 - 1] [i_11 + 2] [i_11 + 2] [i_11 + 2] [i_11])))));
            var_33 = ((/* implicit */unsigned short) var_5);
        }
        arr_40 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) != (((/* implicit */int) (unsigned short)65514))));
        var_34 = ((/* implicit */unsigned char) arr_26 [i_1] [i_1] [i_1] [i_1] [i_1 + 1] [i_1] [i_1 + 1]);
        arr_41 [i_1] = ((/* implicit */short) (!((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) arr_11 [i_1])) : (((/* implicit */int) (_Bool)1)))))))));
    }
    var_35 = ((/* implicit */short) var_4);
}
