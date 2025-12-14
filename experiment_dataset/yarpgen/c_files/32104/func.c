/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32104
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32104 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32104
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
    for (unsigned short i_0 = 1; i_0 < 20; i_0 += 3) 
    {
        var_11 = ((/* implicit */unsigned short) arr_0 [i_0]);
        var_12 = ((/* implicit */unsigned short) var_10);
        var_13 |= ((/* implicit */unsigned long long int) max((((/* implicit */long long int) (_Bool)1)), (((((/* implicit */_Bool) (signed char)-24)) ? (((/* implicit */long long int) ((/* implicit */int) (signed char)3))) : (((((/* implicit */_Bool) arr_0 [i_0])) ? (arr_2 [19]) : (((/* implicit */long long int) ((/* implicit */int) (signed char)-11)))))))));
    }
    for (unsigned short i_1 = 2; i_1 < 16; i_1 += 1) 
    {
        var_14 = ((/* implicit */unsigned short) max((((/* implicit */unsigned long long int) (~(((/* implicit */int) (short)-18940))))), (max((((/* implicit */unsigned long long int) arr_0 [i_1 - 2])), (arr_5 [i_1 - 2] [i_1])))));
        var_15 = ((/* implicit */int) max((((/* implicit */long long int) (+(((/* implicit */int) max((var_2), (((/* implicit */unsigned char) (_Bool)1)))))))), (max((((/* implicit */long long int) (+(((/* implicit */int) var_2))))), (max((((/* implicit */long long int) var_0)), (8423337612695942565LL)))))));
        arr_6 [(signed char)15] [i_1] &= ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_2 [10LL])) ? (((((/* implicit */_Bool) var_4)) ? (((((/* implicit */int) (unsigned short)32159)) >> (((arr_2 [i_1]) + (8334221729090889374LL))))) : (((/* implicit */int) arr_4 [i_1])))) : (((/* implicit */int) max((((short) (_Bool)1)), (max((var_5), (((/* implicit */short) (_Bool)1)))))))));
        var_16 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) arr_5 [(_Bool)1] [i_1])) && (((/* implicit */_Bool) (signed char)0))));
    }
    var_17 = ((/* implicit */_Bool) (((_Bool)1) ? (var_1) : (((/* implicit */long long int) ((/* implicit */int) var_6)))));
    var_18 -= max((((/* implicit */unsigned long long int) max((((/* implicit */int) (short)10029)), (((((/* implicit */_Bool) (signed char)3)) ? (((/* implicit */int) (signed char)0)) : (((/* implicit */int) var_6))))))), (max((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)151)) ? (((/* implicit */int) (signed char)8)) : (((/* implicit */int) (_Bool)1))))), (var_4))));
}
