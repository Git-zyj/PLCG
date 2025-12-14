/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32881
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32881 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32881
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
    var_17 &= ((/* implicit */short) var_12);
    /* LoopNest 2 */
    for (unsigned short i_0 = 4; i_0 < 22; i_0 += 1) 
    {
        for (unsigned long long int i_1 = 2; i_1 < 22; i_1 += 1) 
        {
            {
                arr_7 [i_1] = ((/* implicit */int) ((((/* implicit */_Bool) (-(((/* implicit */int) arr_1 [i_1]))))) ? (((((/* implicit */_Bool) arr_0 [i_1 - 2])) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)15))) : (var_12))) : (((var_4) | (((/* implicit */unsigned int) (-(((/* implicit */int) arr_5 [i_1] [i_1])))))))));
                arr_8 [i_1] = (+(((/* implicit */int) ((((/* implicit */_Bool) ((-2147483630) | (((/* implicit */int) arr_5 [i_1] [i_1]))))) || (((((/* implicit */_Bool) (unsigned short)50223)) || (((/* implicit */_Bool) 231026962U))))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) var_7)) ? (var_9) : (var_9)))) ? (((829417297U) ^ (var_2))) : (((((/* implicit */_Bool) 2712709921U)) ? (var_4) : (var_4)))))));
}
