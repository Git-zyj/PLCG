/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 22956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=22956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/22956
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
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned long long int i_2 = 1; i_2 < 11; i_2 += 1) 
            {
                {
                    var_16 = ((/* implicit */unsigned int) ((((/* implicit */int) (signed char)-47)) + (((/* implicit */int) (_Bool)1))));
                    /* LoopNest 2 */
                    for (int i_3 = 1; i_3 < 12; i_3 += 1) 
                    {
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            {
                                var_17 -= ((/* implicit */int) 4294967276U);
                                var_18 = ((/* implicit */unsigned int) ((((((/* implicit */long long int) 0)) + (0LL))) ^ (((/* implicit */long long int) arr_7 [i_3 + 1] [i_3] [(signed char)7] [i_2 + 3]))));
                            }
                        } 
                    } 
                    var_19 ^= ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_3 [i_2 - 1] [i_1]))));
                    /* LoopNest 2 */
                    for (_Bool i_5 = 0; i_5 < 0; i_5 += 1) 
                    {
                        for (_Bool i_6 = 0; i_6 < 1; i_6 += 1) 
                        {
                            {
                                arr_19 [i_6] [i_1] [i_2 + 2] [i_2] [i_2] [i_1] [i_0] = ((/* implicit */unsigned long long int) ((((13712080189565369785ULL) ^ (((/* implicit */unsigned long long int) 3667126124U)))) >= (((/* implicit */unsigned long long int) min((((/* implicit */unsigned int) (unsigned short)48716)), (38U))))));
                                var_20 = ((/* implicit */unsigned int) arr_18 [12U] [i_1] [i_1] [i_1]);
                                var_21 = ((/* implicit */unsigned long long int) ((((/* implicit */long long int) (-(arr_13 [(signed char)6] [i_1] [i_1] [i_5 + 1] [i_2 + 1])))) <= ((~(((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (7769781157432464599LL)))))));
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */short) var_11);
    /* LoopNest 2 */
    for (unsigned int i_7 = 3; i_7 < 6; i_7 += 3) 
    {
        for (_Bool i_8 = 0; i_8 < 1; i_8 += 1) 
        {
            {
                var_23 += ((/* implicit */long long int) arr_18 [i_8] [(_Bool)0] [(_Bool)0] [i_7]);
                /* LoopNest 2 */
                for (unsigned int i_9 = 1; i_9 < 9; i_9 += 3) 
                {
                    for (int i_10 = 0; i_10 < 10; i_10 += 4) 
                    {
                        {
                            /* LoopSeq 3 */
                            for (long long int i_11 = 2; i_11 < 9; i_11 += 2) 
                            {
                                var_24 = ((/* implicit */unsigned int) 3358199434245197071ULL);
                                var_25 = ((/* implicit */unsigned int) ((max((((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) % (arr_29 [(unsigned short)0] [(unsigned short)0] [1ULL] [1ULL]))), (min((1128740829637221057ULL), (((/* implicit */unsigned long long int) -1LL)))))) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((arr_23 [i_7]) && (((/* implicit */_Bool) -4))))))));
                                arr_32 [i_11 - 1] [0LL] [i_7 + 2] [i_8] [i_8] [i_7 + 2] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (+(((/* implicit */int) arr_8 [i_10]))))), (((((/* implicit */_Bool) 38U)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_11]))) : (25U)))));
                            }
                            for (short i_12 = 2; i_12 < 8; i_12 += 2) 
                            {
                                arr_35 [i_7] [i_7] [i_8] [i_7] [i_8] [i_9] [i_12] = ((/* implicit */short) ((((/* implicit */int) min((arr_0 [i_7 + 2]), (arr_0 [i_7 + 4])))) ^ ((~(((/* implicit */int) arr_0 [i_7 + 1]))))));
                                arr_36 [i_7] [i_7] [i_7 - 3] [i_7] [i_7] = ((/* implicit */signed char) min((min((((/* implicit */int) (unsigned char)170)), (4))), (min(((~(((/* implicit */int) (short)(-32767 - 1))))), (((/* implicit */int) min((arr_0 [13]), (((/* implicit */unsigned char) (_Bool)0)))))))));
                            }
                            for (unsigned int i_13 = 0; i_13 < 10; i_13 += 2) 
                            {
                                arr_40 [i_7] [i_10] [(_Bool)1] = ((/* implicit */unsigned long long int) ((_Bool) ((((/* implicit */_Bool) arr_26 [i_7 + 1] [i_7 + 1] [i_7] [i_7 + 1])) || (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-107)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : ((-9223372036854775807LL - 1LL))))))));
                                arr_41 [i_7] [i_7] [i_8] [i_9] [i_10] [i_10] [8U] |= ((/* implicit */unsigned int) 16577594551568482933ULL);
                            }
                            var_26 = ((/* implicit */short) ((long long int) max(((((-9223372036854775807LL - 1LL)) + (((/* implicit */long long int) ((/* implicit */int) (short)20057))))), (((((/* implicit */long long int) ((/* implicit */int) (short)(-32767 - 1)))) | (-8677578301039502402LL))))));
                        }
                    } 
                } 
                /* LoopNest 2 */
                for (unsigned int i_14 = 0; i_14 < 10; i_14 += 2) 
                {
                    for (_Bool i_15 = 1; i_15 < 1; i_15 += 1) 
                    {
                        {
                            arr_46 [i_15] [i_8] [i_8] [i_15] = ((/* implicit */signed char) min((min((((/* implicit */long long int) (!(((/* implicit */_Bool) 175316882))))), (((((/* implicit */long long int) 25U)) & (8677578301039502385LL))))), (((/* implicit */long long int) (+(((/* implicit */int) ((short) (_Bool)1))))))));
                            var_27 = ((/* implicit */long long int) min((var_27), (((((/* implicit */_Bool) ((min((3981715431U), (((/* implicit */unsigned int) (_Bool)0)))) >> (((-24LL) + (31LL)))))) ? (0LL) : (((/* implicit */long long int) (~(min((((/* implicit */unsigned int) (short)23007)), (arr_13 [i_7] [i_7] [(unsigned char)10] [i_7] [i_7]))))))))));
                            var_28 = ((/* implicit */signed char) max((var_28), (((/* implicit */signed char) (~(((((/* implicit */int) (_Bool)1)) % (((/* implicit */int) (short)-5894)))))))));
                        }
                    } 
                } 
            }
        } 
    } 
}
