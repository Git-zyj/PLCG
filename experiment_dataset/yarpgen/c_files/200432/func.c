/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 200432
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=200432 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/200432
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
    for (unsigned int i_0 = 0; i_0 < 11; i_0 += 4) 
    {
        var_15 = min((((/* implicit */int) arr_2 [(unsigned short)6] [i_0])), (max((min((((/* implicit */int) (_Bool)0)), (arr_1 [i_0] [i_0]))), (((/* implicit */int) (signed char)-126)))));
        var_16 = ((/* implicit */signed char) min((min((arr_1 [i_0] [i_0]), (max((((/* implicit */int) arr_2 [i_0] [9LL])), (arr_1 [i_0] [i_0]))))), (((/* implicit */int) arr_0 [i_0]))));
        var_17 = ((/* implicit */unsigned int) min((((/* implicit */unsigned long long int) arr_0 [i_0])), (min((14498157463450938580ULL), (((/* implicit */unsigned long long int) arr_2 [1] [i_0]))))));
    }
    /* vectorizable */
    for (short i_1 = 1; i_1 < 18; i_1 += 4) 
    {
        var_18 = ((/* implicit */short) (_Bool)0);
        var_19 -= ((/* implicit */long long int) 255);
        var_20 ^= ((/* implicit */unsigned int) (signed char)-25);
    }
    var_21 = ((/* implicit */unsigned long long int) max((((/* implicit */int) (_Bool)0)), (var_14)));
    var_22 = ((/* implicit */int) min((var_22), (min((255), (min((-448681404), (((/* implicit */int) (short)-12051))))))));
}
