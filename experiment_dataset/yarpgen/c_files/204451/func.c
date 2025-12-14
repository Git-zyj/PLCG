/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204451
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204451 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204451
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
    var_15 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) min(((-(var_3))), (((/* implicit */long long int) var_10))))) ? (((var_14) ? (((/* implicit */int) ((unsigned char) (unsigned char)163))) : (var_0))) : (((/* implicit */int) var_4))));
    var_16 = ((/* implicit */int) min((((/* implicit */long long int) ((((/* implicit */int) var_2)) == (var_8)))), (min((((/* implicit */long long int) (!(((/* implicit */_Bool) var_9))))), (((((/* implicit */_Bool) 3400199354U)) ? (((/* implicit */long long int) ((/* implicit */int) (_Bool)1))) : (var_3)))))));
    /* LoopSeq 2 */
    for (int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_3 [(unsigned char)4] = ((/* implicit */short) (+(((/* implicit */int) arr_2 [i_0 - 1]))));
        var_17 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned short) ((signed char) 894767942U))), ((unsigned short)65526)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max((((signed char) arr_0 [i_0])), (((/* implicit */signed char) ((_Bool) arr_2 [(short)9]))))))) : (max((((((/* implicit */_Bool) -115153219)) ? (((/* implicit */unsigned long long int) 894767941U)) : (arr_1 [i_0]))), (((/* implicit */unsigned long long int) ((unsigned char) 894767942U)))))));
        arr_4 [(unsigned char)19] [i_0 - 1] = ((/* implicit */long long int) arr_0 [i_0]);
    }
    for (long long int i_1 = 0; i_1 < 19; i_1 += 1) 
    {
        arr_8 [i_1] = ((/* implicit */int) arr_7 [i_1]);
        arr_9 [i_1] = ((/* implicit */short) min(((((!(((/* implicit */_Bool) (unsigned short)65526)))) ? (((/* implicit */unsigned long long int) ((int) (unsigned char)123))) : (var_9))), (((/* implicit */unsigned long long int) ((unsigned short) arr_2 [i_1])))));
        arr_10 [i_1] = ((/* implicit */short) ((((/* implicit */int) ((((/* implicit */_Bool) var_3)) || (((/* implicit */_Bool) ((short) var_3)))))) & (((/* implicit */int) max((arr_7 [i_1]), (arr_7 [i_1]))))));
        arr_11 [i_1] [(unsigned short)11] |= ((((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))) <= (max((((/* implicit */unsigned int) ((int) arr_0 [i_1]))), (((((/* implicit */_Bool) arr_2 [15])) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_5 [i_1]))) : (var_1))))));
    }
}
