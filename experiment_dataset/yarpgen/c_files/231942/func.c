/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231942
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231942 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231942
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
    var_16 = ((/* implicit */unsigned char) 4611686018427387903ULL);
    var_17 = ((/* implicit */int) (+(var_14)));
    var_18 = ((/* implicit */short) max((((var_4) & (((/* implicit */unsigned long long int) var_5)))), (((/* implicit */unsigned long long int) 513567195))));
    /* LoopSeq 1 */
    for (unsigned long long int i_0 = 0; i_0 < 21; i_0 += 3) 
    {
        var_19 = ((/* implicit */unsigned short) ((unsigned long long int) min((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_0]))))), ((+(var_1))))));
        arr_3 [i_0] [i_0] = max((((/* implicit */unsigned long long int) ((min((((/* implicit */unsigned long long int) arr_2 [(unsigned short)17] [i_0])), (11639137514170457022ULL))) < (((unsigned long long int) var_13))))), (((((/* implicit */_Bool) 13835058055282163683ULL)) ? (((var_13) ^ (5813247023337341605ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_2 [i_0] [i_0]))))));
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(-7002358702142743657LL)));
    }
    var_20 |= ((/* implicit */long long int) (-2147483647 - 1));
}
