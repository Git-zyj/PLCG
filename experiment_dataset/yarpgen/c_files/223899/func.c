/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 223899
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=223899 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/223899
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
    var_11 *= ((/* implicit */signed char) var_5);
    /* LoopSeq 2 */
    for (short i_0 = 3; i_0 < 12; i_0 += 1) 
    {
        var_12 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (+(3889336295U)))) ? (min((3963252725U), (405631001U))) : (((/* implicit */unsigned int) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) arr_1 [i_0 - 3])) : (((/* implicit */int) arr_1 [i_0 - 3])))))));
        var_13 = ((/* implicit */int) arr_1 [i_0]);
        var_14 = ((/* implicit */unsigned int) var_10);
        arr_2 [i_0 - 2] = ((/* implicit */signed char) max(((+(((/* implicit */int) arr_1 [i_0 - 2])))), (((/* implicit */int) arr_0 [i_0 + 2]))));
    }
    for (unsigned long long int i_1 = 0; i_1 < 22; i_1 += 3) 
    {
        arr_7 [i_1] [(unsigned char)20] = ((/* implicit */unsigned int) min((((((((/* implicit */int) (signed char)33)) == (((/* implicit */int) arr_6 [i_1])))) ? ((-(var_3))) : (((/* implicit */unsigned long long int) arr_3 [i_1] [i_1])))), (((/* implicit */unsigned long long int) min((((/* implicit */int) arr_6 [i_1])), (var_5))))));
        var_15 = ((/* implicit */unsigned char) min((((/* implicit */unsigned int) ((((/* implicit */_Bool) (short)8680)) ? (((/* implicit */int) (signed char)-34)) : (((/* implicit */int) (signed char)6))))), (arr_3 [i_1] [i_1])));
    }
    var_16 = max(((signed char)-37), ((signed char)111));
}
