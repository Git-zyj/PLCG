/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 204031
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=204031 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/204031
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
    var_10 = 703944618;
    var_11 = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) 703944598))));
    /* LoopSeq 1 */
    /* vectorizable */
    for (unsigned int i_0 = 0; i_0 < 14; i_0 += 2) 
    {
        var_12 ^= ((/* implicit */long long int) 0ULL);
        arr_2 [i_0] = ((/* implicit */signed char) ((((/* implicit */int) arr_0 [i_0])) == (((/* implicit */int) arr_0 [i_0]))));
        var_13 = ((/* implicit */unsigned short) (((-(18446744073709551588ULL))) != (((/* implicit */unsigned long long int) 592933825U))));
    }
}
