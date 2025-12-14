/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214640
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214640 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214640
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
    var_20 -= ((/* implicit */unsigned short) var_1);
    var_21 = ((/* implicit */_Bool) max((var_21), (((/* implicit */_Bool) 696632440))));
    /* LoopSeq 1 */
    for (int i_0 = 1; i_0 < 10; i_0 += 3) 
    {
        var_22 = ((/* implicit */unsigned int) max((var_22), (((/* implicit */unsigned int) ((((((/* implicit */_Bool) var_5)) ? (((/* implicit */int) ((20U) == (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) : (((var_12) ? (((/* implicit */int) (signed char)-117)) : (((/* implicit */int) (short)32743)))))) == (((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)3)) ? (var_17) : (arr_0 [i_0] [i_0]))))))))))));
        var_23 += ((/* implicit */short) var_10);
        var_24 |= ((/* implicit */int) arr_1 [i_0 - 1] [i_0 + 2]);
        var_25 = ((/* implicit */unsigned short) min((var_25), (((/* implicit */unsigned short) (~(((((/* implicit */_Bool) max((((/* implicit */short) (signed char)-7)), ((short)(-32767 - 1))))) ? (min((2698444258U), (((/* implicit */unsigned int) (short)32715)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)32699))))))))));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 23; i_1 += 4) 
    {
        var_26 *= ((/* implicit */signed char) ((((/* implicit */int) max((arr_3 [i_1]), (arr_3 [i_1])))) >> (((((((/* implicit */_Bool) (short)-32742)) ? (-1576553987) : (((/* implicit */int) var_16)))) + (1576554018)))));
        var_27 |= ((((/* implicit */_Bool) var_4)) ? (((((/* implicit */_Bool) max((var_1), (((/* implicit */short) (signed char)3))))) ? (((/* implicit */int) arr_3 [i_1])) : (((/* implicit */int) ((((/* implicit */_Bool) (short)-32711)) || (((/* implicit */_Bool) var_4))))))) : (max((((/* implicit */int) ((((/* implicit */_Bool) var_13)) && (((/* implicit */_Bool) (signed char)-9))))), (min((((/* implicit */int) arr_3 [i_1])), (-1860102498))))));
    }
}
