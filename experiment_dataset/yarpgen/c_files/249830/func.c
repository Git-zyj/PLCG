/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249830
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249830 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249830
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
    var_11 = ((/* implicit */long long int) ((min((268369920U), (((/* implicit */unsigned int) (unsigned short)51859)))) - (var_8)));
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-19149)) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0]))) : (1561281161U)))) ? ((-(((/* implicit */int) arr_3 [i_0])))) : (((/* implicit */int) ((signed char) (short)18640)))));
        arr_4 [(unsigned short)5] = ((/* implicit */short) arr_2 [i_0] [i_0]);
        var_13 = ((/* implicit */_Bool) min((var_13), (((/* implicit */_Bool) ((unsigned long long int) ((((/* implicit */_Bool) min((((/* implicit */short) (signed char)47)), ((short)-18641)))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)51915)) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_3 [i_0]))))) : (max((((/* implicit */unsigned int) (signed char)-39)), (var_1)))))))));
    }
    for (short i_1 = 0; i_1 < 20; i_1 += 3) 
    {
        var_14 = ((/* implicit */unsigned int) (-(((/* implicit */int) ((signed char) arr_5 [i_1] [i_1])))));
        var_15 ^= ((((/* implicit */int) ((short) var_3))) ^ (((/* implicit */int) max(((short)-18629), ((short)18640)))));
    }
    var_16 = ((/* implicit */long long int) ((signed char) (((~(1ULL))) >> (((((unsigned int) var_0)) - (89U))))));
}
