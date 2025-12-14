/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246966
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246966 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246966
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
    var_12 &= ((/* implicit */unsigned char) max((((((/* implicit */_Bool) ((((/* implicit */int) var_6)) & (((/* implicit */int) (signed char)54))))) ? (((/* implicit */int) var_6)) : (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) (unsigned char)149))) != (6596096429898536984LL)))))), (((/* implicit */int) var_9))));
    var_13 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned char)106)) ? (((/* implicit */int) (unsigned char)146)) : (((/* implicit */int) (unsigned char)124))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 13; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 16; i_1 += 1) 
        {
            {
                var_14 = ((((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 1])) == (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_3 [i_1] [i_0])) ? (((/* implicit */int) arr_4 [(unsigned short)4] [(_Bool)1])) : (((/* implicit */int) arr_1 [i_1] [i_0 - 1]))))) ? ((~(((/* implicit */int) var_2)))) : (((/* implicit */int) (unsigned char)149)))));
                var_15 += ((/* implicit */unsigned long long int) arr_4 [4U] [i_1]);
                var_16 = ((/* implicit */int) max((var_16), ((-(((((((/* implicit */_Bool) arr_4 [i_0] [(unsigned short)5])) ? (((/* implicit */int) (unsigned char)140)) : (((/* implicit */int) (unsigned short)57906)))) >> (((((unsigned long long int) (unsigned char)140)) - (118ULL)))))))));
            }
        } 
    } 
}
