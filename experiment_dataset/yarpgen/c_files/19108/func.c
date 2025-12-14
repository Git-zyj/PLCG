/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 19108
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=19108 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/19108
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
    for (unsigned long long int i_0 = 3; i_0 < 19; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) ((((((/* implicit */int) (short)-581)) <= (((/* implicit */int) (short)581)))) ? (((int) ((var_8) * (((/* implicit */unsigned int) ((/* implicit */int) (short)-581)))))) : (((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_2 [i_0]) : (((/* implicit */int) arr_0 [i_0 - 2]))))));
        var_11 = ((/* implicit */long long int) ((((/* implicit */_Bool) var_8)) ? ((((~(15946331670215585387ULL))) * (min((var_3), (((/* implicit */unsigned long long int) arr_2 [i_0])))))) : (((((/* implicit */_Bool) ((unsigned char) (short)-564))) ? (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) (short)580)) : (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_3)) ? (15946331670215585372ULL) : (10ULL)))))));
        arr_4 [18] &= ((/* implicit */unsigned long long int) ((((/* implicit */int) (!(((/* implicit */_Bool) ((unsigned long long int) var_0)))))) < (((((/* implicit */_Bool) ((((/* implicit */_Bool) 622426675U)) ? (9223372036854775807LL) : (var_2)))) ? (((((/* implicit */_Bool) 15946331670215585381ULL)) ? (((/* implicit */int) var_10)) : (((/* implicit */int) arr_0 [i_0])))) : (((/* implicit */int) ((unsigned short) 3672540615U)))))));
        var_12 += ((/* implicit */unsigned int) (+(((18446744073709551605ULL) * (((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)119)))))));
        var_13 = ((/* implicit */unsigned long long int) ((unsigned char) ((((/* implicit */_Bool) min((((/* implicit */unsigned long long int) arr_0 [i_0 + 1])), (var_5)))) ? (((/* implicit */long long int) arr_2 [i_0])) : (max((((/* implicit */long long int) arr_2 [i_0])), (-165255638454226021LL))))));
    }
    for (short i_1 = 1; i_1 < 10; i_1 += 4) 
    {
        var_14 = ((/* implicit */int) min((var_14), (((/* implicit */int) ((((/* implicit */_Bool) 18446744073709551609ULL)) ? (((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)55927)) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)160))) : (2623260330600007479LL)))) ? (arr_6 [i_1 + 1]) : (var_1))) : (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) var_7)) ? (((/* implicit */int) (short)6113)) : (((/* implicit */int) (short)-12565))))))))));
        arr_8 [i_1] = ((/* implicit */unsigned int) (~(((((/* implicit */_Bool) ((((/* implicit */_Bool) 3ULL)) ? (6471336559069675327ULL) : (15946331670215585383ULL)))) ? (18446744073709551610ULL) : (arr_7 [i_1 + 1])))));
        var_15 = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) -948531745)) ? (max((3U), (((/* implicit */unsigned int) (unsigned short)65532)))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) -1876579457)) ? (-1876579460) : (((/* implicit */int) (signed char)73)))))));
    }
    var_16 = ((/* implicit */long long int) max((((/* implicit */unsigned long long int) ((((((/* implicit */unsigned long long int) var_2)) | (var_5))) <= (((((/* implicit */_Bool) (short)-23321)) ? (var_5) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)16128)))))))), (var_3)));
}
