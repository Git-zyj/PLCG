/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247807
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247807 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247807
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
    var_13 = max((((/* implicit */unsigned char) (_Bool)1)), ((unsigned char)249));
    var_14 = ((/* implicit */unsigned short) max((var_14), (((/* implicit */unsigned short) ((_Bool) var_11)))));
    var_15 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) var_10)) ? (((((/* implicit */int) var_6)) << (((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) var_2)) : (((/* implicit */int) var_8)))))) | (((/* implicit */int) var_3))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 1; i_0 < 19; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) var_6);
        /* LoopSeq 1 */
        for (int i_1 = 0; i_1 < 20; i_1 += 2) 
        {
            var_17 = ((/* implicit */unsigned int) min((var_17), (((/* implicit */unsigned int) arr_2 [17ULL]))));
            var_18 = ((/* implicit */unsigned int) min((var_18), (((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) arr_1 [i_0] [i_0 + 1])) / (min((((/* implicit */unsigned long long int) (signed char)113)), (133955584ULL))))))));
            var_19 -= ((/* implicit */unsigned char) max((0U), (10U)));
        }
    }
    var_20 = ((/* implicit */long long int) ((((/* implicit */_Bool) (signed char)-30)) ? (((/* implicit */int) (signed char)-123)) : (2147483647)));
}
