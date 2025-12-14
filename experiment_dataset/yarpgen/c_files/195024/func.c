/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 195024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=195024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/195024
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
    var_19 = ((/* implicit */int) (_Bool)1);
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((signed char) ((((/* implicit */_Bool) var_12)) ? (-8677081534838658285LL) : (((/* implicit */long long int) ((/* implicit */int) var_1))))))) ? (((/* implicit */unsigned int) (-(((/* implicit */int) (!(((/* implicit */_Bool) var_16)))))))) : (max((var_12), (((/* implicit */unsigned int) var_14))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned char i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_3 [(unsigned short)5] [i_0] &= ((/* implicit */unsigned int) var_1);
        var_21 = ((/* implicit */unsigned char) arr_1 [i_0]);
        var_22 = ((/* implicit */unsigned long long int) min((var_22), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned short)15)) : (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) arr_1 [i_0])) ^ (((/* implicit */int) (unsigned char)38))))) : (var_7))))));
        var_23 = ((/* implicit */unsigned short) (((!((_Bool)1))) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)1))));
        var_24 = ((/* implicit */signed char) ((((/* implicit */_Bool) (unsigned short)5150)) ? (var_15) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0])))));
    }
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_1 = 0; i_1 < 11; i_1 += 1) 
    {
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */int) (unsigned short)42)) : (((/* implicit */int) (_Bool)1))))) ? (((((/* implicit */_Bool) arr_4 [2ULL])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) var_1)))) : ((-(((/* implicit */int) var_13))))));
        var_25 = ((/* implicit */long long int) arr_2 [i_1]);
        var_26 = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) arr_2 [i_1]))));
        var_27 = ((/* implicit */unsigned long long int) var_8);
        arr_7 [i_1] = ((/* implicit */unsigned long long int) var_1);
    }
    for (int i_2 = 0; i_2 < 14; i_2 += 4) 
    {
        /* LoopNest 2 */
        for (_Bool i_3 = 0; i_3 < 1; i_3 += 1) 
        {
            for (unsigned short i_4 = 0; i_4 < 14; i_4 += 2) 
            {
                {
                    arr_19 [i_2] [(_Bool)1] [i_3] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_15 [i_2])) ? (((/* implicit */unsigned int) ((/* implicit */int) max((((/* implicit */unsigned short) arr_18 [i_2] [i_2] [i_2] [i_2])), ((unsigned short)65527))))) : (((((/* implicit */unsigned int) arr_13 [i_4] [(unsigned char)7] [i_2])) ^ (arr_15 [i_4])))))) ? ((-(arr_15 [i_2]))) : (((/* implicit */unsigned int) (-(((/* implicit */int) arr_18 [i_2] [i_3] [i_4] [i_4])))))));
                    var_28 = ((((var_9) >= (((/* implicit */unsigned int) arr_17 [i_2] [i_3] [i_4])))) ? (((/* implicit */int) arr_10 [i_2])) : (((((/* implicit */_Bool) arr_13 [i_2] [i_3] [i_4])) ? (arr_17 [i_2] [i_3] [(unsigned short)12]) : (arr_13 [i_2] [i_3] [i_4]))));
                }
            } 
        } 
        var_29 = ((/* implicit */unsigned short) min((var_29), (((/* implicit */unsigned short) (+(((/* implicit */int) (unsigned short)127)))))));
    }
}
