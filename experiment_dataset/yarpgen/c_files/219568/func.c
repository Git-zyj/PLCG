/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 219568
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=219568 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/219568
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
    var_19 = ((/* implicit */long long int) ((var_4) ? ((~(((/* implicit */int) (!(var_13)))))) : (((/* implicit */int) max((var_3), (((var_9) > (((/* implicit */unsigned int) ((/* implicit */int) var_5))))))))));
    /* LoopSeq 4 */
    for (long long int i_0 = 1; i_0 < 12; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0 + 1] &= arr_2 [i_0] [i_0];
        arr_4 [i_0 + 1] = ((/* implicit */_Bool) arr_0 [i_0]);
    }
    for (long long int i_1 = 1; i_1 < 12; i_1 += 4) /* same iter space */
    {
        var_20 = ((/* implicit */long long int) (-((+(((arr_2 [13LL] [i_1]) >> (((arr_0 [11LL]) - (6652049615456442574LL)))))))));
        var_21 = max((max((arr_0 [i_1]), (((/* implicit */long long int) arr_1 [i_1])))), (((/* implicit */long long int) ((unsigned int) -5866039699536232267LL))));
        var_22 = ((/* implicit */_Bool) (-((+(((/* implicit */int) (_Bool)0))))));
        var_23 = min((min((((/* implicit */long long int) (_Bool)0)), (arr_5 [i_1 + 1]))), (((/* implicit */long long int) max((arr_1 [i_1 + 1]), (arr_1 [i_1 + 2])))));
        var_24 = ((/* implicit */long long int) (~(arr_1 [i_1])));
    }
    for (_Bool i_2 = 0; i_2 < 1; i_2 += 1) 
    {
        var_25 *= ((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (_Bool)1)) : (((/* implicit */int) min(((_Bool)1), ((_Bool)1))))));
        var_26 = (+(max((((/* implicit */unsigned int) ((arr_7 [i_2] [i_2]) ? (((/* implicit */int) arr_7 [i_2] [i_2])) : (((/* implicit */int) arr_7 [i_2] [11LL]))))), (4025359069U))));
    }
    for (_Bool i_3 = 1; i_3 < 1; i_3 += 1) 
    {
        var_27 = ((/* implicit */long long int) (((+(((/* implicit */int) arr_10 [i_3 - 1])))) & (((/* implicit */int) min((arr_10 [i_3 - 1]), ((_Bool)1))))));
        arr_11 [21LL] [2U] = ((/* implicit */long long int) max((((((/* implicit */int) arr_9 [i_3 - 1] [i_3 - 1])) < (((/* implicit */int) arr_10 [i_3 - 1])))), (min((arr_10 [i_3 - 1]), (arr_10 [i_3 - 1])))));
        var_28 = ((/* implicit */unsigned int) max((var_28), (((/* implicit */unsigned int) ((_Bool) max((((/* implicit */long long int) ((10LL) == (((/* implicit */long long int) ((/* implicit */int) arr_9 [i_3 - 1] [i_3])))))), ((-(7417654512254947370LL)))))))));
    }
}
