/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 218063
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=218063 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/218063
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
    var_15 = ((/* implicit */unsigned long long int) (-(((/* implicit */int) var_5))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 23; i_0 += 1) /* same iter space */
    {
        var_16 ^= ((/* implicit */unsigned int) (~((~(((/* implicit */int) var_11))))));
        var_17 = ((/* implicit */long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) var_14)))));
        arr_3 [i_0] = ((/* implicit */unsigned int) var_3);
        var_18 ^= ((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [i_0] [i_0]))));
    }
    for (short i_1 = 0; i_1 < 23; i_1 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) (!(((/* implicit */_Bool) var_3))));
        var_20 = ((/* implicit */_Bool) (+(min((((/* implicit */int) ((((/* implicit */int) arr_5 [i_1])) >= (arr_2 [(unsigned char)3])))), ((~(2147483647)))))));
        /* LoopSeq 1 */
        for (unsigned char i_2 = 0; i_2 < 23; i_2 += 2) 
        {
            var_21 = ((/* implicit */short) (~(max((-2156684925325630762LL), (((/* implicit */long long int) (_Bool)1))))));
            arr_8 [i_1] [i_1] = (+(((/* implicit */int) arr_0 [i_2] [i_1])));
            var_22 = ((/* implicit */short) min((var_22), (((/* implicit */short) max((((/* implicit */int) ((((/* implicit */_Bool) arr_1 [i_1])) || (((/* implicit */_Bool) (-(((/* implicit */int) var_5)))))))), ((-(((/* implicit */int) arr_0 [i_1] [i_1])))))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned char) (~((-((~(var_0)))))));
            arr_10 [i_1] = ((/* implicit */unsigned char) (+(((/* implicit */int) ((((/* implicit */int) arr_6 [i_1])) >= (((((/* implicit */_Bool) arr_0 [i_2] [15U])) ? (arr_7 [i_1]) : (2147483647))))))));
        }
    }
    var_23 = ((/* implicit */long long int) (~(((/* implicit */int) ((((/* implicit */_Bool) max((((/* implicit */int) var_4)), (2147483647)))) || (((/* implicit */_Bool) (~(-2147483647)))))))));
}
