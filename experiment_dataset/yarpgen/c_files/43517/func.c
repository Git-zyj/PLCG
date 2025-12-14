/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 43517
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=43517 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/43517
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
    var_12 = min((((((/* implicit */_Bool) var_2)) ? (((/* implicit */int) var_3)) : (((-4) + (((/* implicit */int) var_6)))))), (((/* implicit */int) ((((/* implicit */_Bool) var_4)) || (((/* implicit */_Bool) (-(var_7))))))));
    /* LoopSeq 1 */
    for (signed char i_0 = 0; i_0 < 12; i_0 += 3) 
    {
        var_13 ^= ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */int) var_3)) > (((((/* implicit */int) arr_0 [2])) + (((/* implicit */int) arr_1 [i_0]))))))) >> ((((-(((/* implicit */int) arr_1 [i_0])))) + (22316)))));
        /* LoopSeq 1 */
        for (signed char i_1 = 0; i_1 < 12; i_1 += 3) 
        {
            var_14 += ((/* implicit */int) var_4);
            var_15 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (~(((/* implicit */int) arr_1 [i_0]))))) - (((((/* implicit */_Bool) var_6)) ? (((/* implicit */long long int) ((/* implicit */int) arr_2 [i_1]))) : (3328681596363719443LL)))));
        }
        arr_5 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [(signed char)0])) ? (((/* implicit */int) arr_0 [i_0])) : (-1353346176)))) ? (((/* implicit */int) arr_2 [i_0])) : ((-(var_9)))))) || (((/* implicit */_Bool) arr_0 [i_0]))));
    }
    var_16 = ((/* implicit */_Bool) var_5);
    var_17 = ((/* implicit */long long int) ((int) var_6));
}
