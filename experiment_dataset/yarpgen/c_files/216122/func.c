/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216122
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216122 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216122
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
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 0; i_0 += 1) 
    {
        var_18 &= ((/* implicit */short) (~(((/* implicit */int) (unsigned short)54640))));
        var_19 += ((/* implicit */int) (!(((/* implicit */_Bool) arr_1 [i_0] [i_0]))));
    }
    for (signed char i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_20 -= (unsigned short)54640;
        arr_4 [i_1] &= ((/* implicit */unsigned short) arr_1 [(unsigned short)0] [(unsigned char)9]);
    }
    /* LoopSeq 1 */
    for (unsigned int i_2 = 0; i_2 < 25; i_2 += 1) 
    {
        var_21 = ((/* implicit */int) max((((/* implicit */long long int) (unsigned short)10895)), (arr_7 [i_2] [i_2])));
        var_22 = ((/* implicit */unsigned long long int) max((var_22), (((/* implicit */unsigned long long int) arr_5 [(unsigned short)3]))));
    }
    var_23 -= ((/* implicit */long long int) (~(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) ((((/* implicit */int) var_12)) != (((/* implicit */int) (unsigned short)10911))))) : ((~(((/* implicit */int) (unsigned char)255))))))));
}
