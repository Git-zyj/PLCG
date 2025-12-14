/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239395
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
    for (unsigned short i_0 = 2; i_0 < 9; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */int) (!(((/* implicit */_Bool) 16490416129646921338ULL))));
        /* LoopSeq 2 */
        /* vectorizable */
        for (short i_1 = 0; i_1 < 10; i_1 += 2) 
        {
            /* LoopSeq 2 */
            for (unsigned long long int i_2 = 1; i_2 < 9; i_2 += 2) 
            {
                arr_7 [i_0] [i_2] = ((/* implicit */int) (-(1163046114U)));
                arr_8 [i_0] [i_2] |= ((/* implicit */short) (!(((/* implicit */_Bool) 793007503U))));
            }
            for (unsigned long long int i_3 = 0; i_3 < 10; i_3 += 2) 
            {
                var_17 = ((/* implicit */unsigned short) max((var_17), (((/* implicit */unsigned short) ((3501959793U) >= (3501959793U))))));
                /* LoopSeq 2 */
                for (unsigned char i_4 = 0; i_4 < 10; i_4 += 2) 
                {
                    var_18 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) 793007528U)) : (var_3))) >= (5396210119349566043ULL)));
                    var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((((/* implicit */int) arr_1 [i_0 + 1] [i_0 + 1])) >= (var_10))))));
                    var_20 = ((/* implicit */unsigned short) 0);
                }
                for (unsigned short i_5 = 0; i_5 < 10; i_5 += 2) 
                {
                    var_21 = ((/* implicit */unsigned short) max((var_21), (((/* implicit */unsigned short) ((((/* implicit */int) arr_9 [i_0 - 1])) & (((/* implicit */int) (signed char)-42)))))));
                    var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) var_15))));
                }
            }
            /* LoopNest 3 */
            for (unsigned long long int i_6 = 0; i_6 < 10; i_6 += 2) 
            {
                for (unsigned long long int i_7 = 0; i_7 < 10; i_7 += 2) 
                {
                    for (unsigned long long int i_8 = 1; i_8 < 9; i_8 += 2) 
                    {
                        {
                            var_23 ^= ((/* implicit */int) ((((/* implicit */_Bool) var_11)) ? (3597896632U) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_14)) >= (var_3)))))));
                            arr_25 [i_7] [i_7] [i_7] [i_8] [i_7] [i_7] [i_7] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_23 [i_8] [i_1] [i_6] [(short)6] [9U])) ? (((/* implicit */int) arr_3 [i_0] [i_0])) : (((/* implicit */int) (unsigned short)64819))))) ? (((/* implicit */unsigned long long int) (+(2552189272U)))) : (((((/* implicit */_Bool) var_14)) ? (var_4) : (var_3)))));
                        }
                    } 
                } 
            } 
            /* LoopSeq 1 */
            for (unsigned int i_9 = 2; i_9 < 7; i_9 += 2) 
            {
                var_24 = ((/* implicit */unsigned long long int) ((short) ((((/* implicit */_Bool) var_3)) ? (13050533954359985572ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_5))))));
                /* LoopNest 2 */
                for (unsigned short i_10 = 0; i_10 < 10; i_10 += 2) 
                {
                    for (unsigned long long int i_11 = 3; i_11 < 8; i_11 += 2) 
                    {
                        {
                            arr_33 [i_11] [i_10] [i_9] [i_1] [i_11] = ((/* implicit */int) ((((((/* implicit */_Bool) 13050533954359985572ULL)) ? (((/* implicit */unsigned long long int) 697070673U)) : (0ULL))) >= (((/* implicit */unsigned long long int) (~(-14))))));
                            arr_34 [i_11] [i_11] = ((/* implicit */unsigned short) ((signed char) (unsigned short)64819));
                            var_25 = ((/* implicit */short) arr_23 [i_11] [i_11] [i_9] [i_11] [i_11]);
                            var_26 = ((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_30 [i_1] [i_9] [i_9 - 2]))) >= (697070663U)));
                        }
                    } 
                } 
                var_27 = ((/* implicit */unsigned long long int) ((((((/* implicit */int) arr_24 [i_1])) ^ (((/* implicit */int) arr_24 [i_0])))) >> (((((/* implicit */int) arr_16 [(short)1] [i_9 + 3] [i_9] [i_9] [i_9] [i_9])) - (55147)))));
                arr_35 [i_0] [i_0 - 2] [i_1] [(unsigned short)9] = ((/* implicit */unsigned short) ((signed char) 9007199254740992LL));
                var_28 = ((/* implicit */unsigned int) 3170441643544284421ULL);
            }
            var_29 = ((((/* implicit */_Bool) 4)) ? (((/* implicit */int) (unsigned char)197)) : (((/* implicit */int) (_Bool)1)));
        }
        /* vectorizable */
        for (short i_12 = 0; i_12 < 10; i_12 += 2) 
        {
            var_30 = var_2;
            arr_38 [i_12] = ((/* implicit */unsigned char) ((arr_14 [i_0 + 1] [i_0 + 1] [i_0] [i_0 - 2]) >= (arr_14 [i_0 - 1] [i_0 - 1] [i_0] [i_0 + 1])));
        }
    }
    var_31 = ((/* implicit */unsigned short) ((((/* implicit */int) var_13)) >= (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)172))) >= (min((697070655U), (((/* implicit */unsigned int) var_6)))))))));
    var_32 = ((/* implicit */unsigned long long int) ((var_4) >= (max((((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)0))) >= (13642268096062903556ULL)))), (((unsigned long long int) var_13))))));
    var_33 = ((/* implicit */unsigned long long int) 3597896632U);
    var_34 = ((/* implicit */signed char) var_8);
}
