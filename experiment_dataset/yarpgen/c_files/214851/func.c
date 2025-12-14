/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214851
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214851 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214851
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
    /* LoopNest 2 */
    for (unsigned int i_0 = 2; i_0 < 13; i_0 += 1) 
    {
        for (short i_1 = 0; i_1 < 16; i_1 += 3) 
        {
            {
                var_13 = ((/* implicit */signed char) var_5);
                var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) var_12))));
            }
        } 
    } 
    /* LoopNest 2 */
    for (short i_2 = 1; i_2 < 9; i_2 += 2) 
    {
        for (unsigned char i_3 = 0; i_3 < 12; i_3 += 1) 
        {
            {
                var_15 = ((/* implicit */unsigned long long int) max((var_15), (((/* implicit */unsigned long long int) var_2))));
                /* LoopNest 2 */
                for (short i_4 = 2; i_4 < 11; i_4 += 4) 
                {
                    for (long long int i_5 = 4; i_5 < 9; i_5 += 1) 
                    {
                        {
                            arr_15 [i_2] [i_4] [i_5 + 3] = var_1;
                            var_16 = ((/* implicit */_Bool) min((var_16), (((/* implicit */_Bool) ((((/* implicit */int) var_9)) - (((/* implicit */int) ((((((/* implicit */int) var_8)) - (((/* implicit */int) var_7)))) != (((/* implicit */int) arr_2 [i_4]))))))))));
                            arr_16 [i_2] = ((/* implicit */unsigned int) ((((/* implicit */int) var_11)) / (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) arr_13 [i_2 + 3] [i_4 - 2] [i_5 + 1] [i_5 + 3])) : (((/* implicit */int) arr_13 [i_2 + 3] [i_4 - 2] [i_5 + 1] [i_5 + 3]))))));
                            /* LoopSeq 1 */
                            /* vectorizable */
                            for (short i_6 = 0; i_6 < 12; i_6 += 1) 
                            {
                                var_17 -= ((/* implicit */short) var_5);
                                arr_19 [i_2] [(short)10] [i_2] [i_3] [i_6] = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) ((var_1) > (var_6))))) / (((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */long long int) ((/* implicit */int) var_9)))))));
                            }
                        }
                    } 
                } 
            }
        } 
    } 
    var_18 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */int) ((((/* implicit */_Bool) var_4)) && (((/* implicit */_Bool) var_1))))) - (((/* implicit */int) var_10))))) ? (((/* implicit */int) ((max((var_12), (var_4))) >= (((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) var_5))))))) : (((/* implicit */int) ((8863813045352669571LL) < (((/* implicit */long long int) -243506125)))))));
    /* LoopNest 2 */
    for (short i_7 = 2; i_7 < 11; i_7 += 3) 
    {
        for (long long int i_8 = 2; i_8 < 10; i_8 += 1) 
        {
            {
                arr_25 [(_Bool)1] = ((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) var_7))) | (((((/* implicit */_Bool) (unsigned short)61073)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)4))) : (3197011270U)))));
                /* LoopSeq 2 */
                for (unsigned long long int i_9 = 1; i_9 < 9; i_9 += 1) 
                {
                    arr_29 [i_7] [i_9] [i_8 - 2] [i_9] = ((/* implicit */long long int) ((((((((/* implicit */_Bool) arr_8 [i_9])) ? (((/* implicit */int) arr_0 [i_9])) : (((/* implicit */int) var_5)))) << (((((/* implicit */int) min((arr_13 [i_7] [(short)9] [i_8] [i_9]), (var_3)))) - (67))))) != (((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)4459)) || ((_Bool)1))))));
                    arr_30 [i_9] [i_9] = ((/* implicit */_Bool) var_9);
                    arr_31 [6] [i_9] [(unsigned short)0] = ((/* implicit */int) var_2);
                }
                /* vectorizable */
                for (unsigned long long int i_10 = 2; i_10 < 11; i_10 += 4) 
                {
                    /* LoopSeq 1 */
                    for (unsigned char i_11 = 2; i_11 < 11; i_11 += 1) 
                    {
                        var_19 -= ((/* implicit */_Bool) arr_7 [i_7] [i_10] [i_10]);
                        arr_38 [i_11] [i_7] [i_11] = ((/* implicit */_Bool) ((((arr_3 [i_10]) ^ (((/* implicit */int) arr_23 [i_7])))) - (((/* implicit */int) var_7))));
                    }
                    var_20 = ((/* implicit */unsigned int) ((((/* implicit */int) var_7)) + (((/* implicit */int) arr_1 [i_8]))));
                }
            }
        } 
    } 
}
