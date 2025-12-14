/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245265
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245265 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245265
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
    /* LoopSeq 1 */
    for (short i_0 = 2; i_0 < 9; i_0 += 1) 
    {
        arr_2 [i_0] = ((/* implicit */unsigned int) ((unsigned long long int) ((((/* implicit */_Bool) (unsigned short)58345)) || (((/* implicit */_Bool) 2057328577335095714LL)))));
        arr_3 [i_0] = (i_0 % 2 == zero) ? (((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0 + 1]) - (5367753023567402062LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((arr_1 [i_0] [i_0 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-90)))))))) : (((/* implicit */short) ((((/* implicit */_Bool) ((arr_1 [i_0] [i_0 + 1]) + (5367753023567402062LL)))) ? (((/* implicit */long long int) (~(((/* implicit */int) arr_0 [i_0 + 1]))))) : (((arr_1 [i_0] [i_0 + 1]) ^ (((/* implicit */long long int) ((/* implicit */int) (signed char)-90))))))));
    }
    var_15 = ((/* implicit */int) min((((/* implicit */unsigned int) ((_Bool) ((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_12)))))), (max((((((/* implicit */unsigned int) ((/* implicit */int) var_5))) + (1400450549U))), (((((/* implicit */_Bool) -2057328577335095735LL)) ? (318762142U) : (var_14)))))));
    var_16 = ((/* implicit */unsigned short) max((((/* implicit */long long int) ((signed char) ((2147483647) ^ (((/* implicit */int) (unsigned short)8707)))))), (max((((/* implicit */long long int) var_7)), (((((/* implicit */_Bool) 2179638082U)) ? (2057328577335095714LL) : (((/* implicit */long long int) 1266179472))))))));
}
