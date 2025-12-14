/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38745
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38745 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38745
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
    /* LoopSeq 1 */
    for (short i_0 = 4; i_0 < 8; i_0 += 3) 
    {
        arr_2 [i_0] [5ULL] = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) (unsigned char)26)), (-1202075212427327009LL)));
        arr_3 [0U] [i_0] = ((((/* implicit */unsigned long long int) ((/* implicit */int) ((((/* implicit */unsigned long long int) -1202075212427327025LL)) <= (arr_0 [i_0 + 2]))))) - (((((/* implicit */_Bool) arr_1 [i_0])) ? (min((((/* implicit */unsigned long long int) 1202075212427326996LL)), (0ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned char)66))))));
        arr_4 [i_0] [i_0] = max((((((/* implicit */_Bool) arr_0 [i_0 - 1])) ? (((/* implicit */int) (signed char)121)) : (var_6))), (var_6));
        arr_5 [i_0] = ((/* implicit */unsigned int) ((signed char) min((max((((/* implicit */unsigned long long int) var_10)), (arr_0 [i_0 + 2]))), (18446744073709551598ULL))));
    }
    var_12 = min((((/* implicit */long long int) var_7)), (min((((/* implicit */long long int) var_10)), (((7196226101236970240LL) - (((/* implicit */long long int) ((/* implicit */int) (signed char)93))))))));
    var_13 = ((/* implicit */unsigned short) ((signed char) max((((/* implicit */unsigned short) (signed char)44)), (var_4))));
    var_14 &= ((/* implicit */unsigned short) -1202075212427326984LL);
}
