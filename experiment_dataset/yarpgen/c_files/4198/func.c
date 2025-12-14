/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4198
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4198 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4198
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
    for (short i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 21; i_1 += 1) 
        {
            for (unsigned int i_2 = 1; i_2 < 18; i_2 += 1) 
            {
                {
                    var_14 = ((/* implicit */_Bool) max((var_14), (((/* implicit */_Bool) ((((/* implicit */int) var_2)) + (((((/* implicit */int) (short)-26837)) - (((/* implicit */int) (signed char)80)))))))));
                    /* LoopSeq 2 */
                    for (unsigned long long int i_3 = 0; i_3 < 22; i_3 += 4) 
                    {
                        var_15 &= ((/* implicit */unsigned int) arr_10 [i_0] [(unsigned char)17] [(unsigned char)17] [i_0]);
                        var_16 -= ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (arr_0 [(_Bool)1]) : (871567376U)))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_3] [i_3])) ? (((/* implicit */int) (unsigned short)10097)) : (((/* implicit */int) var_2))))) : (10096203046188491491ULL)))) ? (((/* implicit */int) (!(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_0]))) != (4LL)))))) : (((/* implicit */int) ((((((/* implicit */_Bool) 17529235669174151098ULL)) ? (((/* implicit */int) (signed char)84)) : (((/* implicit */int) (short)17532)))) < (((/* implicit */int) ((unsigned short) 6129526175811551903ULL))))))));
                    }
                    for (int i_4 = 0; i_4 < 22; i_4 += 1) 
                    {
                        var_17 = ((/* implicit */long long int) max((var_17), (((/* implicit */long long int) ((((arr_0 [i_2]) >= (((/* implicit */unsigned int) var_9)))) ? (((5963973054740707035ULL) - (((/* implicit */unsigned long long int) arr_0 [i_0])))) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))))));
                        var_18 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_3 [i_2] [i_4]))) + (((/* implicit */int) arr_6 [i_0] [i_1 - 1] [i_1 + 1] [i_2 + 3]))))) <= (((((/* implicit */long long int) 62914560U)) - (0LL)))));
                        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_2 + 1] [i_2 + 1])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_14 [i_0] [i_1 + 1] [i_2 + 3] [(short)14] [i_1]))) : (arr_0 [i_2])))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_0 [i_1])) ? (var_9) : (((/* implicit */int) var_11))))) >= (arr_0 [i_0])))) : (((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) arr_4 [i_0] [i_2 + 4] [i_4])))))))))));
                        var_20 = ((/* implicit */unsigned char) max((var_20), (((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_12 [i_0] [12U] [i_2 + 4] [i_2 + 4] [i_4])) ? (((((/* implicit */_Bool) 8796093022192ULL)) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65535)))) : (((/* implicit */int) (_Bool)1)))))));
                    }
                }
            } 
        } 
    } 
    var_21 &= ((/* implicit */unsigned long long int) var_10);
}
