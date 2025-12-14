/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 231894
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=231894 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/231894
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
    var_19 = (+(var_15));
    /* LoopSeq 2 */
    for (long long int i_0 = 0; i_0 < 14; i_0 += 3) 
    {
        arr_2 [i_0] = ((/* implicit */signed char) -7882320771147335138LL);
        var_20 -= ((/* implicit */long long int) (-(((/* implicit */int) var_18))));
        var_21 = ((/* implicit */signed char) ((((/* implicit */long long int) ((/* implicit */int) (((_Bool)0) || (((/* implicit */_Bool) 8ULL)))))) >= (max((var_15), (((/* implicit */long long int) arr_1 [i_0]))))));
        arr_3 [i_0] = ((min((((/* implicit */unsigned long long int) -2426443833995986879LL)), (18446744073709551604ULL))) << (((min((((long long int) (signed char)-99)), (arr_0 [i_0]))) + (7328886445079886472LL))));
    }
    /* vectorizable */
    for (_Bool i_1 = 1; i_1 < 1; i_1 += 1) 
    {
        arr_7 [i_1] [(_Bool)0] = ((/* implicit */_Bool) (+(((/* implicit */int) var_0))));
        arr_8 [i_1] = ((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) || (((/* implicit */_Bool) var_3))));
        arr_9 [i_1 - 1] [i_1] = ((/* implicit */unsigned long long int) (+(((/* implicit */int) arr_6 [i_1 - 1] [(_Bool)1]))));
        var_22 -= ((/* implicit */_Bool) (-(7328452047307284921ULL)));
    }
}
