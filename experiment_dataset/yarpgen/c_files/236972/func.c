/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 236972
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=236972 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/236972
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
    for (signed char i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 22; i_1 += 1) 
        {
            {
                var_13 *= ((/* implicit */_Bool) (+(((((/* implicit */_Bool) ((((/* implicit */long long int) 2666759956U)) - (arr_3 [i_0] [i_1] [i_1])))) ? ((~(arr_3 [i_0] [i_1] [i_1]))) : (((((/* implicit */_Bool) var_3)) ? (arr_3 [i_1] [i_1] [i_1]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)37562)))))))));
                var_14 = ((/* implicit */signed char) min((var_14), (((/* implicit */signed char) (~(((((/* implicit */long long int) ((int) arr_0 [i_0]))) & (max((((/* implicit */long long int) arr_0 [i_0])), (var_10))))))))));
                var_15 |= ((/* implicit */short) (!((!(((arr_2 [(signed char)18] [(signed char)18] [7]) || (((/* implicit */_Bool) var_8))))))));
            }
        } 
    } 
    var_16 = ((/* implicit */short) max((var_16), (((/* implicit */short) (unsigned short)2016))));
    var_17 = ((/* implicit */unsigned int) var_6);
    var_18 = ((/* implicit */long long int) max((var_18), (((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (_Bool)1))) > (((((/* implicit */_Bool) var_9)) ? (((/* implicit */unsigned long long int) var_10)) : (256450193105501591ULL)))))))))));
    var_19 = ((/* implicit */long long int) ((var_4) || ((!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (((/* implicit */long long int) ((/* implicit */int) var_4))) : (284887001128538273LL))))))));
}
