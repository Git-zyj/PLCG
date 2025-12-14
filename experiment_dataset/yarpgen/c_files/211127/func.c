/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211127
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211127 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211127
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
    for (signed char i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */signed char) (+(((((((/* implicit */_Bool) (signed char)10)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) (signed char)-9)))) & ((-(((/* implicit */int) (signed char)58))))))));
        /* LoopNest 3 */
        for (unsigned int i_1 = 0; i_1 < 15; i_1 += 3) 
        {
            for (signed char i_2 = 1; i_2 < 11; i_2 += 3) 
            {
                for (unsigned short i_3 = 0; i_3 < 15; i_3 += 3) 
                {
                    {
                        /* LoopSeq 1 */
                        for (_Bool i_4 = 0; i_4 < 1; i_4 += 1) 
                        {
                            arr_15 [i_1] [i_3] [(unsigned char)6] = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) (signed char)6)), (var_2)));
                            arr_16 [i_2] [i_1] [i_2] [i_3] [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((long long int) (_Bool)0)))));
                            arr_17 [i_0] [i_1] [i_2] [i_0] [i_4] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((min((((/* implicit */unsigned long long int) arr_10 [i_0] [i_0] [i_0] [i_0] [i_0] [i_0])), (var_6))) & (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)65535)))))) ? (((long long int) arr_11 [i_0] [i_2] [i_2] [i_0 - 1] [i_0])) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_8 [i_0] [i_1] [i_2] [i_3])) ? (((/* implicit */int) arr_2 [i_0])) : (((arr_4 [i_0] [i_1] [i_0]) ? (((/* implicit */int) var_14)) : (((/* implicit */int) arr_9 [i_0] [i_1])))))))));
                        }
                        arr_18 [i_0] [i_1] [i_2] [6ULL] &= ((/* implicit */_Bool) (+(((unsigned int) ((arr_0 [i_2] [i_0]) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) var_14)))))));
                        arr_19 [i_0] [i_1] [8ULL] [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) arr_7 [i_3])) ? ((-(arr_11 [i_0] [i_0] [i_1] [i_2] [(unsigned short)14]))) : (((/* implicit */long long int) ((/* implicit */int) arr_4 [12] [i_1] [i_2])))));
                        arr_20 [i_0] [i_0] [0ULL] [i_0] [i_0] &= ((/* implicit */unsigned char) ((var_15) >> (((/* implicit */int) min((((((/* implicit */int) var_13)) <= (((/* implicit */int) arr_0 [i_3] [i_1])))), (var_0))))));
                    }
                } 
            } 
        } 
        arr_21 [i_0] = ((/* implicit */unsigned char) (+(((/* implicit */int) (unsigned short)62834))));
    }
    for (unsigned int i_5 = 2; i_5 < 17; i_5 += 3) 
    {
        arr_24 [i_5] = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_22 [i_5])))))) >= (min((((((/* implicit */_Bool) arr_23 [i_5] [i_5])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)58))) : (arr_23 [i_5] [i_5]))), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 2348077382U)))))))));
        arr_25 [i_5] [i_5] = ((/* implicit */unsigned char) min((((/* implicit */unsigned long long int) var_0)), (arr_23 [i_5] [i_5])));
        arr_26 [i_5] = ((/* implicit */_Bool) ((((/* implicit */_Bool) (-(((/* implicit */int) (signed char)10))))) ? (min((var_16), (((/* implicit */long long int) var_1)))) : (((/* implicit */long long int) (-(((/* implicit */int) arr_22 [i_5 + 1])))))));
    }
    var_17 = min((((((/* implicit */_Bool) 4398042316800ULL)) ? (-6971749960664559696LL) : (((/* implicit */long long int) ((/* implicit */int) (signed char)48))))), (((/* implicit */long long int) ((unsigned char) (signed char)-46))));
}
