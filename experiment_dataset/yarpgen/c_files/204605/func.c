/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204605
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204605 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204605
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
    var_14 = ((/* implicit */unsigned short) (~(((/* implicit */int) var_13))));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 23; i_0 += 4) /* same iter space */
    {
        var_15 = ((/* implicit */_Bool) ((((((/* implicit */_Bool) ((((/* implicit */_Bool) var_12)) ? (((/* implicit */unsigned long long int) var_6)) : (var_10)))) ? (((var_5) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) var_13))))) : (((/* implicit */unsigned long long int) ((var_2) | (((/* implicit */long long int) ((/* implicit */int) var_12)))))))) & ((-(((var_5) * (((/* implicit */unsigned long long int) var_2))))))));
        var_16 = (!(((/* implicit */_Bool) (signed char)(-127 - 1))));
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) var_8)) > (((/* implicit */int) (signed char)111))));
        var_17 = ((/* implicit */unsigned int) ((((((/* implicit */_Bool) ((var_10) & (((/* implicit */unsigned long long int) ((/* implicit */int) var_3)))))) ? (((/* implicit */unsigned long long int) ((((/* implicit */int) var_1)) | (((/* implicit */int) var_3))))) : (((var_5) & (var_5))))) & (((/* implicit */unsigned long long int) (-((((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) (signed char)-109)))))))));
    }
    for (int i_1 = 1; i_1 < 23; i_1 += 4) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_8))) & (((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) var_7)) > (var_10))))) * (((((/* implicit */_Bool) var_3)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_12)))))))));
        arr_6 [i_1] = ((/* implicit */int) var_8);
        arr_7 [i_1] = ((/* implicit */unsigned short) var_9);
        var_18 = ((/* implicit */signed char) (!(((/* implicit */_Bool) (+(var_6))))));
        var_19 = ((/* implicit */signed char) (!(((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_11)) ? (((/* implicit */long long int) ((/* implicit */int) var_1))) : (var_2)))) > (var_5)))));
    }
    var_20 = (((~((~(((/* implicit */int) var_9)))))) ^ (((/* implicit */int) var_12)));
    var_21 = ((/* implicit */short) var_4);
    var_22 = ((((var_10) / (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) var_13))))))) * ((+(((((/* implicit */_Bool) var_8)) ? (var_4) : (((/* implicit */unsigned long long int) var_6)))))));
}
