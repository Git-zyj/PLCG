/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227458
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227458 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227458
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
    var_20 = ((/* implicit */signed char) (-(((/* implicit */int) ((((/* implicit */unsigned long long int) 3038725497U)) == (74355680996107072ULL))))));
    var_21 *= ((/* implicit */unsigned char) max((((/* implicit */long long int) (unsigned short)22649)), (9223372036854775807LL)));
    /* LoopNest 3 */
    for (short i_0 = 0; i_0 < 24; i_0 += 1) 
    {
        for (int i_1 = 3; i_1 < 21; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 24; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */int) min((var_22), (((/* implicit */int) min((arr_3 [(_Bool)0]), (((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_18))) : ((+(10363246388515447046ULL))))))))));
                    var_23 = ((/* implicit */short) arr_6 [i_0]);
                    var_24 += ((unsigned short) ((int) ((((/* implicit */int) var_5)) - (arr_0 [i_0]))));
                }
            } 
        } 
    } 
    /* LoopNest 2 */
    for (unsigned long long int i_3 = 0; i_3 < 12; i_3 += 2) 
    {
        for (unsigned long long int i_4 = 0; i_4 < 12; i_4 += 4) 
        {
            {
                /* LoopSeq 1 */
                for (long long int i_5 = 1; i_5 < 9; i_5 += 3) 
                {
                    arr_16 [i_5] [i_5] = ((/* implicit */long long int) arr_8 [i_3]);
                    /* LoopSeq 1 */
                    for (unsigned char i_6 = 0; i_6 < 12; i_6 += 2) 
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_7 = 0; i_7 < 1; i_7 += 1) 
                        {
                            var_25 += ((/* implicit */unsigned long long int) ((((((/* implicit */_Bool) arr_10 [i_5 + 1] [i_5 + 1])) ? (((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 3])) : (((/* implicit */int) arr_10 [i_5 + 2] [i_5 + 3])))) / (((/* implicit */int) min((arr_10 [i_5 + 1] [i_5 + 3]), (arr_10 [i_5 + 1] [i_5 + 3]))))));
                            var_26 = ((/* implicit */int) max((var_26), (((/* implicit */int) ((((/* implicit */_Bool) max(((-9223372036854775807LL - 1LL)), (-1LL)))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) ((short) arr_2 [i_7] [i_3]))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_8))))))))));
                        }
                        /* LoopSeq 2 */
                        for (signed char i_8 = 0; i_8 < 12; i_8 += 2) 
                        {
                            arr_27 [i_3] [i_3] [i_5] [i_5 + 3] [i_6] [i_6] [i_5] = ((/* implicit */unsigned char) ((min((((/* implicit */int) (!(((/* implicit */_Bool) var_19))))), (((((/* implicit */int) var_7)) & (((/* implicit */int) var_8)))))) * (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) min((((/* implicit */unsigned char) var_15)), (arr_14 [i_3] [i_3] [i_3] [(signed char)11]))))) <= ((~(10363246388515447046ULL))))))));
                            arr_28 [i_3] [i_3] [i_3] [i_3] [i_3] [i_5] = ((/* implicit */int) ((((/* implicit */int) (!(((/* implicit */_Bool) (signed char)-9))))) > (((((((/* implicit */int) var_16)) & (((/* implicit */int) var_7)))) << (((/* implicit */int) ((((/* implicit */_Bool) var_18)) || (((/* implicit */_Bool) arr_5 [i_3] [i_4] [i_3])))))))));
                        }
                        /* vectorizable */
                        for (_Bool i_9 = 1; i_9 < 1; i_9 += 1) 
                        {
                            var_27 ^= ((((/* implicit */_Bool) arr_15 [i_9] [i_6] [i_5 + 1])) ? (((/* implicit */int) var_6)) : (((/* implicit */int) arr_15 [i_3] [i_6] [i_5 - 1])));
                            arr_32 [i_3] [i_5] [i_5] [i_5] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */int) arr_21 [i_5 + 1] [i_9 - 1] [i_5])) ^ (((var_2) ? (((/* implicit */int) var_14)) : (((/* implicit */int) var_1))))));
                            var_28 = ((/* implicit */signed char) var_17);
                            var_29 = ((/* implicit */unsigned char) (((((_Bool)1) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_16)))) ^ ((-(((/* implicit */int) arr_30 [i_3] [i_4] [i_4] [i_5 - 1] [11ULL] [i_9 - 1]))))));
                        }
                    }
                    var_30 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_11 [i_5 + 3] [i_5 - 1])) ? (((/* implicit */int) ((((/* implicit */int) var_6)) == (((/* implicit */int) var_18))))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_1)))))))) ? (min((max((10363246388515447040ULL), (((/* implicit */unsigned long long int) var_2)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_17)) || (((/* implicit */_Bool) arr_18 [i_3] [i_4] [(signed char)7]))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-23)))));
                    /* LoopSeq 1 */
                    for (int i_10 = 3; i_10 < 11; i_10 += 1) 
                    {
                        arr_36 [i_5] [i_3] [i_4] [i_4] [11ULL] [i_10 - 2] = ((/* implicit */long long int) (((~(((((/* implicit */_Bool) var_6)) ? (arr_29 [i_5] [i_4] [i_10] [i_5] [i_4] [i_10]) : (((/* implicit */int) var_18)))))) % ((((!(((/* implicit */_Bool) arr_7 [i_3] [i_4])))) ? (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned char)137))))) : (((/* implicit */int) ((unsigned char) arr_14 [i_3] [10LL] [i_3] [i_3])))))));
                        var_31 = ((/* implicit */unsigned short) (+(var_9)));
                        var_32 = ((/* implicit */unsigned char) (+(arr_2 [i_5] [i_3])));
                    }
                }
                var_33 = ((/* implicit */short) min((((((int) var_3)) * (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_12)) : (((/* implicit */int) (unsigned char)124)))))), ((-(((((/* implicit */_Bool) arr_1 [i_3] [i_4])) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_10 [i_3] [i_3]))))))));
                var_34 = ((/* implicit */unsigned short) ((unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_8))))))));
                arr_37 [(short)1] [(short)1] [i_4] = ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_6))))));
            }
        } 
    } 
}
