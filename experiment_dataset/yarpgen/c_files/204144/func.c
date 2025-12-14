/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204144
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
    for (signed char i_0 = 0; i_0 < 11; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 10; i_1 += 4) 
        {
            for (long long int i_2 = 3; i_2 < 8; i_2 += 3) 
            {
                {
                    arr_7 [i_1] = ((/* implicit */unsigned short) min((max((((/* implicit */unsigned long long int) arr_5 [i_0] [i_1] [i_2] [i_2 - 2])), (var_11))), (((/* implicit */unsigned long long int) (~(((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])))))));
                    /* LoopNest 2 */
                    for (int i_3 = 3; i_3 < 7; i_3 += 1) 
                    {
                        for (long long int i_4 = 1; i_4 < 9; i_4 += 3) 
                        {
                            {
                                arr_13 [i_0] [i_1] [i_1] [i_3] [i_4] = ((/* implicit */unsigned short) min((((/* implicit */long long int) (((_Bool)0) ? (((/* implicit */int) (unsigned short)21397)) : (((/* implicit */int) (unsigned short)21397))))), (min((arr_5 [i_4 + 1] [i_1 + 1] [i_2 - 1] [i_3 + 4]), (((((/* implicit */long long int) ((/* implicit */int) arr_8 [i_0] [i_0] [i_0] [i_1]))) ^ (var_15)))))));
                                var_17 = ((/* implicit */signed char) (~(((((/* implicit */int) arr_11 [i_1])) ^ (((/* implicit */int) ((unsigned char) arr_3 [i_1] [i_2] [i_4])))))));
                                arr_14 [i_1] = ((/* implicit */unsigned int) arr_4 [i_1] [i_1]);
                            }
                        } 
                    } 
                }
            } 
        } 
    } 
    var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+((+(var_14)))))) ? ((-(((((/* implicit */unsigned int) ((/* implicit */int) var_16))) - (251658240U))))) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        arr_17 [i_5] [i_5] = ((/* implicit */signed char) ((((arr_15 [i_5 + 3]) + (2147483647))) >> (((((/* implicit */int) var_7)) + (67)))));
        arr_18 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_16 [i_5 + 2])) ? (arr_16 [i_5 + 2]) : (arr_16 [i_5 + 2])));
        arr_19 [i_5] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_15 [i_5 + 2])) || (((/* implicit */_Bool) arr_15 [i_5 - 1]))));
    }
    for (long long int i_6 = 1; i_6 < 11; i_6 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) ((((((/* implicit */_Bool) var_6)) ? (((unsigned long long int) var_0)) : (((/* implicit */unsigned long long int) ((long long int) 251658240U))))) | (((/* implicit */unsigned long long int) var_15)))))));
        var_20 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */int) var_6)) >> ((((~(arr_15 [i_6]))) - (1160453274)))))), (var_13)));
        arr_22 [i_6] = ((/* implicit */long long int) max((max((var_12), (max((814081701U), (((/* implicit */unsigned int) arr_20 [i_6] [i_6])))))), (max((((((/* implicit */_Bool) var_11)) ? (var_12) : (((/* implicit */unsigned int) arr_15 [i_6])))), (((/* implicit */unsigned int) (~(((/* implicit */int) (unsigned short)63772)))))))));
    }
    var_21 = var_14;
    var_22 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) ((((/* implicit */_Bool) var_5)) && (((/* implicit */_Bool) (unsigned short)44139))))) : (var_14)))) ? (min((var_11), (((/* implicit */unsigned long long int) min((var_2), (((/* implicit */long long int) var_7))))))) : (((/* implicit */unsigned long long int) max((max((var_13), (((/* implicit */long long int) var_6)))), (((long long int) var_7)))))));
}
