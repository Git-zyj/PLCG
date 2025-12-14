/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52637
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52637 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52637
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
    /* LoopSeq 1 */
    for (int i_0 = 4; i_0 < 7; i_0 += 3) 
    {
        /* LoopSeq 2 */
        /* vectorizable */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
        {
            var_16 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_0 [i_0 - 3])) ? (var_10) : (((/* implicit */unsigned long long int) arr_0 [i_0 - 3]))));
            var_17 = ((arr_3 [i_0 + 3] [i_0 + 3]) >= (((((/* implicit */_Bool) var_2)) ? (arr_3 [i_0 - 2] [i_0 - 2]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))));
        }
        for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) /* same iter space */
        {
            arr_8 [i_0] [i_2] [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) 4597608060138860665ULL)) ? (((/* implicit */unsigned long long int) (+(((((/* implicit */int) var_0)) % (((/* implicit */int) (unsigned char)3))))))) : (((var_2) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)30417)))))));
            var_18 = ((/* implicit */short) (((_Bool)1) ? (12298791780884146004ULL) : (6202951370673841089ULL)));
        }
        var_19 = ((/* implicit */unsigned int) (~(var_2)));
        var_20 ^= ((/* implicit */unsigned int) arr_5 [i_0] [i_0]);
        arr_9 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) (short)-1)), (6313737275049604756ULL)));
    }
    /* LoopNest 3 */
    for (unsigned char i_3 = 0; i_3 < 13; i_3 += 2) 
    {
        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
        {
            for (int i_5 = 3; i_5 < 10; i_5 += 3) 
            {
                {
                    arr_19 [i_5] = ((/* implicit */int) var_1);
                    arr_20 [i_5] [i_3] [i_3] [i_3] = ((/* implicit */unsigned char) max((max((((((/* implicit */_Bool) var_2)) ? (arr_12 [i_3]) : (((/* implicit */unsigned long long int) arr_16 [i_3] [i_4] [i_4] [i_5 - 1])))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 13849136013570690951ULL)) && (((/* implicit */_Bool) var_5))))))), (((/* implicit */unsigned long long int) min((((/* implicit */long long int) 28)), (761227161796776660LL))))));
                    var_21 = arr_11 [i_4] [i_5];
                    /* LoopNest 2 */
                    for (signed char i_6 = 0; i_6 < 13; i_6 += 2) 
                    {
                        for (short i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            {
                                var_22 = ((/* implicit */unsigned int) (_Bool)1);
                                var_23 *= min((((long long int) ((((/* implicit */_Bool) arr_10 [i_7])) ? (6147952292825405637ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)6)))))), (((/* implicit */long long int) arr_13 [i_6])));
                                arr_25 [i_3] [i_5] [i_3] [i_3] [4] = ((/* implicit */short) arr_13 [i_3]);
                                arr_26 [i_3] [i_3] [i_4] [i_5] [i_5] [i_7] [i_7] = ((/* implicit */unsigned long long int) 28);
                                arr_27 [i_3] [(unsigned char)12] [(unsigned char)12] [i_5] [i_7] = ((/* implicit */int) 18409275955894805313ULL);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_24 = var_4;
}
