/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 32256
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=32256 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/32256
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
    /* vectorizable */
    for (unsigned long long int i_0 = 0; i_0 < 23; i_0 += 4) 
    {
        var_18 = ((/* implicit */short) min((var_18), (((/* implicit */short) var_6))));
        var_19 = ((/* implicit */unsigned long long int) arr_1 [i_0]);
        var_20 += ((/* implicit */short) 2147483647);
    }
    for (unsigned long long int i_1 = 3; i_1 < 10; i_1 += 2) 
    {
        arr_5 [i_1] = ((/* implicit */_Bool) arr_0 [i_1 + 1]);
        arr_6 [i_1] = ((min((arr_4 [i_1 - 3]), (var_12))) * (((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) -2147483647)) || (((/* implicit */_Bool) arr_2 [i_1])))))));
        var_21 ^= ((/* implicit */signed char) min((arr_0 [i_1 - 2]), (((/* implicit */int) ((((/* implicit */int) var_11)) == ((~(((/* implicit */int) var_11)))))))));
    }
    var_22 = ((/* implicit */short) max((var_22), (((/* implicit */short) ((((-526096707723639515LL) + (9223372036854775807LL))) << (((((/* implicit */int) (unsigned char)162)) - (162))))))));
}
