/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 39410
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=39410 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/39410
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
    var_18 = ((/* implicit */unsigned char) min((var_6), (var_6)));
    var_19 = ((/* implicit */signed char) (-((~(((/* implicit */int) (!(((/* implicit */_Bool) var_2)))))))));
    /* LoopSeq 2 */
    for (unsigned int i_0 = 1; i_0 < 23; i_0 += 2) /* same iter space */
    {
        var_20 ^= ((/* implicit */unsigned char) var_2);
        var_21 ^= ((/* implicit */unsigned char) var_17);
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 2) /* same iter space */
    {
        arr_7 [i_1] = ((/* implicit */unsigned long long int) (((!((!(((/* implicit */_Bool) (unsigned short)56694)))))) ? ((-(((/* implicit */int) min(((unsigned short)8842), (((/* implicit */unsigned short) (unsigned char)39))))))) : (((/* implicit */int) (!((!(((/* implicit */_Bool) arr_0 [i_1])))))))));
        arr_8 [i_1] [i_1] &= ((/* implicit */unsigned long long int) ((long long int) 2305843009213693952ULL));
        var_22 = ((/* implicit */unsigned short) (!(((/* implicit */_Bool) ((unsigned long long int) ((unsigned int) (unsigned short)56694))))));
        var_23 ^= ((/* implicit */long long int) (+((-(((/* implicit */int) (!(((/* implicit */_Bool) arr_5 [i_1] [i_1])))))))));
    }
}
