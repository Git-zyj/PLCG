/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242009
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242009 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242009
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
    var_14 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) var_11))) * (((((((/* implicit */long long int) var_6)) / (var_12))) * (max((var_1), (((/* implicit */long long int) var_7))))))));
    var_15 = ((/* implicit */unsigned long long int) var_8);
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 17; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
        {
            arr_5 [i_0] &= ((/* implicit */int) (((+(((unsigned long long int) arr_3 [5])))) | (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0] [i_1 - 1])))));
            var_16 = ((/* implicit */unsigned char) min((((/* implicit */int) arr_1 [i_0] [i_1])), (((((/* implicit */_Bool) arr_0 [i_1 - 1] [(unsigned short)9])) ? (arr_0 [i_1 - 1] [i_1 - 1]) : (arr_0 [i_1 - 1] [i_1 - 1])))));
        }
        arr_6 [i_0] = ((/* implicit */int) ((((((/* implicit */long long int) ((/* implicit */int) (short)1505))) < (3977003691363283283LL))) ? (((/* implicit */long long int) ((/* implicit */int) (short)5237))) : ((-(((long long int) arr_2 [7]))))));
    }
    var_17 = ((/* implicit */unsigned short) ((((/* implicit */int) (short)-1506)) & (((/* implicit */int) (short)1505))));
}
