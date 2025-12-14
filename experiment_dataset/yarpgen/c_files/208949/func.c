/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 208949
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=208949 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/208949
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
    var_19 ^= var_18;
    /* LoopNest 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (short i_1 = 1; i_1 < 16; i_1 += 1) 
        {
            {
                /* LoopNest 2 */
                for (short i_2 = 0; i_2 < 18; i_2 += 1) 
                {
                    for (signed char i_3 = 0; i_3 < 18; i_3 += 1) 
                    {
                        {
                            arr_9 [i_1] [i_1] [i_2] [i_1] = ((/* implicit */unsigned int) ((((/* implicit */int) ((arr_3 [i_1 + 1] [i_1 - 1] [i_1 + 2]) < (((/* implicit */long long int) ((/* implicit */int) ((unsigned short) arr_4 [i_0]))))))) & ((~(arr_1 [i_1 + 2])))));
                            /* LoopSeq 4 */
                            /* vectorizable */
                            for (unsigned int i_4 = 0; i_4 < 18; i_4 += 1) 
                            {
                                arr_12 [i_0] [i_0] [i_0] [i_1] [i_3] [i_4] = ((/* implicit */unsigned char) arr_2 [i_1]);
                                arr_13 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((arr_5 [i_1 + 2] [i_1 + 2] [i_1 - 1]) - (3323079857U)))));
                            }
                            for (unsigned short i_5 = 2; i_5 < 17; i_5 += 4) 
                            {
                                arr_17 [i_1] [i_1] [i_2] [i_1 + 1] [i_5] = ((/* implicit */unsigned short) min((((/* implicit */unsigned long long int) min((var_14), (((/* implicit */unsigned char) (_Bool)0))))), (((unsigned long long int) 0U))));
                                var_20 = ((/* implicit */unsigned short) max((var_20), (((unsigned short) (_Bool)1))));
                                arr_18 [i_1] = ((/* implicit */int) (short)20885);
                                var_21 += ((/* implicit */unsigned long long int) ((unsigned char) (+(((/* implicit */int) var_15)))));
                            }
                            for (unsigned long long int i_6 = 0; i_6 < 18; i_6 += 1) /* same iter space */
                            {
                                arr_22 [i_1 - 1] [i_2] [i_1 - 1] [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) (signed char)-6)) || (((/* implicit */_Bool) (unsigned char)7))));
                                arr_23 [i_0] [i_0] [i_1] [4] [15] [i_0] [i_0] = min((((/* implicit */long long int) (-(arr_20 [i_0] [i_1] [i_2] [i_3] [i_6] [i_6])))), (((((/* implicit */long long int) arr_20 [i_6] [i_6] [i_6] [i_6] [i_6] [i_6])) + (arr_7 [i_1] [i_1 - 1] [i_2] [i_3] [i_6]))));
                            }
                            for (unsigned long long int i_7 = 0; i_7 < 18; i_7 += 1) /* same iter space */
                            {
                                var_22 -= ((/* implicit */short) ((((/* implicit */_Bool) ((((((/* implicit */int) var_9)) | (((/* implicit */int) var_0)))) * (((/* implicit */int) (!(((/* implicit */_Bool) (short)-3740)))))))) ? (((long long int) arr_3 [i_1 + 1] [i_7] [i_7])) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) ((((/* implicit */_Bool) (unsigned char)69)) && (((/* implicit */_Bool) (unsigned char)73))))) : (((/* implicit */int) (signed char)0)))))));
                                arr_28 [i_2] [i_2] [i_2] [i_1] [i_2] [i_2] [i_2] = ((/* implicit */int) min((((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */_Bool) arr_5 [i_2] [i_2] [i_2])) ? (((/* implicit */int) var_18)) : (((/* implicit */int) var_5)))))), (arr_21 [i_0] [i_1] [i_1 - 1] [i_1 - 1] [i_3] [i_7] [i_7])));
                                arr_29 [i_1] [i_1] [i_1] = ((/* implicit */signed char) (_Bool)1);
                            }
                        }
                    } 
                } 
                /* LoopSeq 2 */
                for (unsigned long long int i_8 = 0; i_8 < 18; i_8 += 3) 
                {
                    var_23 = ((/* implicit */signed char) max((max((((int) (_Bool)1)), ((+(((/* implicit */int) (signed char)-1)))))), (((((/* implicit */int) (short)-4346)) & (((/* implicit */int) (_Bool)1))))));
                    var_24 = (i_1 % 2 == 0) ? (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((280330512U), (((/* implicit */unsigned int) 0)))) << (((((/* implicit */int) min((arr_11 [i_0] [i_0] [i_1] [(short)12] [i_8] [i_1] [i_8]), (var_7)))) - (29231)))))), (((max((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (1711678440))))))))) : (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((min((280330512U), (((/* implicit */unsigned int) 0)))) << (((((((/* implicit */int) min((arr_11 [i_0] [i_0] [i_1] [(short)12] [i_8] [i_1] [i_8]), (var_7)))) - (29231))) + (3412)))))), (((max((arr_8 [i_1]), (((/* implicit */unsigned long long int) var_2)))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */int) var_15)) / (1711678440)))))))));
                    arr_34 [i_1] = (!(((/* implicit */_Bool) 8796093022207LL)));
                }
                /* vectorizable */
                for (unsigned int i_9 = 0; i_9 < 18; i_9 += 1) 
                {
                    /* LoopNest 2 */
                    for (short i_10 = 0; i_10 < 18; i_10 += 1) 
                    {
                        for (unsigned short i_11 = 0; i_11 < 18; i_11 += 4) 
                        {
                            {
                                var_25 = ((/* implicit */unsigned char) min((var_25), (var_9)));
                                var_26 = ((/* implicit */unsigned char) ((signed char) (_Bool)1));
                                var_27 = ((/* implicit */signed char) max((var_27), (((signed char) 4014636783U))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (unsigned long long int i_12 = 0; i_12 < 18; i_12 += 4) 
                    {
                        for (short i_13 = 0; i_13 < 18; i_13 += 2) 
                        {
                            {
                                var_28 &= ((/* implicit */short) ((2871431548U) + (((/* implicit */unsigned int) ((/* implicit */int) (short)20885)))));
                                var_29 = ((/* implicit */unsigned short) max((var_29), (((/* implicit */unsigned short) ((arr_3 [i_1 + 1] [i_1 - 1] [i_1 - 1]) / (arr_3 [i_1 + 2] [i_1 - 1] [i_1 + 2]))))));
                                var_30 &= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_1 + 2])) ? (((((/* implicit */_Bool) (unsigned short)0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) : (15009286982386132659ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (short)20885))) <= (7330278743556554101ULL)))))));
                                var_31 = ((/* implicit */unsigned long long int) (unsigned char)16);
                            }
                        } 
                    } 
                    var_32 += ((/* implicit */unsigned long long int) var_4);
                }
                /* LoopNest 2 */
                for (unsigned short i_14 = 0; i_14 < 18; i_14 += 4) 
                {
                    for (signed char i_15 = 0; i_15 < 18; i_15 += 4) 
                    {
                        {
                            var_33 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
                            arr_55 [i_0] [i_1] [i_1] [i_1] [i_14] [i_1] = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((var_17), (((/* implicit */long long int) -1002849616))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) arr_3 [i_0] [i_1] [i_0])))) : (min((11116465330152997514ULL), (arr_21 [i_0] [i_0] [i_1 + 2] [i_0] [i_14] [(unsigned char)8] [i_15]))))));
                            var_34 = ((/* implicit */signed char) max((var_34), (((/* implicit */signed char) var_18))));
                        }
                    } 
                } 
            }
        } 
    } 
}
