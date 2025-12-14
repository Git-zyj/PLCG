/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34760
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34760 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34760
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
    /* LoopSeq 2 */
    for (signed char i_0 = 3; i_0 < 16; i_0 += 2) 
    {
        var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) ((signed char) var_8)))));
        var_21 = ((/* implicit */int) min((min((min((((/* implicit */unsigned long long int) var_12)), (var_1))), (((/* implicit */unsigned long long int) ((var_2) / (((/* implicit */long long int) ((/* implicit */int) var_12)))))))), (((/* implicit */unsigned long long int) var_11))));
        var_22 = ((/* implicit */_Bool) max((var_22), (((/* implicit */_Bool) var_14))));
        arr_3 [i_0] [i_0 + 3] = ((/* implicit */unsigned long long int) (unsigned short)3);
    }
    for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
    {
        var_23 = ((/* implicit */short) min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_5 [i_1])) : (((/* implicit */int) arr_1 [i_1])))), (((((/* implicit */_Bool) arr_5 [i_1])) ? (-1409147963) : (((/* implicit */int) arr_1 [i_1]))))));
        arr_7 [i_1] = ((/* implicit */signed char) min((((/* implicit */int) var_17)), (((((/* implicit */int) min((var_12), (var_4)))) >> (min((13864924759974196840ULL), (((/* implicit */unsigned long long int) (_Bool)1))))))));
        arr_8 [i_1] [i_1] = ((/* implicit */int) (short)16);
    }
    var_24 = max(((!(((/* implicit */_Bool) var_7)))), ((_Bool)1));
    var_25 &= ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) var_5)), (var_8))), (((((/* implicit */_Bool) var_11)) ? (((/* implicit */unsigned long long int) var_0)) : (18446744073709551605ULL)))))));
}
