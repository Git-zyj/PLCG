/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 5377
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=5377 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/5377
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
    var_18 = ((/* implicit */int) var_16);
    /* LoopSeq 1 */
    for (int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_19 &= ((/* implicit */short) (~(((/* implicit */int) var_12))));
        arr_3 [i_0] &= ((/* implicit */signed char) var_8);
        var_20 = ((/* implicit */int) max((arr_0 [i_0]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_2 [i_0]))))))))));
        /* LoopSeq 2 */
        for (short i_1 = 2; i_1 < 8; i_1 += 4) 
        {
            var_21 = ((/* implicit */unsigned long long int) min((var_21), (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)98)))))));
            var_22 = max((((((/* implicit */_Bool) (signed char)98)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)65535))) : (268435455U))), (((/* implicit */unsigned int) (~(((/* implicit */int) min(((short)-1), (((/* implicit */short) arr_1 [(unsigned char)0] [i_1])))))))));
        }
        for (unsigned int i_2 = 3; i_2 < 9; i_2 += 4) 
        {
            var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) arr_4 [i_0] [i_0] [i_2]))));
            arr_9 [i_2] = ((/* implicit */short) arr_5 [i_0] [i_2]);
            var_24 ^= ((/* implicit */_Bool) (-((-(((/* implicit */int) (signed char)98))))));
        }
        arr_10 [i_0] [i_0] = ((/* implicit */unsigned long long int) ((signed char) (!(((/* implicit */_Bool) max((((/* implicit */unsigned long long int) arr_2 [i_0])), (arr_0 [i_0])))))));
    }
    var_25 ^= ((unsigned short) (~(((/* implicit */int) var_12))));
    var_26 = ((/* implicit */unsigned int) var_4);
}
