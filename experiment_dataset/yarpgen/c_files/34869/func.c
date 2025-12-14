/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 34869
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=34869 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/34869
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
    var_18 = ((/* implicit */unsigned int) max(((_Bool)1), ((!(((/* implicit */_Bool) var_0))))));
    var_19 += ((/* implicit */signed char) max((min((max((10839981543353479648ULL), (18446744073709551615ULL))), (((((/* implicit */_Bool) 11899792061582925021ULL)) ? (((/* implicit */unsigned long long int) 6213362553000635892LL)) : (18446744073709551610ULL))))), (((/* implicit */unsigned long long int) ((((/* implicit */long long int) ((/* implicit */int) ((((/* implicit */_Bool) var_1)) && (((/* implicit */_Bool) var_6)))))) > (((((/* implicit */long long int) ((/* implicit */int) var_9))) / (var_5))))))));
    /* LoopNest 2 */
    for (unsigned short i_0 = 1; i_0 < 15; i_0 += 1) 
    {
        for (int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            {
                arr_5 [i_0] [i_1] [i_0] = ((/* implicit */unsigned short) max((arr_0 [i_1] [i_1]), (((/* implicit */unsigned long long int) ((((/* implicit */_Bool) arr_3 [i_0] [i_0 - 1] [i_0 + 4])) ? (4294967295U) : (((/* implicit */unsigned int) ((/* implicit */int) var_8))))))));
                arr_6 [(_Bool)1] [i_1] [i_1] = ((/* implicit */_Bool) (-(6213362553000635892LL)));
                var_20 = ((/* implicit */unsigned int) (((!(((/* implicit */_Bool) 4294967295U)))) ? (min((((/* implicit */unsigned long long int) (_Bool)1)), (5936834174696841802ULL))) : (((/* implicit */unsigned long long int) ((/* implicit */int) ((((int) 4294967290U)) < (((/* implicit */int) (!(((/* implicit */_Bool) arr_3 [(signed char)13] [i_1] [i_1])))))))))));
            }
        } 
    } 
    var_21 = ((/* implicit */_Bool) ((min(((~(var_14))), (((/* implicit */unsigned int) var_8)))) ^ (((/* implicit */unsigned int) min((-644302934), (((((/* implicit */_Bool) var_3)) ? (((/* implicit */int) var_1)) : (((/* implicit */int) var_10)))))))));
}
