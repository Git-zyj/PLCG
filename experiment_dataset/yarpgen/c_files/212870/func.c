/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212870
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212870 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212870
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
    var_12 = ((/* implicit */signed char) min((((unsigned char) ((0LL) & (((/* implicit */long long int) ((/* implicit */int) (short)10904)))))), (((/* implicit */unsigned char) var_8))));
    var_13 = ((/* implicit */unsigned int) (-(((/* implicit */int) max((var_4), (((/* implicit */unsigned char) ((signed char) var_3))))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned int i_0 = 3; i_0 < 14; i_0 += 1) 
    {
        var_14 = ((/* implicit */short) max((var_14), (((/* implicit */short) (!(((/* implicit */_Bool) arr_0 [i_0 - 1])))))));
        arr_2 [i_0] [i_0] = ((/* implicit */_Bool) ((signed char) arr_0 [i_0 - 1]));
        arr_3 [i_0] [i_0 - 3] = ((/* implicit */unsigned long long int) arr_0 [i_0]);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        /* LoopNest 3 */
        for (signed char i_2 = 3; i_2 < 12; i_2 += 3) 
        {
            for (long long int i_3 = 4; i_3 < 12; i_3 += 2) 
            {
                for (signed char i_4 = 0; i_4 < 13; i_4 += 2) 
                {
                    {
                        /* LoopSeq 3 */
                        for (signed char i_5 = 1; i_5 < 12; i_5 += 4) 
                        {
                            var_15 = ((/* implicit */unsigned short) ((max((((/* implicit */int) max((var_5), (((/* implicit */short) var_3))))), (((((/* implicit */int) var_5)) << (((var_9) - (1073488459U))))))) << (((/* implicit */int) arr_11 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1]))));
                            arr_15 [i_1] [i_2] [i_3] [i_4] [i_5] = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) min((((/* implicit */long long int) var_0)), (arr_13 [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((((/* implicit */_Bool) arr_13 [i_1] [(short)3] [(short)3] [(short)3] [i_1])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_1])))) : (((/* implicit */int) arr_8 [i_1] [i_1] [i_3])))));
                            arr_16 [i_1] = ((/* implicit */unsigned char) var_10);
                            var_16 = ((/* implicit */unsigned short) ((min(((-(0U))), (((/* implicit */unsigned int) var_3)))) >> (((((/* implicit */int) (unsigned char)209)) - (209)))));
                            arr_17 [1U] [i_1] [i_3] [i_3] [i_3] [i_3] = ((/* implicit */long long int) (~(((/* implicit */int) ((short) var_2)))));
                        }
                        for (unsigned long long int i_6 = 0; i_6 < 13; i_6 += 1) 
                        {
                            var_17 = ((/* implicit */short) max((var_17), (((/* implicit */short) (unsigned char)205))));
                            arr_21 [i_1] [i_2] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */int) arr_8 [i_3 - 3] [i_1] [i_2 - 1])) / (((/* implicit */int) (unsigned char)209)))))));
                            var_18 = ((/* implicit */_Bool) ((unsigned char) -1LL));
                        }
                        /* vectorizable */
                        for (long long int i_7 = 0; i_7 < 13; i_7 += 1) 
                        {
                            arr_24 [i_1] [i_1] [i_3 - 3] [i_4] [i_7] = ((/* implicit */long long int) arr_23 [i_2] [i_2 - 1] [i_2] [i_2 - 2] [i_2] [i_2] [i_2]);
                            arr_25 [i_1] [i_3] [i_1] [(unsigned char)12] [i_1] |= ((/* implicit */short) (_Bool)1);
                        }
                        /* LoopSeq 2 */
                        for (short i_8 = 2; i_8 < 9; i_8 += 4) 
                        {
                            arr_29 [i_1] [i_2 - 2] [i_3] [i_4] [i_2 - 2] [i_1] [i_8] = ((/* implicit */short) arr_26 [i_1] [i_1] [i_3 - 1] [i_4] [i_8 + 2] [i_1] [i_1]);
                            arr_30 [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_8 + 1]))) / (arr_14 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1])))) ? (((/* implicit */long long int) (+(((/* implicit */int) arr_22 [i_1] [i_1] [i_8 + 2] [i_1] [i_8 + 2] [i_3 - 2]))))) : (-11LL)));
                            arr_31 [i_1] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) ((signed char) var_11)))))));
                            arr_32 [i_8] &= ((/* implicit */signed char) ((long long int) ((((/* implicit */long long int) ((((/* implicit */int) (unsigned char)147)) % (((/* implicit */int) (unsigned char)125))))) & (max((arr_14 [i_1] [i_2] [i_2] [i_4] [i_3] [i_2]), (((/* implicit */long long int) arr_1 [i_1])))))));
                        }
                        for (_Bool i_9 = 0; i_9 < 1; i_9 += 1) 
                        {
                            var_19 += ((/* implicit */unsigned int) ((unsigned short) arr_27 [i_3]));
                            arr_35 [i_1] [i_2] [(unsigned char)10] [i_4] [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) max((((/* implicit */short) arr_8 [i_1] [i_1] [i_3 - 3])), (((short) var_10))))) ? (arr_20 [i_1] [i_1] [i_3] [i_4] [i_9]) : (((/* implicit */unsigned long long int) ((int) ((18446744073709551590ULL) > (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))))));
                        }
                        arr_36 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) -2053698282098321540LL)) ? (((long long int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)36957)))) : (((/* implicit */long long int) ((unsigned int) var_7)))));
                        /* LoopSeq 1 */
                        for (signed char i_10 = 0; i_10 < 13; i_10 += 2) 
                        {
                            arr_40 [i_1] = ((/* implicit */signed char) (-(((/* implicit */int) (short)1787))));
                            var_20 = ((/* implicit */unsigned int) (unsigned char)147);
                        }
                    }
                } 
            } 
        } 
        arr_41 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (unsigned char)72)) ? (((/* implicit */int) (!(((/* implicit */_Bool) (short)-32751))))) : (((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) arr_12 [i_1]))))) < (((/* implicit */int) ((signed char) (short)26892))))))));
        /* LoopSeq 1 */
        for (unsigned long long int i_11 = 2; i_11 < 12; i_11 += 3) 
        {
            var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) var_0)) >> (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) arr_42 [i_1] [i_1] [i_11 + 1]))));
            var_22 = ((/* implicit */signed char) ((((/* implicit */int) var_7)) ^ (((/* implicit */int) (((~(((/* implicit */int) var_1)))) >= (((/* implicit */int) arr_1 [i_11])))))));
        }
    }
    var_23 = ((/* implicit */unsigned long long int) var_11);
}
