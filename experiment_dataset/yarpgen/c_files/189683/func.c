/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189683
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189683 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189683
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
    for (short i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 3) 
        {
            {
                /* LoopSeq 1 */
                for (short i_2 = 1; i_2 < 13; i_2 += 1) 
                {
                    var_15 *= ((/* implicit */unsigned char) arr_0 [0U]);
                    arr_10 [i_0] [i_0] [(short)1] [11LL] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */int) arr_1 [4U])) * (((/* implicit */int) ((unsigned char) var_2)))))) ? (max((17247087979010682841ULL), (arr_4 [5] [i_2 + 1] [i_2]))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [6U])))));
                    arr_11 [i_0] [i_2] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((long long int) arr_7 [5] [i_2] [i_2 - 1] [i_2 + 1])))));
                    /* LoopNest 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (int i_4 = 2; i_4 < 12; i_4 += 4) 
                        {
                            {
                                arr_17 [i_0] [i_2] = ((/* implicit */int) ((((unsigned long long int) 6431675738653216121LL)) + (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_4 - 2])) ? (var_3) : (((/* implicit */long long int) ((/* implicit */int) arr_8 [4] [i_2 - 1]))))))));
                                var_16 = ((/* implicit */unsigned char) max((var_16), (((/* implicit */unsigned char) ((((long long int) (~(((/* implicit */int) arr_8 [i_0] [i_1]))))) < (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)44)) & (((/* implicit */int) var_6))))) ? (((((/* implicit */int) var_6)) >> (((((/* implicit */int) (unsigned char)88)) - (72))))) : (((/* implicit */int) (unsigned char)150))))))))));
                            }
                        } 
                    } 
                }
                var_17 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) (+(arr_0 [(unsigned short)0]))))) ? (arr_9 [(unsigned short)12] [i_1] [(unsigned short)12]) : (max((((unsigned int) (unsigned char)232)), (((/* implicit */unsigned int) (~(var_10))))))));
                /* LoopSeq 1 */
                for (short i_5 = 0; i_5 < 14; i_5 += 4) 
                {
                    var_18 *= (unsigned char)133;
                    var_19 = ((/* implicit */unsigned char) arr_13 [i_0] [i_0] [i_0] [i_0]);
                    var_20 = ((/* implicit */unsigned char) min((var_20), (((/* implicit */unsigned char) ((unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 614164089)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_11))))) ? (((/* implicit */int) var_7)) : (((/* implicit */int) arr_2 [i_0] [i_1]))))))));
                }
                var_21 = ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_8 [i_0] [i_0])) ? (((/* implicit */int) arr_20 [9] [i_1])) : (arr_6 [i_0] [11ULL])))) ? (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (-4414689826886744236LL))) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) >> (((/* implicit */int) ((max((((/* implicit */long long int) 0U)), (var_5))) >= (((/* implicit */long long int) ((/* implicit */int) ((signed char) var_3)))))))));
                var_22 = ((/* implicit */signed char) max(((+(((((/* implicit */_Bool) arr_14 [i_0] [i_0] [i_1] [i_1] [11ULL])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_5 [9ULL])))))), (((((/* implicit */int) (unsigned short)19069)) - (((/* implicit */int) ((short) -614164090)))))));
            }
        } 
    } 
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) (short)-23047)) : (((/* implicit */int) (unsigned short)616))));
    var_24 = ((/* implicit */signed char) var_5);
}
