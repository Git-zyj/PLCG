/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220723
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220723 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220723
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
    var_19 = ((/* implicit */unsigned short) 18446744073709551612ULL);
    var_20 = ((/* implicit */long long int) (-(var_12)));
    var_21 = ((/* implicit */unsigned short) max((min((((((/* implicit */_Bool) var_9)) ? (var_9) : (var_18))), (((/* implicit */unsigned long long int) (~(var_11)))))), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_5)) ? ((~(((/* implicit */int) var_15)))) : (((/* implicit */int) min((((/* implicit */unsigned short) var_0)), (var_2)))))))));
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 20; i_0 += 4) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 1) 
        {
            {
                var_22 = ((/* implicit */unsigned short) ((((/* implicit */long long int) ((/* implicit */int) (unsigned short)0))) + (max((((((/* implicit */_Bool) -8365568085792227468LL)) ? (((/* implicit */long long int) ((/* implicit */int) var_16))) : (var_17))), (min((((/* implicit */long long int) var_0)), (34909494181888LL)))))));
                arr_6 [i_1] [(unsigned short)17] [i_1] = (~(((((/* implicit */_Bool) var_0)) ? (var_6) : (var_14))));
            }
        } 
    } 
}
