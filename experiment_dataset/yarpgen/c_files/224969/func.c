/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224969
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224969 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224969
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
    var_11 = ((/* implicit */short) (((+(((/* implicit */int) ((((/* implicit */_Bool) (unsigned short)65535)) && ((_Bool)0)))))) & (((/* implicit */int) var_0))));
    var_12 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (unsigned short i_0 = 0; i_0 < 11; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 11; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(((var_7) | (((/* implicit */int) arr_4 [i_0]))))))) && (((/* implicit */_Bool) arr_0 [i_1]))));
                arr_6 [i_1] &= ((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)0)) ? (var_4) : (arr_3 [i_0])))) ? (((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) arr_3 [i_0]))))) : ((+(((/* implicit */int) var_0)))))) % (((/* implicit */int) ((unsigned short) arr_0 [i_0]))));
            }
        } 
    } 
    var_13 = ((/* implicit */long long int) (!(((/* implicit */_Bool) var_1))));
    var_14 = ((/* implicit */unsigned char) ((unsigned short) 3195666418U));
}
