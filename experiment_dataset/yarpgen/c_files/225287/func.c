/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 225287
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=225287 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/225287
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
    var_20 |= ((/* implicit */unsigned char) min((((/* implicit */int) var_16)), ((-(((/* implicit */int) max(((short)-9), (((/* implicit */short) var_10)))))))));
    var_21 = ((/* implicit */short) ((((/* implicit */int) var_1)) == (((((/* implicit */_Bool) (unsigned short)13264)) ? (((/* implicit */int) (unsigned short)52272)) : (((/* implicit */int) (signed char)-1))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_22 = ((/* implicit */signed char) ((((/* implicit */_Bool) min(((~(((/* implicit */int) arr_1 [i_0])))), (((/* implicit */int) arr_1 [i_0]))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */int) (signed char)20)) == ((-(((/* implicit */int) arr_1 [(short)2])))))))) : (((((/* implicit */_Bool) (short)13067)) ? (281474976710655ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-2)))))));
        /* LoopSeq 1 */
        /* vectorizable */
        for (unsigned char i_1 = 1; i_1 < 16; i_1 += 3) 
        {
            var_23 = ((/* implicit */_Bool) (+(arr_4 [i_0] [i_1])));
            var_24 = ((/* implicit */unsigned char) ((((/* implicit */int) (unsigned char)0)) >> (((arr_4 [i_0] [i_1 + 2]) - (6704376960442640966ULL)))));
        }
        var_25 = ((/* implicit */signed char) max((var_25), (((/* implicit */signed char) (((+(min((arr_4 [i_0] [i_0]), (((/* implicit */unsigned long long int) var_10)))))) <= (((/* implicit */unsigned long long int) arr_2 [(signed char)8] [i_0])))))));
        arr_6 [(unsigned char)14] = ((/* implicit */_Bool) (short)(-32767 - 1));
        var_26 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) (signed char)-7)) ? (((((/* implicit */_Bool) (signed char)-83)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)226))) : (2625374696U))) : (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)94)))))));
    }
    /* vectorizable */
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        arr_11 [i_2] = ((/* implicit */_Bool) (+(((/* implicit */int) arr_8 [i_2]))));
        arr_12 [i_2] = ((unsigned char) arr_10 [i_2]);
    }
}
