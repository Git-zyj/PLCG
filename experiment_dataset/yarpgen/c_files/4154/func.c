/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4154
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4154 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4154
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
    /* LoopSeq 1 */
    for (unsigned char i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) arr_0 [i_0] [i_0])), ((+(((/* implicit */int) (_Bool)0))))));
        var_17 = min((((((/* implicit */int) (unsigned short)49313)) * (((/* implicit */int) arr_0 [i_0 + 1] [i_0])))), ((~(((/* implicit */int) (unsigned short)16212)))));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) min((arr_1 [6U]), (((/* implicit */short) ((((/* implicit */long long int) ((/* implicit */int) (!(arr_0 [i_0 + 3] [(unsigned short)16]))))) == (((long long int) arr_1 [2U]))))))))));
        var_19 = ((/* implicit */unsigned int) max((var_19), (((/* implicit */unsigned int) ((((/* implicit */int) ((min((9223372036854775807LL), (var_14))) < (var_1)))) >> ((((~(((/* implicit */int) arr_0 [i_0 + 3] [12])))) + (17))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_4);
    }
    var_20 = ((/* implicit */int) (!((!(((/* implicit */_Bool) (unsigned short)16223))))));
}
