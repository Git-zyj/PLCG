/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 237024
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=237024 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/237024
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
    for (unsigned long long int i_0 = 0; i_0 < 13; i_0 += 4) 
    {
        arr_2 [i_0] [i_0] = (~(arr_0 [i_0]));
        /* LoopSeq 1 */
        for (_Bool i_1 = 0; i_1 < 1; i_1 += 1) 
        {
            arr_6 [i_1] [i_0] [i_1] = ((/* implicit */_Bool) arr_3 [i_1] [i_1]);
            arr_7 [i_0] [i_1] = ((/* implicit */long long int) ((short) (~(arr_0 [i_1]))));
            arr_8 [i_1] [i_1] = ((/* implicit */short) max(((~(((/* implicit */int) (signed char)-111)))), (((((/* implicit */_Bool) ((((/* implicit */unsigned long long int) ((/* implicit */int) (signed char)-77))) % (14045779756670286533ULL)))) ? (((/* implicit */int) ((signed char) (signed char)-111))) : ((-(((/* implicit */int) (_Bool)1))))))));
            arr_9 [i_1] [i_1] [i_1] = ((/* implicit */unsigned int) (((~(((unsigned long long int) arr_5 [i_1])))) | (((/* implicit */unsigned long long int) (~(((/* implicit */int) (signed char)13)))))));
        }
    }
    for (unsigned short i_2 = 1; i_2 < 21; i_2 += 4) 
    {
        arr_12 [i_2] [i_2 + 1] = (i_2 % 2 == zero) ? (((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_11 [i_2]))), (((((/* implicit */_Bool) ((((arr_11 [i_2]) + (2147483647))) << (((4294967295U) - (4294967295U)))))) ? (((/* implicit */int) (short)-11231)) : (arr_11 [i_2])))))) : (((/* implicit */unsigned char) min((((/* implicit */int) ((signed char) arr_11 [i_2]))), (((((/* implicit */_Bool) ((((((arr_11 [i_2]) - (2147483647))) + (2147483647))) << (((4294967295U) - (4294967295U)))))) ? (((/* implicit */int) (short)-11231)) : (arr_11 [i_2]))))));
        var_11 = ((/* implicit */unsigned int) max(((-(((/* implicit */int) (unsigned char)31)))), ((-((+(((/* implicit */int) (unsigned char)31))))))));
        arr_13 [i_2] = ((/* implicit */long long int) ((((arr_11 [i_2]) & (((/* implicit */int) ((unsigned char) 18446744073709551603ULL))))) % (((/* implicit */int) arr_10 [i_2 - 1]))));
    }
    var_12 = ((/* implicit */unsigned short) (+((+(((((/* implicit */_Bool) var_3)) ? (2458135577U) : (((/* implicit */unsigned int) ((/* implicit */int) var_10)))))))));
    var_13 = ((/* implicit */_Bool) var_0);
}
