/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47940
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47940 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47940
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
    var_11 = ((/* implicit */unsigned char) max(((((_Bool)1) ? (((/* implicit */int) (unsigned short)49849)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) (_Bool)1))));
    var_12 = ((/* implicit */short) max((var_12), (((/* implicit */short) (-(((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) (unsigned char)241)) : (((/* implicit */int) (unsigned char)15)))) * (((/* implicit */int) (_Bool)1)))))))));
    var_13 = ((((/* implicit */_Bool) ((int) max((((/* implicit */int) (unsigned char)245)), (-1580269113))))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */int) var_10)))) : ((+(((/* implicit */int) var_10)))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        arr_4 [i_0] = ((max((-1052728031671951440LL), (((/* implicit */long long int) arr_1 [i_0] [i_0])))) | (((/* implicit */long long int) ((/* implicit */int) ((((1026656204U) * (((/* implicit */unsigned int) arr_0 [i_0])))) <= (((/* implicit */unsigned int) ((/* implicit */int) (short)4889))))))));
        var_14 -= ((/* implicit */unsigned int) (unsigned char)152);
        arr_5 [i_0] = ((/* implicit */long long int) max((((/* implicit */unsigned int) ((arr_1 [i_0] [i_0]) || (arr_1 [i_0] [i_0])))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned char)10)) / (-866553756)))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */unsigned short) (_Bool)0)), (var_9))))) : (max((((/* implicit */unsigned int) var_0)), (1505514794U)))))));
        var_15 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) ((arr_3 [i_0] [i_0]) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_3 [i_0] [i_0]))) : (arr_2 [i_0]))))));
    }
    var_16 = var_4;
}
