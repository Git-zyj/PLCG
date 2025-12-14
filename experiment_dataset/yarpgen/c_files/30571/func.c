/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30571
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30571 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30571
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
    var_12 = ((/* implicit */unsigned short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (-9223372036854775807LL - 1LL))) ? (var_8) : (var_8)))) ? (var_7) : (((((/* implicit */long long int) ((/* implicit */int) var_4))) ^ (var_7))))) & (max((((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned short)13513))) : (var_10))), (((var_7) ^ (((/* implicit */long long int) ((/* implicit */int) var_0)))))))));
    /* LoopNest 3 */
    for (unsigned long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 2; i_1 < 24; i_1 += 1) 
        {
            for (short i_2 = 1; i_2 < 24; i_2 += 3) 
            {
                {
                    arr_8 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((((/* implicit */_Bool) arr_7 [i_0] [i_0] [i_2] [i_0])) ? (((/* implicit */int) arr_5 [i_0] [i_0] [i_1] [i_2])) : (((/* implicit */int) (unsigned short)13513))))))) ? ((~(arr_4 [i_2] [i_0]))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? ((~(((/* implicit */int) arr_6 [20U] [i_0] [20U])))) : ((~(((/* implicit */int) (unsigned short)52005)))))))));
                    var_13 -= ((/* implicit */unsigned short) min((((/* implicit */int) var_9)), (((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_3)), (var_0)))) ? (((((arr_0 [8]) + (2147483647))) << (((var_11) - (3385938068U))))) : (((/* implicit */int) arr_5 [i_2 + 1] [i_2 + 1] [(unsigned short)10] [i_2]))))));
                }
            } 
        } 
    } 
    var_14 -= ((/* implicit */signed char) ((((/* implicit */_Bool) var_9)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) (short)15360)) : (((/* implicit */int) (unsigned short)13275))))) ? (((int) (short)15360)) : (((/* implicit */int) var_2)))) : (((((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_1)))) << (((((/* implicit */int) max((((/* implicit */short) var_9)), (var_3)))) - (11678)))))));
}
