/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206401
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206401 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206401
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
    for (int i_0 = 0; i_0 < 16; i_0 += 4) /* same iter space */
    {
        var_15 = ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (arr_1 [i_0] [i_0]) : (arr_1 [i_0] [i_0]));
        var_16 += ((/* implicit */unsigned short) (+(((/* implicit */int) ((var_5) < (arr_1 [i_0] [i_0]))))));
    }
    for (int i_1 = 0; i_1 < 16; i_1 += 4) /* same iter space */
    {
        var_17 = ((/* implicit */unsigned int) (unsigned char)255);
        var_18 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_1])) ? (arr_3 [i_1] [i_1]) : (arr_3 [i_1] [i_1])))) ? (max((((/* implicit */long long int) (unsigned char)255)), (arr_3 [i_1] [i_1]))) : ((+(arr_3 [i_1] [i_1]))));
        var_19 *= ((/* implicit */unsigned char) max((((unsigned long long int) (unsigned char)255)), (((/* implicit */unsigned long long int) ((_Bool) ((int) var_2))))));
        var_20 = ((/* implicit */int) min((var_20), (((/* implicit */int) 9223372036854775807LL))));
        /* LoopNest 2 */
        for (unsigned short i_2 = 0; i_2 < 16; i_2 += 3) 
        {
            for (unsigned long long int i_3 = 4; i_3 < 15; i_3 += 2) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_4 = 0; i_4 < 16; i_4 += 4) 
                    {
                        arr_14 [i_2] [i_3] [(unsigned short)5] [i_2] = ((/* implicit */short) max((((/* implicit */unsigned long long int) arr_8 [i_2])), (arr_7 [i_1] [i_2] [i_3 - 2])));
                        var_21 = ((/* implicit */long long int) (+(((/* implicit */int) ((short) (!(((/* implicit */_Bool) (signed char)8))))))));
                        arr_15 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */short) min((((/* implicit */long long int) min((((/* implicit */unsigned int) (signed char)-8)), (((unsigned int) arr_10 [i_1] [i_2] [i_3 - 1] [i_2]))))), (max((((/* implicit */long long int) arr_12 [i_2])), (((((/* implicit */long long int) ((/* implicit */int) arr_4 [14U]))) | (arr_8 [i_2])))))));
                        var_22 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (signed char)-8))));
                    }
                    /* vectorizable */
                    for (signed char i_5 = 1; i_5 < 14; i_5 += 3) 
                    {
                        var_23 = ((/* implicit */signed char) arr_17 [i_3] [i_2]);
                        var_24 -= ((/* implicit */long long int) ((int) arr_2 [i_5]));
                    }
                    /* vectorizable */
                    for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                    {
                        /* LoopSeq 1 */
                        for (unsigned short i_7 = 0; i_7 < 16; i_7 += 3) 
                        {
                            var_25 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (unsigned char)255))));
                            arr_25 [i_2] [i_2] [i_2] [i_2] = ((/* implicit */unsigned char) var_7);
                        }
                        var_26 = ((/* implicit */signed char) ((((((/* implicit */int) var_14)) == (((/* implicit */int) var_11)))) ? (((((/* implicit */unsigned long long int) arr_11 [i_6] [i_2] [i_2] [i_1])) / (arr_7 [i_6] [i_6] [i_6]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_11)))));
                    }
                    var_27 = ((/* implicit */int) min((var_27), (((/* implicit */int) 10198824886718319432ULL))));
                    arr_26 [i_3 - 1] [i_1] [i_1] [i_1] &= (!(((/* implicit */_Bool) (+(arr_3 [i_3 - 1] [i_2])))));
                    var_28 = ((/* implicit */unsigned int) min((max((arr_10 [i_1] [i_1] [i_2] [i_2]), (max((arr_10 [i_2] [i_1] [i_1] [i_2]), (arr_10 [i_3] [5U] [5U] [i_2]))))), (((/* implicit */long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) var_3))))) & (((/* implicit */int) var_3)))))));
                }
            } 
        } 
    }
    for (int i_8 = 0; i_8 < 16; i_8 += 4) /* same iter space */
    {
        var_29 = ((/* implicit */long long int) ((min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_10))))), (((var_9) << (((arr_6 [i_8] [i_8]) + (5777415233413290105LL))))))) < (((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) (signed char)7)) ? (((/* implicit */int) arr_27 [i_8] [i_8])) : (((/* implicit */int) var_12)))))))));
        var_30 = ((/* implicit */unsigned int) (signed char)7);
    }
    /* LoopNest 2 */
    for (long long int i_9 = 0; i_9 < 19; i_9 += 3) 
    {
        for (unsigned short i_10 = 2; i_10 < 18; i_10 += 4) 
        {
            {
                var_31 = ((/* implicit */int) min((var_31), (max((((((/* implicit */_Bool) min(((unsigned char)1), (((/* implicit */unsigned char) (signed char)8))))) ? (((/* implicit */int) min((((/* implicit */unsigned short) var_13)), (arr_35 [i_9])))) : (((/* implicit */int) max(((signed char)-8), (((/* implicit */signed char) var_12))))))), ((+(((/* implicit */int) arr_35 [i_9]))))))));
                /* LoopNest 2 */
                for (_Bool i_11 = 0; i_11 < 1; i_11 += 1) 
                {
                    for (unsigned int i_12 = 1; i_12 < 17; i_12 += 4) 
                    {
                        {
                            var_32 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)1)) ? (max((10428806370549783958ULL), (((/* implicit */unsigned long long int) (unsigned char)1)))) : (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) arr_43 [i_9] [i_9] [i_10 - 2] [i_12 - 1])), (arr_40 [i_12 - 1] [i_10 - 2] [i_9]))))));
                            arr_44 [i_9] [10LL] [i_11] [i_12 - 1] [i_12] = ((/* implicit */int) arr_35 [i_10]);
                            var_33 -= ((/* implicit */unsigned long long int) arr_40 [i_9] [i_9] [i_12]);
                        }
                    } 
                } 
            }
        } 
    } 
}
