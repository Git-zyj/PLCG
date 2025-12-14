/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 23507
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=23507 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/23507
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
    for (unsigned char i_0 = 1; i_0 < 10; i_0 += 4) 
    {
        arr_2 [i_0 + 2] [i_0] = ((/* implicit */signed char) (+(((((/* implicit */_Bool) ((((/* implicit */int) (short)32757)) + (((/* implicit */int) arr_0 [i_0]))))) ? ((-(((/* implicit */int) var_3)))) : (((((/* implicit */_Bool) var_8)) ? (((/* implicit */int) var_7)) : (((/* implicit */int) var_6))))))));
        arr_3 [i_0 + 2] &= ((/* implicit */unsigned char) (+(((((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0 + 1]))) + (((((/* implicit */_Bool) (unsigned char)13)) ? (18446744073709551601ULL) : (((/* implicit */unsigned long long int) ((/* implicit */int) arr_0 [i_0])))))))));
        arr_4 [i_0] = ((/* implicit */unsigned short) ((((/* implicit */unsigned long long int) ((((/* implicit */_Bool) (unsigned char)221)) ? (((/* implicit */int) ((signed char) var_9))) : (((((/* implicit */int) var_3)) & (((/* implicit */int) (unsigned char)251))))))) ^ (((((/* implicit */_Bool) ((((/* implicit */_Bool) (signed char)115)) ? (((/* implicit */int) (unsigned char)248)) : (((/* implicit */int) (unsigned short)51371))))) ? (((unsigned long long int) (unsigned char)169)) : (16673748557502553666ULL)))));
    }
    for (signed char i_1 = 0; i_1 < 25; i_1 += 2) 
    {
        var_10 = ((/* implicit */unsigned char) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) (unsigned short)8632)) : (((/* implicit */int) (_Bool)1))))) ? (((((((/* implicit */_Bool) arr_5 [i_1] [i_1])) ? (((/* implicit */int) var_3)) : (((/* implicit */int) arr_7 [i_1])))) << (((/* implicit */int) (unsigned char)10)))) : (((/* implicit */int) ((((/* implicit */_Bool) (((_Bool)1) ? (((/* implicit */int) arr_7 [i_1])) : (((/* implicit */int) (_Bool)1))))) || (((/* implicit */_Bool) ((((/* implicit */int) var_7)) % (((/* implicit */int) arr_5 [i_1] [i_1]))))))))));
        var_11 |= ((/* implicit */unsigned long long int) (-(((((/* implicit */int) ((unsigned short) (_Bool)1))) + (-1555921261)))));
    }
    var_12 = ((/* implicit */unsigned long long int) (+(((/* implicit */int) var_3))));
}
