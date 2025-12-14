/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 207950
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=207950 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/207950
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
    var_19 ^= ((/* implicit */int) ((unsigned int) max((max((((/* implicit */unsigned long long int) -7792876925264280885LL)), (8031953740976000008ULL))), (((/* implicit */unsigned long long int) var_14)))));
    var_20 = ((/* implicit */_Bool) var_14);
    var_21 = ((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_9)), (((((/* implicit */_Bool) var_8)) ? (var_14) : (var_6)))))) ? (((((min((((/* implicit */long long int) 3474264204U)), (var_18))) + (9223372036854775807LL))) << (0ULL))) : (((/* implicit */long long int) (((~(1671068286U))) | (((/* implicit */unsigned int) (~(((/* implicit */int) (_Bool)1))))))))));
    /* LoopNest 3 */
    for (signed char i_0 = 1; i_0 < 17; i_0 += 4) 
    {
        for (signed char i_1 = 1; i_1 < 19; i_1 += 3) 
        {
            for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
            {
                {
                    var_22 = ((/* implicit */unsigned short) (~(((/* implicit */int) ((_Bool) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) arr_3 [i_2] [i_1 + 1] [i_2])) : (((/* implicit */int) var_4))))))));
                    arr_6 [i_0] [i_0] [i_1] [i_2] = (-(8031953740976000008ULL));
                }
            } 
        } 
    } 
    var_23 = (-(((/* implicit */int) var_2)));
}
