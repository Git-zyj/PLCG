/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 198906
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=198906 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/198906
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
    for (unsigned char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        arr_2 [(unsigned char)4] [i_0] = ((/* implicit */unsigned char) ((_Bool) ((unsigned char) max((((/* implicit */unsigned char) (signed char)112)), (arr_0 [i_0])))));
        arr_3 [i_0] [i_0] = ((/* implicit */unsigned short) ((arr_1 [i_0]) ? (((/* implicit */int) max((arr_1 [(short)19]), (arr_1 [i_0])))) : ((~(((/* implicit */int) var_4))))));
        var_11 = ((/* implicit */unsigned int) (((+(((/* implicit */int) arr_0 [i_0])))) << (((((/* implicit */_Bool) arr_0 [(unsigned char)13])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (16242319941589654082ULL)))));
        arr_4 [i_0] = ((/* implicit */unsigned int) (-(((/* implicit */int) (signed char)123))));
    }
    var_12 &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_7))))), (min((819366212U), (4194303U)))))) ? (var_8) : (((/* implicit */unsigned long long int) var_6))));
}
