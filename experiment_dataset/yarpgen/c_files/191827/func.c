/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191827
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191827 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191827
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
    var_18 = ((/* implicit */int) ((1393089449) >= (var_13)));
    /* LoopSeq 2 */
    for (long long int i_0 = 2; i_0 < 20; i_0 += 3) 
    {
        arr_3 [i_0] = ((((/* implicit */int) arr_0 [i_0 - 2])) + (((/* implicit */int) var_17)));
        var_19 = ((/* implicit */unsigned char) min((((((/* implicit */unsigned long long int) (+(((/* implicit */int) var_10))))) / (((((/* implicit */_Bool) -1393089457)) ? (13741895072690832282ULL) : (4704849001018719333ULL))))), (((/* implicit */unsigned long long int) ((int) (!(((/* implicit */_Bool) var_14))))))));
    }
    /* vectorizable */
    for (unsigned int i_1 = 1; i_1 < 22; i_1 += 1) 
    {
        var_20 = (+(4704849001018719333ULL));
        var_21 ^= ((/* implicit */int) ((((((/* implicit */_Bool) var_15)) ? (((/* implicit */unsigned int) -1294102718)) : (781833442U))) + (var_3)));
        var_22 = ((/* implicit */unsigned short) max((var_22), (((/* implicit */unsigned short) (!(((var_13) < (((/* implicit */int) arr_5 [i_1 - 1])))))))));
        var_23 = ((((/* implicit */_Bool) arr_4 [i_1 + 3])) ? (((/* implicit */int) arr_4 [i_1 + 2])) : (((/* implicit */int) arr_4 [i_1 + 3])));
    }
}
