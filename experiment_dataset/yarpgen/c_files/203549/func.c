/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 203549
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=203549 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/203549
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
    var_16 ^= ((/* implicit */signed char) ((unsigned short) var_14));
    /* LoopSeq 2 */
    /* vectorizable */
    for (signed char i_0 = 2; i_0 < 17; i_0 += 3) 
    {
        arr_4 [i_0] = arr_0 [i_0] [i_0];
        var_17 = ((/* implicit */int) ((unsigned short) 3708919151U));
    }
    for (long long int i_1 = 2; i_1 < 7; i_1 += 3) 
    {
        arr_8 [i_1] = ((/* implicit */short) arr_1 [i_1 + 2]);
        var_18 = ((/* implicit */unsigned char) max((var_18), (((/* implicit */unsigned char) ((586048143U) << (((arr_1 [(_Bool)1]) - (1811873847U))))))));
        arr_9 [(signed char)4] |= ((/* implicit */unsigned short) arr_1 [(signed char)11]);
        arr_10 [i_1] [i_1] = ((/* implicit */unsigned long long int) arr_2 [i_1] [i_1 + 2]);
    }
    var_19 ^= ((/* implicit */signed char) var_13);
    var_20 = ((/* implicit */unsigned short) (((~((+(((/* implicit */int) var_2)))))) != (max((((((/* implicit */_Bool) -1091157402)) ? (((/* implicit */int) var_8)) : (((/* implicit */int) (_Bool)0)))), (((/* implicit */int) var_1))))));
    var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) ((unsigned long long int) (!(((/* implicit */_Bool) ((((/* implicit */int) (_Bool)1)) >> (((7133629590915318799LL) - (7133629590915318777LL))))))))))));
}
