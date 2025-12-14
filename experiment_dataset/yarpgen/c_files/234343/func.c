/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 234343
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=234343 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/234343
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
    var_15 = ((/* implicit */long long int) var_7);
    /* LoopSeq 3 */
    /* vectorizable */
    for (int i_0 = 0; i_0 < 24; i_0 += 2) /* same iter space */
    {
        var_16 = ((/* implicit */int) arr_3 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) (!(((/* implicit */_Bool) var_11)))))));
        arr_5 [i_0] [i_0] = ((/* implicit */_Bool) (+(var_2)));
        var_17 = ((/* implicit */short) arr_3 [i_0]);
    }
    for (int i_1 = 0; i_1 < 24; i_1 += 2) /* same iter space */
    {
        var_18 = ((/* implicit */signed char) (((~(arr_7 [i_1] [i_1]))) | (((/* implicit */unsigned long long int) arr_0 [i_1] [i_1]))));
        var_19 = ((/* implicit */long long int) min((var_19), (((/* implicit */long long int) (!(((/* implicit */_Bool) arr_3 [i_1])))))));
        var_20 += ((/* implicit */signed char) arr_2 [i_1] [i_1]);
    }
    for (int i_2 = 0; i_2 < 24; i_2 += 2) /* same iter space */
    {
        arr_10 [i_2] [i_2] = ((signed char) max((min((arr_0 [(signed char)0] [i_2]), (((/* implicit */unsigned int) -1361236813)))), (((/* implicit */unsigned int) ((((/* implicit */_Bool) 552868154)) ? (552868164) : (((/* implicit */int) (signed char)-72)))))));
        arr_11 [i_2] [i_2] = ((/* implicit */long long int) max(((+(2096583408U))), (((/* implicit */unsigned int) 552868147))));
    }
}
