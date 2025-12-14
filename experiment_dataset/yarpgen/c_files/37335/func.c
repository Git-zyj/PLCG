/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 37335
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=37335 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/37335
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
    var_12 = ((/* implicit */short) max((var_12), (min((((/* implicit */short) (unsigned char)32)), (((short) (-(((/* implicit */int) (short)13084)))))))));
    var_13 = ((/* implicit */_Bool) var_8);
    var_14 = ((/* implicit */unsigned int) (short)19527);
    /* LoopSeq 2 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) /* same iter space */
    {
        var_15 = ((((/* implicit */int) (unsigned char)223)) & (((/* implicit */int) (short)1008)));
        var_16 = ((/* implicit */short) (unsigned char)238);
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned char)238)) ? (((/* implicit */int) (short)19527)) : (1955675649)))) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))) & (21088035U))) : (((/* implicit */unsigned int) ((((/* implicit */int) (_Bool)1)) * (arr_1 [(_Bool)1])))))) / (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) var_3)) : (arr_1 [i_0 + 1]))))));
        arr_4 [i_0] [i_0] = ((/* implicit */unsigned char) 7413147729270793168LL);
    }
    for (signed char i_1 = 1; i_1 < 17; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) arr_1 [i_1 - 1]);
        var_19 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) max((min((972636831U), (((/* implicit */unsigned int) -1096630797)))), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)65238)) + (((/* implicit */int) arr_2 [i_1])))))))) ? (max((((/* implicit */unsigned long long int) (short)19527)), (arr_0 [(signed char)2]))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_1])) ? (((((/* implicit */int) arr_5 [i_1 + 1])) / (var_11))) : (((/* implicit */int) ((_Bool) (_Bool)1))))))));
    }
}
