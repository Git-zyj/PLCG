/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 212920
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=212920 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/212920
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
    var_13 = ((/* implicit */long long int) max((var_13), (var_4)));
    /* LoopSeq 2 */
    for (short i_0 = 2; i_0 < 16; i_0 += 2) 
    {
        arr_2 [i_0] [8LL] = ((/* implicit */unsigned int) ((unsigned char) min((((int) (_Bool)1)), (((/* implicit */int) ((signed char) (_Bool)1))))));
        var_14 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) 12)))))))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) 1872552885)) : (var_4))) ^ (((/* implicit */long long int) var_6))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) ((((/* implicit */int) var_9)) + (((/* implicit */int) max((((unsigned short) arr_1 [i_0])), (((/* implicit */unsigned short) (_Bool)1)))))));
    }
    /* vectorizable */
    for (signed char i_1 = 2; i_1 < 19; i_1 += 2) 
    {
        var_15 *= ((/* implicit */short) var_1);
        arr_7 [i_1] [i_1 - 2] = ((/* implicit */long long int) (+(((/* implicit */int) arr_4 [i_1 - 1]))));
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (arr_6 [i_1])))) ? (((/* implicit */int) (unsigned short)56604)) : ((-(arr_5 [i_1 - 2])))));
        var_17 = ((/* implicit */long long int) ((90315745) >> (((arr_6 [i_1 - 2]) - (2866535834238793968ULL)))));
        var_18 = ((/* implicit */unsigned int) -7300128453908922414LL);
    }
}
