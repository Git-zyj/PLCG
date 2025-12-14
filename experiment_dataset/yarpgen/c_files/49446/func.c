/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 49446
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=49446 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/49446
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
    for (unsigned long long int i_0 = 0; i_0 < 10; i_0 += 1) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned char) var_5);
        arr_3 [i_0] = ((/* implicit */unsigned char) min((((/* implicit */int) min(((signed char)57), (((/* implicit */signed char) ((((/* implicit */_Bool) (signed char)-42)) || (((/* implicit */_Bool) 1278692882)))))))), (((((/* implicit */_Bool) arr_1 [i_0] [i_0])) ? (((/* implicit */int) arr_1 [i_0] [i_0])) : (((/* implicit */int) (unsigned char)128))))));
        var_13 *= ((/* implicit */unsigned short) (!(arr_0 [i_0])));
    }
    var_14 = (+(var_10));
}
