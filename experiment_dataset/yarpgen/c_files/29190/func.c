/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29190
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29190 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29190
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
    var_20 = var_19;
    var_21 = ((/* implicit */_Bool) (short)-30464);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 18; i_0 += 4) 
    {
        arr_3 [i_0] [i_0] = ((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_2 [i_0])))) | (((/* implicit */int) arr_0 [i_0])));
        arr_4 [i_0] = ((/* implicit */long long int) ((unsigned int) ((((/* implicit */_Bool) 416670583307976733LL)) ? (5954398388765671404LL) : (-416670583307976734LL))));
        var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((min((((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */long long int) ((/* implicit */int) var_2))) : (416670583307976734LL))), (((/* implicit */long long int) (short)-23732)))) > (((/* implicit */long long int) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) var_14)) : (((((/* implicit */_Bool) -416670583307976734LL)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)4))))))))))));
        arr_5 [i_0] = ((/* implicit */_Bool) arr_0 [i_0]);
        var_23 = ((/* implicit */int) max((var_23), (((/* implicit */int) ((((((((/* implicit */_Bool) (unsigned char)210)) ? (-416670583307976746LL) : (var_4))) <= (arr_1 [i_0]))) ? (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) : (2775718438U))) * (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0]))))) : (((/* implicit */unsigned int) min((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned char)12)))), (((/* implicit */int) min((var_19), (((/* implicit */unsigned char) arr_0 [i_0])))))))))))));
    }
    var_24 = (!(((((/* implicit */int) max((((/* implicit */short) (_Bool)1)), (var_14)))) > (((/* implicit */int) ((signed char) var_5))))));
    var_25 ^= ((/* implicit */unsigned char) ((var_9) ^ (((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)12)) ? (((/* implicit */int) (unsigned char)247)) : (((/* implicit */int) (unsigned char)197)))))));
}
