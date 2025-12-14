/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201243
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201243 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201243
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
    var_13 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_9))));
    var_14 = ((/* implicit */unsigned long long int) var_1);
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned long long int i_1 = 0; i_1 < 25; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    /* LoopSeq 1 */
                    for (int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_15 ^= ((/* implicit */long long int) max((((((/* implicit */_Bool) var_1)) ? (arr_0 [i_0]) : (arr_0 [i_1]))), (((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) % (arr_0 [i_0])))));
                        var_16 = ((/* implicit */int) max((var_16), (((/* implicit */int) max((max((arr_1 [i_0]), (arr_3 [i_1] [i_2] [i_3]))), (max((((/* implicit */long long int) var_7)), (arr_5 [i_1]))))))));
                        var_17 -= ((/* implicit */int) max(((-9223372036854775807LL - 1LL)), (((/* implicit */long long int) ((((/* implicit */int) (signed char)2)) / (((/* implicit */int) (signed char)1)))))));
                    }
                    var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_0 [i_0]), (((/* implicit */unsigned long long int) arr_6 [i_0] [i_0] [i_0]))))) ? (((unsigned long long int) var_5)) : (((/* implicit */unsigned long long int) (((_Bool)1) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (short)-16290)))))))) ? (((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)3)) ? (((/* implicit */int) (unsigned short)2752)) : (((/* implicit */int) (unsigned short)960))))) : (((arr_5 [i_1]) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))));
                    /* LoopSeq 3 */
                    /* vectorizable */
                    for (short i_4 = 0; i_4 < 25; i_4 += 2) /* same iter space */
                    {
                        var_19 -= ((/* implicit */short) ((((long long int) (short)16259)) * (((/* implicit */long long int) ((/* implicit */int) arr_11 [i_0] [i_1] [i_4] [i_4])))));
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) arr_8 [i_0] [i_1]))));
                        var_21 = ((((/* implicit */_Bool) arr_8 [i_0] [i_1])) ? (arr_8 [i_0] [i_1]) : (arr_8 [i_1] [i_1]));
                    }
                    for (short i_5 = 0; i_5 < 25; i_5 += 2) /* same iter space */
                    {
                        /* LoopSeq 2 */
                        /* vectorizable */
                        for (short i_6 = 1; i_6 < 23; i_6 += 4) 
                        {
                            var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)16)) && (((/* implicit */_Bool) (signed char)2))));
                            var_23 = ((/* implicit */int) var_9);
                        }
                        for (signed char i_7 = 0; i_7 < 25; i_7 += 1) 
                        {
                            var_24 = ((/* implicit */unsigned long long int) min((var_24), (((((/* implicit */unsigned long long int) var_5)) + (((((/* implicit */_Bool) (~(((/* implicit */int) (signed char)-2))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */unsigned long long int) arr_5 [i_0])) : (var_8))) : (((/* implicit */unsigned long long int) arr_7 [i_0] [i_1] [i_2] [i_5] [i_5]))))))));
                            arr_20 [i_0] [i_0] [i_1] [i_2] [i_2] [i_7] = arr_10 [i_0] [i_1] [i_0] [i_5];
                        }
                        var_25 = ((/* implicit */int) var_7);
                    }
                    /* vectorizable */
                    for (short i_8 = 0; i_8 < 25; i_8 += 2) /* same iter space */
                    {
                        var_26 = ((/* implicit */long long int) ((var_8) >> (((((/* implicit */int) var_6)) - (213)))));
                        arr_25 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) (_Bool)1)) < (((/* implicit */int) (_Bool)1))));
                        arr_26 [i_0] [i_0] [i_0] [i_8] [i_0] &= var_4;
                        var_27 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_12 [i_0] [i_1] [i_2] [i_8] [i_8] [i_1]))));
                        var_28 ^= ((((/* implicit */_Bool) (+(var_2)))) ? (((/* implicit */unsigned long long int) arr_21 [i_8] [i_1])) : (((((/* implicit */_Bool) var_0)) ? (var_2) : (arr_10 [i_8] [i_8] [i_8] [i_0]))));
                    }
                    arr_27 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) max((var_6), (var_6))))))) ? (arr_17 [i_0] [i_0] [i_0]) : (((/* implicit */int) ((short) var_6)))));
                }
            } 
        } 
        var_29 = ((/* implicit */int) max((((var_2) ^ (max((var_8), (((/* implicit */unsigned long long int) arr_5 [i_0])))))), (((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_11)), (var_4)))) ? (((((/* implicit */unsigned long long int) arr_17 [i_0] [i_0] [i_0])) | (var_2))) : (((var_8) & (((/* implicit */unsigned long long int) var_1))))))));
        var_30 = ((/* implicit */_Bool) (-(((unsigned long long int) arr_11 [i_0] [i_0] [10] [i_0]))));
    }
}
