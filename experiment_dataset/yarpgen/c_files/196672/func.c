/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 196672
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=196672 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/196672
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
    var_10 ^= var_1;
    var_11 = ((/* implicit */int) min((((/* implicit */unsigned short) var_2)), (((unsigned short) ((var_3) >> (((var_3) - (885497158U))))))));
    var_12 = ((/* implicit */unsigned char) ((max((((/* implicit */unsigned long long int) max(((signed char)67), (((/* implicit */signed char) var_9))))), ((((_Bool)1) ? (((/* implicit */unsigned long long int) var_3)) : (var_6))))) * (((((/* implicit */unsigned long long int) var_0)) * (((16442950773111471132ULL) / (((/* implicit */unsigned long long int) ((/* implicit */int) var_8)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 0; i_0 < 16; i_0 += 4) 
    {
        var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) ((((/* implicit */int) ((signed char) arr_2 [i_0] [i_0]))) + (((/* implicit */int) (unsigned char)96)))))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) max((((/* implicit */int) ((signed char) ((int) 1006632960)))), ((-(((/* implicit */int) arr_2 [i_0] [i_0]))))));
    }
    for (_Bool i_1 = 0; i_1 < 0; i_1 += 1) 
    {
        arr_7 [i_1] [i_1] = ((/* implicit */int) ((long long int) 268369920U));
        arr_8 [i_1] = ((/* implicit */signed char) (unsigned short)5760);
    }
    var_14 = ((/* implicit */_Bool) (~((~(((var_7) ^ (((/* implicit */unsigned long long int) 9223372036854775807LL))))))));
}
