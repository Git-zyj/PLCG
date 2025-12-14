/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 33355
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=33355 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/33355
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
    for (short i_0 = 2; i_0 < 19; i_0 += 2) 
    {
        arr_4 [(unsigned short)5] |= ((/* implicit */short) ((((/* implicit */_Bool) ((signed char) min((((/* implicit */unsigned short) arr_1 [(short)21])), (var_9))))) ? (((/* implicit */int) (unsigned char)15)) : (min((((arr_1 [(unsigned char)0]) ? (((/* implicit */int) var_5)) : (((/* implicit */int) arr_3 [i_0])))), (((/* implicit */int) ((var_2) < (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)242))))))))));
        var_10 *= ((/* implicit */unsigned int) (+(((int) min((((/* implicit */unsigned short) (unsigned char)247)), (var_5))))));
    }
    var_11 = min(((unsigned short)15565), (((/* implicit */unsigned short) (short)-8553)));
    var_12 = ((/* implicit */short) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (((+(var_7))) / (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) 0U)))))))))));
}
