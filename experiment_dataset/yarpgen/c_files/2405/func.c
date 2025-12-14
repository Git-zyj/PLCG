/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 2405
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=2405 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/2405
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
    var_14 -= ((/* implicit */int) var_4);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 1; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_15 -= (!(((/* implicit */_Bool) arr_1 [i_0 + 3])));
        var_16 = ((/* implicit */_Bool) ((unsigned short) ((((/* implicit */unsigned long long int) 2147483647)) | (var_7))));
    }
    for (int i_1 = 1; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_4 [(_Bool)1] = ((/* implicit */_Bool) max((((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_0 [i_1 + 3] [i_1 - 1]))))), (arr_1 [i_1 + 4])));
        arr_5 [i_1] = ((unsigned long long int) (short)3110);
        var_17 = ((/* implicit */short) min((var_17), (((/* implicit */short) (~(10841123863753320868ULL))))));
    }
    /* vectorizable */
    for (short i_2 = 2; i_2 < 15; i_2 += 1) 
    {
        var_18 = ((/* implicit */_Bool) (+(((/* implicit */int) var_12))));
        arr_10 [i_2] [i_2] = ((/* implicit */unsigned long long int) -1984369601);
        var_19 = ((/* implicit */int) ((unsigned long long int) (_Bool)0));
    }
    var_20 = ((/* implicit */unsigned long long int) max((var_20), (((/* implicit */unsigned long long int) var_0))));
}
