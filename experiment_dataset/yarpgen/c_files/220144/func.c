/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 220144
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=220144 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/220144
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
    var_15 = ((/* implicit */int) min((max((((/* implicit */unsigned int) (_Bool)1)), ((+(var_9))))), (((/* implicit */unsigned int) var_14))));
    /* LoopSeq 4 */
    for (unsigned int i_0 = 1; i_0 < 14; i_0 += 3) 
    {
        arr_3 [i_0] = ((/* implicit */unsigned long long int) var_0);
        arr_4 [i_0] [i_0] = ((short) ((((/* implicit */_Bool) -1LL)) ? (((/* implicit */long long int) ((unsigned int) (_Bool)0))) : (arr_1 [i_0] [i_0])));
        var_16 = ((/* implicit */unsigned char) ((unsigned int) ((((/* implicit */_Bool) ((((/* implicit */_Bool) arr_0 [i_0] [i_0])) ? (arr_2 [i_0] [i_0]) : (arr_1 [i_0] [i_0])))) ? ((-(0LL))) : (((/* implicit */long long int) min((((/* implicit */int) (unsigned char)191)), (1937613958)))))));
    }
    for (unsigned int i_1 = 1; i_1 < 23; i_1 += 4) 
    {
        arr_8 [i_1] [i_1] = ((/* implicit */long long int) min((min((arr_5 [i_1 + 1] [i_1]), (arr_5 [i_1 - 1] [i_1]))), (min((arr_5 [i_1 - 1] [i_1]), (var_3)))));
        arr_9 [i_1] [i_1] = ((/* implicit */unsigned long long int) (_Bool)1);
    }
    for (unsigned char i_2 = 0; i_2 < 16; i_2 += 4) /* same iter space */
    {
        var_17 += ((/* implicit */_Bool) (signed char)-74);
        arr_13 [i_2] = (+(((((/* implicit */_Bool) (((_Bool)0) ? (((/* implicit */int) arr_6 [i_2] [i_2])) : (((/* implicit */int) arr_5 [i_2] [i_2]))))) ? (arr_1 [i_2] [i_2]) : (((/* implicit */long long int) ((((/* implicit */int) (_Bool)0)) & (((/* implicit */int) (_Bool)1))))))));
        var_18 = ((/* implicit */signed char) ((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */long long int) min((((((/* implicit */_Bool) arr_0 [i_2] [i_2])) ? (((/* implicit */int) var_4)) : (((/* implicit */int) var_10)))), ((~(((/* implicit */int) var_3))))))) : (min((arr_1 [i_2] [i_2]), (((/* implicit */long long int) (+(((/* implicit */int) var_6)))))))));
    }
    for (unsigned char i_3 = 0; i_3 < 16; i_3 += 4) /* same iter space */
    {
        arr_16 [i_3] [i_3] = ((/* implicit */signed char) 2147483647);
        arr_17 [i_3] = ((/* implicit */int) ((_Bool) min((((unsigned long long int) arr_11 [i_3] [i_3])), (((/* implicit */unsigned long long int) max(((signed char)-116), ((signed char)1)))))));
        arr_18 [i_3] = ((/* implicit */int) 1900077766U);
    }
}
