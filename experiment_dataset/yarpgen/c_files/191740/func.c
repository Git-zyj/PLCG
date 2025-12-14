/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 191740
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=191740 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/191740
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
    var_16 |= ((/* implicit */int) ((unsigned short) (~(((/* implicit */int) ((unsigned char) var_9))))));
    /* LoopSeq 3 */
    for (unsigned short i_0 = 0; i_0 < 13; i_0 += 2) 
    {
        arr_2 [i_0] = ((/* implicit */long long int) (+((-(((/* implicit */int) (short)-29828))))));
        var_17 += (((_Bool)1) && (((((/* implicit */_Bool) (+(((/* implicit */int) (signed char)103))))) && (((/* implicit */_Bool) (short)29828)))));
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_10);
    }
    for (long long int i_1 = 1; i_1 < 14; i_1 += 3) /* same iter space */
    {
        var_18 |= (!(((/* implicit */_Bool) (signed char)91)));
        var_19 = ((/* implicit */signed char) max(((-(((((/* implicit */_Bool) arr_7 [i_1 + 1])) ? (arr_4 [i_1]) : (arr_4 [i_1]))))), (((/* implicit */unsigned long long int) max((((/* implicit */short) ((unsigned char) arr_7 [i_1]))), (min(((short)-29828), (var_8))))))));
        var_20 += ((/* implicit */_Bool) arr_7 [i_1 - 1]);
    }
    for (long long int i_2 = 1; i_2 < 14; i_2 += 3) /* same iter space */
    {
        arr_10 [i_2] = ((/* implicit */unsigned char) var_13);
        var_21 = ((/* implicit */unsigned char) min((var_21), (((/* implicit */unsigned char) var_5))));
        arr_11 [i_2] = ((/* implicit */unsigned short) var_3);
        arr_12 [i_2] [i_2] = ((/* implicit */int) arr_9 [i_2]);
        arr_13 [i_2] = ((/* implicit */unsigned int) (signed char)66);
    }
    var_22 = ((/* implicit */long long int) (((~(((/* implicit */int) max((((/* implicit */unsigned short) var_9)), (var_0)))))) ^ (((/* implicit */int) (signed char)92))));
}
