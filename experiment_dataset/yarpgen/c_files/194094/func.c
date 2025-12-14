/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 194094
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=194094 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/194094
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 2) 
    {
        var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned short) var_3))) ? (((/* implicit */int) (signed char)110)) : ((~(759896915)))));
        var_18 *= ((/* implicit */signed char) 1U);
    }
    /* LoopNest 3 */
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 3) 
        {
            for (int i_3 = 2; i_3 < 18; i_3 += 2) 
            {
                {
                    /* LoopSeq 2 */
                    for (unsigned short i_4 = 0; i_4 < 19; i_4 += 1) 
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned short i_5 = 0; i_5 < 19; i_5 += 1) 
                        {
                            arr_16 [(unsigned short)16] [i_1] [i_2] [i_1] = ((/* implicit */unsigned char) ((2993415120980041180ULL) / ((+(34359214080ULL)))));
                            var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) (-(((/* implicit */int) (short)-10324)))))));
                        }
                        for (unsigned long long int i_6 = 1; i_6 < 17; i_6 += 1) 
                        {
                            var_20 = ((/* implicit */unsigned short) max((max(((~(1464300103))), (((/* implicit */int) ((signed char) var_11))))), (((/* implicit */int) ((short) (short)10323)))));
                            arr_19 [i_1] [i_1] [i_3 - 1] [i_4] [(unsigned short)5] [i_6] = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(max((((/* implicit */int) var_0)), (var_6)))))), (max((max((var_2), (var_1))), (((((/* implicit */_Bool) (short)-4323)) ? (var_14) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                        }
                        for (unsigned long long int i_7 = 1; i_7 < 18; i_7 += 4) 
                        {
                            var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(max((391743945342489828ULL), (((/* implicit */unsigned long long int) -386475867))))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (var_6)));
                            arr_24 [i_4] = ((/* implicit */signed char) ((((/* implicit */unsigned long long int) 334990958)) < (max((140737488355327ULL), (9079256848778919936ULL)))));
                            arr_25 [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) var_9)) ? (min((min((var_14), (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)126)) ? (((/* implicit */int) (short)-10324)) : (((/* implicit */int) (unsigned short)6642))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) max((((/* implicit */short) (!(((/* implicit */_Bool) var_10))))), ((short)-1)))))));
                            var_22 = ((/* implicit */unsigned int) min((max((((/* implicit */unsigned long long int) var_12)), (max((var_1), (((/* implicit */unsigned long long int) var_13)))))), (((((/* implicit */_Bool) max(((unsigned short)8890), (((/* implicit */unsigned short) (signed char)31))))) ? (max((((/* implicit */unsigned long long int) (short)-10324)), (391743945342489828ULL))) : (((((/* implicit */_Bool) var_8)) ? (13503854054092448455ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_7)))))))));
                            arr_26 [i_1] [i_1] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */signed char) (short)32762);
                        }
                        var_23 -= ((/* implicit */unsigned int) (+(((((/* implicit */_Bool) var_16)) ? (((/* implicit */int) var_7)) : (var_6)))));
                    }
                    for (unsigned char i_8 = 0; i_8 < 19; i_8 += 4) 
                    {
                        /* LoopSeq 3 */
                        for (unsigned short i_9 = 0; i_9 < 19; i_9 += 3) 
                        {
                            var_24 = ((/* implicit */unsigned char) min((((/* implicit */int) (unsigned char)113)), ((~(((((/* implicit */_Bool) var_5)) ? (var_13) : (((/* implicit */int) (short)10323))))))));
                            var_25 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((((((/* implicit */_Bool) var_12)) ? (var_11) : (((/* implicit */unsigned int) ((/* implicit */int) var_0))))), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)98))) < (var_3))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_9)))))) : (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) 18444492273895866368ULL)) ? (-16) : (2147483647)))), (((unsigned long long int) var_2))))));
                            var_26 = (+(((((/* implicit */_Bool) var_0)) ? (var_2) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)32))))));
                            var_27 &= ((unsigned long long int) (~(((/* implicit */int) min((((/* implicit */unsigned short) var_7)), ((unsigned short)24700))))));
                        }
                        /* vectorizable */
                        for (short i_10 = 0; i_10 < 19; i_10 += 1) 
                        {
                            var_28 = ((/* implicit */int) ((((var_16) & (((/* implicit */unsigned int) ((/* implicit */int) (short)-10323))))) + (var_15)));
                            var_29 *= ((/* implicit */unsigned short) ((((/* implicit */int) (unsigned short)1217)) | (((/* implicit */int) ((2147483647) >= (var_6))))));
                        }
                        for (int i_11 = 0; i_11 < 19; i_11 += 3) 
                        {
                            arr_38 [i_11] [(unsigned short)5] [i_3 - 1] [i_2] [i_1] = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) (unsigned short)21216))));
                            var_30 = ((/* implicit */unsigned short) var_10);
                            arr_39 [4ULL] [i_8] [i_3] [i_3] [i_11] = var_2;
                        }
                        arr_40 [i_1] [i_1] [16ULL] &= ((/* implicit */unsigned char) (~(max(((~(var_2))), (min((((/* implicit */unsigned long long int) var_6)), (var_2)))))));
                    }
                    var_31 |= ((/* implicit */unsigned short) (~(((((/* implicit */int) (signed char)(-127 - 1))) + (((/* implicit */int) (unsigned short)37897))))));
                }
            } 
        } 
    } 
}
