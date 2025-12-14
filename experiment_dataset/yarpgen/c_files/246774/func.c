/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 246774
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=246774 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/246774
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
    var_20 = (!(((((/* implicit */int) max((var_1), (((/* implicit */unsigned short) (signed char)113))))) < (((/* implicit */int) min((var_1), (((/* implicit */unsigned short) (signed char)45))))))));
    var_21 = ((/* implicit */unsigned int) var_14);
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned int) ((arr_1 [i_0]) <= (((/* implicit */long long int) ((/* implicit */int) var_8)))));
        /* LoopSeq 1 */
        for (unsigned long long int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_22 = ((/* implicit */unsigned long long int) ((((/* implicit */int) (signed char)-67)) > (((/* implicit */int) (signed char)56))));
            var_23 = ((/* implicit */int) min(((unsigned short)65280), (((/* implicit */unsigned short) var_17))));
        }
        var_24 = ((/* implicit */short) ((long long int) 8494879195507638396LL));
        arr_5 [i_0] = ((/* implicit */short) arr_4 [i_0]);
    }
    var_25 += ((/* implicit */long long int) (!(((/* implicit */_Bool) ((((/* implicit */unsigned int) ((/* implicit */int) ((unsigned char) (_Bool)1)))) + (((unsigned int) var_7)))))));
    var_26 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_17)) ? (((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))) : (var_9))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned short) var_7))))))) ? (((/* implicit */int) ((unsigned char) min((0ULL), (((/* implicit */unsigned long long int) var_17)))))) : (min(((((_Bool)0) ? (((/* implicit */int) (short)0)) : (((/* implicit */int) (_Bool)1)))), (((/* implicit */int) var_7)))));
}
