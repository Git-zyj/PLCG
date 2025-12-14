/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39850
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39850 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39850
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
    var_19 = ((((/* implicit */_Bool) (-(var_18)))) ? (((/* implicit */int) ((((/* implicit */_Bool) (+(9223372036854775807LL)))) || (((/* implicit */_Bool) var_11))))) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) var_3)) ? (var_6) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_0)))))) ? (((/* implicit */int) var_4)) : (((((/* implicit */_Bool) var_0)) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_17)))))));
    /* LoopSeq 3 */
    for (int i_0 = 1; i_0 < 20; i_0 += 1) 
    {
        var_20 = ((/* implicit */unsigned short) arr_2 [(signed char)14] [(signed char)14]);
        arr_3 [i_0] = ((/* implicit */int) max((((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) (unsigned short)2772)) : (((/* implicit */int) (unsigned short)62748))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 - 1]))) : (((((/* implicit */_Bool) (short)22341)) ? (((/* implicit */unsigned long long int) ((/* implicit */int) arr_1 [i_0]))) : (var_3))))), (((/* implicit */unsigned long long int) var_13))));
    }
    for (long long int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_6 [i_1] = ((/* implicit */short) min((((long long int) arr_5 [i_1 + 2] [i_1])), (((/* implicit */long long int) min((max((arr_4 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1 + 2])))), ((-(arr_4 [i_1]))))))));
        arr_7 [i_1] = ((/* implicit */int) max(((unsigned short)62763), (((/* implicit */unsigned short) ((((/* implicit */int) max((arr_5 [i_1] [i_1]), (arr_5 [i_1] [i_1])))) <= (((/* implicit */int) ((((/* implicit */int) (short)22341)) < (((/* implicit */int) var_14))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) min((max((((/* implicit */short) max((((/* implicit */unsigned char) var_10)), (var_9)))), ((short)(-32767 - 1)))), (((short) max((arr_4 [i_1]), (((/* implicit */int) arr_5 [i_1] [i_1 - 1])))))));
    }
    /* vectorizable */
    for (unsigned long long int i_2 = 0; i_2 < 18; i_2 += 1) 
    {
        var_21 = ((/* implicit */short) max((var_21), (((/* implicit */short) arr_4 [i_2]))));
        arr_13 [i_2] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_11 [i_2])) ? (((/* implicit */long long int) ((/* implicit */int) arr_5 [i_2] [i_2]))) : (arr_2 [i_2] [(unsigned short)0])));
    }
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_5))));
}
