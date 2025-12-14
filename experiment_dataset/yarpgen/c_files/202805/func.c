/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 202805
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=202805 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/202805
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
    var_18 += ((/* implicit */unsigned int) var_17);
    /* LoopSeq 2 */
    /* vectorizable */
    for (_Bool i_0 = 1; i_0 < 1; i_0 += 1) /* same iter space */
    {
        var_19 = ((/* implicit */int) ((arr_1 [i_0] [i_0 - 1]) / (arr_0 [i_0 - 1])));
        var_20 = ((unsigned short) (unsigned char)230);
        arr_2 [(_Bool)1] [i_0] = ((/* implicit */short) (~((~(((/* implicit */int) (_Bool)1))))));
        var_21 = (unsigned char)4;
    }
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) /* same iter space */
    {
        var_22 += ((/* implicit */long long int) (~(max((((/* implicit */int) arr_3 [i_1 - 1])), ((-(((/* implicit */int) var_7))))))));
        var_23 += ((/* implicit */signed char) ((((/* implicit */unsigned long long int) ((/* implicit */int) arr_4 [i_1] [5ULL]))) ^ (min((((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) arr_3 [i_1]))))), (((((/* implicit */unsigned long long int) var_14)) % (var_13)))))));
    }
}
