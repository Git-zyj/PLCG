/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224726
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224726 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224726
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
    var_13 = ((/* implicit */unsigned short) ((_Bool) (_Bool)1));
    var_14 = ((/* implicit */unsigned short) var_11);
    /* LoopSeq 2 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 6; i_0 += 2) 
    {
        var_15 = ((/* implicit */unsigned short) (+(var_6)));
        arr_2 [i_0] [i_0] = ((/* implicit */int) ((long long int) var_11));
    }
    for (unsigned short i_1 = 0; i_1 < 15; i_1 += 1) 
    {
        var_16 = ((/* implicit */unsigned long long int) min((var_16), (((/* implicit */unsigned long long int) ((((((/* implicit */int) ((((/* implicit */int) (signed char)(-127 - 1))) != (((/* implicit */int) (unsigned short)15204))))) << (((min((arr_6 [i_1]), (((/* implicit */int) var_5)))) + (28260))))) >= (((/* implicit */int) var_9)))))));
        var_17 = ((/* implicit */unsigned char) ((min((((((/* implicit */_Bool) arr_5 [i_1])) ? (((/* implicit */int) arr_4 [(signed char)3])) : (((/* implicit */int) arr_3 [i_1] [i_1])))), (((/* implicit */int) var_8)))) - (((((/* implicit */_Bool) ((var_7) * (((/* implicit */unsigned long long int) var_3))))) ? (arr_6 [i_1]) : (((/* implicit */int) var_10))))));
        arr_7 [i_1] = ((/* implicit */long long int) (_Bool)1);
        arr_8 [i_1] = ((/* implicit */signed char) ((((/* implicit */int) var_10)) & ((-(((/* implicit */int) ((((/* implicit */int) var_8)) < (((/* implicit */int) var_8)))))))));
        arr_9 [i_1] = ((/* implicit */_Bool) ((unsigned short) (+(((/* implicit */int) var_11)))));
    }
}
