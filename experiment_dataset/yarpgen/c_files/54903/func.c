/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 54903
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=54903 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/54903
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
    /* LoopSeq 3 */
    for (short i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        arr_2 [(short)10] = ((/* implicit */signed char) (!(max((arr_0 [i_0]), (arr_0 [i_0])))));
        arr_3 [(_Bool)1] = ((/* implicit */unsigned short) (((~(var_15))) != (((var_12) + (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 21; i_1 += 2) 
    {
        var_16 = ((/* implicit */unsigned int) min((var_16), (((/* implicit */unsigned int) min((((((((/* implicit */int) arr_6 [i_1] [i_1])) - (arr_4 [1]))) & (((/* implicit */int) arr_6 [i_1] [i_1])))), (((/* implicit */int) var_3)))))));
        var_17 = ((/* implicit */unsigned char) min((var_17), (((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) (short)7604)) << (((/* implicit */int) (unsigned short)0))))))))));
    }
    for (unsigned long long int i_2 = 0; i_2 < 20; i_2 += 4) 
    {
        var_18 = ((/* implicit */unsigned char) min((((arr_0 [i_2]) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) arr_7 [i_2])))), (((/* implicit */int) min((((short) var_12)), (var_5))))));
        arr_10 [i_2] = ((/* implicit */int) var_14);
    }
    var_19 ^= ((/* implicit */_Bool) max(((+(((/* implicit */int) var_8)))), ((~(((0) | (((/* implicit */int) var_14))))))));
    var_20 = ((_Bool) (+(var_6)));
    var_21 ^= ((/* implicit */long long int) (~(((/* implicit */int) min((var_8), (min((((/* implicit */short) var_10)), (var_5))))))));
}
