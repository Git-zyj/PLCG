/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 4595
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=4595 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/4595
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
    var_16 = ((/* implicit */unsigned char) min((var_16), (((/* implicit */unsigned char) min(((~(9223372036854775776LL))), (((/* implicit */long long int) var_4)))))));
    var_17 &= ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_6))));
    var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) max((((((/* implicit */_Bool) (~(var_7)))) ? (((((/* implicit */int) var_1)) ^ (var_9))) : ((~(-12939831))))), (((/* implicit */int) ((min((8962679770705574856LL), (9223372036854775767LL))) < (min((-9223372036854775776LL), (((/* implicit */long long int) var_12))))))))))));
    /* LoopNest 3 */
    for (int i_0 = 1; i_0 < 16; i_0 += 1) 
    {
        for (long long int i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    arr_8 [i_2] [i_1] [i_2] [i_2] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_2 [i_0 - 1])) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((/* implicit */int) arr_2 [i_0 + 1]))))) ? (((/* implicit */int) var_12)) : (((/* implicit */int) min((arr_2 [i_0 - 1]), (arr_2 [i_0 + 1]))))));
                    var_19 = ((/* implicit */unsigned char) -12939834);
                }
            } 
        } 
    } 
}
