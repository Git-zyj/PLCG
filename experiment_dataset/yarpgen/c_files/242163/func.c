/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 242163
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=242163 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/242163
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
    for (unsigned long long int i_0 = 2; i_0 < 23; i_0 += 1) /* same iter space */
    {
        arr_2 [i_0] = ((/* implicit */int) ((unsigned short) var_13));
        var_18 = ((/* implicit */unsigned long long int) max((var_18), (((/* implicit */unsigned long long int) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)0))) <= (min((var_16), (((/* implicit */unsigned long long int) arr_0 [(signed char)16])))))))));
        var_19 += ((/* implicit */unsigned char) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_0])) ? (max((var_2), (((/* implicit */unsigned int) (unsigned short)65535)))) : (((/* implicit */unsigned int) ((/* implicit */int) (short)31460)))))) != (max((var_4), (((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_1 [i_0])))))))));
    }
    for (unsigned long long int i_1 = 2; i_1 < 23; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] [i_1] = ((/* implicit */unsigned char) max((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) (unsigned char)217))))), (min((min((((/* implicit */unsigned long long int) (unsigned char)21)), (2620721445805194829ULL))), (((/* implicit */unsigned long long int) (unsigned char)147))))));
        arr_6 [i_1] [i_1] = ((/* implicit */long long int) (~(var_3)));
        var_20 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (~(((/* implicit */int) arr_0 [16]))))) ? (((/* implicit */int) min(((signed char)7), ((signed char)-18)))) : (((/* implicit */int) min((((/* implicit */unsigned short) arr_1 [i_1])), ((unsigned short)46393))))));
    }
    for (unsigned short i_2 = 2; i_2 < 21; i_2 += 3) 
    {
        var_21 = ((/* implicit */signed char) min((var_21), (((/* implicit */signed char) 1399048733U))));
        arr_9 [i_2] |= max((((unsigned long long int) (unsigned short)59750)), (((/* implicit */unsigned long long int) (unsigned short)46393)));
    }
    var_22 += ((/* implicit */long long int) ((unsigned char) var_6));
    var_23 = ((/* implicit */signed char) max((var_23), (((/* implicit */signed char) min((min((min((var_11), (((/* implicit */long long int) (short)31460)))), (-2339615467634123306LL))), (((/* implicit */long long int) var_8)))))));
    var_24 = ((/* implicit */long long int) ((((/* implicit */int) var_17)) >> (((var_7) + (1409832698246400252LL)))));
}
