/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 48999
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=48999 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/48999
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
    /* LoopSeq 1 */
    for (signed char i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        var_18 = ((/* implicit */signed char) (~(((/* implicit */int) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) arr_1 [i_0])) : (((/* implicit */int) arr_0 [i_0] [i_0])))) == ((-(((/* implicit */int) arr_0 [(_Bool)1] [(_Bool)1])))))))));
        /* LoopNest 2 */
        for (unsigned int i_1 = 0; i_1 < 23; i_1 += 2) 
        {
            for (unsigned char i_2 = 0; i_2 < 23; i_2 += 3) 
            {
                {
                    arr_7 [i_1] [i_2] = ((/* implicit */signed char) min((((((/* implicit */_Bool) arr_5 [i_0 - 2] [i_0 - 1] [i_0 - 1])) ? (arr_5 [i_0 + 2] [i_0 + 1] [i_0 - 1]) : (arr_5 [i_0 + 1] [i_0 + 1] [i_0 - 1]))), (((/* implicit */long long int) (+((-(((/* implicit */int) arr_0 [(_Bool)1] [i_1])))))))));
                    arr_8 [i_2] [i_2] = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_2 [i_2])) ? ((~(((/* implicit */int) arr_0 [i_2] [i_0])))) : (((/* implicit */int) arr_3 [i_0] [i_0 + 2]))))));
                }
            } 
        } 
        var_19 &= ((/* implicit */_Bool) (~(((/* implicit */int) arr_3 [i_0 - 1] [i_0 - 1]))));
        var_20 *= ((/* implicit */unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0])) ? (arr_5 [i_0] [i_0 + 2] [i_0]) : (arr_5 [i_0 + 2] [(signed char)1] [i_0 + 2])))) ? (((((/* implicit */_Bool) arr_5 [i_0] [i_0 + 1] [i_0 + 2])) ? (arr_5 [i_0] [i_0 + 1] [i_0 + 1]) : (arr_5 [i_0] [i_0] [i_0]))) : (((/* implicit */long long int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_0] [i_0] [i_0]))))))));
    }
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_9))));
}
