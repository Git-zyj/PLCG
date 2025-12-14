/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 229626
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=229626 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/229626
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
    var_20 |= ((/* implicit */short) var_13);
    var_21 = ((/* implicit */long long int) min((var_21), (((/* implicit */long long int) var_5))));
    var_22 = ((/* implicit */long long int) ((unsigned int) var_17));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        arr_3 [i_0] [i_0] = ((((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_1 [i_0] [i_0]), (arr_1 [i_0] [i_0])))) ? (((-509802302) ^ (((/* implicit */int) (short)-1)))) : (((((/* implicit */int) (short)-26992)) & (((/* implicit */int) (_Bool)1))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) : ((-(arr_1 [i_0] [i_0]))));
        var_23 = ((/* implicit */short) min((var_23), (((/* implicit */short) ((((((/* implicit */int) (short)26964)) % (((/* implicit */int) (unsigned char)38)))) != (((/* implicit */int) arr_2 [i_0])))))));
    }
    for (short i_1 = 4; i_1 < 21; i_1 += 2) 
    {
        arr_8 [i_1 - 1] [i_1 - 1] = ((/* implicit */unsigned long long int) arr_6 [i_1 - 3]);
        var_24 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (+(arr_5 [i_1 - 2])))) ? (min((((/* implicit */int) max(((signed char)-23), (((/* implicit */signed char) arr_4 [i_1 - 3]))))), (((((/* implicit */_Bool) arr_5 [i_1 - 4])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)11350)))))) : ((~(min((((/* implicit */int) arr_6 [i_1])), (865074537)))))));
    }
    var_25 *= ((/* implicit */unsigned int) ((((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) var_17)), (5014440647682264232ULL)))) ? (((/* implicit */int) var_4)) : (var_17))) + ((~(min((((/* implicit */int) (short)32767)), (-865074537)))))));
}
