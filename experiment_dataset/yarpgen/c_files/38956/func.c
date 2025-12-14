/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 38956
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=38956 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/38956
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
    var_12 = ((/* implicit */_Bool) var_6);
    var_13 = ((/* implicit */unsigned long long int) var_5);
    var_14 |= ((/* implicit */unsigned long long int) var_2);
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 9; i_0 += 4) /* same iter space */
    {
        arr_3 [i_0] = ((/* implicit */_Bool) min((max((((/* implicit */unsigned long long int) (unsigned short)1)), (arr_0 [i_0 + 1]))), (((/* implicit */unsigned long long int) max((((/* implicit */unsigned int) (unsigned char)255)), (var_9))))));
        var_15 = ((/* implicit */int) min((min((((/* implicit */unsigned long long int) (signed char)0)), (arr_0 [i_0 - 1]))), (((/* implicit */unsigned long long int) max((arr_1 [i_0 + 1]), (arr_1 [i_0 - 1]))))));
        var_16 |= ((/* implicit */signed char) max((max((arr_2 [i_0 + 1]), (arr_2 [i_0 - 1]))), (((/* implicit */int) max((((/* implicit */unsigned short) (signed char)-74)), ((unsigned short)54616))))));
        var_17 -= ((/* implicit */signed char) max((max((((/* implicit */int) (_Bool)1)), (var_8))), (min((arr_2 [i_0 - 1]), (arr_2 [i_0 - 1])))));
    }
    for (int i_1 = 1; i_1 < 9; i_1 += 4) /* same iter space */
    {
        var_18 = ((/* implicit */int) max((var_18), (((/* implicit */int) max((((/* implicit */unsigned int) min((((/* implicit */signed char) arr_1 [i_1 - 1])), ((signed char)-1)))), (min((((/* implicit */unsigned int) var_10)), (var_9))))))));
        var_19 += ((/* implicit */unsigned long long int) max(((_Bool)1), ((_Bool)1)));
    }
    var_20 |= max((var_7), (max((((/* implicit */int) (_Bool)1)), (1318341402))));
}
