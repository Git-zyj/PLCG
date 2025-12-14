/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 226646
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=226646 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/226646
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
    for (unsigned char i_0 = 0; i_0 < 23; i_0 += 2) 
    {
        var_19 = ((/* implicit */long long int) max((var_19), (((/* implicit */long long int) max((min(((~(((/* implicit */int) arr_1 [i_0] [i_0])))), ((~(((/* implicit */int) (_Bool)1)))))), (((/* implicit */int) (short)-21728)))))));
        arr_2 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (+(var_16)))) ? ((+(-1948407599))) : (-1948407587)))) && (((/* implicit */_Bool) ((((/* implicit */_Bool) -1948407599)) ? (-6123980893687122117LL) : (((/* implicit */long long int) ((/* implicit */int) ((-1948407599) <= ((-2147483647 - 1)))))))))));
    }
    var_20 = ((/* implicit */unsigned int) max((var_20), (((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */unsigned int) -1948407599)) : (min((((/* implicit */unsigned int) (signed char)123)), (2796802100U)))))))))));
}
