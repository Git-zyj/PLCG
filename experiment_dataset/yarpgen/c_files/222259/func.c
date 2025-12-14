/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 222259
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=222259 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/222259
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
    var_11 = ((/* implicit */short) max((var_11), (((/* implicit */short) ((((/* implicit */_Bool) ((((unsigned int) var_1)) % (((/* implicit */unsigned int) ((/* implicit */int) var_8)))))) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_3))))))));
    /* LoopNest 2 */
    for (short i_0 = 1; i_0 < 23; i_0 += 3) 
    {
        for (int i_1 = 0; i_1 < 25; i_1 += 4) 
        {
            {
                var_12 -= ((/* implicit */short) var_3);
                var_13 *= ((/* implicit */short) (-(max(((+(5900214953689686132LL))), (((/* implicit */long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) var_9)))))))));
                arr_6 [i_0] = ((/* implicit */unsigned int) max((((((/* implicit */_Bool) arr_0 [i_1])) ? (((/* implicit */int) arr_1 [i_0] [i_0 + 1])) : (var_1))), ((-(((/* implicit */int) arr_1 [i_0 - 1] [i_0 - 1]))))));
                var_14 = ((/* implicit */unsigned char) max((max((((/* implicit */unsigned short) arr_3 [i_0 - 1])), (min((arr_5 [(signed char)0] [(signed char)0] [i_1]), (((/* implicit */unsigned short) arr_0 [i_0])))))), (((/* implicit */unsigned short) ((((/* implicit */unsigned int) ((arr_2 [i_0 + 2]) ? (((/* implicit */int) (signed char)80)) : (((/* implicit */int) arr_5 [i_0] [i_1] [(signed char)7]))))) >= (((((/* implicit */_Bool) var_0)) ? (1122369873U) : (((/* implicit */unsigned int) ((/* implicit */int) arr_2 [i_1]))))))))));
                arr_7 [i_0] [i_0] [(short)17] = (+(((/* implicit */int) (!(((/* implicit */_Bool) (+(((/* implicit */int) (unsigned short)43720)))))))));
            }
        } 
    } 
}
