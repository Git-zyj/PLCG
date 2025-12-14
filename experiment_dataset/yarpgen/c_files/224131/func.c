/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 224131
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=224131 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/224131
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
    /* LoopNest 3 */
    for (unsigned short i_0 = 0; i_0 < 19; i_0 += 3) 
    {
        for (unsigned long long int i_1 = 0; i_1 < 19; i_1 += 3) 
        {
            for (unsigned long long int i_2 = 0; i_2 < 19; i_2 += 4) 
            {
                {
                    arr_9 [7LL] [i_1] [i_0] = ((/* implicit */unsigned char) var_2);
                    var_13 = ((/* implicit */int) min((((/* implicit */unsigned int) (short)-1992)), (((((/* implicit */unsigned int) max((((/* implicit */int) var_11)), (-1400849527)))) % ((~(arr_5 [i_0] [i_0])))))));
                    var_14 = ((/* implicit */long long int) ((((/* implicit */_Bool) ((unsigned long long int) (+(var_1))))) ? (max((((/* implicit */int) var_8)), (((((/* implicit */_Bool) var_1)) ? (var_12) : (var_12))))) : (((/* implicit */int) ((((/* implicit */int) var_11)) != (((/* implicit */int) (unsigned short)17)))))));
                    arr_10 [i_2] = ((/* implicit */signed char) ((((((/* implicit */_Bool) arr_1 [i_0])) ? (arr_1 [i_0]) : (arr_1 [i_0]))) / ((-((+(((/* implicit */int) var_3))))))));
                }
            } 
        } 
    } 
    var_15 = ((/* implicit */unsigned long long int) min((((/* implicit */long long int) ((((((/* implicit */_Bool) (signed char)123)) ? (((/* implicit */long long int) var_9)) : (var_7))) == (((/* implicit */long long int) (+(2147483647))))))), (((((((/* implicit */_Bool) 7527666520744414819ULL)) ? (var_1) : (var_1))) - (((/* implicit */long long int) ((unsigned int) var_7)))))));
    var_16 = ((/* implicit */signed char) var_4);
    var_17 += ((((((/* implicit */_Bool) min((var_6), (((/* implicit */unsigned int) var_5))))) ? (((/* implicit */int) ((short) 144080003703767040LL))) : ((-(((/* implicit */int) (unsigned short)65519)))))) * (((/* implicit */int) var_11)));
}
