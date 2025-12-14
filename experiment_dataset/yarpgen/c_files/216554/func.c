/*
yarpgen version 2.0 (build e0f63b6 on 2025:11:04)
Seed: 216554
Invocation: /data/zyj/loop_generator/./baselines/mytest/../yarpgen/scripts/yarpgen --std=c --emit-align-attr=none --inp-as-args=none --emit-pragmas=none --expl-loop-param=true --seed=216554 -o /data2/zyj/Dataset_ISPASS/yarpgen/c_files/216554
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
    var_17 |= ((/* implicit */unsigned short) ((short) var_15));
    var_18 |= ((/* implicit */unsigned long long int) var_5);
    var_19 |= ((/* implicit */signed char) ((unsigned short) ((_Bool) var_0)));
    /* LoopSeq 2 */
    for (int i_0 = 1; i_0 < 19; i_0 += 2) 
    {
        arr_4 [i_0 + 1] |= ((/* implicit */_Bool) ((((/* implicit */_Bool) (unsigned short)48503)) ? (((/* implicit */int) ((unsigned short) (short)-32748))) : (((((/* implicit */int) (unsigned short)51982)) ^ (((/* implicit */int) (short)32752))))));
        arr_5 [i_0] = ((/* implicit */short) arr_0 [i_0] [i_0]);
        arr_6 [i_0] [i_0 - 1] = ((/* implicit */unsigned char) (~(arr_1 [i_0 + 4])));
        arr_7 [i_0] [i_0] = (~((~(arr_3 [i_0 + 1]))));
    }
    for (long long int i_1 = 1; i_1 < 11; i_1 += 2) 
    {
        arr_11 [i_1] = ((/* implicit */unsigned long long int) (short)32747);
        arr_12 [i_1] [i_1] = ((/* implicit */int) (!(((/* implicit */_Bool) min((arr_8 [i_1]), (arr_8 [i_1]))))));
        arr_13 [i_1] = ((/* implicit */long long int) ((((/* implicit */_Bool) (unsigned short)7932)) ? (((/* implicit */int) (short)-20135)) : (((/* implicit */int) (unsigned char)255))));
        arr_14 [i_1] [i_1] = ((/* implicit */unsigned char) ((((/* implicit */_Bool) arr_1 [i_1 - 1])) ? (((((/* implicit */long long int) ((/* implicit */int) ((short) (signed char)127)))) % (((((/* implicit */_Bool) arr_9 [i_1] [i_1])) ? (((/* implicit */long long int) ((/* implicit */int) arr_10 [i_1]))) : (4386403292057729130LL))))) : (((/* implicit */long long int) arr_2 [i_1] [i_1]))));
    }
}
