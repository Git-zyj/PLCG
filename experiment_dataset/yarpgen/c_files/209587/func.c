/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209587
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209587 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209587
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
    var_10 = ((/* implicit */unsigned long long int) 159745615U);
    /* LoopSeq 1 */
    for (long long int i_0 = 0; i_0 < 11; i_0 += 1) 
    {
        var_11 = ((/* implicit */long long int) min((var_11), (((/* implicit */long long int) ((signed char) arr_2 [i_0] [i_0])))));
        var_12 = ((/* implicit */short) ((arr_0 [i_0]) ? ((+(((((/* implicit */_Bool) -1766562728)) ? (((/* implicit */unsigned int) ((/* implicit */int) (short)24748))) : (982490814U))))) : (((/* implicit */unsigned int) (~((~(((/* implicit */int) (unsigned short)65524)))))))));
        arr_3 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) (-(((((/* implicit */_Bool) 7448078507886999217LL)) ? (((/* implicit */int) (unsigned char)175)) : (((/* implicit */int) (unsigned short)0))))))) / (min((((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (unsigned short)65523))))), (arr_2 [i_0] [i_0])))));
        var_13 = ((/* implicit */signed char) min((var_5), (min((((/* implicit */unsigned long long int) (_Bool)1)), (4ULL)))));
    }
}
