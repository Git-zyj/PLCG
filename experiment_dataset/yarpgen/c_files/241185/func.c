/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 241185
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=241185 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/241185
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
    var_12 ^= ((/* implicit */int) ((unsigned short) var_4));
    var_13 = ((/* implicit */long long int) ((((/* implicit */_Bool) min((((/* implicit */long long int) 3467313997U)), (max((((/* implicit */long long int) (_Bool)1)), (8796091973632LL)))))) ? (max((((/* implicit */int) (_Bool)1)), ((+(((/* implicit */int) (unsigned short)31771)))))) : (((/* implicit */int) var_5))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 10; i_0 += 4) 
    {
        var_14 = ((/* implicit */signed char) arr_0 [i_0]);
        arr_2 [i_0] = (-(-2LL));
    }
    /* LoopSeq 1 */
    for (signed char i_1 = 0; i_1 < 20; i_1 += 4) 
    {
        var_15 = ((/* implicit */unsigned char) max((var_15), (((/* implicit */unsigned char) (_Bool)1))));
        var_16 = ((/* implicit */unsigned long long int) max((var_16), (((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) max((((/* implicit */unsigned int) 2147483641)), (var_3)))))))));
    }
}
