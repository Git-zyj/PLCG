/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192397
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192397 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192397
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_14 = ((/* implicit */long long int) max((var_14), ((~(arr_0 [i_0])))));
        /* LoopNest 2 */
        for (unsigned char i_1 = 4; i_1 < 23; i_1 += 3) 
        {
            for (unsigned short i_2 = 3; i_2 < 22; i_2 += 4) 
            {
                {
                    var_15 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) -1459732302)) ? (((((/* implicit */_Bool) arr_2 [i_0] [i_0])) ? ((-2147483647 - 1)) : (((/* implicit */int) var_11)))) : (((((/* implicit */int) var_6)) << (((var_12) - (12758223329759546024ULL)))))));
                    var_16 = ((/* implicit */_Bool) (+(((/* implicit */int) (short)-28407))));
                }
            } 
        } 
        var_17 |= ((/* implicit */_Bool) -2147483641);
    }
    var_18 = ((/* implicit */unsigned long long int) var_7);
    var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (~(max((((/* implicit */long long int) (short)28406)), (var_3)))))) ? (((/* implicit */long long int) (-(((((/* implicit */int) var_11)) << (((((/* implicit */int) var_2)) + (89)))))))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */long long int) ((/* implicit */int) var_6))) : (3224525786087555891LL)))));
}
