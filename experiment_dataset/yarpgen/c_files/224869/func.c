/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224869
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
    var_16 = ((/* implicit */_Bool) min((((/* implicit */unsigned int) (unsigned char)184)), (((((/* implicit */_Bool) min((var_13), (((/* implicit */unsigned char) (_Bool)1))))) ? (((/* implicit */unsigned int) (((_Bool)1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_13))))) : (((unsigned int) var_14))))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        var_17 = ((min((((((/* implicit */_Bool) arr_1 [i_0])) && (((/* implicit */_Bool) arr_1 [i_0])))), ((!(((/* implicit */_Bool) arr_0 [i_0])))))) ? (((/* implicit */unsigned int) min(((-(arr_0 [i_0]))), (((((/* implicit */_Bool) (unsigned char)254)) ? (((/* implicit */int) (unsigned short)55602)) : (((/* implicit */int) var_15))))))) : (arr_1 [i_0]));
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) ((long long int) (_Bool)1));
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) /* same iter space */
    {
        /* LoopNest 3 */
        for (int i_2 = 0; i_2 < 19; i_2 += 4) 
        {
            for (long long int i_3 = 0; i_3 < 19; i_3 += 4) 
            {
                for (int i_4 = 0; i_4 < 19; i_4 += 3) 
                {
                    {
                        var_18 = ((/* implicit */signed char) min((((/* implicit */unsigned int) (-(((/* implicit */int) var_15))))), (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)37081))) & (907083536U)))));
                        var_19 = ((/* implicit */int) min((var_19), (((/* implicit */int) ((unsigned int) ((((/* implicit */_Bool) ((var_10) / (((/* implicit */int) arr_12 [i_4] [i_3] [0U] [i_1]))))) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_1] [i_1]))) : (min((4294967294U), (((/* implicit */unsigned int) var_15))))))))));
                        arr_15 [i_4] [i_4] [i_4] [i_1] = ((/* implicit */int) min((arr_13 [i_1] [i_2] [i_3] [9U]), (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_11 [i_1] [i_1] [i_1])) ? (((/* implicit */int) arr_11 [i_1] [i_1] [i_1])) : (var_10))), (((/* implicit */int) arr_3 [i_1])))))));
                    }
                } 
            } 
        } 
        var_20 = ((/* implicit */short) ((((/* implicit */int) (signed char)-76)) == (((/* implicit */int) (signed char)127))));
    }
    for (_Bool i_5 = 0; i_5 < 1; i_5 += 1) /* same iter space */
    {
        arr_18 [i_5] [i_5] = ((/* implicit */short) ((((/* implicit */_Bool) min((-1426290319), ((-(((/* implicit */int) arr_14 [(unsigned char)14]))))))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) 4294967294U)) ? (var_12) : (((/* implicit */unsigned int) ((/* implicit */int) arr_12 [i_5] [i_5] [i_5] [i_5])))))))))) : (((((/* implicit */_Bool) ((short) arr_4 [i_5] [i_5]))) ? (((/* implicit */unsigned int) var_10)) : ((~(arr_4 [i_5] [i_5])))))));
        arr_19 [i_5] = ((/* implicit */unsigned int) (+((~(((/* implicit */int) (_Bool)1))))));
    }
    var_21 += ((/* implicit */signed char) ((((/* implicit */_Bool) -3442054392785651821LL)) ? (((/* implicit */int) (signed char)4)) : (((/* implicit */int) (unsigned char)161))));
    var_22 = ((/* implicit */long long int) (+(((/* implicit */int) ((unsigned short) var_3)))));
}
