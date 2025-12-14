/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236376
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236376 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236376
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
    for (short i_0 = 4; i_0 < 20; i_0 += 2) 
    {
        var_18 = 65528LL;
        var_19 = ((((/* implicit */_Bool) (+(((/* implicit */int) (short)2545))))) ? ((-(var_0))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_12)) ? (min((arr_0 [i_0] [i_0]), (((/* implicit */int) arr_1 [i_0 + 1])))) : (((/* implicit */int) var_9))))));
        var_20 = ((/* implicit */unsigned short) min((var_20), (((/* implicit */unsigned short) var_17))));
        arr_2 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0 - 2] [i_0 - 3])) ? (((((/* implicit */_Bool) (unsigned short)960)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) var_16)))) : (((/* implicit */int) (!(((/* implicit */_Bool) (unsigned short)65535)))))))) ? (max((arr_0 [i_0 - 3] [i_0]), (((/* implicit */int) (unsigned short)63913)))) : (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)64580)) >> (((((/* implicit */int) (unsigned char)120)) - (101)))))) ? ((~(((/* implicit */int) (unsigned short)0)))) : (((((/* implicit */int) (unsigned short)65535)) >> (((/* implicit */int) (unsigned short)1))))))));
    }
    var_21 |= ((/* implicit */short) var_10);
}
