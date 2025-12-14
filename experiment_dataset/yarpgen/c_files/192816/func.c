/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 192816
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=192816 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/192816
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
    var_10 &= ((/* implicit */int) (signed char)15);
    /* LoopSeq 2 */
    for (unsigned short i_0 = 3; i_0 < 15; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = ((/* implicit */signed char) arr_0 [i_0]);
        var_11 = ((/* implicit */int) max((arr_1 [i_0]), ((~(arr_1 [i_0])))));
        var_12 = ((/* implicit */long long int) (signed char)-1);
        var_13 = ((/* implicit */_Bool) ((var_7) ? (((/* implicit */unsigned long long int) var_3)) : (((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_1 [i_0])) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (signed char)(-127 - 1)))))) ? (((/* implicit */unsigned long long int) var_1)) : (arr_1 [i_0])))));
    }
    for (signed char i_1 = 0; i_1 < 11; i_1 += 2) 
    {
        arr_5 [i_1] [i_1] &= ((/* implicit */unsigned short) (+(0LL)));
        var_14 = ((/* implicit */_Bool) min((var_14), (((/* implicit */_Bool) max(((-(((/* implicit */int) var_0)))), (((/* implicit */int) (((_Bool)1) && (((/* implicit */_Bool) (signed char)-7))))))))));
        arr_6 [i_1] &= ((/* implicit */int) (-(min((((/* implicit */long long int) 3089616052U)), (arr_4 [i_1] [i_1])))));
        arr_7 [(_Bool)1] &= ((/* implicit */long long int) (!(((/* implicit */_Bool) (-(((/* implicit */int) ((unsigned short) 2147483647))))))));
        var_15 = ((/* implicit */int) max((var_15), (((/* implicit */int) (!(((max((arr_3 [i_1] [8LL]), (arr_4 [(signed char)0] [(signed char)0]))) < (((/* implicit */long long int) ((/* implicit */int) var_2))))))))));
    }
    var_16 = ((/* implicit */unsigned short) var_3);
}
