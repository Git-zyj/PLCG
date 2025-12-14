/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 248771
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=248771 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/248771
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
    var_11 = max((((/* implicit */unsigned long long int) (_Bool)1)), (var_9));
    var_12 = min((((/* implicit */unsigned long long int) var_10)), (var_9));
    var_13 -= min(((((!((_Bool)1))) ? (((/* implicit */long long int) min((-1675030740), (((/* implicit */int) var_4))))) : (((((/* implicit */_Bool) var_0)) ? (var_7) : (((/* implicit */long long int) ((/* implicit */int) (unsigned short)65535))))))), (var_1));
    var_14 = ((/* implicit */unsigned int) ((2147483647) << (((((/* implicit */int) var_6)) - (199)))));
    /* LoopSeq 3 */
    for (long long int i_0 = 0; i_0 < 15; i_0 += 1) /* same iter space */
    {
        var_15 = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_2 [i_0] [6] = ((((/* implicit */_Bool) min((((/* implicit */unsigned short) var_6)), (arr_0 [i_0] [i_0])))) ? ((+(15663910610718939814ULL))) : (((/* implicit */unsigned long long int) (+(-2147483647)))));
    }
    for (long long int i_1 = 0; i_1 < 15; i_1 += 1) /* same iter space */
    {
        arr_5 [i_1] = ((/* implicit */unsigned short) arr_3 [i_1] [i_1]);
        arr_6 [i_1] = ((/* implicit */short) (~(((/* implicit */int) arr_0 [i_1] [1ULL]))));
        var_16 = ((/* implicit */_Bool) (~(arr_4 [i_1] [i_1])));
        var_17 ^= ((/* implicit */unsigned short) ((((/* implicit */_Bool) ((((/* implicit */_Bool) (-2147483647 - 1))) ? (((/* implicit */int) (unsigned short)30393)) : (1675030740)))) ? (((/* implicit */unsigned int) (+(((((/* implicit */_Bool) arr_0 [i_1] [i_1])) ? (((/* implicit */int) (short)-26995)) : (((/* implicit */int) (short)-3970))))))) : ((+(arr_4 [i_1] [i_1])))));
    }
    for (unsigned short i_2 = 1; i_2 < 9; i_2 += 1) 
    {
        var_18 = ((/* implicit */int) (short)12796);
        var_19 = ((/* implicit */signed char) ((((/* implicit */unsigned int) ((/* implicit */int) arr_10 [i_2 + 1] [i_2 - 1]))) > (max((((/* implicit */unsigned int) (unsigned short)2048)), (arr_4 [8ULL] [i_2 - 1])))));
    }
}
