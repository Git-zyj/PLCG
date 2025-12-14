/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 27013
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=27013 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/27013
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
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (long long int i_1 = 1; i_1 < 10; i_1 += 1) 
        {
            {
                var_11 = ((/* implicit */unsigned char) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_0)))))) % ((~(var_1)))));
                var_12 = ((long long int) min(((_Bool)1), ((_Bool)1)));
                arr_5 [i_1] [i_0] = ((((/* implicit */_Bool) (~(arr_1 [i_1 + 1])))) ? (((max((((/* implicit */int) (_Bool)1)), (511))) << (((((/* implicit */int) min((arr_4 [i_0] [i_0] [i_1 + 1]), (((/* implicit */signed char) (_Bool)0))))) + (63))))) : (((int) (!(((/* implicit */_Bool) var_8))))));
                /* LoopSeq 1 */
                /* vectorizable */
                for (unsigned int i_2 = 2; i_2 < 9; i_2 += 1) 
                {
                    var_13 = ((/* implicit */unsigned char) ((((9223372036854775807LL) >= (5LL))) ? (((/* implicit */int) arr_6 [i_0] [i_0] [i_2] [i_2])) : (((/* implicit */int) arr_8 [i_1 - 1]))));
                    var_14 = ((/* implicit */unsigned char) var_6);
                    arr_10 [i_0] [i_1] [0LL] [i_1] = ((/* implicit */unsigned char) 9223372036854775806LL);
                }
            }
        } 
    } 
    var_15 = ((/* implicit */short) var_0);
    var_16 = ((/* implicit */signed char) min((((/* implicit */long long int) ((((/* implicit */long long int) (+((-2147483647 - 1))))) >= (((((/* implicit */_Bool) var_4)) ? (9223372036854775807LL) : (((/* implicit */long long int) ((/* implicit */int) var_4)))))))), (max((((((/* implicit */long long int) ((/* implicit */int) var_9))) + (7424221728457932992LL))), (((/* implicit */long long int) min((2147483647), (((/* implicit */int) (_Bool)1)))))))));
    var_17 = ((/* implicit */unsigned char) (~(((/* implicit */int) var_3))));
    var_18 = ((/* implicit */long long int) min((((int) ((((/* implicit */_Bool) var_1)) ? (-9223372036854775807LL) : (((/* implicit */long long int) -695322515))))), (((((/* implicit */_Bool) ((((/* implicit */int) (unsigned short)43582)) << (((/* implicit */int) (_Bool)1))))) ? (((/* implicit */int) ((_Bool) 4294967295U))) : (((/* implicit */int) min((var_7), (((/* implicit */unsigned short) (short)-31471)))))))));
}
