/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23878
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23878 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23878
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
    for (long long int i_0 = 2; i_0 < 18; i_0 += 4) 
    {
        var_11 += ((/* implicit */_Bool) (((!(arr_0 [i_0 - 1] [i_0 - 1]))) ? ((+(((/* implicit */int) max((var_6), ((_Bool)0)))))) : (((((/* implicit */_Bool) (signed char)124)) ? ((~(((/* implicit */int) arr_0 [i_0] [i_0])))) : (((/* implicit */int) ((((/* implicit */int) (short)3601)) == (((/* implicit */int) var_6)))))))));
        var_12 -= ((/* implicit */short) max((((/* implicit */long long int) ((arr_0 [i_0] [i_0 + 1]) ? (((/* implicit */int) arr_0 [(short)4] [i_0 + 1])) : (((/* implicit */int) arr_0 [i_0] [i_0 + 1]))))), (((long long int) arr_1 [i_0] [i_0 + 1]))));
    }
    var_13 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */unsigned char) (!(((/* implicit */_Bool) var_8))))), (var_3)))) ? (((((/* implicit */_Bool) (+(5964299544083654730ULL)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((short)(-32767 - 1)), (var_4))))) : (((((/* implicit */_Bool) var_2)) ? (var_7) : (var_8))))) : (((/* implicit */unsigned long long int) ((((/* implicit */int) ((2104712296752719954ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)20476)))))) >> (((var_7) - (7513344282431178881ULL))))))));
}
