/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212575
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212575 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212575
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
    for (int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            for (signed char i_2 = 0; i_2 < 25; i_2 += 1) 
            {
                {
                    /* LoopSeq 3 */
                    for (signed char i_3 = 0; i_3 < 25; i_3 += 2) 
                    {
                        arr_12 [i_0] [i_0] [i_1] [17ULL] [(unsigned short)13] [i_3] = min((12292163952339273215ULL), (((/* implicit */unsigned long long int) arr_1 [i_0])));
                        var_20 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((_Bool) var_18)))));
                        arr_13 [i_0] [i_1] [i_2] [i_3] [i_3] [i_2] = ((/* implicit */unsigned long long int) min((((/* implicit */int) arr_4 [i_0] [i_0])), (((((/* implicit */int) min((((/* implicit */unsigned short) var_11)), ((unsigned short)905)))) - (arr_1 [i_0])))));
                    }
                    for (short i_4 = 0; i_4 < 25; i_4 += 3) 
                    {
                        arr_16 [20ULL] &= ((/* implicit */int) ((((/* implicit */_Bool) ((unsigned short) var_19))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_9 [(_Bool)1] [i_4]), (((/* implicit */signed char) arr_6 [i_0] [i_2] [(unsigned short)19])))))) : (((var_1) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)904))) : (arr_7 [(unsigned short)1] [i_4])))));
                        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) (+(((var_0) ? (var_8) : (((/* implicit */int) (short)-23543)))))))));
                    }
                    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
                    {
                        arr_19 [i_1] [i_1] [12ULL] [i_1] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_11 [i_0] [i_0] [i_0])) ? (12237944497315267278ULL) : (((/* implicit */unsigned long long int) ((long long int) arr_5 [i_0] [i_1] [i_2])))));
                        var_22 = ((/* implicit */unsigned char) ((((/* implicit */int) ((unsigned char) max((((/* implicit */unsigned long long int) arr_8 [i_0] [i_1] [6ULL])), (var_17))))) << (((min((((/* implicit */int) var_13)), (var_7))) + (570612277)))));
                    }
                    arr_20 [i_1] [i_1] [(_Bool)1] = ((/* implicit */_Bool) max((min((((/* implicit */unsigned int) arr_5 [i_0] [i_0] [(unsigned short)10])), (3543656668U))), (((/* implicit */unsigned int) min((var_2), (((/* implicit */int) ((signed char) var_15))))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */long long int) min((((((/* implicit */_Bool) ((unsigned int) var_18))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_19))) : (var_17))), (((/* implicit */unsigned long long int) var_19))));
    var_24 = ((/* implicit */_Bool) var_6);
    var_25 = ((/* implicit */long long int) ((var_5) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))));
}
