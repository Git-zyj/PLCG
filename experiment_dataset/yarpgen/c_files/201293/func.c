/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 201293
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=201293 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/201293
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
    var_15 = ((/* implicit */unsigned long long int) (~(((((/* implicit */_Bool) var_12)) ? ((-(((/* implicit */int) (signed char)-101)))) : ((-(((/* implicit */int) (unsigned char)179))))))));
    /* LoopSeq 2 */
    for (int i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        arr_2 [(unsigned char)13] = ((/* implicit */unsigned char) arr_1 [12U] [i_0]);
        arr_3 [i_0] = ((/* implicit */_Bool) (-((~(((((/* implicit */int) arr_0 [i_0] [i_0])) ^ (((/* implicit */int) (unsigned char)165))))))));
    }
    for (unsigned short i_1 = 0; i_1 < 19; i_1 += 2) 
    {
        arr_8 [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) ((unsigned short) (unsigned char)165))) ? (((/* implicit */unsigned int) ((/* implicit */int) (!(((/* implicit */_Bool) arr_7 [i_1])))))) : (((((/* implicit */unsigned int) ((/* implicit */int) (signed char)77))) * (2371826143U)))))), (((unsigned long long int) arr_4 [i_1]))));
        arr_9 [i_1] = (~(-248741531));
        var_16 *= ((/* implicit */int) ((((((/* implicit */_Bool) (unsigned short)57734)) ? (max((var_3), (((/* implicit */unsigned long long int) var_5)))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((unsigned char) var_4)))))) % (((/* implicit */unsigned long long int) min((((int) arr_1 [i_1] [7ULL])), (((/* implicit */int) ((unsigned char) 1153818196U))))))));
    }
    var_17 = ((/* implicit */_Bool) min((min((var_11), (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned char)189)) + (((/* implicit */int) (unsigned short)10588))))))), (((/* implicit */unsigned int) max((((((((/* implicit */int) (signed char)-82)) + (2147483647))) << (((((/* implicit */int) (unsigned char)159)) - (159))))), (((/* implicit */int) var_8)))))));
    var_18 = ((/* implicit */long long int) var_10);
}
