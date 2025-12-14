/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 249102
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=249102 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/249102
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
    for (short i_0 = 3; i_0 < 14; i_0 += 2) /* same iter space */
    {
        var_11 = ((/* implicit */int) max((var_11), (min((var_3), (((((/* implicit */_Bool) var_7)) ? (var_3) : (var_5)))))));
        arr_4 [i_0] = ((/* implicit */short) min((min((((/* implicit */int) var_7)), (var_9))), (((((/* implicit */_Bool) var_3)) ? (var_2) : (var_2)))));
        arr_5 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((var_0), (var_0)))) ? (((((/* implicit */_Bool) var_5)) ? (var_9) : (var_1))) : (max((var_4), (var_2)))));
    }
    for (short i_1 = 3; i_1 < 14; i_1 += 2) /* same iter space */
    {
        var_12 -= ((((/* implicit */_Bool) min((var_10), (var_10)))) ? (min((var_2), (var_1))) : (min((var_8), (((/* implicit */int) var_0)))));
        var_13 = min((-2078876193), (((/* implicit */int) var_7)));
        var_14 = ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_6)) ? (var_4) : (var_5)))) ? (((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) var_7)) : (var_4))) : (min((var_9), (var_9))));
        /* LoopNest 2 */
        for (int i_2 = 2; i_2 < 12; i_2 += 2) 
        {
            for (short i_3 = 0; i_3 < 15; i_3 += 2) 
            {
                {
                    var_15 = ((((/* implicit */_Bool) min((var_9), (var_3)))) ? (((/* implicit */long long int) var_10)) : (var_6));
                    arr_14 [i_1 + 1] = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_5)) ? (var_5) : (var_9)))) ? (max((var_6), (((/* implicit */long long int) var_3)))) : (min((var_6), (((/* implicit */long long int) var_0))))));
                }
            } 
        } 
        var_16 = ((/* implicit */short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_4)) ? (var_6) : (((/* implicit */long long int) var_8))))) ? (((((/* implicit */_Bool) var_2)) ? (((/* implicit */long long int) ((/* implicit */int) var_7))) : (var_6))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_7)) ? (var_2) : (((/* implicit */int) var_7)))))));
    }
    var_17 = var_0;
    var_18 = var_9;
}
