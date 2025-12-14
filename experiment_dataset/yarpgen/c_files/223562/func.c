/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223562
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223562 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223562
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
    var_10 = ((/* implicit */signed char) (_Bool)1);
    var_11 |= ((/* implicit */unsigned char) (~(var_1)));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 *= ((/* implicit */signed char) ((3519667432U) % ((-(3519667443U)))));
        arr_2 [i_0] [i_0] = ((/* implicit */long long int) var_8);
    }
    var_13 = ((/* implicit */signed char) ((unsigned short) ((min((((/* implicit */unsigned int) var_2)), (var_3))) ^ (((/* implicit */unsigned int) (-(((/* implicit */int) var_2))))))));
    var_14 -= ((/* implicit */_Bool) ((((min((var_0), (((/* implicit */unsigned long long int) var_5)))) == (((/* implicit */unsigned long long int) (+(var_8)))))) ? (var_0) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */_Bool) (~(var_3)))) && ((!(((/* implicit */_Bool) var_7))))))))));
}
