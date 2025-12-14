/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 230576
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=230576 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/230576
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
    /* LoopSeq 2 */
    /* vectorizable */
    for (short i_0 = 0; i_0 < 22; i_0 += 2) /* same iter space */
    {
        var_20 |= ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) var_3))) + (var_10)))) ? (((/* implicit */int) ((((/* implicit */unsigned int) ((/* implicit */int) var_15))) > (var_0)))) : (((/* implicit */int) (!(((/* implicit */_Bool) var_13)))))));
        var_21 = ((/* implicit */signed char) max((var_21), (((/* implicit */signed char) ((((/* implicit */_Bool) ((((/* implicit */int) var_18)) & (var_11)))) ? (((/* implicit */int) ((((/* implicit */int) var_1)) > (((/* implicit */int) var_6))))) : (((var_11) | (((/* implicit */int) var_14)))))))));
        var_22 = ((/* implicit */short) var_15);
    }
    for (short i_1 = 0; i_1 < 22; i_1 += 2) /* same iter space */
    {
        var_23 = ((/* implicit */unsigned char) ((((((/* implicit */_Bool) ((((((/* implicit */int) (signed char)-112)) + (2147483647))) << (((((/* implicit */int) (unsigned char)116)) - (116)))))) || (((/* implicit */_Bool) ((((/* implicit */_Bool) var_0)) ? (var_0) : (((/* implicit */unsigned int) ((/* implicit */int) var_9)))))))) ? ((-(((/* implicit */int) (!(((/* implicit */_Bool) var_17))))))) : ((~(((/* implicit */int) var_5))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (!(((/* implicit */_Bool) var_0))));
    }
    var_24 = ((/* implicit */unsigned int) ((((/* implicit */_Bool) ((((/* implicit */int) var_3)) & (((/* implicit */int) (!(var_5))))))) && (((((/* implicit */int) (_Bool)1)) <= (((/* implicit */int) (_Bool)1))))));
    var_25 = ((/* implicit */short) max((var_25), (((/* implicit */short) var_7))));
    var_26 = ((/* implicit */unsigned char) ((((/* implicit */long long int) (((+(var_0))) * (((/* implicit */unsigned int) ((/* implicit */int) var_18)))))) / (var_12)));
    var_27 = ((/* implicit */_Bool) ((((((/* implicit */int) ((((/* implicit */int) var_16)) < (((/* implicit */int) var_3))))) / (((/* implicit */int) var_19)))) ^ (((/* implicit */int) ((((/* implicit */long long int) ((/* implicit */int) var_4))) >= (((((/* implicit */_Bool) var_10)) ? (var_10) : (((/* implicit */long long int) ((/* implicit */int) var_19))))))))));
}
