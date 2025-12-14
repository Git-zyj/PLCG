/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216070
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216070 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216070
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
    var_10 = ((/* implicit */unsigned long long int) max((var_10), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (short)25642)))))));
    var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) (+(((/* implicit */int) (short)25642))))) ? (((((/* implicit */_Bool) (signed char)104)) ? (var_8) : (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 3279403922U)))))))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)68)))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (unsigned long long int i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        var_12 = ((/* implicit */short) (+((+(arr_1 [(unsigned char)17])))));
        var_13 = ((/* implicit */unsigned short) (~(var_3)));
    }
    /* vectorizable */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 2) 
    {
        arr_4 [i_1] [i_1] = ((/* implicit */unsigned int) (~(((/* implicit */int) arr_3 [i_1]))));
        arr_5 [i_1] [i_1] = ((/* implicit */short) (+((+(((/* implicit */int) (signed char)(-127 - 1)))))));
    }
    /* LoopSeq 2 */
    for (unsigned int i_2 = 0; i_2 < 22; i_2 += 1) 
    {
        var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_7 [i_2] [i_2]))))) ? (((/* implicit */int) (!(((/* implicit */_Bool) var_6))))) : (((/* implicit */int) (!(((/* implicit */_Bool) (signed char)40)))))));
        arr_9 [i_2] [i_2] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(var_3)))) ? ((+(4751178213842095781ULL))) : (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_2)))))));
    }
    /* vectorizable */
    for (short i_3 = 0; i_3 < 21; i_3 += 1) 
    {
        var_15 = ((/* implicit */long long int) (((!(((/* implicit */_Bool) arr_1 [i_3])))) ? (var_3) : (((/* implicit */unsigned int) ((/* implicit */int) arr_8 [i_3])))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (unsigned short)17765)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_5))) : ((+(469762048U)))));
    }
    var_17 = ((/* implicit */unsigned long long int) var_1);
}
