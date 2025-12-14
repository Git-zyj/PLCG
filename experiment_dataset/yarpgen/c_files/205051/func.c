/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 205051
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=205051 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/205051
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
    var_14 = ((/* implicit */_Bool) var_10);
    /* LoopSeq 4 */
    for (short i_0 = 0; i_0 < 13; i_0 += 2) /* same iter space */
    {
        var_15 -= ((/* implicit */unsigned long long int) arr_0 [(unsigned char)10]);
        arr_3 [i_0] = ((/* implicit */short) ((((/* implicit */_Bool) max((((/* implicit */long long int) ((((/* implicit */_Bool) var_13)) ? (arr_0 [i_0]) : (((/* implicit */int) var_11))))), (max((arr_1 [i_0] [i_0]), (((/* implicit */long long int) -2147483628))))))) ? (((((/* implicit */_Bool) (-(2147483627)))) ? (((/* implicit */long long int) arr_2 [12])) : (arr_1 [i_0] [i_0]))) : (((/* implicit */long long int) (-(((((/* implicit */int) (_Bool)1)) & (((/* implicit */int) var_1)))))))));
        var_16 += ((/* implicit */unsigned short) (+((~(arr_0 [i_0])))));
        var_17 = ((/* implicit */unsigned char) max((var_6), (((/* implicit */unsigned long long int) var_5))));
    }
    for (short i_1 = 0; i_1 < 13; i_1 += 2) /* same iter space */
    {
        var_18 ^= ((/* implicit */signed char) (-((-(((/* implicit */int) (_Bool)1))))));
        arr_6 [i_1] [i_1] = ((/* implicit */unsigned short) ((short) (-(((((/* implicit */_Bool) arr_2 [i_1])) ? (((/* implicit */unsigned int) ((/* implicit */int) var_7))) : (var_13))))));
    }
    for (short i_2 = 0; i_2 < 13; i_2 += 2) /* same iter space */
    {
        arr_9 [i_2] = ((/* implicit */unsigned long long int) var_2);
        var_19 = ((/* implicit */_Bool) arr_2 [i_2]);
    }
    for (unsigned long long int i_3 = 0; i_3 < 15; i_3 += 2) 
    {
        arr_12 [i_3] = ((/* implicit */_Bool) var_10);
        var_20 = ((/* implicit */long long int) (~(((int) 1608862156566569064ULL))));
        var_21 = ((/* implicit */unsigned short) ((((/* implicit */_Bool) (-(arr_10 [i_3] [(unsigned short)13])))) ? (((/* implicit */int) arr_11 [i_3])) : (((/* implicit */int) ((unsigned short) arr_11 [i_3])))));
    }
}
