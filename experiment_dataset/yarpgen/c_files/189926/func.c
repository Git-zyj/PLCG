/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 189926
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=189926 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/189926
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
    var_16 *= ((/* implicit */_Bool) (+(((/* implicit */int) var_3))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 10; i_0 += 4) 
    {
        for (unsigned int i_1 = 1; i_1 < 13; i_1 += 2) 
        {
            {
                var_17 &= ((/* implicit */int) 18446744073709551614ULL);
                var_18 = ((/* implicit */short) max((((/* implicit */unsigned int) ((((/* implicit */_Bool) 0U)) ? (((/* implicit */int) arr_3 [i_0 + 3])) : (((/* implicit */int) arr_3 [i_0 + 2]))))), (((((/* implicit */_Bool) ((int) (unsigned short)2049))) ? ((-(4294967283U))) : (((/* implicit */unsigned int) ((/* implicit */int) var_1)))))));
                arr_5 [i_1 - 1] [i_0 + 1] = ((/* implicit */unsigned char) min((arr_2 [i_0]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0 + 4])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_11)))))));
                var_19 = ((/* implicit */unsigned int) ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */long long int) arr_1 [i_1])), (arr_4 [8]))))))) % (((/* implicit */int) arr_3 [i_0 + 4]))));
            }
        } 
    } 
    var_20 *= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)64459)) ? (((/* implicit */int) (unsigned short)28498)) : (((/* implicit */int) (unsigned short)28517))));
}
