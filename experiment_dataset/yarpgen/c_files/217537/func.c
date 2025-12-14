/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217537
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217537 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217537
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
    var_18 = ((/* implicit */signed char) var_0);
    /* LoopNest 2 */
    for (signed char i_0 = 0; i_0 < 22; i_0 += 3) 
    {
        for (signed char i_1 = 0; i_1 < 22; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_0] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) min(((signed char)90), (arr_1 [i_0])))) ? (arr_0 [i_0]) : (((/* implicit */unsigned int) ((/* implicit */int) ((signed char) arr_3 [i_1] [i_1])))))))));
                var_19 ^= ((/* implicit */signed char) ((((/* implicit */_Bool) (~(arr_4 [i_1] [i_0] [i_0])))) ? (((arr_4 [i_0] [i_0] [i_1]) % (arr_4 [i_0] [i_1] [i_1]))) : (arr_4 [i_1] [i_1] [i_1])));
                var_20 *= ((/* implicit */signed char) (+(((unsigned int) arr_0 [i_1]))));
                var_21 ^= ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_4 [i_0] [i_1] [0U])) ? (((((/* implicit */unsigned int) ((/* implicit */int) arr_1 [(signed char)3]))) + (arr_2 [17U] [i_0]))) : (((unsigned int) (signed char)85)))), ((~((+(1409351298U)))))));
            }
        } 
    } 
}
