/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205606
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205606 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205606
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
    for (long long int i_0 = 0; i_0 < 13; i_0 += 3) 
    {
        var_16 = ((/* implicit */unsigned int) min(((-(5799989896088772045LL))), (((/* implicit */long long int) ((((((/* implicit */_Bool) 2096640U)) ? (2096640U) : (arr_0 [(unsigned short)3]))) * (((/* implicit */unsigned int) ((/* implicit */int) ((arr_0 [i_0]) <= (((/* implicit */unsigned int) ((/* implicit */int) (unsigned short)30255))))))))))));
        /* LoopSeq 1 */
        for (long long int i_1 = 0; i_1 < 13; i_1 += 3) 
        {
            var_17 += ((/* implicit */long long int) ((unsigned int) (!(((/* implicit */_Bool) (unsigned short)30250)))));
            var_18 = ((/* implicit */signed char) ((((/* implicit */int) ((((/* implicit */_Bool) arr_0 [i_1])) || (((/* implicit */_Bool) arr_0 [i_0]))))) % (((((/* implicit */int) var_4)) + (((/* implicit */int) var_11))))));
        }
    }
    var_19 = ((/* implicit */unsigned char) var_2);
    var_20 = ((/* implicit */unsigned char) max(((~(var_14))), (((/* implicit */long long int) max((4294967295U), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_14)) && (((/* implicit */_Bool) var_1))))))))));
}
