/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 239384
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=239384 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/239384
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
    var_20 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(var_4)))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) ((signed char) ((((/* implicit */long long int) 621609212)) - (-660685278134827503LL)))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_21 = ((/* implicit */int) var_6);
        var_22 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((((/* implicit */int) ((var_13) != (((/* implicit */int) var_2))))), (((((/* implicit */int) arr_2 [i_0])) + (((/* implicit */int) arr_1 [i_0] [i_0]))))))) ? (((((/* implicit */_Bool) arr_2 [(unsigned short)12])) ? (((/* implicit */int) arr_2 [i_0])) : (((/* implicit */int) (unsigned short)63488)))) : ((~(((/* implicit */int) (signed char)-31))))));
        arr_3 [i_0] &= ((/* implicit */long long int) (((+(((/* implicit */int) (signed char)-71)))) != (((/* implicit */int) ((((/* implicit */_Bool) var_1)) || (((/* implicit */_Bool) arr_0 [i_0])))))));
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 13; i_1 += 1) 
        {
            var_23 = (signed char)29;
            arr_7 [i_0] [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~((-(((/* implicit */int) arr_6 [i_0] [i_0] [i_1]))))))) ? (((((/* implicit */_Bool) arr_1 [i_1 - 2] [i_1 - 2])) ? (((/* implicit */int) var_2)) : (var_8))) : (((/* implicit */int) arr_4 [(unsigned short)6]))));
        }
    }
}
