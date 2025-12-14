/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189945
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189945 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189945
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
    for (unsigned short i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 21; i_2 += 2) 
            {
                {
                    var_11 = ((/* implicit */_Bool) min((var_11), (((/* implicit */_Bool) (~(((/* implicit */int) var_6)))))));
                    /* LoopSeq 2 */
                    for (short i_3 = 0; i_3 < 21; i_3 += 4) 
                    {
                        /* LoopSeq 1 */
                        for (long long int i_4 = 0; i_4 < 21; i_4 += 2) 
                        {
                            var_12 = ((/* implicit */int) max((((/* implicit */unsigned long long int) var_9)), (var_1)));
                            arr_13 [i_0] [11ULL] [i_2] [i_3] [i_4] = ((/* implicit */_Bool) arr_11 [i_3] [i_0]);
                        }
                        var_13 = ((/* implicit */unsigned char) min((var_13), (((/* implicit */unsigned char) arr_9 [i_2] [i_3]))));
                        arr_14 [i_0] [i_1] [i_2] [i_3] &= ((/* implicit */long long int) ((((((arr_6 [i_0]) << (((arr_9 [i_0] [i_0]) - (339428597U))))) << (((arr_9 [i_0] [i_1]) - (339428594U))))) >> (((/* implicit */int) ((((((/* implicit */unsigned int) ((/* implicit */int) arr_11 [(signed char)13] [i_3]))) < (arr_9 [(unsigned short)12] [(unsigned short)12]))) && (((/* implicit */_Bool) var_8)))))));
                    }
                    for (long long int i_5 = 0; i_5 < 21; i_5 += 3) 
                    {
                        var_14 |= ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((2147483647ULL) < (((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1)))))), (((min((arr_6 [i_1]), (((/* implicit */unsigned long long int) arr_12 [i_2])))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_11 [0ULL] [i_5])))))));
                        var_15 |= ((/* implicit */long long int) ((((/* implicit */_Bool) arr_11 [i_0] [i_0])) ? (((/* implicit */unsigned int) min((((/* implicit */int) ((unsigned short) arr_1 [i_0] [i_0]))), ((~(((/* implicit */int) (short)-28560))))))) : (arr_12 [i_1])));
                    }
                    /* LoopSeq 2 */
                    for (unsigned char i_6 = 0; i_6 < 21; i_6 += 3) 
                    {
                        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) var_10))));
                        arr_21 [i_6] [i_6] [i_2] [16LL] [i_6] = ((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min(((~(arr_3 [i_0]))), (((/* implicit */long long int) (~(arr_12 [(signed char)12]))))))), ((~((~(arr_2 [i_6] [i_2] [i_1])))))));
                        var_17 ^= ((/* implicit */signed char) (~(((/* implicit */int) min((((((/* implicit */_Bool) arr_2 [i_0] [i_0] [i_0])) || (((/* implicit */_Bool) var_6)))), (((_Bool) arr_17 [i_0] [i_2] [i_0] [i_0])))))));
                        arr_22 [i_1] = ((((/* implicit */long long int) ((int) arr_17 [i_2] [0LL] [i_2] [i_6]))) >= (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_16 [i_0])) ? (arr_12 [i_0]) : (arr_10 [i_0] [i_0] [i_0] [i_0] [i_0])))) ? (min((var_2), (((/* implicit */long long int) arr_8 [i_2])))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_3 [i_0])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_18 [i_2]))) : (arr_0 [i_0])))))));
                    }
                    for (short i_7 = 0; i_7 < 21; i_7 += 2) 
                    {
                        arr_25 [i_7] [i_2] [i_1] [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) 18446744071562067991ULL)) ? (((/* implicit */unsigned long long int) 225790821)) : (2147483625ULL))) - (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_4 [i_1])))))));
                        var_18 += ((/* implicit */unsigned long long int) arr_24 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0]);
                        var_19 ^= ((/* implicit */unsigned long long int) arr_19 [i_1] [(short)6] [i_1] [i_1]);
                    }
                    var_20 = ((/* implicit */unsigned char) var_8);
                    var_21 = ((/* implicit */signed char) (((~(arr_5 [i_0] [i_2]))) % (((/* implicit */int) ((short) ((arr_10 [i_1] [i_1] [i_2] [i_0] [i_2]) | (((/* implicit */unsigned int) ((/* implicit */int) arr_16 [i_2])))))))));
                }
            } 
        } 
    } 
    var_22 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_2)) && ((((-(951963322))) == (((/* implicit */int) var_6))))));
}
