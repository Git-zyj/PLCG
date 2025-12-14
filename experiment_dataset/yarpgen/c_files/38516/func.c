/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38516
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38516 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38516
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
    var_16 = ((/* implicit */_Bool) var_14);
    /* LoopNest 2 */
    for (unsigned char i_0 = 3; i_0 < 11; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 14; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) ((-4372282021424626078LL) != (((/* implicit */long long int) ((/* implicit */int) (unsigned short)42624))))))));
                arr_7 [i_0] [i_1] [i_0] = ((short) (unsigned short)35368);
                arr_8 [i_0] [i_1] [i_0] = ((/* implicit */unsigned char) ((max((((18446744073709551610ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)22912))))), (min((5248176667178176395ULL), (4121968332956515394ULL))))) & (((/* implicit */unsigned long long int) ((/* implicit */int) ((((arr_5 [i_0]) ? (((/* implicit */unsigned int) ((/* implicit */int) arr_0 [i_0] [i_0]))) : (7U))) == (975397131U)))))));
                arr_9 [i_0] [(unsigned char)2] = ((/* implicit */int) (+(min((-4372282021424626087LL), (((/* implicit */long long int) arr_6 [i_0 + 3] [i_0] [i_0 - 3]))))));
                arr_10 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */_Bool) (unsigned short)3337)) ? (((/* implicit */int) arr_0 [i_0] [i_1])) : (((/* implicit */int) (unsigned char)237)))) * (((/* implicit */int) arr_0 [i_0] [i_0]))));
            }
        } 
    } 
}
