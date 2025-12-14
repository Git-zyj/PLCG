/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234113
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234113 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234113
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
    var_17 = ((/* implicit */signed char) var_16);
    /* LoopSeq 1 */
    for (_Bool i_0 = 0; i_0 < 1; i_0 += 1) 
    {
        var_18 = ((/* implicit */unsigned long long int) var_13);
        var_19 = ((/* implicit */unsigned short) (((~(((/* implicit */int) min((var_14), (((/* implicit */short) (unsigned char)151))))))) >> ((((~(((/* implicit */int) arr_0 [i_0])))) - (25701)))));
    }
    /* LoopSeq 1 */
    for (short i_1 = 2; i_1 < 12; i_1 += 2) 
    {
        var_20 = ((/* implicit */long long int) (+(var_8)));
        var_21 = ((/* implicit */unsigned long long int) var_11);
        arr_6 [i_1 - 1] = (-(472144017));
    }
    var_22 = ((/* implicit */short) (!(((/* implicit */_Bool) var_13))));
}
