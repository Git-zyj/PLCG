/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214551
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214551 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214551
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
    var_16 = ((/* implicit */unsigned int) max((var_16), (((/* implicit */unsigned int) ((1289386894) >> (((((/* implicit */int) (unsigned short)16338)) - (16329))))))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 18; i_0 += 3) 
    {
        var_17 = ((/* implicit */unsigned char) arr_0 [i_0] [i_0]);
        arr_3 [i_0] = ((/* implicit */unsigned short) -1289386889);
    }
    var_18 *= ((max((5449296737696488373ULL), (((/* implicit */unsigned long long int) max(((short)-21636), (((/* implicit */short) var_0))))))) ^ (((/* implicit */unsigned long long int) ((((/* implicit */unsigned int) ((/* implicit */int) ((((/* implicit */_Bool) (short)-21636)) || (((/* implicit */_Bool) (short)-25561)))))) % (586351181U)))));
    var_19 = ((/* implicit */long long int) ((((/* implicit */_Bool) (short)14336)) ? (1030887081U) : (((/* implicit */unsigned int) ((/* implicit */int) (signed char)-85)))));
}
