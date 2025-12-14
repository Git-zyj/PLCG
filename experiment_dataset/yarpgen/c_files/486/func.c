/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 486
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=486 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/486
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 14; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) (unsigned char)127)) ? (((/* implicit */int) arr_2 [i_1])) : (((/* implicit */int) arr_2 [i_0])))) > (((/* implicit */int) arr_2 [i_0]))));
                var_18 = ((/* implicit */unsigned char) min((var_18), (((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) 976412934154905772ULL)) ? (1692305709) : (1126364061)))))));
                var_19 = ((/* implicit */int) ((((((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)166))) : (var_6))) >> (((5999608495463146982ULL) - (5999608495463146973ULL))))) != (((4820780456632393938ULL) << (((((/* implicit */int) (unsigned char)203)) - (158)))))));
                var_20 = ((/* implicit */unsigned char) arr_4 [i_0] [i_1]);
            }
        } 
    } 
    var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((unsigned int) ((((/* implicit */_Bool) (short)23546)) ? (((/* implicit */unsigned long long int) -1692305710)) : (var_6))))) ? (((((((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) + (var_6))) + (((unsigned long long int) (unsigned char)100)))) : (((((/* implicit */_Bool) 1692305713)) ? (var_12) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)234)))))));
}
