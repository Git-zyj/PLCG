/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 233331
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=233331 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/233331
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
    var_10 = ((/* implicit */int) ((var_3) ? (((/* implicit */unsigned int) min((((/* implicit */int) (unsigned char)183)), (((((/* implicit */_Bool) var_9)) ? (((/* implicit */int) var_6)) : (((/* implicit */int) var_3))))))) : (var_4)));
    /* LoopSeq 1 */
    for (unsigned int i_0 = 0; i_0 < 23; i_0 += 1) 
    {
        var_11 = ((/* implicit */unsigned short) max((((/* implicit */int) (unsigned char)181)), (max((((((/* implicit */_Bool) arr_0 [5U] [i_0])) ? (((/* implicit */int) (unsigned char)179)) : (((/* implicit */int) var_5)))), (((/* implicit */int) var_7))))));
        arr_2 [i_0] [i_0] = ((/* implicit */unsigned short) ((unsigned char) ((((/* implicit */_Bool) ((((/* implicit */_Bool) var_8)) ? (arr_0 [i_0] [i_0]) : (((/* implicit */long long int) ((/* implicit */int) (unsigned char)175)))))) || (((/* implicit */_Bool) ((arr_0 [i_0] [i_0]) & (((/* implicit */long long int) arr_1 [(_Bool)1]))))))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) (!(((/* implicit */_Bool) var_1))));
    }
}
