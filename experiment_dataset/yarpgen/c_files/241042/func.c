/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241042
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241042 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241042
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
    var_15 += ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((unsigned short) var_1))) && ((((~(var_1))) >= (((/* implicit */unsigned int) ((/* implicit */int) ((unsigned short) var_4))))))));
    /* LoopNest 3 */
    for (unsigned int i_0 = 3; i_0 < 23; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 1) 
        {
            for (unsigned short i_2 = 1; i_2 < 23; i_2 += 3) 
            {
                {
                    var_16 = ((/* implicit */unsigned long long int) ((((long long int) 0ULL)) & (((/* implicit */long long int) ((/* implicit */int) var_4)))));
                    /* LoopSeq 4 */
                    for (short i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_17 = ((/* implicit */int) ((((/* implicit */_Bool) 9113137803585259614LL)) ? (3848846647897731427LL) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)213)))));
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (signed char i_4 = 0; i_4 < 25; i_4 += 4) 
                        {
                            var_18 = ((/* implicit */int) var_12);
                            arr_14 [i_0] [i_1] [i_2] [i_4] = ((/* implicit */unsigned long long int) (~(-3848846647897731428LL)));
                        }
                        for (short i_5 = 1; i_5 < 22; i_5 += 2) 
                        {
                            arr_17 [i_2] [i_3] [i_2] [i_2] [i_2] = ((/* implicit */short) (+(arr_16 [(unsigned short)12] [(unsigned short)12] [i_2 + 1] [i_3])));
                            arr_18 [i_1] [i_2] [i_3] [i_2] = ((/* implicit */unsigned char) ((signed char) ((((((/* implicit */_Bool) (unsigned char)168)) ? (arr_9 [12] [i_1] [i_1] [i_1] [i_1] [i_1]) : (var_8))) & (((/* implicit */long long int) ((/* implicit */int) arr_15 [(short)4] [i_1] [(short)4] [i_3] [i_5] [i_5 + 2]))))));
                            arr_19 [i_2] [i_1] [2LL] [(short)3] [i_5 + 3] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -5407089276265366478LL)) ? (((/* implicit */unsigned long long int) -3848846647897731428LL)) : (18446744073709551603ULL)));
                        }
                        for (short i_6 = 0; i_6 < 25; i_6 += 1) 
                        {
                            var_19 = ((/* implicit */_Bool) max((var_19), (((/* implicit */_Bool) max((((long long int) var_14)), (((((/* implicit */long long int) ((((/* implicit */unsigned int) ((/* implicit */int) var_3))) * (var_1)))) & (arr_13 [i_0] [i_1] [i_3] [2ULL] [6LL] [i_6] [i_6]))))))));
                            var_20 -= ((/* implicit */short) 3902853030316244468LL);
                        }
                        arr_22 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_0 - 2] [i_0 - 2] [i_2 + 1] [i_2 + 1])) ? (((((/* implicit */_Bool) arr_16 [i_0 - 3] [i_0 + 1] [i_2 + 2] [i_2 + 2])) ? (arr_16 [i_0 - 1] [i_0 + 1] [i_2 - 1] [i_2 + 1]) : (arr_16 [i_0 - 1] [i_0 - 2] [i_2 + 1] [i_2 - 1]))) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_13)))))));
                        var_21 ^= ((/* implicit */long long int) var_3);
                    }
                    /* vectorizable */
                    for (_Bool i_7 = 1; i_7 < 1; i_7 += 1) 
                    {
                        arr_25 [i_0] [i_1] [i_2] [i_7] = ((/* implicit */unsigned short) (+(((((/* implicit */long long int) ((/* implicit */int) var_3))) & (arr_13 [i_0] [i_1] [i_2] [i_1] [i_1] [i_0 + 2] [i_1])))));
                        var_22 = ((/* implicit */unsigned char) (+(arr_4 [i_0] [i_0 - 2] [i_2 + 1])));
                        arr_26 [i_0 - 2] [i_1] [i_2] [i_2 + 2] [(signed char)1] = ((/* implicit */unsigned int) (~((+(((/* implicit */int) var_3))))));
                    }
                    for (short i_8 = 4; i_8 < 24; i_8 += 3) 
                    {
                        arr_29 [i_0] [(unsigned char)0] [i_2] [i_8] &= ((/* implicit */unsigned long long int) min((((/* implicit */int) ((-8908981758296734452LL) == (arr_4 [i_0] [i_0 + 1] [i_0])))), ((-(((/* implicit */int) (unsigned char)120))))));
                        var_23 = ((/* implicit */unsigned long long int) (-(((long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-48))) != (18446744073709551595ULL))))));
                        var_24 = ((/* implicit */_Bool) max(((short)-9771), (((/* implicit */short) ((arr_16 [i_0] [(_Bool)1] [i_2 + 1] [i_8]) >= (var_5))))));
                    }
                    /* vectorizable */
                    for (int i_9 = 4; i_9 < 24; i_9 += 4) 
                    {
                        var_25 = ((/* implicit */signed char) (-(((/* implicit */int) (signed char)-1))));
                        var_26 = ((/* implicit */unsigned char) ((_Bool) 1245351462));
                    }
                    arr_33 [i_2] = ((/* implicit */unsigned char) var_7);
                    var_27 = ((/* implicit */short) 9032369154961962160ULL);
                    var_28 = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (short)18213))))), ((+(max((((/* implicit */unsigned long long int) (short)32767)), (var_0)))))));
                }
            } 
        } 
    } 
}
