/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 29552
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=29552 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/29552
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
    for (signed char i_0 = 0; i_0 < 17; i_0 += 2) 
    {
        var_13 ^= ((/* implicit */unsigned long long int) 1777390855);
        arr_4 [i_0] = ((/* implicit */unsigned char) (~(1777390865)));
        arr_5 [i_0] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) min((max((((/* implicit */long long int) 1777390855)), (3123623079041611170LL))), (((/* implicit */long long int) -174460649))))) ? ((~(((/* implicit */int) arr_1 [i_0])))) : (((/* implicit */int) min((arr_1 [i_0]), (arr_1 [i_0]))))));
    }
    var_14 *= ((/* implicit */_Bool) min((((((/* implicit */_Bool) -722502075)) ? ((~(var_10))) : (((((/* implicit */_Bool) var_4)) ? (var_2) : (-1355050676))))), (((((/* implicit */_Bool) var_7)) ? (((((/* implicit */_Bool) var_11)) ? (((/* implicit */int) (unsigned short)12026)) : (((/* implicit */int) var_0)))) : (((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */int) (unsigned char)170))))))));
}
