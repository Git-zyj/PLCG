/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192181
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192181 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192181
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
    var_13 = ((/* implicit */int) var_7);
    var_14 = ((/* implicit */short) var_7);
    /* LoopNest 2 */
    for (unsigned char i_0 = 0; i_0 < 22; i_0 += 2) 
    {
        for (short i_1 = 0; i_1 < 22; i_1 += 2) 
        {
            {
                var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_9)) ? (1063429142U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_0] [i_1])))))) ? (((/* implicit */int) arr_3 [i_0] [i_1])) : (((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))))) || (((/* implicit */_Bool) max((((/* implicit */long long int) (_Bool)1)), (9223372036854775807LL))))));
                var_16 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) 1220878459U))));
                var_17 = ((/* implicit */short) (~(((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_0])), (var_5))))));
            }
        } 
    } 
    var_18 = ((/* implicit */int) ((((int) var_0)) != ((-(((/* implicit */int) ((((/* implicit */_Bool) var_10)) || (((/* implicit */_Bool) 3074088836U)))))))));
}
