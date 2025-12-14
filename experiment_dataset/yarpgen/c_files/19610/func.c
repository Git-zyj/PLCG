/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19610
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19610 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19610
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopNest 2 */
    for (unsigned long long int i_0 = 4; i_0 < 23; i_0 += 4) 
    {
        for (unsigned int i_1 = 2; i_1 < 22; i_1 += 3) 
        {
            {
                var_15 = ((/* implicit */_Bool) max((var_15), (((((/* implicit */long long int) ((/* implicit */int) ((_Bool) (-(-4336638747758251311LL)))))) != (min((((1667419985860847152LL) ^ (((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0]))))), (((/* implicit */long long int) ((unsigned int) arr_0 [i_1])))))))));
                var_16 += ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) ((((((arr_4 [(_Bool)1]) ? (((/* implicit */int) var_0)) : (((/* implicit */int) arr_0 [i_1])))) + (2147483647))) >> (((/* implicit */int) ((((/* implicit */_Bool) 376233678)) || (((/* implicit */_Bool) 11419865909468706387ULL)))))))), (((((/* implicit */_Bool) var_4)) ? (17640805952400336157ULL) : (((/* implicit */unsigned long long int) arr_2 [i_0 + 1] [i_1 - 2]))))));
                var_17 = ((/* implicit */unsigned long long int) ((_Bool) (~(((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_0] [i_1]))) <= (805938121309215460ULL)))))));
                var_18 |= ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(signed char)4] [1U])) ? (min((((/* implicit */int) var_8)), (((((/* implicit */int) (unsigned short)65535)) >> (((var_10) - (7963268081785376995LL))))))) : (((/* implicit */int) var_3))));
            }
        } 
    } 
}
