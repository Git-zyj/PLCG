/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27653
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27653 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27653
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
    var_14 += ((/* implicit */int) var_4);
    var_15 += ((/* implicit */unsigned long long int) min(((unsigned short)0), (((/* implicit */unsigned short) (unsigned char)0))));
    var_16 += ((/* implicit */unsigned long long int) var_1);
    var_17 = ((/* implicit */short) var_9);
    /* LoopSeq 4 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */short) min(((((_Bool)1) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) (unsigned short)33355)) / (((/* implicit */int) arr_0 [i_0]))))) : (max((((/* implicit */unsigned long long int) arr_1 [i_0])), (18446744073709551615ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */int) arr_1 [i_0])) > (((/* implicit */int) arr_1 [i_0])))))));
        var_19 = ((/* implicit */unsigned short) (+(max((((15U) ^ (((/* implicit */unsigned int) ((/* implicit */int) (short)8257))))), (((/* implicit */unsigned int) ((signed char) (short)-8258)))))));
        var_20 = ((/* implicit */unsigned short) ((int) (short)8257));
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 4) 
    {
        var_21 = ((/* implicit */short) min((((/* implicit */long long int) max((arr_3 [i_1] [i_1 + 2]), (arr_3 [7ULL] [i_1 - 1])))), ((+(arr_2 [i_1 + 1])))));
        arr_4 [i_1] = ((/* implicit */signed char) (short)-8279);
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned int) max((((arr_2 [i_1]) | (((/* implicit */long long int) (+(((/* implicit */int) arr_1 [i_1 + 1]))))))), (((/* implicit */long long int) ((unsigned char) var_6)))));
    }
    for (unsigned short i_2 = 0; i_2 < 10; i_2 += 2) /* same iter space */
    {
        var_22 += ((/* implicit */unsigned char) ((_Bool) ((((/* implicit */_Bool) var_12)) ? (arr_7 [i_2]) : (arr_7 [i_2]))));
        arr_8 [i_2] = ((/* implicit */unsigned long long int) (-(min((((((/* implicit */_Bool) (short)-8268)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_3 [i_2] [i_2]))), (((/* implicit */unsigned int) min((var_11), (((/* implicit */short) var_3)))))))));
    }
    /* vectorizable */
    for (unsigned short i_3 = 0; i_3 < 10; i_3 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */signed char) min((var_23), (((/* implicit */signed char) arr_3 [(signed char)1] [(signed char)1]))));
        arr_11 [i_3] = ((/* implicit */unsigned char) ((short) ((unsigned long long int) (short)-8253)));
        var_24 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */int) (short)8257)) : (((/* implicit */int) arr_0 [i_3]))));
        /* LoopSeq 2 */
        for (unsigned short i_4 = 3; i_4 < 6; i_4 += 3) 
        {
            var_25 += ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_10 [i_4 - 3])) ? (((/* implicit */int) arr_10 [i_4 + 3])) : (((/* implicit */int) arr_10 [i_4 + 2]))));
            var_26 += ((/* implicit */_Bool) ((unsigned long long int) (short)8276));
            /* LoopNest 3 */
            for (unsigned long long int i_5 = 2; i_5 < 9; i_5 += 4) 
            {
                for (int i_6 = 0; i_6 < 10; i_6 += 1) 
                {
                    for (long long int i_7 = 0; i_7 < 10; i_7 += 1) 
                    {
                        {
                            var_27 += ((/* implicit */unsigned long long int) arr_3 [i_5 - 1] [i_5 - 1]);
                            var_28 = ((/* implicit */_Bool) min((var_28), (((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_3])) ? (((((/* implicit */long long int) ((/* implicit */int) (short)-8243))) / (arr_7 [i_3]))) : (((/* implicit */long long int) (+(((/* implicit */int) arr_6 [i_7] [i_6]))))))))));
                            var_29 = ((/* implicit */signed char) (+(((/* implicit */int) (short)8236))));
                            arr_21 [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_12 [i_5 + 1])) ? (((/* implicit */int) arr_0 [i_4 + 4])) : (((/* implicit */int) arr_12 [i_5 + 1]))));
                        }
                    } 
                } 
            } 
            arr_22 [i_3] [i_3] [i_4] = ((/* implicit */unsigned short) arr_9 [i_3]);
        }
        for (unsigned char i_8 = 2; i_8 < 8; i_8 += 3) 
        {
            arr_25 [i_3] [i_3] = ((/* implicit */long long int) arr_3 [i_8 - 1] [i_8 + 1]);
            var_30 = ((/* implicit */short) ((var_2) != (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_0))))));
        }
        var_31 += ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (short)8257))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_19 [6ULL] [i_3] [6ULL])) || (((/* implicit */_Bool) arr_3 [i_3] [i_3]))))) : (((/* implicit */int) (short)-8259))));
    }
}
