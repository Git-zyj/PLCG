/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 30854
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=30854 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/30854
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
    var_14 = ((/* implicit */unsigned char) min((var_4), (((/* implicit */int) var_7))));
    var_15 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((long long int) (short)11642)) << ((((+(((/* implicit */int) (unsigned short)11359)))) - (11324)))))) && (((/* implicit */_Bool) var_5))));
    var_16 = ((/* implicit */signed char) ((1951719362339509967LL) << (((112093370U) - (112093368U)))));
    /* LoopNest 2 */
    for (long long int i_0 = 0; i_0 < 25; i_0 += 3) 
    {
        for (int i_1 = 3; i_1 < 24; i_1 += 1) 
        {
            {
                var_17 = ((/* implicit */short) ((((/* implicit */_Bool) -1022082447)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */int) (unsigned short)52714))));
                arr_6 [i_0] [i_0] [i_0] = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) ((((/* implicit */int) var_12)) << (((max((((/* implicit */int) var_7)), (arr_1 [i_0]))) + (21051))))))));
            }
        } 
    } 
}
