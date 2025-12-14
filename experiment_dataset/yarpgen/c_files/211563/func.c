/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 211563
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=211563 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/211563
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
    var_10 = ((/* implicit */long long int) var_3);
    /* LoopSeq 2 */
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (~((-(((/* implicit */int) var_9))))))) ? (((/* implicit */int) max(((short)-32761), (((/* implicit */short) (signed char)100))))) : ((~(((/* implicit */int) (short)-32761))))));
        var_12 = ((/* implicit */signed char) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
        var_13 = ((/* implicit */signed char) (short)-32742);
    }
    for (long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        var_14 = ((/* implicit */short) min((var_14), (((/* implicit */short) (+(min((((/* implicit */long long int) 0U)), (max((var_8), (((/* implicit */long long int) var_9)))))))))));
        var_15 = ((/* implicit */long long int) (+(-1433580556)));
        arr_4 [i_1] [(unsigned char)8] = ((/* implicit */unsigned int) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) -1433580539))))), (((unsigned char) ((((/* implicit */_Bool) arr_2 [6])) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (signed char)-2)))))));
        var_16 = ((/* implicit */signed char) max((var_16), (((/* implicit */signed char) min(((+(((/* implicit */int) arr_2 [i_1])))), (((/* implicit */int) ((unsigned char) min(((unsigned char)193), (((/* implicit */unsigned char) var_9)))))))))));
    }
    var_17 = ((/* implicit */short) ((((/* implicit */_Bool) (unsigned char)68)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_4))) : (var_6)));
}
