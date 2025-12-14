/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219558
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219558 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219558
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
    var_15 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) max((((unsigned char) var_4)), (((/* implicit */unsigned char) ((signed char) (unsigned char)255)))))) ? ((-9223372036854775807LL - 1LL)) : (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_12)) && (((/* implicit */_Bool) 419214683263955413LL))))))));
    var_16 = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */_Bool) min(((unsigned char)219), (var_5)))) || (((/* implicit */_Bool) (-(((/* implicit */int) var_4))))))))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 21; i_0 += 1) 
    {
        for (unsigned short i_1 = 0; i_1 < 21; i_1 += 4) 
        {
            {
                var_17 = (unsigned char)255;
                var_18 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (-(((/* implicit */int) (unsigned char)83))))) ? (((/* implicit */long long int) ((/* implicit */int) var_13))) : (max((((/* implicit */long long int) ((((/* implicit */_Bool) var_3)) && (((/* implicit */_Bool) (unsigned char)255))))), (36028797018963967LL)))));
                var_19 = ((((((5581530589187551962LL) << (((arr_2 [i_0]) - (1905158031542870699LL))))) <= (((/* implicit */long long int) ((/* implicit */int) arr_5 [(unsigned char)15] [i_1]))))) ? ((((!(((/* implicit */_Bool) (unsigned char)240)))) ? (((((/* implicit */_Bool) var_6)) ? (var_6) : (((/* implicit */long long int) ((/* implicit */int) var_3))))) : (((/* implicit */long long int) (~(((/* implicit */int) var_4))))))) : ((-(((((/* implicit */long long int) ((/* implicit */int) arr_1 [i_1]))) ^ (1202339921103385849LL))))));
            }
        } 
    } 
}
