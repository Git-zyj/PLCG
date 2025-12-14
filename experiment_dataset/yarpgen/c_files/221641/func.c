/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 221641
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=221641 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/221641
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
    var_14 = ((((/* implicit */long long int) (-(var_2)))) >= (((((/* implicit */long long int) (+(var_12)))) / ((-(var_11))))));
    /* LoopSeq 2 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        var_15 = ((/* implicit */signed char) ((4602678819172646912LL) != (((/* implicit */long long int) ((/* implicit */int) (short)-32477)))));
        arr_3 [i_0] = ((/* implicit */unsigned short) var_11);
    }
    for (unsigned short i_1 = 0; i_1 < 23; i_1 += 3) 
    {
        var_16 = ((/* implicit */short) ((((((/* implicit */int) var_0)) * (((/* implicit */int) var_6)))) & (var_8)));
        var_17 = ((/* implicit */short) ((((((/* implicit */_Bool) ((((/* implicit */int) (short)-15819)) ^ (((/* implicit */int) var_0))))) ? (((/* implicit */long long int) ((/* implicit */int) (unsigned char)224))) : (var_11))) & (((/* implicit */long long int) var_10))));
        var_18 -= ((/* implicit */int) ((3691179449617711244LL) > (((/* implicit */long long int) -1019603057))));
    }
}
