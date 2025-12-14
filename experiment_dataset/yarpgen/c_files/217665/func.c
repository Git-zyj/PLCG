/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 217665
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=217665 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/217665
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
    var_16 = ((var_7) ? (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) -1300064241)))) : (((((/* implicit */_Bool) min((var_11), (1300064217)))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) (!(var_7))))) : (((((/* implicit */_Bool) var_4)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) : (var_1))))));
    var_17 = ((/* implicit */unsigned long long int) (-((+(((/* implicit */int) var_0))))));
    var_18 = var_9;
    /* LoopNest 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        for (int i_1 = 4; i_1 < 23; i_1 += 2) 
        {
            for (unsigned long long int i_2 = 3; i_2 < 21; i_2 += 2) 
            {
                {
                    var_19 = ((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) arr_5 [i_2 - 2] [i_2])) % (var_13)))) ? ((~(7600854077302049330ULL))) : (((/* implicit */unsigned long long int) (+(arr_5 [i_2 + 4] [(_Bool)1])))));
                    /* LoopSeq 1 */
                    for (unsigned long long int i_3 = 0; i_3 < 25; i_3 += 4) 
                    {
                        var_20 = ((/* implicit */int) (!(((/* implicit */_Bool) ((((/* implicit */_Bool) arr_7 [i_1 - 1] [i_0] [i_2 + 1])) ? (arr_7 [i_1 - 1] [i_0] [i_2 + 1]) : (arr_7 [i_1 - 1] [i_0] [i_2 + 1]))))));
                        var_21 -= ((/* implicit */unsigned char) arr_3 [i_1]);
                    }
                    var_22 = ((/* implicit */int) ((((/* implicit */_Bool) -1300064226)) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_13)) ? (((/* implicit */int) arr_2 [i_0 - 1])) : (((int) var_10))))) : ((-(((((/* implicit */_Bool) arr_10 [i_0] [i_0] [i_2])) ? (10248493921135636046ULL) : (var_9)))))));
                }
            } 
        } 
    } 
    var_23 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((/* implicit */int) var_12))) <= ((~(var_5)))));
}
