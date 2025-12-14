/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 247404
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=247404 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/247404
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
    var_17 = ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */int) (short)(-32767 - 1))) + (((/* implicit */int) var_10))))), (var_3)))) ? (((/* implicit */long long int) ((/* implicit */int) var_11))) : (((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_13))) % (var_12)))) ? (((/* implicit */long long int) ((((/* implicit */int) var_8)) << (((6398653978019488662LL) - (6398653978019488659LL)))))) : (var_16))));
    var_18 *= ((/* implicit */signed char) (+(((((/* implicit */int) var_11)) * (((/* implicit */int) ((((/* implicit */int) var_5)) < (((/* implicit */int) var_7)))))))));
    var_19 += ((/* implicit */unsigned short) ((((((/* implicit */unsigned int) ((((/* implicit */int) var_0)) << (((3680201734949217806ULL) - (3680201734949217801ULL)))))) ^ (1039726869U))) - (((/* implicit */unsigned int) ((/* implicit */int) (_Bool)1)))));
    var_20 = ((/* implicit */short) ((var_10) ? (((((/* implicit */_Bool) ((3255240426U) | (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30177)))))) ? (((/* implicit */long long int) ((/* implicit */int) var_10))) : (-6756266550026609342LL))) : (((/* implicit */long long int) ((((/* implicit */_Bool) var_11)) ? (((((/* implicit */int) var_15)) - (((/* implicit */int) var_6)))) : (((/* implicit */int) var_9)))))));
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 21; i_0 += 2) 
    {
        for (unsigned int i_1 = 0; i_1 < 21; i_1 += 2) 
        {
            {
                var_21 -= ((/* implicit */unsigned char) (-((-(((/* implicit */int) var_0))))));
                var_22 = ((/* implicit */unsigned short) (((-(((/* implicit */int) arr_0 [i_0])))) != (((/* implicit */int) (!(arr_2 [(signed char)1] [i_1] [i_1]))))));
                var_23 = ((/* implicit */_Bool) max((var_23), (arr_2 [i_0] [i_0] [i_0])));
            }
        } 
    } 
}
