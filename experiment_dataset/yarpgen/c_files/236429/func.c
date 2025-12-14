/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236429
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236429 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236429
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
    var_15 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_7))));
    var_16 -= ((/* implicit */unsigned short) var_5);
    /* LoopSeq 2 */
    for (unsigned int i_0 = 2; i_0 < 10; i_0 += 2) 
    {
        var_17 = ((/* implicit */signed char) ((((((/* implicit */unsigned long long int) ((/* implicit */int) var_6))) & (((((/* implicit */unsigned long long int) 2668276110628444317LL)) & (11945267340778397019ULL))))) >= (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_12))) : (var_14))))));
        arr_3 [i_0] [i_0 - 1] = ((/* implicit */int) ((unsigned short) max((arr_2 [i_0 + 1] [i_0 + 1]), (((/* implicit */unsigned long long int) arr_1 [i_0 - 1])))));
        var_18 = ((/* implicit */int) min((((((arr_2 [i_0] [i_0]) & (arr_2 [i_0] [i_0 + 1]))) - (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))))), (((/* implicit */unsigned long long int) (~(((var_11) & (((/* implicit */long long int) var_8)))))))));
    }
    for (signed char i_1 = 0; i_1 < 17; i_1 += 2) 
    {
        var_19 = min((((arr_5 [i_1]) % (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) ^ (((/* implicit */int) var_12))))))), (((((/* implicit */_Bool) arr_4 [i_1])) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) - (((/* implicit */int) (unsigned short)23573))))))));
        /* LoopNest 2 */
        for (unsigned int i_2 = 2; i_2 < 13; i_2 += 4) 
        {
            for (int i_3 = 0; i_3 < 17; i_3 += 4) 
            {
                {
                    var_20 += ((/* implicit */unsigned short) min((min((((/* implicit */unsigned long long int) (+(((/* implicit */int) (_Bool)1))))), (((unsigned long long int) 1455314676437244124ULL)))), (arr_5 [i_2 + 3])));
                    var_21 = ((/* implicit */unsigned short) max((((/* implicit */unsigned int) ((signed char) arr_9 [i_2 + 3] [i_2 - 1] [i_2 + 1] [i_3]))), (max((arr_9 [i_2 - 2] [i_2 + 4] [i_2 + 4] [i_3]), (580226905U)))));
                    var_22 = ((/* implicit */unsigned int) min((((/* implicit */long long int) min((((/* implicit */int) min((((/* implicit */short) var_12)), (var_4)))), (-946970966)))), (min((((/* implicit */long long int) (+(((/* implicit */int) arr_7 [i_1] [i_1] [i_1]))))), (((((/* implicit */_Bool) 2668276110628444317LL)) ? (-2668276110628444318LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_1] [i_3])))))))));
                    var_23 = ((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2 + 2])) ? (arr_5 [i_2 - 2]) : (arr_5 [i_2 + 3])))) ? (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (arr_5 [i_2 + 2]))) : (((/* implicit */unsigned long long int) min((((((/* implicit */_Bool) var_11)) ? (-2668276110628444299LL) : (((/* implicit */long long int) ((/* implicit */int) arr_6 [i_2] [i_2]))))), (((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1]))))))))));
                }
            } 
        } 
        var_24 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) min((arr_9 [i_1] [i_1] [i_1] [i_1]), (((/* implicit */unsigned int) (_Bool)1))))) ? (arr_5 [i_1]) : (((/* implicit */unsigned long long int) ((int) var_6)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : ((+(arr_9 [i_1] [i_1] [i_1] [i_1])))));
    }
    var_25 = ((/* implicit */unsigned char) (unsigned short)32956);
}
