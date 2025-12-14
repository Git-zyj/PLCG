/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 3545
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=3545 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/3545
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
    var_10 = ((/* implicit */int) ((unsigned int) var_5));
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 20; i_0 += 2) 
    {
        for (signed char i_1 = 0; i_1 < 20; i_1 += 3) 
        {
            {
                arr_6 [i_1] [i_1] [i_0] = ((/* implicit */unsigned int) ((((/* implicit */_Bool) 2505513783538565535LL)) ? (((/* implicit */int) (unsigned short)13433)) : (((/* implicit */int) (_Bool)1))));
                arr_7 [i_1] = ((/* implicit */signed char) ((((/* implicit */_Bool) ((arr_2 [i_1]) ? (((/* implicit */int) (unsigned char)163)) : (((/* implicit */int) arr_2 [i_0]))))) ? (((/* implicit */int) ((signed char) (short)-27896))) : (((arr_2 [i_1]) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) arr_0 [i_0]))))));
            }
        } 
    } 
    var_11 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((long long int) ((((/* implicit */_Bool) var_3)) ? (((/* implicit */unsigned int) var_1)) : (var_9))))) ? (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_6)) ? (var_1) : (((/* implicit */int) ((unsigned char) (unsigned char)255)))))) : (var_3)));
}
