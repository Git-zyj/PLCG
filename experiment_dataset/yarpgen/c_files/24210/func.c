/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 24210
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=24210 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/24210
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
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (unsigned short i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            for (signed char i_2 = 2; i_2 < 11; i_2 += 4) 
            {
                {
                    /* LoopSeq 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 4) /* same iter space */
                    {
                        /* LoopSeq 3 */
                        /* vectorizable */
                        for (unsigned char i_4 = 1; i_4 < 12; i_4 += 1) /* same iter space */
                        {
                            var_12 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_10))));
                            var_13 = ((/* implicit */signed char) max((var_13), (((/* implicit */signed char) (-(((/* implicit */int) arr_1 [i_3])))))));
                        }
                        /* vectorizable */
                        for (unsigned char i_5 = 1; i_5 < 12; i_5 += 1) /* same iter space */
                        {
                            var_14 &= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_0] [i_0])) ? (((/* implicit */unsigned long long int) var_10)) : ((+(var_7)))));
                            var_15 = (+(((/* implicit */int) var_8)));
                            arr_18 [i_0] &= ((/* implicit */signed char) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) var_7)) ? (arr_0 [i_3]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_12 [i_0] [(signed char)9] [i_2] [i_2] [i_5] [i_5 - 1] [(signed char)9]))))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_6)))))));
                        }
                        /* vectorizable */
                        for (short i_6 = 0; i_6 < 14; i_6 += 1) 
                        {
                            var_16 = ((/* implicit */signed char) ((((/* implicit */_Bool) 420490809U)) ? (((/* implicit */int) (short)21753)) : (((/* implicit */int) (short)10263))));
                            arr_22 [i_1] [i_1] [i_6] [i_3] = ((/* implicit */short) arr_13 [i_0] [(unsigned short)5] [(unsigned short)5] [i_0] [(unsigned char)8] [i_6] [4LL]);
                            var_17 ^= ((/* implicit */signed char) (+(((((/* implicit */_Bool) (short)-18543)) ? (((/* implicit */int) (short)32765)) : (-592277708)))));
                        }
                        var_18 = ((/* implicit */unsigned short) max((var_18), (((/* implicit */unsigned short) var_9))));
                        arr_23 [i_0] [i_1] [i_2] [i_3] [i_3] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_17 [(short)12] [i_1] [(short)12] [i_2] [i_3])) ? (((/* implicit */int) max((var_3), (var_3)))) : (((/* implicit */int) var_11))))) ? (max((((/* implicit */long long int) max((arr_9 [i_0] [i_2] [i_3]), (((/* implicit */unsigned int) var_3))))), (((((/* implicit */_Bool) var_7)) ? (-1426233422015850554LL) : (((/* implicit */long long int) 420490829U)))))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_20 [i_1]))))))));
                    }
                    for (long long int i_7 = 0; i_7 < 14; i_7 += 4) /* same iter space */
                    {
                        arr_28 [i_7] [i_7] [i_2] = ((/* implicit */short) max((((/* implicit */long long int) (-(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) arr_6 [i_1] [i_2 + 1] [i_7])) : (((/* implicit */int) arr_5 [i_0] [i_0]))))))), (max((((/* implicit */long long int) arr_16 [1] [i_7] [i_7] [i_7] [i_2] [i_1] [1])), (max((((/* implicit */long long int) arr_16 [i_2] [i_2] [i_2] [i_2] [i_2] [i_2 + 3] [(unsigned short)9])), (arr_3 [i_2 + 2])))))));
                        var_19 = ((/* implicit */unsigned short) min((min((((/* implicit */short) (!(((/* implicit */_Bool) arr_3 [i_7]))))), (max((arr_11 [i_0] [i_1] [i_2] [i_0]), (((/* implicit */short) arr_5 [i_0] [i_0])))))), (((/* implicit */short) arr_6 [i_0] [i_1] [i_7]))));
                        arr_29 [i_0] [i_1] [i_2 + 1] [i_7] = ((/* implicit */long long int) var_5);
                    }
                    var_20 = ((/* implicit */long long int) max((((((/* implicit */_Bool) var_9)) ? ((-(((/* implicit */int) arr_27 [i_0] [i_0] [i_2] [i_0] [i_0])))) : (((((/* implicit */_Bool) arr_25 [i_0] [i_0] [i_1] [(short)9])) ? (((/* implicit */int) arr_19 [i_0] [i_0] [i_0] [i_0] [i_1] [i_1] [i_2])) : (((/* implicit */int) var_9)))))), (((/* implicit */int) arr_24 [i_0] [i_0] [i_0] [i_0]))));
                }
            } 
        } 
    } 
    var_21 = ((/* implicit */unsigned char) max((var_21), (((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))))), (max((((/* implicit */unsigned long long int) var_6)), (var_4)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_8))) : ((+(var_10)))))) : (var_4))))));
}
