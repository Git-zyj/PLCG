/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 245745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=245745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/245745
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
    var_10 = ((/* implicit */unsigned short) max((var_10), (((/* implicit */unsigned short) max((((/* implicit */signed char) ((((/* implicit */_Bool) var_8)) && (((/* implicit */_Bool) var_4))))), (((signed char) var_1)))))));
    var_11 = ((/* implicit */int) min((var_11), (-1513487285)));
    /* LoopSeq 2 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_12 += ((/* implicit */unsigned int) 1513487284);
        var_13 = ((/* implicit */long long int) ((((/* implicit */int) arr_0 [i_0])) >> (((((/* implicit */int) arr_0 [i_0])) - (41)))));
        arr_2 [(unsigned char)12] &= ((/* implicit */_Bool) ((((/* implicit */int) (!(((_Bool) -1513487281))))) << (((/* implicit */int) (!(((/* implicit */_Bool) -1513487285)))))));
        var_14 = ((/* implicit */int) min((var_14), (-1513487285)));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 4) 
    {
        var_15 = ((/* implicit */long long int) (((((~(((/* implicit */int) arr_3 [i_1] [i_1])))) + (2147483647))) >> (((((/* implicit */int) var_7)) - (58691)))));
        var_16 |= ((/* implicit */short) var_5);
        arr_5 [i_1] = ((/* implicit */signed char) (+(max((-1513487265), ((-(((/* implicit */int) arr_3 [i_1] [i_1]))))))));
        var_17 -= ((/* implicit */unsigned short) arr_4 [i_1]);
        var_18 |= ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((var_5), (((/* implicit */unsigned long long int) var_8))))) ? (((1513487284) / (((/* implicit */int) arr_4 [(signed char)13])))) : (((/* implicit */int) arr_4 [i_1]))));
    }
}
