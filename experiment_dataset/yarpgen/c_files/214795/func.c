/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 214795
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=214795 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/214795
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
    /* LoopSeq 2 */
    for (unsigned long long int i_0 = 0; i_0 < 19; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned long long int) (~(((/* implicit */int) ((((/* implicit */int) arr_0 [i_0])) <= (((/* implicit */int) arr_0 [i_0])))))));
        arr_3 [i_0] &= ((/* implicit */unsigned char) max(((((~(((/* implicit */int) var_5)))) * (((/* implicit */int) ((_Bool) arr_0 [i_0]))))), (((((/* implicit */_Bool) arr_0 [i_0])) ? ((-(((/* implicit */int) arr_1 [(unsigned char)15])))) : (((/* implicit */int) max((arr_1 [i_0]), (arr_1 [i_0]))))))));
        arr_4 [i_0] &= arr_0 [i_0];
        arr_5 [i_0] = ((/* implicit */unsigned char) (unsigned short)32920);
        arr_6 [9] &= ((/* implicit */_Bool) ((unsigned long long int) ((unsigned char) arr_0 [i_0])));
    }
    for (unsigned long long int i_1 = 3; i_1 < 12; i_1 += 4) 
    {
        var_13 &= ((/* implicit */unsigned long long int) var_0);
        var_14 = ((/* implicit */unsigned char) max(((-((-(((/* implicit */int) arr_0 [i_1])))))), ((~(((/* implicit */int) arr_0 [i_1]))))));
        var_15 = ((/* implicit */signed char) ((int) (unsigned short)32920));
        var_16 &= ((/* implicit */int) arr_0 [18ULL]);
    }
    var_17 = ((/* implicit */int) var_12);
    var_18 -= ((/* implicit */unsigned char) var_5);
}
