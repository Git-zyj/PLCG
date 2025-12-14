/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192334
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192334 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192334
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
    for (unsigned long long int i_0 = 2; i_0 < 24; i_0 += 1) 
    {
        arr_2 [19U] &= ((/* implicit */signed char) arr_1 [i_0]);
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    var_13 = ((/* implicit */short) (+((-(((/* implicit */int) ((short) 2045058615)))))));
                    var_14 *= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_7 [(unsigned char)21] [i_1 - 2] [i_2])) ? (((((/* implicit */_Bool) arr_4 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (arr_4 [i_2]))) : (((/* implicit */unsigned int) (+(arr_7 [i_0 - 1] [i_0 - 2] [i_0 - 1]))))));
                    /* LoopNest 2 */
                    for (unsigned int i_3 = 0; i_3 < 25; i_3 += 1) 
                    {
                        for (unsigned int i_4 = 0; i_4 < 25; i_4 += 3) 
                        {
                            {
                                var_15 = ((/* implicit */int) (+(((((/* implicit */_Bool) ((((/* implicit */_Bool) 2045058615)) ? (((/* implicit */long long int) ((/* implicit */int) var_3))) : (arr_14 [i_0] [i_2] [i_0] [9])))) ? (((/* implicit */unsigned int) arr_10 [i_1] [i_1] [i_1 - 1] [(unsigned short)7])) : (((unsigned int) arr_9 [i_0] [18LL] [i_3] [(short)24]))))));
                                arr_15 [i_0] [(unsigned char)4] &= ((/* implicit */signed char) arr_8 [23ULL] [i_1] [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
        arr_16 [i_0] = ((/* implicit */unsigned int) (~(min((((/* implicit */int) ((unsigned char) -2045058606))), (((((/* implicit */_Bool) -2045058606)) ? (var_0) : (var_2)))))));
    }
    for (short i_5 = 0; i_5 < 23; i_5 += 1) 
    {
        arr_19 [(signed char)18] &= ((unsigned int) ((((/* implicit */_Bool) ((var_1) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_5 [i_5]))))) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 2045058617)) : (var_8))) : (((/* implicit */unsigned long long int) (+(arr_10 [i_5] [i_5] [i_5] [i_5]))))));
        arr_20 [i_5] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) (((+(((/* implicit */int) var_9)))) / (var_11)))) / (126525305U)));
    }
    /* vectorizable */
    for (unsigned long long int i_6 = 2; i_6 < 20; i_6 += 3) 
    {
        arr_24 [i_6 + 1] [9U] = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_6 + 1]))) + (((var_3) ? (((/* implicit */unsigned int) ((/* implicit */int) var_1))) : (arr_4 [i_6])))));
        arr_25 [i_6] = ((/* implicit */short) (~(((/* implicit */int) ((((/* implicit */_Bool) arr_17 [(short)12] [(short)12])) || (arr_8 [i_6] [i_6] [i_6] [i_6 - 1]))))));
        var_16 = ((/* implicit */unsigned short) arr_7 [i_6 - 1] [i_6 - 1] [i_6 + 1]);
        arr_26 [i_6] [i_6] = ((/* implicit */unsigned int) ((int) -2045058615));
        var_17 -= ((/* implicit */_Bool) ((unsigned short) arr_10 [i_6 + 1] [13U] [13U] [i_6 + 1]));
    }
    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
    {
        var_18 = ((/* implicit */unsigned char) (~(((((/* implicit */_Bool) arr_12 [i_7])) ? (min((((/* implicit */long long int) (signed char)15)), (arr_1 [i_7]))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_10 [1LL] [i_7 - 1] [i_7] [i_7 - 1])) ? (((/* implicit */int) (signed char)120)) : (var_5))))))));
        var_19 += ((/* implicit */long long int) var_10);
        arr_29 [i_7] [(unsigned short)7] = ((/* implicit */long long int) var_5);
    }
    var_20 = ((/* implicit */signed char) var_10);
}
