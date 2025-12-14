/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 52947
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=52947 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/52947
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
    var_16 = ((/* implicit */unsigned char) (~(((/* implicit */int) max((((/* implicit */unsigned char) max((var_11), (var_4)))), (var_0))))));
    /* LoopSeq 3 */
    for (short i_0 = 1; i_0 < 21; i_0 += 4) 
    {
        arr_3 [i_0] = ((/* implicit */long long int) arr_2 [i_0]);
        arr_4 [i_0] = ((/* implicit */unsigned long long int) (-(((/* implicit */int) arr_1 [(short)6]))));
        arr_5 [i_0] [i_0] = ((/* implicit */unsigned short) (~(((/* implicit */int) ((18ULL) <= (((/* implicit */unsigned long long int) ((/* implicit */int) ((2043255899U) >= (((/* implicit */unsigned int) ((/* implicit */int) arr_1 [i_0]))))))))))));
    }
    for (signed char i_1 = 0; i_1 < 21; i_1 += 3) /* same iter space */
    {
        arr_9 [i_1] = ((/* implicit */short) ((((/* implicit */_Bool) max((arr_2 [i_1]), (var_1)))) || (((/* implicit */_Bool) 536870911LL))));
        arr_10 [i_1] = ((/* implicit */unsigned char) var_13);
        arr_11 [i_1] [i_1] = ((((-7464149882105734292LL) / (((/* implicit */long long int) ((/* implicit */int) arr_0 [i_1]))))) / (((/* implicit */long long int) ((((/* implicit */int) var_14)) * (((/* implicit */int) var_10))))));
    }
    for (signed char i_2 = 0; i_2 < 21; i_2 += 3) /* same iter space */
    {
        arr_16 [i_2] = ((/* implicit */_Bool) (~(((((/* implicit */_Bool) ((short) arr_2 [i_2]))) ? (max((((/* implicit */long long int) var_6)), (var_8))) : (((/* implicit */long long int) ((((/* implicit */_Bool) arr_12 [i_2] [i_2])) ? (((/* implicit */int) arr_7 [i_2])) : (((/* implicit */int) var_9)))))))));
        var_17 = ((/* implicit */_Bool) max((var_17), (((/* implicit */_Bool) ((((((/* implicit */_Bool) var_0)) ? (((((/* implicit */int) arr_13 [(unsigned char)14])) & (((/* implicit */int) (unsigned char)150)))) : (((/* implicit */int) var_9)))) ^ (((/* implicit */int) ((signed char) ((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_3)) : (((/* implicit */int) var_7)))))))))));
        arr_17 [i_2] = ((/* implicit */short) ((unsigned short) (+((-(((/* implicit */int) var_3)))))));
    }
    var_18 = ((/* implicit */signed char) var_9);
    var_19 = ((/* implicit */unsigned short) (((-(((/* implicit */int) (signed char)-1)))) | ((~(((/* implicit */int) ((((/* implicit */_Bool) var_13)) || (((/* implicit */_Bool) 18ULL)))))))));
}
