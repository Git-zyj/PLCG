/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 25348
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=25348 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/25348
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
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) || (((/* implicit */_Bool) max((((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)-58))))), (((((/* implicit */_Bool) 7719580576190939380ULL)) ? (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)0))) : (var_9))))))));
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_16 -= ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */_Bool) 10727163497518612236ULL)) && (((/* implicit */_Bool) 3985426540523455188ULL))))), (((long long int) (((_Bool)1) ? (((/* implicit */int) var_0)) : (((/* implicit */int) (unsigned short)36646)))))));
        /* LoopSeq 1 */
        for (unsigned short i_1 = 2; i_1 < 13; i_1 += 4) 
        {
            arr_5 [(unsigned short)6] = ((/* implicit */signed char) ((max((((/* implicit */unsigned int) var_6)), (max((((/* implicit */unsigned int) var_5)), (var_10))))) * (((/* implicit */unsigned int) ((((/* implicit */_Bool) max((arr_0 [i_1] [i_0]), (((/* implicit */int) (_Bool)1))))) ? (((var_5) ? (((/* implicit */int) arr_3 [i_0])) : (((/* implicit */int) (unsigned short)28889)))) : (arr_0 [i_0] [i_0]))))));
            var_17 = ((/* implicit */unsigned short) var_13);
            var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) (+(arr_0 [i_1 - 2] [i_0])))) ? (((arr_1 [i_0] [i_1]) ? (var_13) : (((/* implicit */long long int) ((/* implicit */int) var_1))))) : (((/* implicit */long long int) ((((/* implicit */int) (signed char)64)) / (arr_4 [i_1] [i_0] [i_0]))))))));
            arr_6 [i_0] [i_1 + 1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_4 [i_1] [(unsigned char)5] [i_0])) ? (((/* implicit */int) (unsigned short)36671)) : (((/* implicit */int) (signed char)120))))) ? (((((/* implicit */_Bool) -929605968)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_11))) : (var_10))) : (((((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)158))) * (var_10)))))) ? (((/* implicit */unsigned int) ((/* implicit */int) ((short) (_Bool)1)))) : ((+(arr_2 [(unsigned short)2] [(unsigned short)2])))));
            arr_7 [i_1] [i_1] [i_0] |= ((/* implicit */unsigned short) ((((((var_12) || (((/* implicit */_Bool) var_14)))) || ((!(((/* implicit */_Bool) arr_4 [i_0] [5LL] [i_0])))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(short)8] [i_1 - 1]))) : (min((((/* implicit */unsigned long long int) (((_Bool)1) && (((/* implicit */_Bool) arr_2 [i_1 - 2] [i_0]))))), (10727163497518612236ULL)))));
        }
    }
}
