/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 206309
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=206309 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/206309
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
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 22; i_0 += 4) 
    {
        var_20 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) (+(((/* implicit */int) arr_0 [i_0]))))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (arr_1 [(short)0] [(short)0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_12))))))))), (max((((/* implicit */unsigned int) arr_0 [i_0])), (arr_1 [i_0] [i_0])))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)-38)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)-122))) : (-2476800176545219932LL)))) && (((/* implicit */_Bool) (((!(((/* implicit */_Bool) var_1)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((var_6), (var_8))))) : (((unsigned long long int) arr_1 [(short)4] [i_0])))))));
        var_21 = (((!(((/* implicit */_Bool) var_9)))) ? (((/* implicit */unsigned int) min(((~(((/* implicit */int) var_15)))), (((/* implicit */int) (_Bool)1))))) : (max((((/* implicit */unsigned int) ((((((/* implicit */int) arr_0 [i_0])) + (2147483647))) << (((((((/* implicit */int) arr_0 [i_0])) + (102))) - (16)))))), (max((((/* implicit */unsigned int) (unsigned short)43781)), (arr_1 [i_0] [i_0]))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 4; i_1 < 19; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */_Bool) min((var_22), (((/* implicit */_Bool) var_3))));
                    /* LoopNest 2 */
                    for (signed char i_3 = 0; i_3 < 22; i_3 += 3) 
                    {
                        for (int i_4 = 0; i_4 < 22; i_4 += 3) 
                        {
                            {
                                var_23 = ((/* implicit */int) ((unsigned int) min((min(((unsigned short)849), (((/* implicit */unsigned short) var_15)))), (((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) arr_3 [i_1]))) > (arr_11 [7ULL] [i_1] [i_1] [7ULL] [i_4])))))));
                                var_24 = ((/* implicit */unsigned short) arr_11 [i_0] [i_1 - 3] [1] [1] [i_4]);
                                var_25 = ((/* implicit */unsigned char) arr_6 [i_1 + 3] [i_1 + 3]);
                            }
                        } 
                    } 
                }
            } 
        } 
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) 
    {
        arr_20 [i_5] = ((/* implicit */_Bool) ((short) (+(((/* implicit */int) arr_16 [i_5] [6LL] [i_5] [12U] [i_5] [i_5])))));
        var_26 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((var_4), (arr_18 [i_5])))) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_5]))) : (min((arr_11 [i_5] [i_5] [i_5] [i_5] [i_5]), (arr_11 [i_5] [i_5] [i_5] [i_5] [i_5])))))) ? (((((/* implicit */long long int) ((/* implicit */int) var_10))) ^ (var_4))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_5] [i_5] [i_5])) ? (arr_5 [i_5] [i_5] [i_5]) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_19 [i_5])))))) ? (var_19) : (((/* implicit */long long int) ((/* implicit */int) min((arr_4 [i_5] [i_5]), (((/* implicit */signed char) var_8))))))))));
    }
    var_27 = ((/* implicit */_Bool) ((short) ((((/* implicit */_Bool) (-(((/* implicit */int) var_13))))) || (((/* implicit */_Bool) ((var_5) ? (((/* implicit */long long int) ((/* implicit */int) var_5))) : (var_19)))))));
    var_28 = ((/* implicit */unsigned char) max((((/* implicit */long long int) max((var_15), (((var_19) >= (var_19)))))), (((long long int) min((((/* implicit */unsigned short) var_6)), (var_3))))));
}
