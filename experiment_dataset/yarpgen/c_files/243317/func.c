/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243317
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243317 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243317
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
    for (unsigned long long int i_0 = 0; i_0 < 20; i_0 += 1) 
    {
        var_14 ^= ((/* implicit */_Bool) max((((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0]))) % (arr_1 [i_0]))), (max((((/* implicit */unsigned long long int) 63)), (arr_1 [(signed char)0])))));
        arr_3 [i_0] = ((/* implicit */short) max((((/* implicit */unsigned long long int) ((((unsigned int) (_Bool)0)) < (25161602U)))), (6816868761683947027ULL)));
        arr_4 [i_0] = ((/* implicit */int) max((((/* implicit */long long int) ((((/* implicit */int) ((((/* implicit */int) var_8)) >= (var_3)))) <= (((((/* implicit */int) var_5)) >> (((4269805716U) - (4269805697U)))))))), ((~(max((-1741649373506592424LL), (((/* implicit */long long int) var_3))))))));
    }
    for (short i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_7 [2U] [i_1] = ((/* implicit */unsigned long long int) min((((/* implicit */int) var_10)), ((((_Bool)1) ? (((/* implicit */int) (signed char)81)) : (((/* implicit */int) (unsigned char)3))))));
        arr_8 [i_1] = ((/* implicit */_Bool) (short)-392);
        var_15 = ((/* implicit */int) (((~(64U))) * (((/* implicit */unsigned int) ((((/* implicit */int) (unsigned short)55068)) ^ (((/* implicit */int) arr_5 [i_1])))))));
    }
    var_16 = ((/* implicit */int) ((((/* implicit */_Bool) var_12)) ? ((+(((((/* implicit */unsigned long long int) ((/* implicit */int) (short)16887))) ^ (4477663748383649200ULL))))) : (((/* implicit */unsigned long long int) var_11))));
    var_17 = ((/* implicit */int) var_8);
}
