/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 35518
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=35518 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/35518
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
    /* LoopSeq 1 */
    for (long long int i_0 = 1; i_0 < 19; i_0 += 3) 
    {
        var_17 = (~((~(min((((/* implicit */long long int) arr_0 [i_0])), (var_2))))));
        /* LoopSeq 1 */
        for (int i_1 = 2; i_1 < 19; i_1 += 2) 
        {
            var_18 += ((/* implicit */unsigned char) ((int) var_15));
            var_19 = ((/* implicit */int) ((((/* implicit */_Bool) ((((/* implicit */long long int) ((/* implicit */int) arr_4 [i_0 + 1]))) * (9223372036854775783LL)))) && (((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (unsigned short)0))) + (19ULL))))));
        }
        var_20 = ((/* implicit */_Bool) ((((/* implicit */_Bool) max((((((/* implicit */_Bool) var_4)) ? (((/* implicit */int) arr_0 [i_0])) : (((/* implicit */int) (unsigned short)53445)))), (((/* implicit */int) ((((/* implicit */_Bool) var_11)) && (((/* implicit */_Bool) (short)-32758)))))))) ? (((/* implicit */unsigned long long int) ((/* implicit */int) min((arr_3 [i_0] [i_0] [8]), (((/* implicit */unsigned short) arr_4 [i_0])))))) : (((((((/* implicit */_Bool) 1336405375)) ? (17367303980722754146ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) var_3))))) * (((/* implicit */unsigned long long int) ((int) 9205357638345293824ULL)))))));
    }
    /* LoopSeq 1 */
    for (unsigned short i_2 = 0; i_2 < 11; i_2 += 2) 
    {
        var_21 = ((/* implicit */int) max((var_21), (((/* implicit */int) var_14))));
        var_22 = ((/* implicit */int) 9223372036854775806LL);
    }
    var_23 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) 1379353826U)) ? (((/* implicit */int) (unsigned short)53445)) : (984648774)))) ? (((/* implicit */long long int) var_1)) : (min((max((-1LL), (22LL))), (((/* implicit */long long int) (unsigned char)0))))));
}
