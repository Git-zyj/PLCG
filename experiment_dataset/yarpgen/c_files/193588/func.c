/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 193588
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=193588 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/193588
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
    var_17 = ((/* implicit */_Bool) min((var_17), (((/* implicit */_Bool) (-(((/* implicit */int) (short)27539)))))));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 2; i_0 < 23; i_0 += 3) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) min((var_18), (((/* implicit */signed char) arr_1 [i_0]))));
        /* LoopNest 3 */
        for (unsigned long long int i_1 = 0; i_1 < 24; i_1 += 2) 
        {
            for (short i_2 = 0; i_2 < 24; i_2 += 3) 
            {
                for (signed char i_3 = 0; i_3 < 24; i_3 += 3) 
                {
                    {
                        var_19 = ((/* implicit */unsigned char) max((var_19), (((/* implicit */unsigned char) -1378396437))));
                        arr_9 [(signed char)22] [(signed char)22] [(unsigned char)22] [i_0] [6U] [(unsigned char)18] = ((/* implicit */unsigned char) ((min((max((var_5), (((/* implicit */long long int) arr_8 [i_0])))), ((-(arr_2 [i_0] [i_1]))))) != (((/* implicit */long long int) ((/* implicit */int) arr_7 [i_0] [i_1])))));
                        var_20 -= ((/* implicit */_Bool) arr_8 [i_0]);
                        var_21 = ((/* implicit */short) -1378396460);
                    }
                } 
            } 
        } 
        var_22 = ((/* implicit */unsigned int) ((unsigned long long int) min((arr_7 [i_0 - 1] [i_0]), (arr_7 [i_0 + 1] [i_0]))));
    }
    /* vectorizable */
    for (unsigned char i_4 = 2; i_4 < 23; i_4 += 3) /* same iter space */
    {
        var_23 += ((/* implicit */short) (-(1378396436)));
        var_24 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_4] [i_4])) ? (arr_8 [i_4 - 2]) : (((/* implicit */int) arr_6 [i_4 + 1] [i_4] [i_4 - 1] [i_4] [(unsigned char)9]))));
        /* LoopNest 2 */
        for (signed char i_5 = 0; i_5 < 24; i_5 += 4) 
        {
            for (signed char i_6 = 0; i_6 < 24; i_6 += 2) 
            {
                {
                    arr_21 [i_4] [i_4 - 2] [i_4] [i_4] = ((/* implicit */unsigned int) arr_16 [i_4]);
                    /* LoopNest 2 */
                    for (unsigned int i_7 = 0; i_7 < 24; i_7 += 3) 
                    {
                        for (short i_8 = 0; i_8 < 24; i_8 += 1) 
                        {
                            {
                                var_25 -= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_14 [i_4] [i_5] [i_6]))))) ? (((((/* implicit */_Bool) arr_13 [i_4])) ? (((/* implicit */int) var_13)) : (((/* implicit */int) arr_25 [i_4] [i_4] [i_4] [i_4])))) : (((/* implicit */int) arr_7 [i_4] [i_4 - 1]))));
                                var_26 += ((/* implicit */unsigned char) ((unsigned int) 943168939U));
                                var_27 = var_15;
                            }
                        } 
                    } 
                    var_28 |= ((/* implicit */unsigned short) (-((-(1935788903U)))));
                }
            } 
        } 
        var_29 &= ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) -770143413)) < (var_8))) ? (((/* implicit */int) arr_13 [i_4 - 2])) : (((((/* implicit */_Bool) (short)-26519)) ? (1377300909) : (((/* implicit */int) (unsigned char)229))))));
    }
    var_30 = ((/* implicit */int) min(((unsigned char)202), ((unsigned char)255)));
}
