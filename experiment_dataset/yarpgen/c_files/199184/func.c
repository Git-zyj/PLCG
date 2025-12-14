/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 199184
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=199184 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/199184
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
    var_18 += ((_Bool) min((((((/* implicit */_Bool) var_15)) ? (var_14) : (((/* implicit */int) var_12)))), (max((1308709354), (((/* implicit */int) var_16))))));
    var_19 = ((/* implicit */_Bool) var_4);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 0; i_0 < 14; i_0 += 4) 
    {
        for (short i_1 = 3; i_1 < 12; i_1 += 4) 
        {
            {
                var_20 -= ((/* implicit */unsigned long long int) (short)21271);
                arr_5 [i_1] = ((/* implicit */unsigned long long int) var_5);
                var_21 |= ((/* implicit */_Bool) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) (short)-21271)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (9223372036854775807LL)))))) ? (((/* implicit */long long int) ((/* implicit */int) min((arr_0 [i_0] [i_1]), (arr_0 [i_0] [i_1 - 1]))))) : (((((/* implicit */_Bool) var_3)) ? (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_14) : (((/* implicit */int) (short)21271))))) : (-6086856155579759978LL)))));
                var_22 *= ((/* implicit */unsigned short) ((((/* implicit */int) var_5)) >= (((/* implicit */int) var_12))));
                var_23 &= ((/* implicit */unsigned short) (-(((/* implicit */int) (_Bool)1))));
            }
        } 
    } 
}
