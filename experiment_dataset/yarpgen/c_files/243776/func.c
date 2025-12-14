/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243776
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243776 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243776
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
    var_10 += ((/* implicit */short) -1670503696);
    var_11 += ((/* implicit */int) max((((((/* implicit */_Bool) var_6)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(((/* implicit */_Bool) var_8)))))) : (var_7))), (((/* implicit */unsigned long long int) var_6))));
    /* LoopNest 2 */
    for (signed char i_0 = 1; i_0 < 10; i_0 += 2) 
    {
        for (unsigned short i_1 = 1; i_1 < 9; i_1 += 1) 
        {
            {
                var_12 = ((/* implicit */short) ((((/* implicit */int) max(((unsigned short)49726), (((/* implicit */unsigned short) (signed char)57))))) < (max((((/* implicit */int) var_3)), (max((arr_2 [i_0] [i_0] [i_0]), (((/* implicit */int) (short)-21227))))))));
                var_13 = ((/* implicit */unsigned long long int) max((var_13), (((/* implicit */unsigned long long int) ((max((arr_2 [6] [i_1] [6]), (((/* implicit */int) (short)-2828)))) < (((/* implicit */int) max((((/* implicit */signed char) var_5)), (var_9)))))))));
                arr_4 [i_0] [i_0] = ((/* implicit */int) ((short) ((((/* implicit */_Bool) max((var_2), (((/* implicit */int) var_1))))) ? (-1555648721) : (var_6))));
            }
        } 
    } 
    var_14 = ((/* implicit */signed char) ((((/* implicit */_Bool) (-(((/* implicit */int) ((signed char) var_1)))))) ? (max((((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_9)) : (var_6))), (((((/* implicit */int) (unsigned short)65265)) & (-1514599813))))) : (((((/* implicit */_Bool) ((var_5) ? (1514599790) : (1514599797)))) ? (((/* implicit */int) ((((/* implicit */_Bool) -1514599813)) || (((/* implicit */_Bool) var_4))))) : (((/* implicit */int) var_1))))));
}
