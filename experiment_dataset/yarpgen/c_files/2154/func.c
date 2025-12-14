/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2154
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
    var_19 = ((/* implicit */short) var_5);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 15; i_0 += 3) 
    {
        for (unsigned char i_1 = 2; i_1 < 14; i_1 += 4) 
        {
            {
                var_20 = ((/* implicit */short) min((arr_2 [i_1 + 1] [i_1]), (min((arr_2 [i_1 + 1] [i_1 - 1]), (arr_2 [i_1 - 1] [i_1 + 1])))));
                /* LoopSeq 3 */
                /* vectorizable */
                for (unsigned long long int i_2 = 1; i_2 < 13; i_2 += 3) 
                {
                    var_21 = ((/* implicit */int) arr_7 [i_1 - 1] [i_1 - 2]);
                    arr_9 [i_0] [i_2] [i_1] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_6 [i_0] [i_1 - 2] [i_2] [i_2 - 1])) ? (arr_0 [i_0]) : (arr_6 [i_1] [i_1] [i_2] [i_2 + 1])));
                }
                for (unsigned char i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    var_22 = var_18;
                    var_23 = ((/* implicit */short) ((unsigned long long int) ((((/* implicit */_Bool) max((arr_1 [i_1]), (arr_6 [i_0] [i_0] [i_0] [i_3])))) ? (((/* implicit */unsigned long long int) (+(((/* implicit */int) var_13))))) : (min((((/* implicit */unsigned long long int) var_10)), (arr_1 [i_3]))))));
                }
                for (unsigned short i_4 = 0; i_4 < 15; i_4 += 1) 
                {
                    var_24 = ((/* implicit */_Bool) arr_3 [i_0]);
                    /* LoopNest 2 */
                    for (long long int i_5 = 0; i_5 < 15; i_5 += 4) 
                    {
                        for (long long int i_6 = 0; i_6 < 15; i_6 += 1) 
                        {
                            {
                                arr_21 [i_0] [i_4] [i_4] [i_6] = ((/* implicit */unsigned short) arr_12 [i_0] [i_4] [(_Bool)1]);
                                arr_22 [i_6] [i_1 + 1] = ((/* implicit */_Bool) (-(min((min((arr_7 [i_0] [i_0]), (((/* implicit */long long int) var_16)))), (var_3)))));
                                var_25 ^= ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) arr_15 [i_0] [i_1 + 1] [i_4] [i_5]))) ? (min((((((/* implicit */_Bool) var_1)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_17 [i_0] [i_5] [i_4] [i_6] [i_4] [(unsigned short)5] [i_4]))) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned short) var_2))))) : (arr_1 [1ULL])));
                                var_26 &= ((/* implicit */long long int) arr_1 [i_1 + 1]);
                            }
                        } 
                    } 
                    var_27 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(((/* implicit */int) var_9))))) ? (((/* implicit */int) arr_15 [i_1] [(unsigned char)13] [i_4] [i_4])) : (((/* implicit */int) arr_10 [i_0] [i_1] [i_1] [i_4]))));
                    /* LoopNest 2 */
                    for (short i_7 = 0; i_7 < 15; i_7 += 2) 
                    {
                        for (long long int i_8 = 4; i_8 < 13; i_8 += 2) 
                        {
                            {
                                var_28 = arr_2 [i_8] [i_4];
                                var_29 = ((/* implicit */short) min((max((((/* implicit */unsigned long long int) (short)-14822)), (1985235269457267904ULL))), (((/* implicit */unsigned long long int) arr_17 [(unsigned short)11] [i_1 - 2] [i_1] [i_1] [i_7] [i_7] [i_7]))));
                            }
                        } 
                    } 
                }
                arr_28 [6LL] [i_1] = ((/* implicit */unsigned long long int) arr_20 [i_1 - 2] [i_1] [i_1] [i_1 - 2] [i_1] [i_1] [(unsigned char)1]);
                var_30 = ((/* implicit */signed char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_11 [i_1]))))) ? (((((/* implicit */_Bool) arr_20 [i_0] [3LL] [i_1 - 1] [i_1 - 1] [i_1] [i_1 - 1] [i_1])) ? (((/* implicit */unsigned long long int) var_4)) : (arr_1 [i_0]))) : (((/* implicit */unsigned long long int) min(((+(arr_23 [i_1 - 2] [(unsigned char)12] [i_0] [i_0] [i_0]))), (((/* implicit */unsigned int) (~(((/* implicit */int) var_11))))))))));
                var_31 *= ((/* implicit */unsigned char) arr_4 [i_0] [i_1] [i_0]);
            }
        } 
    } 
}
