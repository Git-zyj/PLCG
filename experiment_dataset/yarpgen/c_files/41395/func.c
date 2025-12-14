/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 41395
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=41395 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/41395
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
    var_19 = ((/* implicit */unsigned int) var_3);
    var_20 &= ((/* implicit */long long int) max((((var_2) ? (var_10) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_17)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_1))))))), (((/* implicit */unsigned int) var_8))));
    var_21 = ((/* implicit */unsigned int) min((var_21), (((/* implicit */unsigned int) var_18))));
    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) min((((unsigned char) (~(4294967291U)))), (((/* implicit */unsigned char) var_3)))))));
    /* LoopSeq 3 */
    /* vectorizable */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) (~(var_4)));
        arr_5 [(_Bool)1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [(unsigned char)16])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)7))) : (13586031875008261503ULL)));
    }
    for (unsigned int i_1 = 1; i_1 < 21; i_1 += 4) 
    {
        /* LoopNest 2 */
        for (unsigned int i_2 = 0; i_2 < 23; i_2 += 3) 
        {
            for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
            {
                {
                    arr_14 [i_1] [i_1] = ((/* implicit */_Bool) ((((/* implicit */int) (!(((/* implicit */_Bool) var_4))))) + ((+(((/* implicit */int) var_0))))));
                    /* LoopNest 2 */
                    for (unsigned char i_4 = 1; i_4 < 22; i_4 += 3) 
                    {
                        for (signed char i_5 = 0; i_5 < 23; i_5 += 1) 
                        {
                            {
                                var_23 = ((/* implicit */long long int) ((((/* implicit */_Bool) max((var_8), (((/* implicit */unsigned char) (signed char)-71))))) ? (((/* implicit */unsigned long long int) (~(((/* implicit */int) var_14))))) : (((((/* implicit */_Bool) arr_10 [(_Bool)1] [i_1])) ? (4860712198701290112ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-7)))))));
                                arr_21 [i_5] [i_4] [i_1] [i_2] [i_1] [i_1 + 2] [(unsigned char)17] = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_16 [i_1 - 1] [i_2] [i_1] [i_4 - 1]))))) ? ((~(((/* implicit */int) arr_12 [i_1] [i_3] [i_5])))) : ((+(((/* implicit */int) arr_16 [i_1] [i_2] [i_1] [i_5]))))));
                            }
                        } 
                    } 
                    /* LoopNest 2 */
                    for (long long int i_6 = 2; i_6 < 22; i_6 += 1) 
                    {
                        for (signed char i_7 = 0; i_7 < 23; i_7 += 1) 
                        {
                            {
                                arr_28 [i_1 + 2] [i_1] [i_1] [i_1] [i_1] = ((/* implicit */unsigned long long int) max((((/* implicit */unsigned char) ((((/* implicit */int) arr_16 [i_1 - 1] [i_3] [i_1] [i_7])) < (((/* implicit */int) var_8))))), (min((arr_16 [(unsigned char)1] [i_1] [i_1] [i_2]), (arr_16 [i_1 + 1] [i_2] [i_1] [i_7])))));
                                var_24 = ((/* implicit */signed char) min((var_24), (((/* implicit */signed char) ((long long int) (-(var_12)))))));
                            }
                        } 
                    } 
                    var_25 = (-(min((((/* implicit */unsigned int) arr_12 [i_1] [i_1 + 1] [i_1 + 1])), (1936338193U))));
                }
            } 
        } 
        var_26 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(arr_17 [i_1 - 1])))) ? ((-(((((/* implicit */_Bool) var_17)) ? (9092919893788735103ULL) : (((/* implicit */unsigned long long int) arr_26 [i_1 + 2] [i_1 + 2] [i_1 + 1] [i_1 + 1] [i_1])))))) : (((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((/* implicit */_Bool) arr_26 [i_1] [i_1 + 2] [i_1 + 2] [i_1 - 1] [18U])) ? (arr_8 [i_1 + 2] [i_1]) : (((/* implicit */unsigned int) ((/* implicit */int) var_0)))))), (var_15))))));
    }
    /* vectorizable */
    for (unsigned int i_8 = 0; i_8 < 11; i_8 += 4) 
    {
        arr_33 [i_8] = ((unsigned int) var_5);
        arr_34 [i_8] = ((/* implicit */long long int) (!(((/* implicit */_Bool) arr_8 [i_8] [i_8]))));
    }
}
