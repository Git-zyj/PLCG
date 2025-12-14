/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215898
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
    var_15 = (~((((((~(((/* implicit */int) (unsigned short)4165)))) + (2147483647))) << ((((((~(((/* implicit */int) var_8)))) + (66))) - (26))))));
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 1; i_0 < 11; i_0 += 2) 
    {
        for (long long int i_1 = 0; i_1 < 14; i_1 += 4) 
        {
            {
                var_16 = ((/* implicit */unsigned short) ((((((/* implicit */long long int) ((/* implicit */int) max((arr_3 [i_0]), (arr_4 [i_0] [i_1]))))) >= (((long long int) arr_3 [i_1])))) && (((/* implicit */_Bool) ((short) arr_0 [(unsigned char)4] [i_0 - 1])))));
                var_17 *= ((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) max(((unsigned short)61371), (((/* implicit */unsigned short) (_Bool)1)))))) <= (((((/* implicit */_Bool) (unsigned short)512)) ? (((/* implicit */long long int) 40164268)) : (6717325843964539582LL)))))) / (((int) ((short) (unsigned short)44430)))));
                var_18 += ((unsigned short) (~(arr_2 [i_0 + 2] [i_1])));
            }
        } 
    } 
    var_19 = ((/* implicit */unsigned short) min((var_19), (((/* implicit */unsigned short) (~(max((max((var_7), (((/* implicit */unsigned long long int) 21LL)))), (((/* implicit */unsigned long long int) (-(1840313890835779532LL)))))))))));
}
