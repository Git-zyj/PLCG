/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215523
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215523 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215523
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
    var_14 = var_1;
    /* LoopSeq 3 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (int i_2 = 0; i_2 < 14; i_2 += 1) 
            {
                {
                    var_15 = ((/* implicit */short) arr_5 [i_2]);
                    /* LoopSeq 3 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 1) 
                    {
                        var_16 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) min((arr_5 [i_2]), (arr_2 [i_0] [i_0] [i_2])))) && (((/* implicit */_Bool) max((((/* implicit */short) var_0)), (arr_1 [i_3])))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)6)) ? (((/* implicit */int) arr_1 [i_0])) : (((((/* implicit */_Bool) arr_8 [i_3])) ? (arr_3 [i_0] [i_0] [i_0]) : (((/* implicit */int) (_Bool)1))))))) : (((((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0]))))) ? (4294967295U) : (((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)42)))))))));
                        var_17 += ((/* implicit */long long int) ((((((((/* implicit */int) arr_1 [i_0])) != (arr_3 [i_0] [i_0] [i_0]))) ? (((/* implicit */long long int) ((((/* implicit */int) var_0)) + (((/* implicit */int) arr_0 [i_1] [i_2]))))) : (min((((/* implicit */long long int) arr_4 [i_2])), (arr_5 [i_0]))))) != (((/* implicit */long long int) arr_6 [(_Bool)1] [i_1] [i_0]))));
                        arr_9 [i_0] [i_0] [i_2] [i_2] [(short)2] = ((/* implicit */short) (!(((/* implicit */_Bool) min((arr_0 [i_0] [i_0]), (arr_0 [i_3] [i_0]))))));
                        var_18 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) max((((/* implicit */short) (signed char)127)), ((short)-1874)))), (((unsigned long long int) var_1))));
                    }
                    for (int i_4 = 0; i_4 < 14; i_4 += 2) 
                    {
                        var_19 = ((/* implicit */signed char) (-(((((/* implicit */_Bool) (~(var_5)))) ? (((/* implicit */int) arr_7 [i_0] [i_0] [i_1] [i_2] [i_4] [i_4])) : (max((((/* implicit */int) var_9)), (arr_3 [i_0] [i_1] [i_2])))))));
                        var_20 = ((/* implicit */int) min((((((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)217)) * (((/* implicit */int) (_Bool)0))))) * (((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) ((/* implicit */int) (signed char)0))) : (var_10))))), (((/* implicit */unsigned int) max((max((arr_0 [i_4] [i_0]), (((/* implicit */short) arr_7 [i_0] [i_1] [(signed char)11] [i_2] [i_4] [i_4])))), (max((((/* implicit */short) (unsigned char)255)), (arr_4 [i_0]))))))));
                        var_21 *= ((/* implicit */_Bool) var_8);
                    }
                    for (unsigned long long int i_5 = 0; i_5 < 14; i_5 += 2) 
                    {
                        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((arr_5 [i_2]) + (9223372036854775807LL))) >> (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_11)) : (arr_12 [i_2] [i_1] [i_1] [i_2])))))) || (((/* implicit */_Bool) max(((signed char)27), (((/* implicit */signed char) (_Bool)0)))))));
                        arr_16 [5ULL] [i_0] [i_2] [i_2] [(unsigned short)9] [i_5] = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_11)), ((unsigned char)0))))) & (5ULL)))) ? (((/* implicit */int) arr_1 [10U])) : ((+(((/* implicit */int) arr_0 [i_0] [6LL])))));
                    }
                }
            } 
        } 
        var_23 = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_3 [(signed char)13] [(signed char)13] [i_0])) ? (((/* implicit */int) var_11)) : (((/* implicit */int) var_1)))), (((/* implicit */int) var_7))));
        var_24 = ((/* implicit */unsigned short) min((((/* implicit */int) ((((/* implicit */_Bool) ((var_5) + (((/* implicit */int) arr_8 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_8))) : (arr_5 [i_0]))))))), (min((((((/* implicit */int) var_12)) - (((/* implicit */int) (signed char)100)))), (arr_6 [i_0] [i_0] [i_0])))));
    }
    for (int i_6 = 0; i_6 < 14; i_6 += 1) 
    {
        var_25 = ((/* implicit */unsigned char) (-(arr_15 [i_6] [i_6] [i_6] [(short)12])));
        var_26 = ((/* implicit */_Bool) min((max((((/* implicit */int) ((((/* implicit */int) (unsigned short)6)) > (((/* implicit */int) (short)-19805))))), (arr_6 [i_6] [i_6] [i_6]))), (((((/* implicit */_Bool) (~(((/* implicit */int) (unsigned short)0))))) ? ((+(arr_3 [i_6] [i_6] [i_6]))) : (((/* implicit */int) (unsigned short)61809))))));
    }
    /* vectorizable */
    for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
    {
        var_27 = ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) var_1)));
        arr_21 [18U] [18U] = (!(((/* implicit */_Bool) var_5)));
    }
    var_28 = ((/* implicit */int) (_Bool)1);
}
