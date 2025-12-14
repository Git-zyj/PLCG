/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29549
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
    for (unsigned short i_0 = 0; i_0 < 16; i_0 += 3) 
    {
        var_20 -= ((/* implicit */unsigned char) ((((/* implicit */_Bool) var_19)) ? (var_2) : (((((/* implicit */_Bool) ((((/* implicit */int) var_4)) + (((/* implicit */int) arr_0 [i_0]))))) ? (((/* implicit */int) ((((/* implicit */_Bool) arr_2 [i_0])) && (((/* implicit */_Bool) arr_0 [i_0]))))) : (((/* implicit */int) arr_2 [i_0]))))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_15);
        arr_4 [i_0] = ((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))) * (((max((((/* implicit */unsigned int) arr_1 [i_0])), (var_1))) << (((((((/* implicit */unsigned long long int) var_2)) ^ (var_12))) - (12008486931748967477ULL)))))));
    }
    var_21 = ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_6)) ? (var_13) : (((/* implicit */unsigned int) ((/* implicit */int) var_5))))), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) var_12)) || (((/* implicit */_Bool) var_3))))) % (((/* implicit */int) var_4))))) : (((min((var_13), (((/* implicit */unsigned int) var_18)))) - (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */long long int) var_3)) == (var_11))))))));
    var_22 = ((var_3) << (((/* implicit */int) ((var_3) == (((/* implicit */unsigned int) ((((((/* implicit */int) var_17)) + (2147483647))) << (((((((/* implicit */int) var_17)) + (7147))) - (4))))))))));
    /* LoopSeq 1 */
    for (unsigned char i_1 = 0; i_1 < 25; i_1 += 4) 
    {
        arr_7 [i_1] = ((/* implicit */unsigned int) var_12);
        arr_8 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((max((((/* implicit */long long int) var_5)), (var_6))) + (((/* implicit */long long int) ((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned int) ((/* implicit */int) var_16))) : (var_13))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_6 [i_1]))) : (arr_5 [(unsigned char)23])));
    }
}
