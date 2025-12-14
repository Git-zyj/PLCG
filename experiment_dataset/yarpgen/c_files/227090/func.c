/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 227090
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=227090 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/227090
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
    var_18 = ((/* implicit */int) min((var_18), (((/* implicit */int) ((18446744073709551594ULL) ^ (((/* implicit */unsigned long long int) ((/* implicit */int) (short)24872))))))));
    var_19 = ((/* implicit */_Bool) var_0);
    var_20 = ((/* implicit */short) ((long long int) var_6));
    /* LoopSeq 1 */
    /* vectorizable */
    for (short i_0 = 2; i_0 < 21; i_0 += 4) 
    {
        /* LoopSeq 1 */
        for (unsigned short i_1 = 1; i_1 < 21; i_1 += 4) 
        {
            arr_5 [i_1] [i_1] [i_0] = 22ULL;
            arr_6 [i_1] = ((/* implicit */unsigned short) arr_2 [i_1]);
            var_21 *= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */int) (signed char)38)) & (((/* implicit */int) (_Bool)0))))) ? (((/* implicit */int) (unsigned short)64826)) : (-620554056)));
            arr_7 [i_1] = ((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0 + 1])) ? (((/* implicit */int) (short)-1)) : (((/* implicit */int) arr_2 [18ULL]))));
        }
        var_22 = ((/* implicit */int) -3419453045100876080LL);
        var_23 = ((/* implicit */unsigned int) arr_1 [i_0]);
    }
}
