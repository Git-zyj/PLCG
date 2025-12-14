/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 28028
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=28028 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/28028
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
    var_18 = ((/* implicit */_Bool) -1578247976850120355LL);
    var_19 |= ((_Bool) max((((((/* implicit */_Bool) -1457026244)) ? (((/* implicit */long long int) ((/* implicit */int) (short)5))) : (var_2))), (((((/* implicit */long long int) ((/* implicit */int) var_7))) / (8324467586366217279LL)))));
    var_20 = ((/* implicit */short) var_10);
    /* LoopNest 2 */
    for (int i_0 = 0; i_0 < 17; i_0 += 4) 
    {
        for (unsigned char i_1 = 0; i_1 < 17; i_1 += 2) 
        {
            {
                arr_5 [i_0] = ((/* implicit */short) (-(((((/* implicit */_Bool) arr_0 [i_0])) ? (((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_4 [(_Bool)1]))))) : (max((((/* implicit */unsigned long long int) arr_3 [i_0] [i_0])), (14116248927685153873ULL)))))));
                arr_6 [i_1] = ((/* implicit */_Bool) 3443615623U);
                var_21 = ((/* implicit */short) ((((/* implicit */int) max((arr_1 [i_1]), (((/* implicit */unsigned char) ((_Bool) (signed char)-112)))))) < (((/* implicit */int) var_9))));
            }
        } 
    } 
}
