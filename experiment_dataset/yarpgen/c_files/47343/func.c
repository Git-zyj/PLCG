/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 47343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=47343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/47343
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
    var_20 = ((/* implicit */int) ((((/* implicit */int) (short)21064)) == (((((/* implicit */_Bool) max(((signed char)-16), (var_19)))) ? (((/* implicit */int) max((((/* implicit */unsigned short) (_Bool)1)), (var_7)))) : (((((/* implicit */int) (unsigned char)176)) | (((/* implicit */int) (unsigned short)15993))))))));
    var_21 = (~(((((/* implicit */_Bool) var_6)) ? ((((_Bool)1) ? (18446744073709551613ULL) : (var_0))) : (((/* implicit */unsigned long long int) max((9044972349053033388LL), (((/* implicit */long long int) var_5))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned short i_0 = 0; i_0 < 24; i_0 += 4) 
    {
        arr_4 [(_Bool)1] = ((/* implicit */short) var_19);
        var_22 = ((/* implicit */int) min((var_22), (((((/* implicit */_Bool) 5404430943788590201LL)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [7]))))));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) -1773779098649461464LL)) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)174))));
        var_23 = ((/* implicit */short) max((var_23), (((/* implicit */short) ((((/* implicit */int) arr_0 [i_0])) ^ (((/* implicit */int) arr_0 [i_0])))))));
        var_24 = ((/* implicit */unsigned int) (~(((arr_2 [i_0] [(unsigned char)21]) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [(_Bool)1] [(short)2])))))));
    }
}
