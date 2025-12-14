/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 243607
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=243607 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/243607
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
    var_16 = ((/* implicit */unsigned long long int) var_14);
    /* LoopSeq 3 */
    /* vectorizable */
    for (long long int i_0 = 0; i_0 < 12; i_0 += 2) /* same iter space */
    {
        var_17 = (+(((/* implicit */int) (unsigned short)61824)));
        var_18 = ((/* implicit */long long int) (~(((/* implicit */int) var_13))));
        var_19 -= ((/* implicit */long long int) (short)30002);
    }
    for (long long int i_1 = 0; i_1 < 12; i_1 += 2) /* same iter space */
    {
        arr_4 [i_1] = ((/* implicit */signed char) min((((((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)58384)) ? (((/* implicit */int) (unsigned short)3711)) : (((/* implicit */int) (unsigned short)61821))))) ? ((+(arr_0 [i_1]))) : (((/* implicit */int) max(((unsigned short)3712), (((/* implicit */unsigned short) (short)13165))))))), (((/* implicit */int) ((((/* implicit */_Bool) max((3939394830969815514LL), (((/* implicit */long long int) (unsigned short)61839))))) && (((/* implicit */_Bool) ((((/* implicit */int) (signed char)127)) / (791042335)))))))));
        var_20 = (unsigned short)61812;
        var_21 = ((/* implicit */_Bool) min((var_21), (((/* implicit */_Bool) max((((/* implicit */long long int) -1741566582)), (max((((/* implicit */long long int) (~(((/* implicit */int) (short)0))))), (arr_2 [i_1] [i_1]))))))));
    }
    for (long long int i_2 = 0; i_2 < 12; i_2 += 2) /* same iter space */
    {
        var_22 = ((/* implicit */signed char) max((var_22), (((/* implicit */signed char) 2147483647))));
        var_23 = ((((/* implicit */int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned short) arr_6 [i_2])), ((unsigned short)26639))))))) - (min((max((-2089039088), (-631569513))), (((/* implicit */int) min((((/* implicit */signed char) (_Bool)1)), (arr_1 [i_2])))))));
        var_24 = ((/* implicit */_Bool) (unsigned short)65535);
    }
}
