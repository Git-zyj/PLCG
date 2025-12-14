/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219390
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219390 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219390
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
    var_11 = ((/* implicit */signed char) min((((/* implicit */unsigned int) ((((/* implicit */int) ((((/* implicit */_Bool) (-2147483647 - 1))) || (((/* implicit */_Bool) var_0))))) << (((/* implicit */int) ((var_4) && (var_2))))))), (max((((((/* implicit */_Bool) 2147483645)) ? (((/* implicit */unsigned int) ((/* implicit */int) (unsigned char)70))) : (2509923479U))), (max((var_1), (((/* implicit */unsigned int) (_Bool)1))))))));
    /* LoopSeq 1 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned short) ((((((/* implicit */int) (unsigned char)196)) < (((/* implicit */int) (_Bool)1)))) ? (((/* implicit */unsigned long long int) min((arr_1 [i_0]), ((~(var_9)))))) : (min((arr_0 [(_Bool)1]), (((/* implicit */unsigned long long int) var_7))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) var_10);
        arr_3 [i_0] = ((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) 1047552)) + (arr_0 [i_0 - 1])))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) max(((unsigned char)62), (((/* implicit */unsigned char) var_2)))))) : (min((var_10), (((/* implicit */unsigned long long int) (+(var_3))))))));
        arr_4 [i_0] = ((/* implicit */_Bool) ((((((/* implicit */long long int) ((/* implicit */int) var_2))) < (var_9))) ? (max((((/* implicit */long long int) var_5)), (arr_1 [i_0]))) : (var_9)));
        var_13 = ((/* implicit */unsigned char) var_4);
    }
}
