/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 213898
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=213898 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/213898
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
    var_16 = ((/* implicit */unsigned long long int) (~(((/* implicit */int) (unsigned char)144))));
    var_17 = ((/* implicit */_Bool) ((unsigned long long int) min((((var_1) ? (((/* implicit */int) var_1)) : (((/* implicit */int) (short)3189)))), (((((/* implicit */_Bool) (short)21801)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) (_Bool)0)))))));
    /* LoopSeq 1 */
    for (unsigned short i_0 = 2; i_0 < 15; i_0 += 3) 
    {
        var_18 = ((/* implicit */unsigned long long int) ((signed char) (+(min((((/* implicit */unsigned long long int) (unsigned short)27639)), (arr_1 [i_0]))))));
        arr_2 [i_0] = ((/* implicit */long long int) (!(((/* implicit */_Bool) min((((/* implicit */unsigned long long int) (+(arr_0 [i_0 - 1])))), (((((/* implicit */_Bool) var_12)) ? (arr_1 [i_0]) : (arr_1 [i_0]))))))));
    }
    var_19 -= ((/* implicit */unsigned char) var_6);
}
