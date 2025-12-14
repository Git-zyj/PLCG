/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220191
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220191 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220191
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
    /* LoopSeq 3 */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) 
    {
        var_16 = ((/* implicit */int) ((((/* implicit */unsigned long long int) ((((/* implicit */int) (_Bool)1)) / (((/* implicit */int) arr_1 [i_0 - 1]))))) / (((((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0 - 1]))) - (var_13)))));
        var_17 = ((/* implicit */short) ((14414950804208684938ULL) + (((/* implicit */unsigned long long int) -5389443810234336133LL))));
        arr_2 [i_0] [i_0] = min((((/* implicit */short) (signed char)-90)), (((short) ((long long int) var_12))));
        var_18 = ((/* implicit */long long int) ((((/* implicit */int) arr_1 [i_0])) | ((((_Bool)0) ? ((-2147483647 - 1)) : (((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (((/* implicit */int) (short)32767)) : (((/* implicit */int) (signed char)89))))))));
        var_19 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_10)) ? (((/* implicit */unsigned int) min((((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_5)))), (((/* implicit */int) ((((/* implicit */int) (short)31872)) >= (((/* implicit */int) var_9)))))))) : (((((/* implicit */_Bool) (~(((/* implicit */int) var_4))))) ? (((/* implicit */unsigned int) ((/* implicit */int) min((((/* implicit */short) arr_1 [i_0])), ((short)32290))))) : (268435455U)))));
    }
    for (unsigned short i_1 = 1; i_1 < 19; i_1 += 2) /* same iter space */
    {
        arr_6 [i_1] [i_1 + 1] = ((/* implicit */long long int) ((_Bool) min((((/* implicit */int) (unsigned char)208)), (0))));
        var_20 = ((/* implicit */unsigned int) min((var_20), (((/* implicit */unsigned int) ((((/* implicit */_Bool) var_0)) && (((/* implicit */_Bool) (short)22737)))))));
    }
    for (unsigned short i_2 = 1; i_2 < 19; i_2 += 2) /* same iter space */
    {
        var_21 = ((/* implicit */unsigned int) min((((((/* implicit */long long int) var_2)) + (var_15))), (((/* implicit */long long int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_5 [i_2] [i_2 + 1])) ? (((/* implicit */unsigned int) arr_5 [i_2] [i_2 + 1])) : (var_2)))) ? (1749211664U) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) (unsigned short)32779)) ? (arr_5 [i_2] [i_2]) : (((/* implicit */int) (signed char)87))))))))));
        var_22 = ((/* implicit */signed char) (~(((((/* implicit */_Bool) arr_8 [i_2 + 2] [i_2 - 1])) ? (((/* implicit */int) arr_8 [i_2 + 3] [i_2])) : (((/* implicit */int) arr_8 [i_2 + 1] [10U]))))));
    }
    var_23 = ((/* implicit */unsigned long long int) var_4);
}
