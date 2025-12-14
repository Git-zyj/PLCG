/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223003
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223003 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223003
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
    /* LoopNest 2 */
    for (short i_0 = 0; i_0 < 12; i_0 += 2) 
    {
        for (int i_1 = 4; i_1 < 10; i_1 += 3) 
        {
            {
                var_20 = ((/* implicit */unsigned char) ((((int) var_6)) < (min((((/* implicit */int) arr_0 [i_1 - 4])), ((~(((/* implicit */int) var_4))))))));
                arr_4 [i_0] [i_1] = ((/* implicit */short) (signed char)1);
                var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (unsigned char)81)), (((((/* implicit */_Bool) -54184144)) ? (((/* implicit */int) (unsigned short)20656)) : (((/* implicit */int) (signed char)60))))));
            }
        } 
    } 
    var_22 -= ((((/* implicit */_Bool) ((short) (~(((/* implicit */int) (signed char)67)))))) ? (((/* implicit */int) var_19)) : (((/* implicit */int) var_17)));
    var_23 = ((/* implicit */int) min((var_23), (((/* implicit */int) (((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_14)) ? (((/* implicit */int) (short)-1)) : (var_16)))))) && (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) min((((/* implicit */unsigned short) var_7)), (var_15)))), (var_9)))))))));
}
