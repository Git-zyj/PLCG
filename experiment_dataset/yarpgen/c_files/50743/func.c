/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 50743
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=50743 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/50743
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
    var_14 ^= ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) var_8))) > ((-(1720419299U)))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 3) 
    {
        /* LoopNest 2 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            for (int i_2 = 1; i_2 < 8; i_2 += 3) 
            {
                {
                    var_15 = ((/* implicit */_Bool) min((var_15), (((/* implicit */_Bool) ((((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) && ((_Bool)0))) ? (max((arr_0 [i_1 - 1] [i_2 + 1]), (arr_0 [i_1 - 1] [i_2 + 1]))) : (arr_0 [i_1 - 1] [i_2 + 1]))))));
                    var_16 += ((/* implicit */_Bool) (-(((/* implicit */int) arr_4 [i_0] [i_1] [1U]))));
                    var_17 = ((/* implicit */unsigned int) (+(max((arr_2 [i_1]), (((((/* implicit */_Bool) (signed char)-97)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_6))))))));
                }
            } 
        } 
        arr_6 [i_0] = ((/* implicit */int) (unsigned short)38333);
        /* LoopSeq 1 */
        /* vectorizable */
        for (long long int i_3 = 0; i_3 < 10; i_3 += 2) 
        {
            arr_9 [8U] [i_3] [i_3] = var_10;
            var_18 = ((/* implicit */short) max((var_18), (((/* implicit */short) arr_2 [i_3]))));
            var_19 &= ((/* implicit */unsigned char) ((var_10) / (((/* implicit */int) (signed char)(-127 - 1)))));
            /* LoopSeq 1 */
            for (short i_4 = 0; i_4 < 10; i_4 += 3) 
            {
                /* LoopSeq 1 */
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 3) 
                {
                    var_20 |= ((/* implicit */signed char) (-(arr_2 [i_3])));
                    var_21 -= ((/* implicit */unsigned long long int) arr_12 [(unsigned char)4] [i_4] [i_3] [i_0]);
                    arr_16 [i_5] [i_4] [i_0] = ((((/* implicit */_Bool) 3457042107U)) || ((_Bool)1));
                }
                /* LoopSeq 2 */
                for (signed char i_6 = 0; i_6 < 10; i_6 += 3) 
                {
                    var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) ((((/* implicit */_Bool) -5724092020938866622LL)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)111))) : (7699966688020658447ULL))))));
                    arr_21 [i_6] [(_Bool)0] [i_0] [i_4] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_17 [i_3])) : (((((/* implicit */int) (signed char)124)) << (((((((/* implicit */int) (short)-9846)) + (9875))) - (17)))))));
                    var_23 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-127))))) ? (((((/* implicit */_Bool) 12622069312891923309ULL)) ? (4642361347882511377LL) : (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))))) : (((/* implicit */long long int) ((/* implicit */int) arr_19 [i_0] [i_3] [i_4] [i_6])))));
                    var_24 = ((/* implicit */unsigned int) (+(((/* implicit */int) (signed char)-124))));
                }
                for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                {
                    var_25 ^= ((/* implicit */unsigned long long int) var_0);
                    var_26 = ((/* implicit */short) ((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (short)-7476))));
                    var_27 = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_13 [i_0] [i_3] [i_3] [i_4] [i_4] [i_7])) ? (((/* implicit */int) arr_13 [i_7] [i_7] [i_4] [i_4] [i_3] [i_0])) : (((/* implicit */int) arr_15 [i_0] [i_3] [i_4] [i_7]))));
                    var_28 = ((/* implicit */int) ((((/* implicit */_Bool) 12622069312891923302ULL)) ? (5824674760817628321ULL) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 2117022667U)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) (unsigned char)35)))))));
                }
                /* LoopSeq 1 */
                for (long long int i_8 = 4; i_8 < 8; i_8 += 4) 
                {
                    arr_26 [i_0] [i_3] [i_4] [i_8] [i_3] [i_4] = ((((/* implicit */_Bool) arr_13 [i_0] [i_0] [i_3] [i_4] [i_4] [i_8])) ? (var_3) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_13 [i_8 - 2] [i_8 - 4] [i_4] [i_3] [i_0] [i_0]))));
                    arr_27 [i_0] [i_0] [(_Bool)1] [i_0] = ((/* implicit */_Bool) (-(((/* implicit */int) (signed char)-125))));
                    arr_28 [i_8] [i_4] [i_4] [i_3] [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) 72022409665839104LL)) ? (4850438137747932795ULL) : (((/* implicit */unsigned long long int) 19LL))));
                }
                /* LoopSeq 1 */
                for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                {
                    var_29 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14289)) ? (((((/* implicit */int) arr_8 [i_9])) % (((/* implicit */int) (short)14992)))) : (((/* implicit */int) arr_23 [i_0] [(short)9] [(signed char)1] [i_9]))));
                    arr_32 [i_9] [i_0] [i_3] [i_4] [i_9] [i_9] = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_4])) ? (18446744073709551608ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_9] [i_4])))))) ? (((((/* implicit */int) (short)32767)) >> (((/* implicit */int) (_Bool)1)))) : (((/* implicit */int) var_8))));
                    var_30 = ((/* implicit */_Bool) min((var_30), (((/* implicit */_Bool) arr_22 [i_9] [i_3]))));
                }
            }
        }
        arr_33 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((short) 4294967290U)))));
    }
}
