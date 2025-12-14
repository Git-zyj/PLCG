/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 210656
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=210656 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/210656
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
    var_16 = ((((/* implicit */_Bool) var_12)) ? (var_1) : (((/* implicit */unsigned int) ((/* implicit */int) (short)19997))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 19; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned long long int) ((min((max((-4710651315559873089LL), (((/* implicit */long long int) (short)384)))), (((/* implicit */long long int) (short)20001)))) <= (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */int) (_Bool)1)) == (((/* implicit */int) arr_1 [i_0]))))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) arr_0 [i_0]);
        arr_4 [i_0] = ((/* implicit */short) max(((~(((/* implicit */int) (short)-20000)))), (((/* implicit */int) (unsigned short)0))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) min((var_9), (((/* implicit */unsigned long long int) var_14))))) ? (((var_8) | (((var_9) - (49152ULL))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) min((2277238704396716859LL), (((/* implicit */long long int) (short)19997))))) >= (min((((/* implicit */unsigned long long int) 1879048192U)), (16038346226004586677ULL)))))))));
    var_18 -= ((/* implicit */signed char) ((unsigned short) var_1));
    var_19 -= ((/* implicit */int) ((((/* implicit */_Bool) (short)32761)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)191))) : ((~(min((((/* implicit */unsigned long long int) var_2)), (16038346226004586692ULL)))))));
}
