/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 209987
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=209987 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/209987
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
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 2; i_1 < 20; i_1 += 2) 
        {
            {
                var_12 ^= ((/* implicit */short) ((((/* implicit */_Bool) arr_5 [i_0])) ? (((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)31743))) >= (max((var_3), (((/* implicit */unsigned long long int) var_6))))))) : (min((arr_4 [i_1 + 1] [i_1 + 3]), (arr_4 [i_1 + 4] [i_1 + 2])))));
                var_13 = ((/* implicit */long long int) max((var_13), (((/* implicit */long long int) var_4))));
                var_14 = ((/* implicit */short) ((unsigned short) ((((/* implicit */long long int) var_4)) % (min((arr_5 [i_1]), (((/* implicit */long long int) var_1)))))));
            }
        } 
    } 
    var_15 = ((/* implicit */int) ((((/* implicit */_Bool) var_0)) ? (((((/* implicit */_Bool) ((unsigned short) var_2))) ? (max((((/* implicit */unsigned long long int) var_9)), (var_8))) : (var_8))) : (((/* implicit */unsigned long long int) ((unsigned int) ((((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)33793))) < (var_4)))))));
    var_16 = ((/* implicit */_Bool) (+(((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_5)) : (((/* implicit */int) var_1))))));
    var_17 ^= min((((/* implicit */int) ((((/* implicit */int) (unsigned short)31743)) == (-1)))), (((int) var_0)));
    var_18 = ((/* implicit */int) ((((((/* implicit */unsigned int) (+(16)))) == (var_11))) ? (((max((var_4), (((/* implicit */unsigned int) (unsigned short)65535)))) << (((((/* implicit */_Bool) 0U)) ? (var_6) : (((/* implicit */int) var_1)))))) : (((/* implicit */unsigned int) (-(((/* implicit */int) var_1)))))));
}
