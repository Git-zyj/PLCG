/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 215439
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=215439 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/215439
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
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 12; i_0 += 4) 
    {
        var_18 = ((/* implicit */_Bool) arr_1 [i_0]);
        var_19 *= ((/* implicit */short) (~((-(arr_2 [(unsigned char)4] [(unsigned char)4])))));
        var_20 *= ((/* implicit */signed char) (~(arr_2 [i_0] [i_0])));
    }
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_1 = 0; i_1 < 10; i_1 += 1) 
    {
        var_21 = (~(((/* implicit */int) var_8)));
        var_22 *= ((/* implicit */unsigned int) (-(((/* implicit */int) arr_3 [i_1] [i_1]))));
    }
    var_23 = ((/* implicit */int) var_17);
    var_24 |= ((/* implicit */unsigned int) ((min((((/* implicit */long long int) var_15)), (((((/* implicit */long long int) ((/* implicit */int) var_8))) / (-1537206478414820501LL))))) - (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (var_13) : (((/* implicit */int) var_4)))))));
    var_25 = ((/* implicit */unsigned short) var_17);
}
