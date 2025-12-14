/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 40394
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=40394 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/40394
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
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        /* LoopSeq 1 */
        for (signed char i_1 = 2; i_1 < 10; i_1 += 2) 
        {
            arr_6 [i_0] = ((/* implicit */short) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) max((arr_4 [i_0]), (((/* implicit */long long int) var_0))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [3LL] [i_1]))) : (((((/* implicit */_Bool) arr_3 [i_1])) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_5 [i_1 + 1] [i_0 - 1]))) : (arr_3 [i_0]))))))));
            arr_7 [i_0 - 1] [i_1 + 1] = ((/* implicit */long long int) min((arr_3 [i_1 + 2]), (((/* implicit */unsigned long long int) (-(((/* implicit */int) var_12)))))));
        }
        var_18 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
    var_19 = ((/* implicit */unsigned char) (!(((/* implicit */_Bool) (unsigned short)3129))));
    var_20 ^= ((/* implicit */unsigned char) var_5);
    var_21 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~((+(((/* implicit */int) var_14))))))) || (((/* implicit */_Bool) min((((/* implicit */unsigned long long int) ((signed char) var_17))), (((unsigned long long int) (unsigned char)255)))))));
    var_22 += ((/* implicit */unsigned char) var_12);
}
