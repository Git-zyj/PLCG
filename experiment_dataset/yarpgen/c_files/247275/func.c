/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247275
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247275 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247275
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
    /* LoopSeq 3 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        /* LoopNest 2 */
        for (int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            for (unsigned short i_2 = 0; i_2 < 14; i_2 += 2) 
            {
                {
                    arr_7 [(unsigned char)2] [i_1] [11] [i_1] = ((/* implicit */unsigned short) (+(max((-161385850), (((((/* implicit */int) var_0)) / (var_7)))))));
                    /* LoopNest 2 */
                    for (long long int i_3 = 0; i_3 < 14; i_3 += 2) 
                    {
                        for (unsigned short i_4 = 0; i_4 < 14; i_4 += 1) 
                        {
                            {
                                arr_14 [(signed char)7] [i_3] [i_3] [i_3] [i_3] [2ULL] [i_3] = ((/* implicit */short) ((((((-161385849) & (((/* implicit */int) (unsigned char)10)))) & ((~(((/* implicit */int) arr_5 [i_3])))))) ^ (var_9)));
                                var_14 = ((/* implicit */long long int) max((var_14), (((/* implicit */long long int) ((int) ((((/* implicit */_Bool) -4123763739819244587LL)) ? (((/* implicit */int) max((var_6), (arr_5 [i_1])))) : (((arr_2 [i_4]) << (((arr_2 [i_0]) - (1116826917)))))))))));
                            }
                        } 
                    } 
                }
            } 
        } 
        var_15 = ((/* implicit */signed char) ((((/* implicit */_Bool) -161385848)) ? (((/* implicit */int) var_0)) : (((((/* implicit */int) arr_1 [i_0])) & (((/* implicit */int) arr_0 [i_0] [i_0]))))));
        var_16 -= ((/* implicit */long long int) var_12);
    }
    for (signed char i_5 = 1; i_5 < 15; i_5 += 3) 
    {
        var_17 = arr_18 [i_5] [(signed char)16];
        /* LoopSeq 1 */
        for (signed char i_6 = 1; i_6 < 16; i_6 += 2) 
        {
            arr_23 [i_6] = ((/* implicit */unsigned int) ((arr_19 [i_5]) - (min((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_18 [i_5 + 3] [i_6])) ? (arr_18 [i_5] [i_6]) : (((/* implicit */long long int) ((/* implicit */int) var_0)))))), (arr_19 [i_6])))));
            var_18 = ((/* implicit */unsigned char) ((int) (+((-(((/* implicit */int) arr_15 [i_6])))))));
        }
    }
    /* vectorizable */
    for (unsigned short i_7 = 0; i_7 < 15; i_7 += 3) 
    {
        /* LoopNest 2 */
        for (unsigned short i_8 = 0; i_8 < 15; i_8 += 2) 
        {
            for (signed char i_9 = 0; i_9 < 15; i_9 += 2) 
            {
                {
                    var_19 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((long long int) (signed char)-23))) ? (((((/* implicit */_Bool) arr_21 [i_7] [i_8])) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned short)42606)))) : (((/* implicit */int) var_5))));
                    var_20 = ((/* implicit */unsigned long long int) (unsigned short)65508);
                    var_21 = ((/* implicit */unsigned short) min((var_21), (((/* implicit */unsigned short) ((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) arr_15 [i_7])) : (((/* implicit */int) arr_22 [11] [11])))) | ((~(arr_17 [i_9]))))))));
                    arr_31 [8ULL] = ((/* implicit */unsigned short) (~(((/* implicit */int) arr_15 [i_8]))));
                }
            } 
        } 
        var_22 = ((/* implicit */unsigned char) ((int) (~(((/* implicit */int) arr_25 [(short)13])))));
    }
    var_23 = ((/* implicit */unsigned short) max((var_23), (((/* implicit */unsigned short) ((max(((~(((/* implicit */int) (unsigned short)65508)))), (var_7))) >= (((/* implicit */int) var_10)))))));
}
