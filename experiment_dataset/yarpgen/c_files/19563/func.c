/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19563
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
    var_10 = ((/* implicit */short) 1073737728);
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 4) 
    {
        arr_4 [i_0] = ((/* implicit */unsigned int) var_5);
        var_11 = ((/* implicit */signed char) min((((((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0]))) ^ (var_3))), (((/* implicit */unsigned int) (+(((/* implicit */int) var_8)))))));
        var_12 = ((/* implicit */short) min((var_12), (((/* implicit */short) max((((((/* implicit */int) (signed char)-17)) + (((/* implicit */int) (unsigned char)196)))), ((-(((/* implicit */int) (_Bool)1)))))))));
        arr_5 [i_0] = ((/* implicit */signed char) ((((((/* implicit */_Bool) var_7)) ? (((((/* implicit */int) arr_1 [i_0])) + (((/* implicit */int) var_4)))) : (((/* implicit */int) (short)-30693)))) ^ ((((((+(-1073737725))) + (2147483647))) >> (((((/* implicit */int) var_6)) - (9420)))))));
    }
    for (signed char i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        var_13 += ((/* implicit */short) min((((/* implicit */unsigned int) (~(((/* implicit */int) (short)23340))))), (((var_2) & (((/* implicit */unsigned int) ((/* implicit */int) (short)32650)))))));
        var_14 = ((/* implicit */unsigned long long int) max((((/* implicit */int) max(((short)-1), (((/* implicit */short) (_Bool)1))))), (((((/* implicit */int) (short)-13928)) - (((/* implicit */int) arr_3 [i_1]))))));
        var_15 = ((/* implicit */unsigned int) max((var_15), (((/* implicit */unsigned int) min((((/* implicit */short) (signed char)64)), ((short)-27577))))));
    }
    var_16 = var_5;
}
