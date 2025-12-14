/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242557
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242557 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242557
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
    var_16 &= ((/* implicit */unsigned char) var_8);
    /* LoopNest 3 */
    for (unsigned char i_0 = 0; i_0 < 25; i_0 += 1) 
    {
        for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
        {
            for (long long int i_2 = 0; i_2 < 25; i_2 += 2) 
            {
                {
                    var_17 -= ((/* implicit */long long int) ((((((/* implicit */_Bool) arr_0 [i_1] [i_2])) ? (arr_3 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_0] [i_0]))))) == (max(((~(var_6))), (((arr_3 [i_0] [22U]) / (((/* implicit */long long int) ((/* implicit */int) (short)25029)))))))));
                    arr_7 [i_0] [i_1] [(short)13] [i_2] = ((/* implicit */short) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) arr_4 [(signed char)22] [i_1] [i_2])) ? (((/* implicit */int) arr_0 [i_1] [i_2])) : (((/* implicit */int) (unsigned char)4)))), (((1648985577) & (((/* implicit */int) arr_2 [(unsigned char)24]))))))) ? (((((/* implicit */_Bool) arr_0 [i_0] [i_1])) ? (arr_1 [i_0]) : (((/* implicit */long long int) ((unsigned int) arr_1 [i_1]))))) : (((/* implicit */long long int) ((/* implicit */int) ((short) arr_0 [(unsigned char)22] [i_2]))))));
                }
            } 
        } 
    } 
    var_18 += ((/* implicit */unsigned short) ((((/* implicit */_Bool) (~(((/* implicit */int) var_5))))) ? (((/* implicit */int) ((((/* implicit */long long int) ((((/* implicit */int) var_10)) ^ (((/* implicit */int) var_11))))) < (max((((/* implicit */long long int) var_15)), (-4381106482971483666LL)))))) : (max((var_13), (((/* implicit */int) var_11))))));
}
