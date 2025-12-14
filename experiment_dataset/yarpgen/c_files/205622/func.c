/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205622
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205622 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205622
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
    var_13 = ((/* implicit */unsigned short) var_3);
    var_14 = ((/* implicit */unsigned long long int) (+(897326659)));
    var_15 = ((/* implicit */long long int) max((var_15), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_10)) : (var_11)))) ? ((-(((/* implicit */int) var_5)))) : (var_11)))) ? (max((((/* implicit */int) ((4134953116475760451ULL) != (((/* implicit */unsigned long long int) ((/* implicit */int) (short)32767)))))), (((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_1)))))) : (((((/* implicit */int) ((short) var_5))) & (((((/* implicit */int) (short)(-32767 - 1))) ^ (((/* implicit */int) (short)32766)))))))))));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_16 &= ((/* implicit */unsigned int) max((((/* implicit */short) arr_0 [i_0] [(signed char)0])), (max(((short)32767), (((short) (short)32755))))));
        arr_4 [i_0] = ((((3993536788U) << (((((/* implicit */int) (short)8191)) - (8174))))) | (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_4)))) - (((/* implicit */int) arr_3 [i_0] [i_0]))))));
    }
    for (unsigned int i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */short) (!(((/* implicit */_Bool) (short)32762))));
        arr_8 [i_1] [i_1] = ((/* implicit */short) (+(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) arr_0 [i_1] [i_1])) : (((/* implicit */int) arr_0 [i_1] [i_1]))))));
    }
}
