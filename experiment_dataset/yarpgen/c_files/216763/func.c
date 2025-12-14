/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216763
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216763 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216763
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
    var_18 = ((/* implicit */unsigned short) (-(max((((/* implicit */long long int) ((((/* implicit */int) (_Bool)1)) + (((/* implicit */int) (unsigned char)182))))), (max((2368288591418765558LL), (((/* implicit */long long int) (signed char)7))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 2; i_0 < 11; i_0 += 4) 
    {
        for (unsigned int i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            {
                var_19 = ((/* implicit */_Bool) min(((-(((/* implicit */int) max(((unsigned char)198), (((/* implicit */unsigned char) (_Bool)1))))))), ((~(((/* implicit */int) var_12))))));
                var_20 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) 2305843009213693952LL)) || (((/* implicit */_Bool) arr_4 [i_0 + 1] [i_1]))))) << (((((((((/* implicit */_Bool) (signed char)116)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_2 [i_0] [i_0])))) >> (((/* implicit */int) (((_Bool)1) || (((/* implicit */_Bool) var_9))))))) - (8175)))));
                var_21 = ((/* implicit */_Bool) max(((~(var_7))), (((arr_1 [i_1] [i_0 - 2]) ^ (((/* implicit */unsigned int) (~(((/* implicit */int) arr_4 [(signed char)7] [(_Bool)1])))))))));
                arr_5 [i_1] = ((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_2 [i_0 + 1] [(short)3])) ? (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0 - 2]))) : (min((((/* implicit */long long int) var_10)), (-1266923407417064640LL))))), (((/* implicit */long long int) ((((/* implicit */_Bool) (-(((/* implicit */int) var_17))))) ? (min((((/* implicit */unsigned int) (signed char)2)), (var_7))) : (((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1] [i_0])) || (((/* implicit */_Bool) var_6)))))))))));
            }
        } 
    } 
    var_22 ^= ((/* implicit */long long int) 1136630491U);
}
